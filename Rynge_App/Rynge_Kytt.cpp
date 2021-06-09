
#include "Rynge_Kytt.h"



double y1(double y2, double y3)
{
	return 1 * y2 * y3;
}

double y2(double y1, double y3)
{
	return -1 * y1 * y3;
}

double y3(double y1, double y2)
{
	return -1 * 0.51 * y1 * y2;
}


OutputValues Ode45(double a, double b, double h, InitialVal init)
{
	OutputValues outY;

	double n = (b - a) / h;
	int size;
	size = (int)n;

	double* X = new double[size + 1];
	double* K11 = new double[size + 1], * K12 = new double[size + 1], * K13 = new double[size + 1];
	double* K21 = new double[size + 1], * K22 = new double[size + 1], * K23 = new double[size + 1];
	double* K31 = new double[size + 1], * K32 = new double[size + 1], * K33 = new double[size + 1];
	double* K41 = new double[size + 1], * K42 = new double[size + 1], * K43 = new double[size + 1];

	double* Y1 = new double[size + 1], * Y2 = new double[size + 1], * Y3 = new double[size + 1];

	X[0] = a;
	Y1[0] = init.y1; Y2[0] = init.y2; Y3[0] = init.y3;




	for (int i = 1; i <= size; i++) {

		X[i] = a + i * h;


		K11[i] = h * y1(Y2[i - 1], Y3[i - 1]);
		K12[i] = h * y2(Y1[i - 1], Y3[i - 1]);
		K13[i] = h * y3(Y1[i - 1], Y2[i - 1]);

		K21[i] = h * y1(Y2[i - 1] + h / 2.0, Y3[i - 1] + K11[i] / 2.0);
		K22[i] = h * y2(Y1[i - 1] + h / 2.0, Y3[i - 1] + K12[i] / 2.0);
		K23[i] = h * y3(Y1[i - 1] + h / 2.0, Y2[i - 1] + K13[i] / 2.0);




		K31[i] = h * y1(Y2[i - 1] + h / 2, Y3[i - 1] + K21[i] / 2);
		K32[i] = h * y2(Y1[i - 1] + h / 2, Y3[i - 1] + K22[i] / 2);
		K33[i] = h * y3(Y1[i - 1] + h / 2, Y2[i - 1] + K23[i] / 2);



		K41[i] = h * y1(Y2[i - 1] + h, Y3[i - 1] + K31[i]);
		K42[i] = h * y2(Y1[i - 1] + h, Y3[i - 1] + K32[i]);
		K43[i] = h * y3(Y1[i - 1] + h, Y2[i - 1] + K33[i]);



		Y1[i] = Y1[i - 1] + (K11[i] + 2 * K21[i] + 2 * K31[i] + K41[i]) / 6;
		Y2[i] = Y2[i - 1] + (K12[i] + 2 * K22[i] + 2 * K32[i] + K42[i]) / 6;
		Y3[i] = Y3[i - 1] + (K13[i] + 2 * K23[i] + 2 * K33[i] + K43[i]) / 6;


	}

	outY.Y1 = Y1;
	outY.Y2 = Y2;
	outY.Y3 = Y3;
	outY.X = X;
	outY.count = size;


	delete[]K11;
	delete[]K12;
	delete[]K13;

	delete[]K21;
	delete[]K22;
	delete[]K23;

	delete[]K31;
	delete[]K32;
	delete[]K33;

	delete[]K41;
	delete[]K42;
	delete[]K43;




	return outY;
}


void WriteFile(System::String^ filename, OutputValues outY)
{
	StreamWriter^ sw = gcnew StreamWriter(filename); //"OUT.csv"

	for (int i = 0; i < outY.count; i++)
	{

		sw->Write("{1};", i, outY.Y1[i]);
		sw->Write("{1};", i, outY.Y2[i]);
		sw->Write("{1};\n", i,outY.Y3[i]);


		
	}

sw->Close();
}


	 void Draw(DataVisualization::Charting::Chart ^ chart1, OutputValues outY)
	 {

		 for (int i = 0; i < outY.count; i++)
		 {
			 chart1->Series["Y1"]->Points->AddXY(outY.X[i], outY.Y1[i]);
			 chart1->Series["Y2"]->Points->AddXY(outY.X[i], outY.Y2[i]);
			 chart1->Series["Y3"]->Points->AddXY(outY.X[i], outY.Y3[i]);

		 }

	 }
