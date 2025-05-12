#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> q;

    while (N--) {
        string command;
        cin >> command;

        if (command == "push") {
            int x;
            cin >> x;
            q.push(x);
        }
        else if (command == "pop") {
            if (q.empty()) {
                cout << -1 << '\n';
            } else {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (command == "size") {
            cout << q.size() << '\n';
        }
        else if (command == "empty") {
            cout << (q.empty() ? 1 : 0) << '\n';
        }
        else if (command == "front") {
            if (q.empty()) {
                cout << -1 << '\n';
            } else {
                cout << q.front() << '\n';
            }
        }
    }

    return 0;
}
