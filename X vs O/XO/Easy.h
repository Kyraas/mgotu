#pragma once
void ETurnPC(char a[3][3], char q2) {
	int i, j;
	do {
		i = rand() % 3;
		j = rand() % 3;
	} while (a[i][j] != '-');
	a[i][j] = q2;
}