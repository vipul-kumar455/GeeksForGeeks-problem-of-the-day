#include <bits/stdc++.h>
using namespace std;

void sol(string &s, string &p) {
    int n = s.size();
    int m = p.size();
    for(int i = 0; i <= n-m;) {
        int j;
        for(j = 0; j < m; j++) {
            if(p[j] != s[i+j]) {
                break;
            }
        }
        if(j == m) {
            cout << i << " ";
            i += j; // Update i to skip the matching substring
        } else if(j == 0) {
            i++; // No match, increment i by 1
        } else {
            i += j; // No complete match, skip the matching prefix
        }
    }
    cout << endl;
}

int main() {
    string s = "ababababcd";
    string p = "abab";
    sol(s, p);
    return 0;
}
