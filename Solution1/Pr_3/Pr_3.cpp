#include <iostream>
using namespace std;

int main()
{
	const int a = 10;
	int arr[a];
	for (int i = 0; i < a; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	int m;//число
	int k;//перевірка для закінчення
	while (true)
	{
		cout << "Enter number: ";
		cin >> m;
		for (int i = 0; i < a ; i++)
		{
			if (arr[i] == m)
			{
				cout << "arr[" << i << "] = " << arr[i]<<endl;
				
			}
			
		}
		cout << "do you want to continue? enter 1 - if no, 0 - if yes:  ";
		cin >> k;
		if (k == 1)
		{
			break;
		}
	}
}
