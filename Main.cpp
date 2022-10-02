//Этот проект создан с помощью классического шаблона
#include <iostream>
#include <cstdlib>
#include <ctime> 

void show_arr(int arr[], int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << " \n\n";
}

int searchIndex(int arr[], int length, int N = 0) {
	int first_index = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] == N)
			first_index = i;
	break;
}
	return first_index;
}

int searchLastIndex(int arr[], int length, int N = 0) {
	int last_index = 0;
		for (int i = length - 1; i > 0; i--) {
			if (arr[i] == N)
				last_index = i;
			break;
		}
		return last_index;
}

int maxElement(int arr[], int length) {
	int max = arr[0];
	for (int i = 1; i <= length; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

int minElement(int arr[], int length) {
	int min = arr[0];
	for (int i = 1; i < length; i++) {
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

int meanValue(int arr[], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++) 
		sum += arr[i];
	return sum / length;
}

void range(int arr[], int length, int A, int B) {
	for (int i = 0; i < length; i++) {
		if (arr[i] > A && arr[i] <= B)
			std::cout << arr[i] << ", ";
	}
	std::cout << "\n";
}

int counter(int arr[], int length, int C) {
	int counter = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] == C)
			counter++;
	}
	return counter;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int m, n, a, b, c;
	std::cout << "Задание: Массив в 100 элементов и функции.\n\n";
	m = - 100;
	n = 100;
	const int size = 100;
	int arr[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		 arr[i] = rand() % (100 + 1 - (-100)) + ( - 100);
	}
	
	show_arr(arr, size);
	std::cout << "Индекс первого вхождения элемента в массив: " << searchIndex(arr, size) << ", \n";
	std::cout << "индекс последнего вхождения элемента в массив: " << searchLastIndex(arr, size) << ", \n";
	std::cout << "максимальное значение элемента в массиве:  " << maxElement(arr, size) << ", \n";
	std::cout << "минимальное значение элемента в массиве:  " << minElement(arr, size) << ", \n";
	std::cout << "среднеарифметическое значение в массиве:  " << meanValue(arr, size) << ", \n";
	std::cout << "Введите 2 числа ( из диапазона от - 100 до 100: \n";
	std::cin >> a >> b;
	std::cout << "элементы, которые входят в диапазон от " << a << " до " << b << ":\n";
	range(arr, size, a, b);
	std::cout << "введите число, число вхождений которого, будем считать: \n";
	std::cin >> c;
	std::cout << "количество вхождений числа " << c << " в массив : " << counter(arr, size, c) << ", \n";





















	return 0;
}