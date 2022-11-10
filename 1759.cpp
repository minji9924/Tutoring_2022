#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int L, C;
vector<char> v;
vector<char> res;

bool check() {
    int moum = 0;
    for (int i = 0; i < L; i++) {
        if (res[i] == 'a' || res[i] == 'e' || res[i] == 'i' || res[i] == 'o' || res[i] == 'u') moum++;
    }
    if (moum >= 1 && L-moum >= 2) return true;
    return false;
}

void dfs(int d) {
    if ((int)res.size() == L) {
        if (check()) {
            for (int k = 0; k < L; k++ ) cout << res[k];
            cout << '\n';
        }
        return;
    }
    for (int i = d; i < C; i++){
        res.push_back(v[i]);
        dfs(i+1);
        res.pop_back();
    }
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cin >> L >> C;
    for (int i = 0; i < C; i++) {
        char tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    dfs(0);
}