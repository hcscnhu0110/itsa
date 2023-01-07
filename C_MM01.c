#include <stdio.h>

//計算梯形面積

int main(){
    double x, y, h;
    while(scanf("%lf %lf %lf", &x, &y, &h) != EOF){
        printf("Trapezoid area:%.1f\n", (x + y) * h / 2);
    }
}