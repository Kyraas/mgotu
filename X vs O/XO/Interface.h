#pragma once
int Menu(int *d, char *q1, char *q2) {
	int c;
	bool f;
	using namespace std;
	cout << "=== �������� ��������� ���� ===\n";
	cout << "1. �����\n2. ������\n3. ������\n0. �����\n";
	//------------����� ������� ��������� ��� ������:
	cin >> *d;
	switch (*d) {
	case 1: cout << "=== ��� ������ ������ ������� ��������� ===\n";
		system("pause");
		system("cls");
		break;
	case 2: cout << "=== ��� ������ ������� ������� ��������� ===\n";
		system("pause");
		system("cls");
		break;
	case 3: cout << "=== ��� ������ ������� ������� ��������� ===\n";
		system("pause");
		system("cls");
		break;
	case 0: return 0; break;
	default: cout << " =!= ����� ������� �� ���������� =!=\n\n";
		system("pause");
		system("cls");
		break;
	}
	cout << " =?= �� ���� ������ ������? =?=\n\n";
	cout << "1. �������� \t-X-\n2. ������ \t-O-\n3. �� ����� \t-?-\n0. ����� \n";
	cin >> c;
	system("cls");
	//------------��� �� ���� ������:
	switch (c)
	{
	case 1: *q1 = 'X';
		*q2 = 'O';
		f = 0;
		cout << "=X= �� ������� �� �������� =X=\n\n";
		break;
	case 2: *q1 = 'O';
		*q2 = 'X';
		f = 1;
		cout << "=O= �� ������� �� ������ =O=\n\n";
		break;
	case 3: *q1 = rand() % 2;
		if (*q1 == 0) {
			*q1 = 'O';
			*q2 = 'X';
			f = 1;
			cout << " =O= �� ������� �� ������ =O=\n\n";
		}
		else {
			*q1 = 'X';
			*q2 = 'O';
			f = 0;
			cout << " =X= �� ������� �� �������� =X=\n\n";
		}
		break;
	case 0: return 0; break;
	default:
		cout << " =!= ����� ������� �� ���������� =!=\n\n";
		system("pause");
		system("cls");
		break;
	}
	if (f == 0) cout << " === �� ������ ������� ===\n";
	else cout << " === ��������� ����� ������ ===\n";
	system("pause");
	system("cls");
	//return d, q1, q2;
};