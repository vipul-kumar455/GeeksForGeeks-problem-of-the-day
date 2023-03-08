#include <bits/stdc++.h>
using namespace std;

struct mystack {
    vector<int> v;

    void push(int x) {
        v.push_back(x);
    }

    int pop() {
        if (v.empty()) {
            cout << "Stack is empty\n";
            return -1; // return some invalid value to indicate error
        }
        int res = v.back();
        v.pop_back();
        return res;
    }

    int peek() {
        if (v.empty()) {
            cout << "Stack is empty\n";
            return -1; // return some invalid value to indicate error
        }
        return v.back();
    }

    int size() {
        return v.size();
    }

    bool isempty() {
        return v.empty();
    }
};

int main() {
    mystack s;
    s.push(1);
    s.push(3);
    s.push(3);
    cout << "Current size of stack: " << s.size() << '\n';
    cout << "Top element of stack: " << s.peek() << '\n';
    s.pop();
    cout << "After popping, top element of stack: " << s.peek() << '\n';
    return 0;
}
