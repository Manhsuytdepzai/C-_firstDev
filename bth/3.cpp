
#include <iostream>
#include <string>

int main()
{
	char a[50];
	cout << "Nhap Ho va Ten: ";
	cin.getline(a,50);
	for (int i = strlen(a); i > 0; i--)
	{
		if (a[i] == ' ')
		{
			cout << "Ten cua ban la: ";
			for (int j = i+1; j <= strlen(a); j++)
			{
				cout << a[j];
			}
			cout << endl;
			break;
		}
	}
}
