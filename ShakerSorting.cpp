// Подключаемые библиотеки
#include <iostream>                                   

using namespace std; /* Using namespace std в C++ — это директива, 
						которая позволяет использовать все идентификаторы 
						из пространства имён std без указания префикса std:: */

/// <summary>Функция сортировки массива</summary>
/// <param name="ArrayForSorting"> - Исходный массив</param>
/// <param name="SizeOfArray"> - Размер массива</param>
void ShakerSorting(int* ArrayForSorting, int SizeOfArray) {

	bool IsSwapped = true;
	int Start = 0;
	int End = SizeOfArray - 1;

	while (IsSwapped) {
		IsSwapped = false;

		// Проходим снизу вверх
		for (int i = Start; i < End; ++i) {
			if (ArrayForSorting[i] > ArrayForSorting[i + 1]) {
				swap(ArrayForSorting[i], ArrayForSorting[i + 1]);
				IsSwapped = true;
			}
		}

		// Если не было перестановок, то сортировка уже выполнена
		if (!IsSwapped)
			break;

		IsSwapped = false;

		// Уменьшаем окончание на 1, так как самый большой элемент уже находится на правильной позиции
		--End;

		// Проходим сверху вниз
		for (int i = End - 1; i >= Start; --i) {
			if (ArrayForSorting[i] > ArrayForSorting[i + 1]) {
				swap(ArrayForSorting[i], ArrayForSorting[i + 1]);
				IsSwapped = true;
			}
		}

		// Увеличиваем начало на 1, так как самый маленький элемент уже находится на правильной позиции
		++Start;
	}

}

// Конец файла