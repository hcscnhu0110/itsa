#include <stdio.h>
#include <math.h>

//計算正方形面積

int main(){
    double input;
    while(scanf("%lf", &input) != EOF){
        printf("%.1f\n", floor(input * input * 10 + 0.5) / 10);       //以防浮點數四捨五入錯誤，取小數點後1位所以x10
    }
}