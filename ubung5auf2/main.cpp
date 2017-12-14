#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;
bool sindPaar (char anf,char ende);

int countChars(char klammer1);

//{
    //if(anf == '(' && ende ==')') return true;
  //  else if(anf == '{' && ende =='}') return true;
//}

int main (int argc, char *argv[])
{
char klammer1;
char klammer2;
cout<<"Nummer an klammern )"<<endl;

for (klammer1 = ')';    klammer1++;)
    {
    cout << klammer1<< "hat soviele einträge"<< countChars(klammer1)<<endl;

}
}
//int main()
//
   // string s;
    //cout << "Enter your string: " << endl;
    //getline(cin,s);
    //const int size=s.length();
    //cout << "The total number of characters entered is: " << size << endl;


   // cout << "" <<sindPaar<< endl;
    //return 0;
//
