#include <iostream>
#include <queue>
using namespace std;


int main(){
 queue<int> q;
 int a;
 cin >> a;
 for(int i = 1; i <= a; i++ ){
     q.push(i);
 }
 for(int i = 0; i < a-1; i++){
     q.pop();
     q.push(q.front());
     q.pop();
 }
 cout << q.front() << endl;
}

