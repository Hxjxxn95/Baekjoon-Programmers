#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		float a;
		float arr[1000];
		float avr = 0;
		int b = 0;
		scanf("%f", &a);
		for (int j = 0; j < a; j++) {
			scanf("%f", &arr[j]);

		}
		for (int j = 0; j < a; j++) {
			avr += arr[j];
		}
		avr = avr/a;
		for (int j = 0; j < a; j++) {
			if (avr < arr[j]) {
				b++;
			}
		}
		printf("%.3f%%\n",(float) b*100/a);
	}
}