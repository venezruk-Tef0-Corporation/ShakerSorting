// Подключаемые формы
#include "RootMenu.h"

// Подключенные пространства имен
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute] /* STAThreadAttribute в C++ указывает, 
						что потоковая модель для приложения 
						является однопотоковым подразделением 
						(STA). 
						Этот атрибут должен присутствовать на 
						точке входа любого приложения, использующего 
						Windows Forms. Если он отсутствует, 
						компоненты Windows могут работать неправильно. */

// Определение точки входа в программу 

/// <summary>
/// Точка входа в программу
/// </summary>
/// <param name="arg - массив указателей, который хранит все переданные аргументы командной строки в виде строк"></param>
void __clrcall WinMain(System::String^ arg) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GraphicalShakerSorting::RootMenu Form;
	Application::Run(% Form);

}

// Конец файла