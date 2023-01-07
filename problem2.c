#include <stdio.h>

// 英哩轉公里

int main(){
    int mile;
    double km;
    while(scanf("%d", &mile) != EOF){
        km = mile * 1.6;
        printf("%.1f\n", km);
    }
}