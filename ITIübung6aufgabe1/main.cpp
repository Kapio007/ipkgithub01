#include <iostream>
#include <math.h>
#include "myvector.h"
#include "MyVector.cpp"
using namespace std;

int main(){
//b) Erzeugung der Vektoren
MyVector a;
a.setValues(5,0,2);
MyVector b(3,1,4);
MyVector c(5,3,5);
int M_PI = 3.14;
//Definiere Richtungsvektoren des Dreiecks
MyVector ab(b.subtract(a));
MyVector bc(c.subtract(b));
MyVector ca(a.subtract(c));
cout<<"Der Vektor AB lautet: "; ab.print();
cout<<"Der Vektor BC lautet: "; bc.print();
cout<<"Der Vektor CA lautet: "; ca.print();

//c) Checke Orthogonalit�t der Richtungsvektoren
if(ab.isOrthogonal(bc) | bc.isOrthogonal(ca) | ca.isOrthogonal(ab)) cout<<"Das Dreieck ABC ist rechtwinklig."<<endl;
else cout<<"Das Dreieck ABC ist nicht rechtwinklig."<<endl;
//d) Checke L�nge der Richtungsvektoren
if(ab.length() == bc.length() | bc.length() == ca.length() | ca.length() == ab.length()) cout<<"Das Dreieck ABC ist gleichschenklig."<<endl;
else cout<<"Das Dreieck ABC ist nicht gleichschenklig."<<endl;
//e)
float alpha = (ab.angle(ca)*180/M_PI > 90) ? 180 - ab.angle(ca)*180/M_PI : ab.angle(ca)*180/M_PI;
float betha = (ab.angle(bc)*180/M_PI > 90) ? 180 - ab.angle(bc)*180/M_PI : ab.angle(bc)*180/M_PI;
float gamma = (bc.angle(ca)*180/M_PI > 90) ? 180 - bc.angle(ca)*180/M_PI : bc.angle(ca)*180/M_PI;
cout<<"Alpha: "<<alpha<<"�"<<endl;
cout<<"Betha: "<<betha<<"�"<<endl;
cout<<"Gamma: "<<gamma<<"�"<<endl;
//f)
cout<<"Die Fl�che des Dreiecks betr�gt: "<<ab.area(bc)/2<<" Fl�cheneinheiten."<<endl;
//g)
cout<<"Wir multiplizieren die Eintr�ge von A,B,C mit 2."<<endl;
a = a.mult(2);
b = b.mult(2);
c = c.mult(2);
ab = b.subtract(a);
bc = c.subtract(b);
ca = a.subtract(c);
cout<<"Die Fl�che des Dreiecks betr�gt jetzt: "<<ab.area(bc)/2<<" Fl�cheneinheiten."<<endl;
return 0;
}
