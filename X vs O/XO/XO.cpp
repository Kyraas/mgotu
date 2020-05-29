// XO.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <ctime>
#include "Interface.h" 
#include "Easy.h"
#include "Medium.h"
#include "Hard.h" 

#define CheckX if (k == 3) exit = 1; else k = 0;
#define CheckO if (k == 3) exit = 2; else k = 0;
using namespace std;

void View(char a[3][3]) {
	int i, j;
	for (i = 0; i < 3; i++) {
		cout << "\t";
		for (j = 0; j < 3; j++) cout << a[i][j];
		cout << endl;
	}
}
int WinX(char a[3][3], int exit) {
	int i, j,k=0;
		// По горизонтали
		for (i = 0; i < 3; i++) if (a[i][0] == 'X') k++; CheckX
		for (i = 0; i < 3; i++) if (a[i][1] == 'X') k++; CheckX
		for (i = 0; i < 3; i++) if (a[i][2] == 'X') k++; CheckX
		// По вертикали
		for (j = 0; j < 3; j++) if (a[0][j] == 'X') k++; CheckX
		for (j = 0; j < 3; j++) if (a[1][j] == 'X') k++; CheckX
		for (j = 0; j < 3; j++) if (a[2][j] == 'X') k++; CheckX
		// По диагонали
		if (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X') exit = 1;
		if (a[2][0] == 'X' && a[1][1] == 'X' && a[0][2] == 'X') exit = 1;
	return exit;
}
int WinO(char a[3][3], int exit) {
	int i, j, k = 0;
		// По горизонтали
		for (i = 0; i < 3; i++) if (a[i][0] == 'O') k++; CheckO
		for (i = 0; i < 3; i++) if (a[i][1] == 'O') k++; CheckO
		for (i = 0; i < 3; i++) if (a[i][2] == 'O') k++; CheckO
		// По вертикали
		for (j = 0; j < 3; j++) if (a[0][j] == 'O') k++; CheckO
		for (j = 0; j < 3; j++) if (a[1][j] == 'O') k++; CheckO
		for (j = 0; j < 3; j++) if (a[2][j] == 'O') k++; CheckO
		// По диагонали
		if (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O') exit = 2;
		if (a[2][0] == 'O' && a[1][1] == 'O' && a[0][2] == 'O') exit = 2;
	return exit;
}
int Draw(char a[3][3], int exit) {
	int i, j, f = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) if (a[i][j] != '-') f++;
		if (f == 9) {
			exit = 3;
			break;
		}
	}
	return exit;
}

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "RUS");
	while (!feof(stdin)) {
		int d = 0, i = 0, j = 0, c = 0, exit = 0;
		bool f = 0;
		char a[3][3], q1 = 0, q2 = 0, v;
		Menu(&d, &q1,&q2);
		//------------Заполнение массива / Новая игра:
		for (i = 0; i < 3; i++) {
			cout << "\t";
			for (j = 0; j < 3; j++) {
				a[i][j] = '-';
				cout << a[i][j];
			}
			cout << endl;
		}

		if (f == 1) {					// Если ИИ ходит первым
			system("cls");
			if (d == 1) ETurnPC(a, q2);
			if (d == 2) MTurnPC(a, q2);// Ход ИИ
			else HTurnPC(a, q2, q1);
			View(a);					// Отображение поля после хода ИИ
		}
		while (exit == 0) {
			cout << "Ваш ход:\n";
			do {
				cin >> i >> j;			// Ход Игрока
				if (a[i - 1][j - 1] != '-') {
					cout << " =!= Нельзя сотворить здесь =!=\n\n";
					system("pause");
					system("cls");
					View(a);
					cout << "Ваш ход:\n";
				}
			} while (a[i - 1][j - 1] != '-');
			a[i - 1][j - 1] = q1;
			system("cls");
			View(a);
			system("pause");
			system("cls");
			exit = Draw(a, exit);		// Проверка
			exit = WinX(a, exit);
			exit = WinO(a, exit);
			if (exit == 1 || exit == 2 || exit == 3) break;
			if (d == 1) ETurnPC(a, q2);
			if (d == 2) MTurnPC(a, q2);// Ход ИИ
			else HTurnPC(a, q2, q1);
			View(a);
			exit = Draw(a, exit);		// Проверка
			exit = WinX(a, exit);
			exit = WinO(a, exit);
			if (exit == 1 || exit == 2 || exit == 3) break;
		}
		if (exit == 1) cout << " =X= Крестики выиграли! =X=\n";
		if (exit == 2) cout << " =O= Нолики выиграли! =O=\n";
		if (exit == 3) cout << " === Ничья! ===\n"; 
		cout << " =?= Хотите сыграть еще раз? =?= (Y/N)\n";
		cin >> v;
		system("cls");
		if (v == 'N' || v == 'n') break;
	}
	return 0;
}