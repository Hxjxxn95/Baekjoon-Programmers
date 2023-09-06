#include <stdio.h>

int fun(int a){
    if(a == 0) return 0;
    else return a%10+fun(a/10);
}

int main(){
    int n, n2, min;
    
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        if((i+fun(i))==n){min = i;
                         break;}
        else min = 0;
    }
    printf("%d", min);
    
}