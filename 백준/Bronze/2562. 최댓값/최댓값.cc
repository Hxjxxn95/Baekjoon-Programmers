#include <stdio.h>

int main() {
	

	int arr[9];
	int max = 0;
	int idx = 0;
	
	for (int i = 0; i < 9; i++) {
		int a;
		scanf("%d", &a);
		arr[i] = a;
	}
	for (int i = 0; i < 9; i++) {
		if (max <= arr[i]) {
			max = arr[i];
			idx = i;
		}
	}

	printf("%d\n%d", max, idx + 1);
	




}