#include <stdio.h>

//計算總和、乘積、差、商和餘數

int main(){
    int x, y;
    while(scanf("%d %d", &x, &y) != EOF){
        printf("%d+%d=%d\n", x, y, x + y);
        printf("%d*%d=%d\n", x, y, x * y);
        printf("%d-%d=%d\n", x, y, x - y);
        if(x < 0){
            printf("%d/%d=%d...%d\n", x, y, x / y - 1, x % y + y);
        }
        else{
            printf("%d/%d=%d...%d\n", x, y, x / y, x % y);
        }   
    }
}