
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;


void func(int** arr, int n)
{
	for (int i(0); i < n; i++)
	{
		for (int j(0); j < n; j++)
		{
			if (i % 2 == 1)
			{
				arr[i][j] = 0;
			}
			else arr[i][j] = 1;
			cout <<"|"<< arr[i][j] << "|";
			
		}
		cout << endl;
	}
}

int main()
{
	int** arr, n;
	cout << "Enter n:";
	cin >> n;

	cout << "_____________________________________"<<endl;
	arr = new int* [n];

	for (int i(0); i < n; i++)
	{
		arr[i] = new int [n];
	}


	func(arr, n);

	for (int i(0); i < n; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;
	_getch();
    return 0;
}

