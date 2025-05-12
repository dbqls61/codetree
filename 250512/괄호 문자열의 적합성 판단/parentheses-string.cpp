#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> st;
    bool isValid = true;

    for (char c : s) {
        if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            if (st.empty()) {
                isValid = false;
                break;
            } else {
                st.pop();
            }
        }
    }

    if (!st.empty()) {
        isValid = false;
    }

    if (isValid) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }

    return 0;
}
