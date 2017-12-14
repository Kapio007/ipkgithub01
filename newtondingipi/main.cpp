#include <iostream>

using namespace std;
double newton_mehod(double q){
int n = 1;
double ergebniss = 1, anfang =1;
while(n<6){
    ergebniss=anfang - ((anfang*anfang)-q)/(2*anfang);
    anfang=ergebniss;
    n++;
}
return ergebniss;

}
double bisesction_method(double q){
    double a=0,b=q/2,ergebniss =0,c=q;
    while ((q-(ergebniss*ergebniss))>0.0001){
        b = a+((c-a)/2);
        if ((b*b)<q){
            a=b;
            ergebniss=a;
        }
        else if ((b*b)>q){
            c=b;
            ergebniss=a;
        }
        else{
            ergebniss=b;
        }
    }
return ergebniss;

}
int main()
{
    double c;
    cout << "Geben sie die Zahl c ein ,aus der die Quadratwurzel berechnet  werden soll : ";
    cin >>c;
    cout<<"die Wurzel aus :"<< c<<" ist : "<< newton_mehod(c)<<endl;
    cout <<bisesction_method(c)<<endl;

}
