#pragma once
#include <string>
#include <msclr/marshal_cppstd.h>
using namespace System::IO;
using namespace System::Windows::Forms;
using namespace std;

// исхлдная система уравнений 
double y1(double y2, double y3);

double y2(double y1, double y3);

double y3(double y1, double y2);


struct InitialVal
{
	double y1;
	double y2;
	double y3;

};



struct OutputValues
{
	double* Y1;

	double* Y2;

	double* Y3;

	double* X;

	int count;
};


OutputValues Ode45(double a, double b, double h, InitialVal init);

void WriteFile(System::String^ filename, OutputValues outY);

void Draw(DataVisualization::Charting::Chart ^chart, OutputValues outY);