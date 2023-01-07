#include <stdio.h>

//計算平方值與立方值

int main(){
    int x;
    while(scanf("%d", &x) != EOF){
        printf("%d %d %d\n", x, x * x, x * x * x);
    }
}