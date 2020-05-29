#pragma once
int Menu(int *d, char *q1, char *q2) {
	int c;
	bool f;
	using namespace std;
	cout << "=== Выберите сложность игры ===\n";
	cout << "1. Легко\n2. Средне\n3. Сложно\n0. Выход\n";
	//------------Какой уровень сложности был выбран:
	cin >> *d;
	switch (*d) {
	case 1: cout << "=== Был выбран легкий уровень сложности ===\n";
		system("pause");
		system("cls");
		break;
	case 2: cout << "=== Был выбран средний уровень сложности ===\n";
		system("pause");
		system("cls");
		break;
	case 3: cout << "=== Был выбран сложный уровень сложности ===\n";
		system("pause");
		system("cls");
		break;
	case 0: return 0; break;
	default: cout << " =!= Такой команды не существует =!=\n\n";
		system("pause");
		system("cls");
		break;
	}
	cout << " =?= За кого хотите играть? =?=\n\n";
	cout << "1. Крестики \t-X-\n2. Нолики \t-O-\n3. Всё равно \t-?-\n0. Выход \n";
	cin >> c;
	system("cls");
	//------------Кто за кого играет:
	switch (c)
	{
	case 1: *q1 = 'X';
		*q2 = 'O';
		f = 0;
		cout << "=X= Вы играете за крестики =X=\n\n";
		break;
	case 2: *q1 = 'O';
		*q2 = 'X';
		f = 1;
		cout << "=O= Вы играете за нолики =O=\n\n";
		break;
	case 3: *q1 = rand() % 2;
		if (*q1 == 0) {
			*q1 = 'O';
			*q2 = 'X';
			f = 1;
			cout << " =O= Вы играете за нолики =O=\n\n";
		}
		else {
			*q1 = 'X';
			*q2 = 'O';
			f = 0;
			cout << " =X= Вы играете за крестики =X=\n\n";
		}
		break;
	case 0: return 0; break;
	default:
		cout << " =!= Такой команды не существует =!=\n\n";
		system("pause");
		system("cls");
		break;
	}
	if (f == 0) cout << " === Вы ходите первыми ===\n";
	else cout << " === Противник ходит первым ===\n";
	system("pause");
	system("cls");
	//return d, q1, q2;
};