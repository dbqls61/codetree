#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 4 != 0) return false;
    if (year % 100 == 0 && year % 400 != 0) return false;
    return true;
}

int getDaysInMonth(int year, int month) {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30,
                          31, 31, 30, 31, 30, 31 };
    if (month == 2 && isLeapYear(year)) return 29;
    return daysInMonth[month - 1];
}

string getSeason(int month) {
    if (3 <= month && month <= 5) {return "Spring";}
    if (6 <= month && month <= 8) {return "Summer";}
    if (9 <= month && month <= 11) {return "Fall";}
    return "Winter";
}

int main() {
    int Y, M, D;
    cin >> Y >> M >> D;

    if (M < 1 || M > 12 || D < 1 || D > 31) {
        cout << -1 << endl;
        return 0;
    }

    int maxDay = getDaysInMonth(Y, M);
    if (D > maxDay) {
        cout << -1 << endl;
        return 0;
    }

    cout << getSeason(M) << endl;
    return 0;
}