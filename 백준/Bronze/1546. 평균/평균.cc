#include <stdio.h>

int main() {
    float arr[1000];
    int n;
    float max = 0;
    float sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);

    }
    for (int i = 0; i < n; i++) {
        if (max <= arr[i]) {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        sum += arr[i] / max * 100;
    }
    printf("%f", sum / n);
}