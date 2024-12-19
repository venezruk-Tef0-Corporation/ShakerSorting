#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void __clrcall DeleteByIDCall(System::String^ arg) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GraphicalShakerSorting::MyForm Form;
	Application::Run(% Form);

}