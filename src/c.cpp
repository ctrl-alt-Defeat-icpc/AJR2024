#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 5;
const int oo = 1e9 + 5;

string a, b;
map<char, int> mp;
int idx1, idx2, n, m, ansSize;

void Main() {
    idx1 = idx2 = -1;
    ansSize = oo;

    cin >> a >> b;
    
    n = a.size(), m = b.size();
    for(int i = 1; i < n; i++)
        if(mp.find(a[i]) == mp.end())
            mp[a[i]] = i;

    for(int i = m - 2; i >= 0; i--)
        if(mp.find(b[i]) != mp.end() && mp[b[i]] + m - i < ansSize) {
            idx1 = mp[b[i]];
            idx2 = i;
            ansSize = idx1 + m - idx2;
        }

    if(idx1 == -1) cout << -1 << '\n';
    else {
        for(int i = 0; i < idx1; i++)
            cout << a[i];
        for(int i = idx2; b[i]; i++)
            cout << b[i];
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
        Main();
    return 0;
}