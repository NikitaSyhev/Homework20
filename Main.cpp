//���� ������ ������ � ������� ������������� �������
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
	std::cout << "�������: ������ � 100 ��������� � �������.\n\n";
	m = - 100;
	n = 100;
	const int size = 100;
	int arr[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		 arr[i] = rand() % (100 + 1 - (-100)) + ( - 100);
	}
	
	show_arr(arr, size);
	std::cout << "������ ������� ��������� �������� � ������: " << searchIndex(arr, size) << ", \n";
	std::cout << "������ ���������� ��������� �������� � ������: " << searchLastIndex(arr, size) << ", \n";
	std::cout << "������������ �������� �������� � �������:  " << maxElement(arr, size) << ", \n";
	std::cout << "����������� �������� �������� � �������:  " << minElement(arr, size) << ", \n";
	std::cout << "�������������������� �������� � �������:  " << meanValue(arr, size) << ", \n";
	std::cout << "������� 2 ����� ( �� ��������� �� - 100 �� 100: \n";
	std::cin >> a >> b;
	std::cout << "��������, ������� ������ � �������� �� " << a << " �� " << b << ":\n";
	range(arr, size, a, b);
	std::cout << "������� �����, ����� ��������� ��������, ����� �������: \n";
	std::cin >> c;
	std::cout << "���������� ��������� ����� " << c << " � ������ : " << counter(arr, size, c) << ", \n";





















	return 0;
}