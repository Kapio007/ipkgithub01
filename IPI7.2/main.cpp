#include <iostream>
#include <string>
using namespace std;

class Room {
public:
    Room (string n, int entries) {name = n; allowedEntries = entries; North = this; South = this; East = this; West = this;};

  // methods
    void move_to(Room *here) {
        bool done = false;
        do {
            cout << "Sie sind im " << here->name << ". Es gibt Wege nach";
            if (here->East != here) cout << " O ";
            if (here->West != here) cout << " W ";
            if (here->North != here) cout << " N ";
            if (here->South != here) cout << " S ";
            here->allowedEntries--;
            cout << ". Sie dürfen hier noch " << here->allowedEntries << " kommen" << endl;
            cout << ". Wohin? (X:exit)" << endl;
            string in;
            cin >> in;
            switch (toupper(in[0])) {           // in[0] ist der erste Buchstabe der Eingabe.
                case 'N': here = here->North; break;  // toupper() konvertiert zu einem Großbuchstaben
                case 'S': here = here->South; break;
                case 'O': here = here->East; break;
                case 'W': here = here->West; break;
                default: done = true; cout << "Tschuess!\n"; break;
            }
        } while (!done && here->allowedEntries > 0);
    };


  // variables
  string name;
  Room *North, *South, *East, *West;
  int allowedEntries = 3;
};

int main()
{
    Room *r1 = new Room("Bade", 1);
    Room *r2 = new Room("Schlafzimmer", 2);
    Room *r3 = new Room("Wohnzimmer", 3);
    Room *r4 = new Room("Esszimmer", 4);
    Room *r5 = new Room("Flur", 5);
    Room *r6 = new Room("Kueche", 6);
    Room *r7 = new Room("Ausgangstür", 0);

  r1->North = r2; r1->East = r5;
  r2->South = r1; r2->East = r3;
  r3->West = r2;  r3->South = r5; r3->East = r4;
  r4->West = r3;  r4->South = r6;
  r5->West = r1;  r5->North = r3; r5->East = r6; r5->South = r7;
  r6->North = r4;  r6->West = r5;



  Room * here = r3;  //fängt bei Wohnzimmer an

  //game method
  here->move_to(here);

}
