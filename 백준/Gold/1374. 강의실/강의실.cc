#include <iostream>
#include <queue>
#include <algorithm>
 
using namespace std;
 
typedef pair<int, int> pii;
 
int n;
vector<pii> lec;//강의
priority_queue <int, vector<int>, greater<int>> pq;//강의 종료시간
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
 
	cin >> n;
 
	for (int i = 0; i < n; i++) {
		int n, s, e;
		cin >> n >> s >> e;
		lec.push_back(pii(s, e));
	}
 
	sort(lec.begin(), lec.end());//시작시간이 빠른것부터 시작
 
	int ans = 0;
 
	for (int i = 0; i < n; i++) {
		//새로운 강의의 시작시간이 진행중인 강의의 종료시간과 같거나 크면
		while (!pq.empty() && pq.top() <= lec[i].first) {
			pq.pop();
		}
		pq.push(lec[i].second);//강의의 종료시간
		int size = pq.size();//필요한 강의실의 수
		ans = max(ans, size);
	}
 
	cout << ans << "\n";
	return 0;
}