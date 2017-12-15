#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  srand(time(0));
int k = rand();
int s = rand();
    cout << "k je " << k << endl;
    /*cout << "k dupliran je " << k*2<< endl;*/
    cout << "s je "<< s << endl;
    if(s>k ){
    cout <<"2 broj je veci od 1."<<endl;
    }

        return 0;
}
