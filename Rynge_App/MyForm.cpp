#include "MyForm.h"
#include <iomanip>
#include <iostream>
#include <cmath>
# include <fstream>
#include "MyForm2.h";
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using namespace System::IO;



[STAThreadAttribute]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//ProjectName - name of your project
	//NameForm - name of the form to run
	RyngeApp::MyForm form;
	Application::Run(%form);
}