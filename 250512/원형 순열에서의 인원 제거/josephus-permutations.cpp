#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    queue<int> q;

    // 1번부터 N번까지 사람 번호를 큐에 넣기
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    while (!q.empty()) {
        // K-1번 앞 사람을 뒤로 보내기
        for (int i = 0; i < K - 1; i++) {
            q.push(q.front());
            q.pop();
        }

        // K번째 사람 제거
        cout << q.front();
        q.pop();

        if (!q.empty()) {
            cout << " ";
        }
    }

    return 0;
}
