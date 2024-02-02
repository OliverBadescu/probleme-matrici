#include "probleme.h"


// h) Stergeti toate liniile ce nu au elementele ordonate ( crescator sau descrescator) ???

void sol1() {

	int a[10][10] = { {14, 51, 14}, {333, 92, 62}, {2, 12 ,99} };
	int l = 3;
	int c = 3;

	cout << "Matricea inainte de stergere este: " << endl;
	afisare(a, l, c);

	cout << endl;

	cout << "Matricea dupa stergere este: " << endl;
	stergereLiniiSortate(a, l, c);
	afisare(a, l, c);

}


// k) todo: Sa se insereze dupa linia cu cele mai multe elemente pare, dublul ei. ???

void sol2() {

	int a[10][10] = { {14, 24, 14}, {333, 92, 62}, {2, 12 ,99} };
	int l = 3;
	int c = 3;
	int v[10];
	int poz = linieMaxElemPare(a, l, c);
	poz++;
	creareLinieDubla(a, l, c, v);
	cout << "Matricea inainte de inserare este: " << endl;
	afisare(a, l, c);

	cout << endl;

	cout << "Matricea dupa inserare este: " << endl;
	inserareLinie(a, l, c, poz, v);
	afisare(a, l, c);

}


// r) Interschimbati intre ele liniile ca prima coloana sa aiba elementele in ordine crescatoare  ???

void sol3() {



	int a[10][10] = { {14, 24, 14}, {333, 92, 62}, {2, 12 ,99} };
	int l = 3;
	int c = 3;

	cout << "Matricea inainte de sortare este: " << endl;
	afisare(a, l, c);

	cout << endl;

	cout << "Matricea dupa sortare este: " << endl;
	sortarePrimaColoanaPrinInterschimbare(a, l, c);
	afisare(a, l, c);



}






