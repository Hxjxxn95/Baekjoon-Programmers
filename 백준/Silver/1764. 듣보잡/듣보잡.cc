#include <iostream>
#include <set>
#include <string>

using namespace std;
int m, n;

int main() {
   ios_base::sync_with_stdio(0); //입출력 빠르게
   cin.tie(0);
   cout.tie(0);
   
   cin >> n >> m;
   
   set<string> s1; //set s1 선언

   for (int i = 0; i < n; i++) {
      string st;
      cin >> st; //문자열 입력받아서
      s1.insert(st); //set s1에 넣어주기
  }
  set<string> s2; //set s2 선언
  for (int i = 0; i < m; i++) {
     string st;
     cin >> st;
     if (s1.find(st) != s1.end()) { //set s1안에 문자열 st가 존재한다면
        s2.insert(st); //set s2에 문자열 st 추가
     }
   }
   cout << s2.size() << "\n";
   for (auto i : s2) {
       cout << i << "\n"; //set s2의 모든 원소 출력
   }
}


