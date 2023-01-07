#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//一維陣列反轉 I

int main(){
    char input[300];
    while(gets(input) != NULL){
        int num[110] = {0};
        const char *delim = " ";
        char *piece;
        piece = strtok(input, delim);

        int count = 0;
        while(piece != NULL){
            num[count++] = atoi(piece);
            piece = strtok(NULL, delim);
        }
        
        printf("%d", num[count - 1]);
        for(int i = count - 2; i >= 0; i--){
            printf(" %d", num[i]);                          //最後不能空白
        }
        printf("\n");
    }
    return 0;
}