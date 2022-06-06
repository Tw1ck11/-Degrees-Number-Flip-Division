// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	////////Task1
	int start;
	int end;

	cin >> start;
	cin >> end;
	cout << "C          F" << endl;
	while (start <= end) {
		cout << start << "          " << start * 1.8 + 32 << endl;
		start++;
	}
	cout << "" << endl;







	////////Task2
	{
		int num;
		int tmp;
		int reversed_num = 0;

		cout << "Enter a number: ";
		cin >> num;

		while (num != 0)
		{
			tmp = num % 10;
			reversed_num = reversed_num * 10 + tmp;
			num /= 10;
		}

		cout << "Reversed number: " << reversed_num << "\n";
	}




	///////TASK 3
	int number, k = 0;
	cin >> number;
	while (k < number - 1) {
		k++;
		if (number % k == 0) {
			cout << k << ", ";
		}
		else {
			cout << "";
		}
	}
	cout << number << "." << endl;
}























