#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void reverseQueue(queue<int>& q)
{
    stack<int> s;
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(4);
    q.push(6);
    q.push(2);
    q.push(9);
    reverseQueue(q);
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
