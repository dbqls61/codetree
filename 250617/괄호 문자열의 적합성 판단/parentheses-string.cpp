#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main() {
    cin >> str;

    stack<char> s;

    bool b = true;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(') {
            s.push('(');
            }
        else if (str[i] == ')') {
            if (s.empty()) {
                b = false;
                break;
            }
            else {s.pop();}
            }
    }
    
    if (!s.empty() || b == false) {cout << "No" << endl;}
    else {cout << "Yes" << endl;}

    return 0;
}
