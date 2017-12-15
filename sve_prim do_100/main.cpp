#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int i,j;
    for (i= 2;i <= 100; i++){
        for (j=2;j<=i;j++)
        {
        if (i%j==0)
            {

            break;
            }
        }

    if(i==j)
        {

        cout<<" ist eine Primmzal .\n"<<i;
        }

    }

    return 0;
}
