#include <iostream>
using namespace std;

typedef struct Node {
	int data;
	Node* next;
}Node;

Node* pop(int k, Node* p) {
	for (int j = 1; j < k; j++) { // 현위치에서 k-1 번째 노드로 이동
		p = p->next;	
	} // p: k-1번째 노드

	Node* q = p->next;	// q: 삭제할 k번째 노드
	p->next = q->next;	// p의 다음 노드를 자신의 다음다음 노드로 설정
	int num =q->data;
	cout << num;	// 삭제할 노드의 값 출력
	delete q;	// 노드 삭제

	return p;	// 삭제한 노드의 이전 노드 반환 
}

int main() {
	int N, K;	// 전체 인원 수, 건너띄는 인원 수
	cin >> N >> K;

	Node* temp = new Node;
	Node* head = new Node;
	
	temp->data = 1;
	head->next = temp;

	int num = 2;
	while(true) {	// 1~N 노드 만들고 서로 연결하기
		Node* node = new Node;
		node->data = num;
		temp->next = node;
		if (num > N) break;
		num++;
		temp = temp->next;
	}

	temp->next = head->next;	// 마지막 노드 첫번째 노드(head)와 연결하기

	cout << "<";
	head = pop(K, head); // 첫번째 노드

	for (int i = 1; i < N; i++) {
		cout << ", ";
		head = pop(K, head);	// k칸 후의 노드 pop 해주고 k-1칸의 노드 return 해주기
	}
	cout << ">";

	return 0;

}
