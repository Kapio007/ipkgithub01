//Abstand zwischen 2 Koordinaten im 2D oder 3D Koordinatensystem berrechnen

#include <iostream>   // für cout und cin
#include <cmath>      // für sqrt
using namespace std;

struct koordinate  //Struktur koordinate
{
       double x;
       double y;
       double z;
};
double rechnen(koordinate eins,koordinate zwei){   // Funktion die alles berechnet
       double x;   //Quardat der diverenzen von den x koordinaten
       double y;   //Quardat der diverenzen von den y koordinaten
       double z;   //Quardat der diverenzen von den z koordinaten
       double ergebnis;
       //Berechnung siehe Mathe unterricht Klasse 11 ^^
       x = eins.x - zwei.x;
       x = x * x;
       y = eins.y - zwei.y;
       y = y * y;
       z = eins.z - zwei.z;
       z = z * z;
       ergebnis = sqrt(x+y+z);
       //Gibt das ergebnis an main zurück
       return ergebnis;
}
int main(){
    //begruessung
    cout<<"Willkommen im Entfernungsrechner!"<<endl<<endl<<"Komma's bitte als Punkte schreibe"<<endl<<endl;
    koordinate eins,zwei;  //2 Inztanzen der Struktur Koordinate erzeugt
    int was;     // fürs menue
    cout<<endl<<"1  Abstandt im 2D Koordinatensystem"<<endl<<"2  Abstandt im 3 Koordinatensystem";
    cout<<endl<<"Was Moechten sie machen ? ";
    cin>>was;

    // Entscheidung was gemacht werden soll
           //Für 2D
           if(was == 1){  // Falls im 2D-system der Abstandt bestimmt werden soll
                //Werte eingabe
                cout<<endl<<"koordinate 1 : "<<endl<<" x : ";
                cin >>eins.x;
                cout<<" y : ";
                cin>>eins.y;
                eins.z = 0;  // gibt der z Koordinate den wert null da wir sie nicht brauchen
                cout<<endl<<"koordinate 2 : "<<endl<<" x : ";
                cin >>zwei.x;
                cout<<" y : ";
                cin>>zwei.y;
                zwei.z = 0; // gibt der z Koordinate den wert null da wir sie nicht brauchen
                //Berechnung und Ausgabe
                double ergebnis= rechnen(eins,zwei);
                cout <<endl<<"Der abstandt betraegt : "<<ergebnis<<" Laengeneinheiten"<<endl<<endl;
                }
            //Für 3D
           if (was ==2){  // Falls im 2D-system der Abstandt bestimmt werden soll
                //Werte eingabe
                cout<<endl<<endl<<"Sie Haben 3D gewaehlt";
                cout<<endl<<"koordinate 1 : "<<endl<<" x : ";
                cin >>eins.x;
                cout<<" y : ";
                cin>>eins.y;
                cout<<" z : ";
                cin >>eins.z;
                cout<<endl<<"koordinate 2 : "<<endl<<" x : ";
                cin >>zwei.x;
                cout<<" y : ";
                cin>>zwei.y;
                cout<<" z : ";
                cin>>zwei.z;
                //Berechnung und Ausgabe
                double ergebnis= rechnen(eins,zwei);
                cout <<endl<<"Der abstandt betraegt : "<<ergebnis<<" Laengeneinheiten"<<endl<<endl;
                }
            if(was>2){
                       cout<<endl<<"eingabe Falsch";
                }

    return 0;
}
