#include <iostream>
#include <math.h>
using namespace std;
double root = 1.0;
double root_iterative(double q, int n, int steps)
{
	for (int i = 0; i < steps; i++) //Den Befehl n mal ausführen
	{
		root = root + (1/(double)n) * (( (double)q / pow(root, (double)n-1))-root); //Formel für die Wurzel
	}
	return root;
}

void testroot(double q, int n, int steps)
{
	root_iterative(q,n,steps);
	double rueckrechnung = pow(root, n);
	cout << "Basis: " << q << endl;
	cout << "n: " << n << endl;
	cout << "Naeherung: " << root << endl;
	cout << "Rueckrechnung: " << rueckrechnung << endl;
	cout << "Fehler: " << q - rueckrechnung << endl;
}
int main(int argc, char** argv)
{
	testroot(85,5,100);
	{
		cout << root << endl; //Ausgabe des Ergebnisses
	}
}
