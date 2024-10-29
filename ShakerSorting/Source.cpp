//Директивы препроцессора
#include <windows.h>

//Подключаемые библиотеки проекта
#include "GreetingFunction.h"
#include "StartingFunction.h"

using namespace std; /*позволяет использовать все идентификаторы 
					   из пространства имён std без указания 
					   префикса std::*/

/// <summary>Главная функция, точка входа в программу</summary>
int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ShowGreeting();
	ProgramStarting();

	return EXIT_SUCCESS;
}