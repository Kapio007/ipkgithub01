#include <iostream>

using namespace std;

int main()
{
    int a,b,r,ggt;
    cout<< " Geben sie einen Wert für a ein"<<endl;
    cin>>a;
    cout<< " Geben sie einen Wert für b ein"<<endl;
    cin>>b;
    if(a==0) {
        cout<< " Der größte gemeinsame Teiler ist "<<b<<endl;
    }
     if(b==0) {
        cout<< " Der größte gemeinsame Teiler ist "<<a<<endl;
    }
    if(a>b){
       a = a - b;
       cout<<"das neue a ist : "<<a<<endl;
    }
    else{
     b=b-a;
    }
    while (b!= 0){
        r= a%b;
        a= b;
        b=r;

    }
    ggt = a;
    cout<< "Der größte gemeinsame Teiler ist : "<<ggt<<endl;
    return 0;
}
