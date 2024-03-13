// Test1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;
void InputVar() {
	string ageInput;
	int age;

	cout << "How old are you: ";
	cin >> ageInput;

	age = stoi(ageInput);
	try
	{
		age = stoi(ageInput);
	}
	catch (invalid_argument)
	{
		// можно вводить только числа
		cout << "Only numbers are allowed! \n";
		age = -1;
	}
	catch (...)
	{
		//Если будет выброшено какое-то исключение, которое не обработано выше, то говорим, что возникла неизвестная ошибка
		cout << "Unknown error! \n";
		age = -1;
		
	}
	if (age > 0)
	{
		cout << "You are " << age << " years old. \n";
	}
	else
	{
		cout << "Try again! \n";
	}
}

int main() {
	InputVar();
}
