#include <stdio.h>

//計算三角形面積

int main(){
    double x, y;
    while(scanf("%lf %lf", &x, &y) != EOF){
        printf("%.1f\n", x * y / 2);
    }
}