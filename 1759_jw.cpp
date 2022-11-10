#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string str;
string temp;
bool visited[15];
void permutation(int start, int end) {
    if (start == end) {
        int a = 0, b = 0;
        for (auto o : temp) {
            if (o == 'a' || o == 'e' || o == 'i' || o == 'o' || o == 'u')
                a++;
            else
                b++;
        }
        if(a>0&&b>=2)
        cout << temp << '\n';

        return;
    }

    for (int i = 0; i < str.length(); i++) {
        if (temp == "") {
            temp += str[i];
            visited[i] = true;
            permutation(start + 1, end);
            temp.pop_back();
            visited[i] = false;
        }
        else if (temp[temp.length() - 1] < str[i]) {
            temp += str[i];
            visited[i] = true;
            permutation(start + 1, end);
            visited[i] = false;
            temp.pop_back();
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    cin.ignore();//버퍼를 비워줘야 다음 줄의 문자들이 정상적으로 입력됨 
    getline(cin, str);
    str.erase(remove(str.begin(), str.end(),' '), str.end());
    sort(str.begin(), str.end());
    //cout << str.length() << '\n';
    permutation(0, n);
}