#include <iostream>
using namespace std;

int daysInMonth[13] = {
    0, 31, 28, 31, 30, 31, 30,
    31, 31, 30, 31, 30, 31
};

string dayNames[7] = {
    "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"
};

int getDayCount(int month, int day) {
    int total = 0;
    for (int i = 1; i < month; i++) {
        total += daysInMonth[i];
    }
    total += day;
    return total;
}

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int base = getDayCount(m1, d1);
    int target = getDayCount(m2, d2);
    int diff = (target - base) % 7;

    // 음수 방지
    if (diff < 0) diff += 7;

    cout << dayNames[diff] << endl;

    return 0;
}
