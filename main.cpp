#include <iostream>
using namespace std;
int main ()
{
float a = 0, b = 0, c = 0; //inizializzo le variabili float
cin >> a >> b >> c; //non eseguo controlli sui valori inseriti, non sebra richiesto dalla consegna dell'esercitazione
cout<< "\n"<< ((a*b)/2) << endl<< (a*a) << endl<< (a*b) << endl<< (((a+b)*c)/2) << endl; //stampo a video i risultati, andando a capo ad ogni stampa
return 0;
}
