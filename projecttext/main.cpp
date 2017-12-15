#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;


    int myAge=20;
    cout <<" mein Alter  ist "<< myAge << endl;
    bool isHappy = true;
   cout << " 5-2 ="<< 5-2 << endl;
   cout << "5 + 2 ="<< 5+2<< endl;
   cout << "4 / 5 = "<< (float) 4 / 5 << endl;

   int maxAge = 80;

   if ((myAge <18) && (myAge>maxAge)){

    cout <<" u can drive a car" << endl;

    }
    else{
        cout << " u cant drive a car" << endl;

    }
    srand(time(0));

   int a = 1+(rand()%10);

    /*cout << "a je  "<< (rand()&6) <<endl;
   cout << " b je "<< rand()<<endl;*/
    cout<< "a je "<< a<<endl;

    return 0;
}
