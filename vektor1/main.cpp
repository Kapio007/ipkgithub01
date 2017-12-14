#include <iostream>
#include <vector>


using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v = {{ 3, 8, 7, 5, 9, 2 }};

   /* for(int i=1; i<v.size();i++){         // mit Wert
        v[i]=i;

    }
        for(int i=1; i<v.size();i++){
      cout << v[i]<<endl;
        }
*/
 for(int i=1; i<v1.size();i++){     //Ohne Wert gibt er keinen Wert züruck
        v1[i]=i;

    }
        for(int i=1; i<v1.size();i++){
      cout << v1[i]<<endl;
        }


    return 0;
}
