// Lab_8_1-1.cpp
// < Кузів Назар >
// Лабораторна робота № 8.1
// Пошук та заміна символів у літерному рядку
// Варіант 6

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

/*Дано літерний рядок, який містить послідовність символів s0, …, sn, … .
 Замінити кожну пару сусідніх букв “SQ” або ”QS” трійкою зірочок “***”.
 */

char* Change(char* s)
{

	char* tmp = new char[strlen(s) * 3 / 2 + 1];
	char* t = tmp;

	tmp[0] = '\0';
	int i = 0;

	while (s[i + 2] != 0)
	{
		if ((s[i] == 'S' && s[i + 1] == 'Q') || (s[i] == 'Q' && s[i + 1] == 'S'))
		{
			
			strcat(t, "***");
			t += 3;
			i += 2;
		}
		else
		{
			*t++ = s[i++];
			*t = '\0';
		}
	}
	*t++ = s[i++];
	*t++ = s[i++];
	*t = '\0';

	strcpy(s, tmp);
	return tmp;
}

int main()
{
	char s[101]; //Оголошення літерного рядка
	

	cout << "Enter string:" << endl;
	cin.getline(s, 100);
	
	Change(s);

	cout << endl;
	cout << "Modified string : " << s << endl;
	

	return 0;
}
