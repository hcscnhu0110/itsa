#include <stdio.h>

//購票計算

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        int money[3] = {10, 5, 1};                              //換成10、5、1塊
        for(int i = 0; i < 3; i++){
            printf("NT%d=%d\n", money[i], n / money[i]);
            n %= money[i];
        }
    }
}