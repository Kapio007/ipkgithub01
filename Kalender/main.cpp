#include <iostream>


using namespace std;



class Calendar {
public:
    static bool isLeap(int year){
        if (year % 400 == 0) return true; // sa neta imas ovo kako se vidi dal je prestupna godina
        if (year % 100 == 0) return false;
        return (year % 4 == 0);
    }
};

class Date {
private:
    int day;
    int month;
    int year;

    int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

public:
    Date(int d, int m, int y){
        this->day = d; // adresira objekat iz funkcije koje je pozvan
        this->month = m;// mislsis na atribut bas iz te klasse
        this->year = y;
    }

    int totalDays(){
        int res = 0;

        for (int y = 1; y < year; y++){
            res += 365;
            if (Calendar::isLeap(y)) res++;
        }

        for (int m = 1; m < month; m++){
            res += monthDays[m];
            if (m == 2 && Calendar::isLeap(year)) res++;
        }

        res += day;

        return res;
    }

    int daysDifference(Date other){
        return other.totalDays() - totalDays();
    }
};

int main()
{
    Date a(16, 8, 1999);
    Date b(21, 8, 2022);
    cout << a.daysDifference(b) << endl;
}
