#include <stdio.h>

//遞迴程式練習

int f(int n){
    if(n == 0 || n == 1){
        return n + 1;
    }
    else{
        return f(n - 1) + f(n / 2);
    }
}

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        printf("%d\n", f(n));
    }
}