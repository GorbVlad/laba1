#include <iostream>
using namespace std;
const int N = 10;
void zad1()
{
	srand(time(0));
	int mas[N];
	cout << "Ваши числа: " << endl;
	for (int i = 0; i < N; i++)
	{
		mas[i] = 1 + rand() % 100; //рандомное заполнение числами до 100
		cout << mas[i] << " ";

	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		if (mas[i] % 2 == 0)
			mas[i] = 0;
	}
	cout << endl;
	cout << "Вывод:" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << mas[i] << " ";
	}
}

void zad2(char a, int b = 0)
{
	char c[5];//строка
	do {//уикл для ввод и проверка на символ
		cout << "Введите символ:" << endl;
		cin >> a;
		if ((isalpha(a) == 0)) //ф-я проверки символа;
			cout << "Ошибка.Введен не символ" << endl;
	} while (isalpha(a) == 0);

	cout << "Введите символ строки :" << endl; // ввод строк
	for (int i = 0; i < 5; i++)
	{
		do {

			cin >> c[i];
			if (isalpha(c[i]) == 0) //проверка строки по символам;
			{
				cout << "Ошибка. Введите символ:" << endl;
			}

		} while (isalpha(c[i]) == 0);
	}

	for (int i = 0; i < strlen(c) - 1; i++)
	{
		if (c[i] == a)  //сравнение данных строки с символом
			b = i;
	}
	if (b > 0)  //условие при если символ занимает место в строке или не занимает
		cout << "Символ занимает" << " " << b + 1 << " " << "место в строке";
	else
		cout << "Символов нет";

}
void zad3()
{
	int mas[3][3];
	int N;
	int tmp, d;
	cout << "Введите элементы для матрицы 3 на 3: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> mas[i][j];

		}
	}

	for (int k = 0; k < 3 - 1; k++)
	{
		for (int i = k + 1; i < 3; i++)
		{
			tmp = -mas[i][k] / mas[k][k];
			for (int j = 0; j < 3; j++)
			{
				mas[i][j] += mas[k][j] * tmp; //Приводим матрицу к треугольному виду
			}
		}
	}
	d = 1;
	for (int i = 0; i < 3; i++)
	{
		d *= mas[i][i]; //Вычисляем определитель
	}
	cout << "Определитель - " << d << endl;

}
int main()
{
	setlocale(LC_ALL, "RU");
	cout << "*******************" << endl;
	cout << "Задание 1" << endl;
	cout << "*******************" << endl;
	zad1();
	cout << endl;
	cout << "*******************" << endl;
	cout << "Задание 3" << endl;
	cout << "*******************" << endl;
	zad3();
	cout << endl;
	cout << "*******************" << endl;
	cout << "Задание 2" << endl;
	cout << "*******************" << endl;
	char a = '1';
	zad2(a);
	cout << endl;
	system("pause");
	return 0;
}
