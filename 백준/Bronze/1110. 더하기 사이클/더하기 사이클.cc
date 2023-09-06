#include <stdio.h>

int main() {
	int m, n;
	scanf("%d", &m);
	int cnt = 0;
	
		n = m;
		do {
			n = (n % 10) * 10 + (n / 10 + n % 10) % 10 ;
			cnt++;

		}

		while (m != n);
		printf("%d", cnt);
	
}
