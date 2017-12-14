#include <iostream>

using namespace std;

int main()
{
    bool isprimm = false ;
    int n;
    cout << "Gebe eine Zahl ein: " << endl;
    cin >> n;
    for(int i =2 ;i<n ; i++ ){
        if(n%i == 0){
            isprimm = true;
            break;
        }
                                }
    if(isprimm == false && n>1 ){
        cout <<"Die Nummer ist eine Primmzahl";
    }
    else{
        cout<<"Die Nummer ist keine Primmzahl";
    }
    return 0;
}
