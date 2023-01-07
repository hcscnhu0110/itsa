#include <stdio.h>

//計算兩數和的平方值

int main(){
    int x, y;
    while(scanf("%d %d", &x, &y) != EOF){
        printf("%d\n", (x + y) * (x + y));
    }
}