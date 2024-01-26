#include <iostream>
using namespace std;

void stergereLinie(int a[10][10], int& l, int c, int poz) {

	for (int i = poz; i < l - 1; i++) {
		for (int j = 0; j < c; j++) {
			a[i][j] = a[i + 1][j];
		}
	}
	l--;

}

void stergereColoana(int a[10][10], int l, int& c, int poz) {

	for (int i = 0; i < l; i++) {
		for (int j = poz; j < c - 1; j++) {
			a[i][j] = a[i][j + 1];
		}
	}
	c--;

}

void afisare(int a[10][10], int l, int c) {


	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void inserareLinie(int a[10][10], int& l, int c, int poz, int v[]) {

	for (int i = l - 1; i >= poz; i--) {
		for (int j = 0; j < c; j++) {
			a[i + 1][j] = a[i][j];
		}
	}
	for (int j = 0; j < c; j++) {
		a[poz][j] = v[j];
	}

	l++;

}

void inserareColoana(int a[10][10], int l, int& c, int poz, int v[]) {


	for (int i = 0; i < l; i++) {
		for (int j = c - 1; j >= poz; j--) {
			a[i][j + 1] = a[i][j];
		}
	}
	for (int i = 0; i < l; i++) {
		a[i][poz] = v[i];
	}

	c++;

}

int nrCifre(int nr) {
	int ct =0 ;

	while (nr != 0) {
		ct++;
		nr = nr / 10;
	}
	return ct;
}

bool is3CifreEgale(int nr) {

	int ok = 1;
	int uc = nr % 10;
	nr = nr / 10;

	if (nrCifre(nr) == 3) {



		while (nr != 0) {

			if (nr % 10 != uc) {
				ok = 0;
			}
			nr = nr / 10;
		}

	}
	if (ok == 1) {
		return true;
	}
	else {
		return false;
	}
}

int poz3CifEgaleLinie(int a[10][10], int l, int c) {

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			if (is3CifreEgale(a[i][j]) == true) {
				return i;
			}
		}
	}

}

int poz3CifEgaleColoana(int a[10][10], int l, int c) {

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			if (is3CifreEgale(a[i][j]) == true) {
				return j;
			}
		}
	}

}

int nrDivizori(int nr) {
	int ct = 0;

	for (int i = 1; i <= nr; i++) {
		if (nr % i == 0) {
			ct++;
		}
	}
	return ct;
}

bool isNrPrim(int nr) {

	if (nrDivizori(nr) == 2) {
		return true;
	}
	return false;
}

int DoileaNrPrimLinie(int a[10][10], int l, int c) {

	int ct = 0;

	for (int i = 0; i < l; i++) {

		for (int j = 0; j < c; j++) {
			if (isNrPrim(a[i][j]) == true) {
				ct++;
				if (ct == 2) {
					return i;
				}
			}
		}
	}
}

int DoileaNrPrimColoana(int a[10][10], int l, int c) {

	int ct = 0;

	for (int i = 0; i < l; i++) {

		for (int j = 0; j < c; j++) {
			if (isNrPrim(a[i][j]) == true) {
				ct++;
				if (ct == 2) {
					return j;
				}
			}
		}
	}
}

void frecventaCifraMatrice(int a[10][10], int l, int c, int f[]) {

	for (int i = 0; i < l; i++) {

		for (int j = 0; j < c; j++) {

			int aux = a[i][j];
			while (a[i][j] != 0) {
				int cifra = a[i][j] % 10;
				f[cifra]++;
				a[i][j] = a[i][j] / 10;
			}
			a[i][j] = aux;

		}
	}
}

void frecventaElementeMatrice(int a[10][10], int l, int c, int f[]) {

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {

			f[a[i][j]]++;

		}
	}

}

int frecventaMin(int f[]) {

	int min = 10;

	for (int i = 0; i < 10; i++) {
		if (f[i] != 0 && min > f[i]) {
			min = f[i];
		}
	}
	return min;
}

int frecventaMaxElement(int f[]) {

	int max = INT_MIN;
	

	for (int i = 0; i < 1001; i++) {
		if (f[i] != 0 && max < f[i]) {
			max = i;
		}
	}
	return max;

}

int linieFrecventaMax(int a[10][10], int l, int c, int f[]) {


	frecventaElementeMatrice(a, l, c, f);
	int frecv = frecventaMaxElement(f);

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			if (frecv == a[i][j]) {
				return i;
			}
		}
	}

}

int coloanaFrecventaMax(int a[10][10], int l, int c, int f[]) {


	frecventaElementeMatrice(a, l, c, f);
	int frecv = frecventaMaxElement(f);

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			if (frecv == a[i][j]) {
				return j;
			}
		}
	}

}

bool isSortatCresc(int a[10][10], int l, int c) {

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c -1; j++) {
			if (a[i][j] > a[i][j + 1]) {
				return false;
			}
		}
	}
	return true;
}

bool isPatratPerfect(int nr) {

	if (nr == sqrt(nr) * sqrt(nr)) {
		return true;
	}
	return false;

}

int oglindit(int nr) {

	int nou = 0;
	int p = 10;

	while (nr != 0) {
		int uc = nr % 10;
		nou = p * nou + uc;
		nr = nr / 10;
	}
	return nou;
}

int DoileaNrPerfectColoana(int a[10][10], int l, int c) {

	int ct = 0;

	for (int i = 0; i < l; i++) {

		for (int j = 0; j < c; j++) {
			if (isPatratPerfect(a[i][j]) == true) {
				ct++;
				if (ct == 2) {
					return j;
				}
			}
		}
	}
}

void coloanaRasturnat(int a[10][10], int l, int c, int v[]) {

	int poz = DoileaNrPerfectColoana(a, l, c);
	poz--;
	for (int i = 0; i < l; i++) {
		v[i] = oglindit(a[i][poz]);
	}
}

