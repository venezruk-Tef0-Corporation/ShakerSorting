// Подключаемые библиотеки
#include <msclr\marshal_cppstd.h>
#include <string>
#include <iostream>

// Использованные пространства имен
using namespace std;
using namespace System;

/// <summary>
/// Функция, выполняющая конвертацию System::String^ в std::string
/// </summary>
/// <param name="Line - строка типа std::string"></param>
/// <returns></returns>
string ToStdstring(String^ Line) {

	string stringline = "";

	stringline = msclr::interop::marshal_as<string>(Line);

	return stringline;
}

// Конец файла