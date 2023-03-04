#include <bits/stdc++.h>
using namespace std;

void sol(string &s,string &p) {
    int n = s.size();
    int m = p.size();
    for(int i = 0; i <= n-m; i++) {
        int j;
        for(j = 0; j < m; j++) {
            if(p[j] != s[i+j]) {
                break;
            }
        }
        if(j == m) {
            cout << i << " ";
        }
    }
    cout << endl; // Add newline character
}

int main() {
    string s = "ababababcd";
    string p = "abab";
    sol(s, p);
    return 0;
}
