#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int swapOrdner = 0;
    int myArray[] = {12,6,10,2,1,22,4,16,12,7};
    int laenge = 10;
    int zahl = 0;

    for(int j = laenge-1;j>0;j--)
    {
    for(int i = 0;i<zahl;i++)
        {
        if(myArray[i]>myArray[i+1])
        {
        swapOrdner = myArray[i +1];
        myArray[i+1]= myArray[i];
        myArray[i]=swapOrdner;

        }

    }

    for(int i=0;i<10;i++)
    {
        cout<<myArray[i]<<",";

    }
    cout<<endl;
        zahl--;
    }
    return 0;
}
