#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int num;
    int max = 0;
    int arr[100]={0, };
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int x=0; x < n-2; x++){
        for(int y=x+1; y < n-1; y++){
            for(int z=y+1; z<n; z++){
                int num = arr[x] +arr[y]  +arr[z];
                if (num > max && num <= m){
                    max = num;
                }
            }
        }
    }
    printf("%d", max);
}