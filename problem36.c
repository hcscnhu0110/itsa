#include <stdio.h>

//平、閏年判定

int main(){
    int year;
    while(scanf("%d", &year) != EOF){
        if(!(year % 4)){
            if(year % 100){
                printf("Bissextile Year\n");                //可被4整除不能被100整除即閏年
            }
            else{
                if(year % 400){
                    printf("Common Year\n");                //可被4、100整除，但不能被400整除即平年
                }
                else{
                    printf("Bissextile Year\n");            //可被4、100、400整除即閏年
                }
            }
        }
        else{
            printf("Common Year\n");                        //不可被4整除即平年
        }
    }
}