#include <stdio.h>

//計算 i 次方的值

int main(){
    int i;
    while(scanf("%d", &i) != EOF){
        if(i > 31){
            printf("Value of more than 31\n");
        }
        else{
            printf("%d\n", 2 << (i - 1));
        }   
    }
}