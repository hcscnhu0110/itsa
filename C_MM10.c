#include <stdio.h>

//攝氏溫度轉華式溫度

int main(){
    double c;
    while(scanf("%lf", &c) != EOF){
        printf("%.1f\n", c * 9 / 5 + 32);
    }
}