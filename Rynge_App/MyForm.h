#pragma once
#include "MyForm2.h"
#include <msclr/marshal_cppstd.h>
using namespace System::IO;




namespace RyngeApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	//private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(162, 170);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Y1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Y2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Y3";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(801, 434);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(268, 26);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(429, 129);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Входные данные";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(44, 96);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(51, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"0";
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label4->Location = System::Drawing::Point(157, 76);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"b";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(62, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"a";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(304, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 24);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(137, 96);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(45, 22);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"10";
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress_1);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(244, 96);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(66, 22);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"0.01";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(258, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 51);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Шаг\r\n\r\n\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(84, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 34);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Интервал \r\n\r\n";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			this->contextMenuStrip1->Text = L" О программе";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->справкаToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1074, 28);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->оПрограммеToolStripMenuItem });
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->справкаToolStripMenuItem->Text = L"Справка";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(187, 26);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(772, 44);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 111);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Начальные условия";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(63, 81);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(25, 22);
			this->textBox6->TabIndex = 1;
			this->textBox6->Text = L"1";
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox6_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(63, 53);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(25, 22);
			this->textBox5->TabIndex = 1;
			this->textBox5->Text = L"1";
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(63, 22);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(25, 22);
			this->textBox4->TabIndex = 1;
			this->textBox4->Text = L"0";
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 83);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 17);
			this->label7->TabIndex = 0;
			this->label7->Text = L"y3(0)=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 53);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 17);
			this->label6->TabIndex = 0;
			this->label6->Text = L"y2(0)=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 17);
			this->label5->TabIndex = 0;
			this->label5->Text = L"y1(0)=";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1074, 607);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		///////////////////////////////////////////
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

		////////////////////////////////////////
#pragma endregion


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {



		if (textBox3->Text != "" && textBox2->Text != "")
		{
			chart1->Series["Y1"]->Points->Clear();
			chart1->Series["Y2"]->Points->Clear();
			chart1->Series["Y3"]->Points->Clear();

			double a = Convert::ToDouble(textBox1->Text);
			double b = Convert::ToDouble(textBox2->Text);
			double h = Convert::ToDouble(textBox3->Text->Replace(".", ","));
			int Y1_0 = Convert::ToInt64(textBox4->Text);
			int Y2_0 = Convert::ToInt64(textBox5->Text);
			int Y3_0 = Convert::ToInt64(textBox6->Text);
			//Y1[0] = 0; Y2[0] = 1; Y3[0] = 1;

			/*double h;
			bool A = double::TryParse(textBox1->Text, System::Globalization::NumberStyles::Number,
				System::Globalization::NumberFormatInfo::CurrentInfo, h);
			if (A == true) { MessageBox::Show("Дробную и вещественную чать должна разделять запятая "); }
			else {
				double h = Convert::ToDouble(textBox3->Text);

			}*/
				



			StreamWriter^ sw = gcnew StreamWriter("OUT.csv");

			//ofstream outf("OUT.csv");
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
			Y1[0] = Y1_0; Y2[0] =Y2_0; Y3[0] = Y3_0;




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

			for (int i = 0; i < size; i++)
			{
				sw->Write("{1};", i, X[i]);
				sw->Write("{1};", i, Y1[i]);
				sw->Write("{1};", i, Y2[i]);
				sw->Write("{1};\n", i, Y3[i]);

				

			}

			
			sw->Close();

			for (int i = 0; i < size; i++)
			{
				chart1->Series["Y1"]->Points->AddXY(X[i], Y1[i]);
				chart1->Series["Y2"]->Points->AddXY(X[i], Y2[i]);
				chart1->Series["Y3"]->Points->AddXY(X[i], Y3[i]);
				
			}



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

		

			delete[]Y1;
			delete[]Y2;
			delete[]Y3;









		}

		else
		{
			MessageBox::Show("Возможно не все поля заполненны.\n Проверьте данные и повторите потытку !");
		}

	}
	private: System::Void оПрограммеToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		MyForm2^ fq = gcnew MyForm2();
		fq->ShowDialog();
	}



     private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		 String^ TorZ; // Точка или запятая

		 TorZ = Globalization::NumberFormatInfo::CurrentInfo->NumberDecimalSeparator;

			   bool TZFound = false; // Разделительный знак найден
			   if (Char::IsDigit(e->KeyChar) == true) return;
			   if (e->KeyChar == (char)Keys::Back) return;
			   if (textBox1->Text->IndexOf(TorZ) != -1)
				   TZFound = true;
			   if (TZFound == true) { e->Handled = true; return; }

			   if (e->KeyChar.ToString() == TorZ) return;
			   e->Handled = true;
		   }

			private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
				String^ TorZ; // Точка или запятая

				TorZ = Globalization::NumberFormatInfo::CurrentInfo->NumberDecimalSeparator;

				bool TZFound = false; // Разделительный знак найден
				if (Char::IsDigit(e->KeyChar) == true) return;
				if (e->KeyChar == (char)Keys::Back) return;
				if (textBox2->Text->IndexOf(TorZ) != -1)
					TZFound = true;
				if (TZFound == true) { e->Handled = true; return; }

				if (e->KeyChar.ToString() == TorZ) return;
				e->Handled = true;
			}
				   private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
					   String^ TorZ; // Точка или запятая

					   TorZ = Globalization::NumberFormatInfo::CurrentInfo->NumberDecimalSeparator;

					   bool TZFound = false; // Разделительный знак найден
					   if (Char::IsDigit(e->KeyChar) == true) return;
					   if (e->KeyChar == (char)Keys::Back) return;
					   if (textBox3->Text->IndexOf(TorZ) != -1)
						   TZFound = true;
					   if (TZFound == true) { e->Handled = true; return; }

					   if (e->KeyChar.ToString() == TorZ) return;
					   e->Handled = true;
				   }


private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {

			
}

private: System::Void textBox3_KeyPress_1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') ||
		(e->KeyChar == ',') || (e->KeyChar == '-') || (e->KeyChar == 127) || (e->KeyChar == 8))) {
		e->Handled = true;
	}
}
private: System::Void textBox2_KeyPress_1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') ||
		(e->KeyChar == ',') || (e->KeyChar == '-') || (e->KeyChar == 127) || (e->KeyChar == 8))) {
		e->Handled = true;
	}
}
private: System::Void textBox1_KeyPress_1(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') ||
		(e->KeyChar == ',') || (e->KeyChar == '-') || (e->KeyChar == 127) || (e->KeyChar == 8))) {
		e->Handled = true;
	}
}
	private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') ||
			(e->KeyChar == ',') || (e->KeyChar == '-') || (e->KeyChar == 127) || (e->KeyChar == 8))) {
			e->Handled = true;
	}
}
private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') ||
		(e->KeyChar == ',') || (e->KeyChar == '-') || (e->KeyChar == 127) || (e->KeyChar == 8))) {
		e->Handled = true;
	}
}
private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') ||
		(e->KeyChar == ',') || (e->KeyChar == '-') || (e->KeyChar == 127) || (e->KeyChar == 8))) {
		e->Handled = true;
	}
}
};
}




//System::String^ str = textBox3->Text;
//std::string converted_xyz = msclr::interop::marshal_as< std::string >(str);