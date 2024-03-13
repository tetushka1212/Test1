// Test1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

void QuadraticEquation() {
	}
static int ActionChoose() {
	string case_num_input;
	int case_num;

	cout << "Choose your case: ";
	cin >> case_num_input;

	case_num = stoi(case_num_input);
	try
	{
		case_num = stoi(case_num_input);
	}
	catch (invalid_argument)
	{
		// можно вводить только числа
		cout << "Only numbers are allowed! \n";
		case_num = -1;
	}
	catch (...)
	{
		//Если будет выброшено какое-то исключение, которое не обработано выше, то говорим, что возникла неизвестная ошибка
		cout << "Unknown error! \n";
		case_num = -1;
		
	}
	if (case_num > 0 && case_num < 6) { return case_num; }
	else { cout << "Error.Try again \n"; return -1; }
}
void ActionScene() {
	cout << "FIRST PRACTICE\n1 - Quadratic equation\n ";
	switch (ActionChoose())
	{


	case 1:
		//Решение квадратного уравнения
		cout << "ax^2 + bx + c = 0\n";

		break;
	}
}
int main() {
	ActionScene();
}

