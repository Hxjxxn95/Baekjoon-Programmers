#include<stdio.h>

int main() {
	int fixed = 0;
	int non_fixed = 0;
	int price = 0;
	int result = 0;
	scanf("%d%d%d", &fixed, &non_fixed, &price);

	if (price > non_fixed) {
		result = fixed / (price - non_fixed);
		printf("%d",result + 1);
	}
		
	else
		printf("-1");

	return 0;
}
