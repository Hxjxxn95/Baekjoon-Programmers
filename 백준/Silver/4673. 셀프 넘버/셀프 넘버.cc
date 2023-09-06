#include <stdio.h>
int fun(int a){
   
    int b = a;
    while(a>0){
        b=b + (a%10);
        a= a/10;
    }
    return  b;
}

int main(){
  int arr[10001];
    for (int i = 1; i <10001; i++ ){
        if (fun(i)<10001){
            arr[fun(i)]= 1;
        }
    }
    for(int i = 1; i < 10001; i++){
        if(arr[i]!=1){
            printf("%d\n", i);
        }
    }
   
}