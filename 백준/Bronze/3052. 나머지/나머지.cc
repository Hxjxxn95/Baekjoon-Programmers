#include <stdio.h>

    int main(){
        int cnt[42] = { 0, };
        int arr[10];
        int sum = 0;
        for (int i = 0; i < 10; i++) {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < 10; i++) {
            cnt[arr[i] % 42]++;
        }
        for (int j; j < 42; j++) {
            if (cnt[j] != 0) {
                sum++;
            }
        }
        printf("%d", sum);
    }