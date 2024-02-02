#include "probleme.h"

// todo: Interschimbar triunghi diagonala principala 

void interschimbareTriunghi(int a[10][10], int l, int c) {



	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {

			if (i < j) {
				int aux = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = aux;
			}


		}
	}




}

void testare() {

	int a[10][10] = { {10, 11, 12, 13, 14}, {20, 21, 22, 23, 24}, {30, 31, 32 , 33, 34} , {40, 41, 42, 43, 44}, {50, 51, 52, 53, 54} };
	int l = 5;
	int c = 5;

	afisare(a, l, c);

	cout << endl;

	interschimbareTriunghi(a, l, c);

	afisare(a, l, c);


}


// todo: Interschimbare triunghi diagonala secundara ???

void interschimbareTriunghiSec(int a[10][10], int l, int c) {

	for (int i = c / 2; i < l; i++) {
		for (int j = c/2; j < c; j++) {
			int aux = a[i][j];
			a[i][j] = a[c - 1 -j][c-1-i];
			a[c-1-j][c-1-i] = aux;
		}
	}

}

void testare2() {

	int a[10][10] = { {10, 11, 12, 13, 14}, {20, 21, 22, 23, 24}, {30, 31, 32 , 33, 34} , {40, 41, 42, 43, 44}, {50, 51, 52, 53, 54} };
	int l = 5;
	int c = 5;

	afisare(a, l, c);

	cout << endl;
	 
	interschimbareTriunghiSec(a, l, c);

	afisare(a, l, c);


}


// todo: Interschimbar triunghi isoscel Nord-Sud

void interschimbareTriunghiNordSud(int a[10][10], int l, int c) {

	for (int i = 0; i < l; i++) {
		for (int j = i+1; j < c - i -1; j++) {
			int aux = a[i][j];
			a[i][j] = a[l - 1 - i][l - 1 - j];
			a[l - 1 - i][l - 1 - j] = aux;
		}
	}

}

void testare3() {

	int a[10][10] = { {10, 11, 12, 13, 14}, {20, 21, 22, 23, 24}, {30, 31, 32 , 33, 34} , {40, 41, 42, 43, 44}, {50, 51, 52, 53, 54} };
	int l = 5;
	int c = 5;

	afisare(a, l, c);

	cout << endl;

	interschimbareTriunghiNordSud(a, l, c);

	afisare(a, l, c);


}


// todo: Interschimbar triunghi isoscel Nord-Est 

void interschimbareTriunghiNordEst(int a[10][10], int l, int c) {

	for (int i = 0; i < l; i++) {
		for (int j = i + 1; j < c - i - 1; j++) {
			int aux = a[i][j];
			a[i][j] = a[l - 1 - j][l - 1 - i];
			a[l - 1 - j][l - 1 - i] = aux;
		}
	}

}

void testare4() {

	int a[10][10] = { {10, 11, 12, 13, 14}, {20, 21, 22, 23, 24}, {30, 31, 32 , 33, 34} , {40, 41, 42, 43, 44}, {50, 51, 52, 53, 54} };
	int l = 5;
	int c = 5;

	afisare(a, l, c);

	cout << endl;

	interschimbareTriunghiNordEst(a, l, c);

	afisare(a, l, c);


}


// todo: Interschimbar triunghi isoscel Nord-Vest  

void interschimbareTriunghiNordVest(int a[10][10], int l, int c) {

	for (int i = 0; i < l / 2; i++) {
		for (int j = i + 1; j < l - i - 1; j++) {
			int aux = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = aux;
		}
	}

}

void testare5() {

	int a[10][10] = { {10, 11, 12, 13, 14}, {20, 21, 22, 23, 24}, {30, 31, 32 , 33, 34} , {40, 41, 42, 43, 44}, {50, 51, 52, 53, 54} };
	int l = 5;
	int c = 5;

	afisare(a, l, c);

	cout << endl;

	interschimbareTriunghiNordVest(a, l, c);

	afisare(a, l, c);


}


// todo: Interschimbar triunghi isoscel Sud-Est ????

void interschimbareTriunghiSudEst(int a[10][10], int l, int c) {

	for (int i = l / 2; i < l; i++) {
		for (int j = 0; j < l / 2 - (i - l / 2); j++) {
			int aux = a[i][j];
			a[i][j] = a[l - 1 - j][l - 1 - i];
			a[l - 1 - j][l - 1 - i] = aux;
		}
	}

}

void testare6() {

	int a[10][10] = { {10, 11, 12, 13, 14}, {20, 21, 22, 23, 24}, {30, 31, 32 , 33, 34} , {40, 41, 42, 43, 44}, {50, 51, 52, 53, 54} };
	int l = 5;
	int c = 5;

	afisare(a, l, c);

	cout << endl;

	interschimbareTriunghiSudEst(a, l, c);

	afisare(a, l, c);


}

// todo: Interschimbar triunghi isoscel Sud-Vest ????

void interschimbareTriunghiSudVest(int a[10][10], int l, int c) {

	for (int i = l / 2; i < l; i++) {
		for (int j = i + 1; j < l - i - 1; j++) {
			int aux = a[i][j];
			a[i][j] = a[l - 1 - j][l - 1 - i];
			a[l - 1 - j][l - 1 - i] = aux;
		}
	}

}

void testare7() {

	int a[10][10] = { {10, 11, 12, 13, 14}, {20, 21, 22, 23, 24}, {30, 31, 32 , 33, 34} , {40, 41, 42, 43, 44}, {50, 51, 52, 53, 54} };
	int l = 5;
	int c = 5;

	afisare(a, l, c);

	cout << endl;

	interschimbareTriunghiSudVest(a, l, c);

	afisare(a, l, c);


}