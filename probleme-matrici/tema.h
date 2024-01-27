#include "probleme.h";


// STERGERI 

// d) todo: Steregeti linia si coloana tuturor elementelor cu proprietatea ce au exact 3 cifre egale intre ele

void sol1() {
	int a[10][10] = { {422, 512, 1}, {333, 921, 621}, {2, 12 ,99} };
	int l = 3;
	int c = 3;

	int poz1 = poz3CifEgaleLinie(a, l, c);
	int poz2 = poz3CifEgaleColoana(a, l, c);

	cout << "Matricea inainte de stergere este: " << endl;
	afisare(a, l, c);

	cout << "Matricea dupa stergere este: " << endl;
	stergereLinie(a, l, c, poz1);
	stergereColoana(a, l, c, poz2);
	afisare(a, l, c);


}


// e) todo: Stergeti linia si coloana pe care se afla al doilea numar prim din matrice. Daca matricea nu contine cel putin 2 numere prime, se va afisa mesajul "Nu Exista"

void sol2() {

	int a[10][10]= { {422, 512, 14}, {333, 921, 621}, {2, 12 ,99} };
	int l = 3;
	int c = 3;
	int poz1 = DoileaNrPrimLinie(a, l, c);
	int poz2 = DoileaNrPrimColoana(a, l, c);

	cout << "Matricea inainte de stergere este: " << endl;
	afisare(a, l, c);

	cout << "Matricea dupa stergere este: " << endl;
	stergereLinie(a, l, c, poz1);
	stergereColoana(a, l, c, poz2);
	afisare(a, l, c);
}


// f) todo: Stergeti linia ce are cel mai rar cifra k in componenta elementelor (k citit de la tastatura)

void sol3() {

	int a[10][10] = { {422, 512, 14}, {333, 921, 21}, {2, 12 ,99} };
	int f[10] = {};
	int l = 3;
	int c = 3;
	int k = 0;
	cout << "Introduceti elementul k: ";
	cin >> k;

	frecventaCifraMatrice(a, l, c, f);
	int min = frecventaMin(f);

	cout << "Matricea inainte de stergere este: " << endl;
	afisare(a, l, c);

	cout << "Matricea dupa stergere este: " << endl;
	stergereLinie(a, l, c, min);
	afisare(a, l, c);

	

}


// g) Sa se stearga linia si coloana elementului cu frecventa maxima

void sol4() {

	int a[10][10] = { {14, 512, 14}, {333, 921, 621}, {2, 12 ,99} };
	int l = 3;
	int c = 3;
	int f[1001] = {};
	frecventaElementeMatrice(a, l, c, f);
	int max = linieFrecventaMax(a, l, c, f);
	int max2 = coloanaFrecventaMax(a, l, c ,f);

	cout << "Matricea inainte de stergere este: " << endl;
	afisare(a, l, c);

	cout << endl;

	cout << "Matricea dupa stergere este: " << endl;
	stergereLinie(a, l, c, max);
	stergereColoana(a, l, c, max2);
	afisare(a, l, c);

}


// h) Stergeti toate liniile ce nu au elementele ordonate ( crescator sau descrescator) ???

void sol5() {

	int a[10][10] = { {14, 51, 322}, {333, 921, 621}, {2, 12 ,99} };
	int l = 3;
	int c = 3;

}



// INSERARI


// j) todo: Inserati dupa a doua coloana ce contine cel putin un patrat perfect, rasturnatul fiecareui element din acesta. 

void sol6() {

	int a[10][10] = { {422, 100, 1}, {333, 921, 621}, {4, 12 ,99} };
	int l = 3;
	int c = 3;
	int v[10];
	coloanaRasturnat(a, l, c, v);
	int poz = DoileaNrPerfectColoana(a, l, c);

	cout << "Matricea inainte de inserare este: " << endl;
	afisare(a, l, c);

	cout << endl;

	cout << "Matricea dupa inserare este: " << endl;
	inserareColoana(a, l, c, poz, v);
	afisare(a, l, c);

}


// k) todo: Sa se insereze dupa linia cu cele mai multe elemente pare, dublul ei. ???

void sol7() {

	int a[10][10] = { {422, 100, 1}, {333, 921, 621}, {4, 12 ,99} };
	int l = 3;
	int c = 3;



}


// l) Sa se insereze inainte de coloana pe care se afla cele mai multe elemente de maxim, cifra minima dintre toate elementele vectorului. ???


// m)  Inserati dupa fiecare coloana ce este formata din elemente in care fiecare cifra (0-9) apare cel putin o data, cifra de control a fiecarei element ???

void sol8() {

	int a[10][10] = { {422, 100, 1}, {333, 921, 621}, {4, 12 ,99} };
	int l = 3;
	int c = 3;

}


// n) Inserati dupa linia pe care se gaseste primul element palindrom ce are intre 3 si 5 divizori prorpii, dulbul ei.

void sol9() {

	int a[10][10] = { {42, 505, 11}, {333, 921, 621}, {4, 12 ,99} };
	int l = 3;
	int c = 3;
	int v[10];

	dubluLinie(a, l, c, v);

	int poz = primulElemPalindrom(a, l, c);
	poz++;

	cout << "Matricea inainte de inserare este: " << endl;
	afisare(a, l, c);

	cout << endl;

	cout << "Matricea dupa inserare este: " << endl;
	inserareLinie(a, l, c, poz, v);
	afisare(a, l, c);

}


// INTERSCHIMBARI

// p) todo: Interschimbati prima linie ce are elementele in ordine crescatoare cu urmatoare linie.

void sol10() {

	int a[10][10] = { {42, 505, 11}, {333, 921, 621}, {4, 12 ,99} };
	int l = 3;
	int c = 3;

	sortarePrimaLinie(a, l, c);

	cout << "Matricea inainte de interschimbare este: " << endl;
	afisare(a, l, c);

	cout << endl;

	cout << "Matricea dupa de interschimbare este: " << endl;
	interschimbareLinii(a, l, c);
	afisare(a, l, c);

}


// q) todo: Interschimbati linia pe care se afla minimul cu linia pe care se afla maximul

void sol11() {

	int a[10][10] = { {42, 505, 11}, {333, 921, 621}, {4, 12 ,99} };
	int l = 3;
	int c = 3;

	cout << "Matricea inainte de interschimbare este: " << endl;
	afisare(a, l, c);

	cout << endl;

	cout << "Matricea dupa de interschimbare este: " << endl;
	interschimbareMinMax(a, l, c);
	afisare(a, l, c);

}


// r) Interschimbati intre ele liniile ca prima coloana sa aiba elementele in ordine crescatoare  ???