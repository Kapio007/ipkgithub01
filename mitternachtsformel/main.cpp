#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
double a,b,c,d,x1,x2;
    cout << "Gib a,b,c ein : " << endl;
    cin >> a >> b >>c;
    d = (b*b)- (4*a*c);
    if (d>=0){
        x1 = (-b + sqrt(d)) /  (2*a);
        x2 = (-b - sqrt(d)) / ( 2*a);
   cout<< "x1 = "<< x1 << " und x2 = "<< x2 << endl;
    }
   else{
    cout<< "Determinate ist negativ und die Wuerzel kann nicht berechnet werden"<<endl;
   }

    return 0;
}
