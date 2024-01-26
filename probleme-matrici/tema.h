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


// l) Sa se insereze inainte de coloana pe care se afla cele mai multe elemente de maxim, cifra minima dintre toate elementele vectorului.