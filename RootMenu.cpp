#include "RootMenu.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void __clrcall WinMain(System::String^ arg) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GraphicalShakerSorting::RootMenu Form;
	Application::Run(% Form);

}