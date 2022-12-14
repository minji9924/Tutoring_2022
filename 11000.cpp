#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int N;
vector<pair<int, int>> list;

bool cmp_list(pair<int, int>x, pair<int, int>y) {
	// first 작은 순, second 작은 순
	if (x.first == y.first) return x.second < y.second;
	else return x.first < y.first;
}

struct cmp_pq {
	// second 작은 순
	bool operator()(pair<int, int>x, pair<int, int> y) {
		return x.second > y.second;
	}
};

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int S, T;
		cin >> S >> T;
		list.push_back({ S, T });
	}

	sort(list.begin(), list.end(), cmp_list);

	priority_queue<pair<int, int>, vector<pair<int, int>>, cmp_pq> pq;
	pq.push(list[0]);

	for (int i = 1; i < list.size(); i++) {
		if (list[i].first >= pq.top().second) {
			pq.pop();
			pq.push(list[i]);
		}
		else {
			pq.push(list[i]);
		}
	}

	int ans = pq.size();
	cout << ans << '\n';
}
[출처] [그리디] 백준 11000번 - 강의실 배정 C++ 풀이|작성자 수성