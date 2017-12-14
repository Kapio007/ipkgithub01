
#include<iostream>
#include "primzahl.h"
using namespace std;

int main ()
{
    int a,b;
    cout << " Gib eine Zahl ein"<< endl;
    cin>>a;

    if( a % 2 == 0){
        cout << "Das ist eine gerade Zahl"<< endl;
    }else{
      b =  (a * 3 ) +1 ;
       cout << "a ist keine Primzahl  und hat den neuen Wert"<< b<< endl;
         }
    return 0;
}
