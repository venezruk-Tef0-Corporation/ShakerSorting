﻿//Директивы препроцессора
#include <iostream>

//Подключаемые библиотеки проекта
#include "Enums.h"
#include "InputValidation.h"
#include "ProgramFunctions.h"
#include "Testing.h"

using namespace std; /*позволяет использовать все идентификаторы 
		       из пространства имён std без указания 
		       префикса std::*/

/// <summary>Функция главного меню</summary>
void ProgramStarting(void) {
	MainMenuItems UserChoice = static_cast<MainMenuItems>(0);
	do {
		cout << "*** ГЛАВНОЕ МЕНЮ ***" << endl;
		cout << "[1] - Выполнить программу" << endl;
		cout << "[2] - Выполнить тестирование программы" << endl;
		cout << "[3] - Завершить работу программы" << endl;
		cout << "Выберите пункт меню: ";
		UserChoice = GetMainMenuItem();
		switch (UserChoice) {
			case StartProgram:
				ProgramEntering();
				break;
			case StartTesting:
				SetTesting();
				break;
			case Quit:
				cout << "Завершение работы" << endl;
				break;
			default:
				cout << "Введённый пункт не найден. Повторите ввод: " << endl;
				break;
		}
	} while (UserChoice != Quit);
}
