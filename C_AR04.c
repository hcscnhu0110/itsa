#include <stdio.h>
#include <string.h>

//邊緣偵測

int main(){
    int N;
    int n, m;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d %d", &n, &m);
        int map[n + 2][m + 2];
        memset(map, 0, sizeof(map));
        for(int j = 1; j < n + 1; j++){                             //把陣列放大，從(1,1)開始放，以防之後檢查周圍錯誤
            for(int k = 1; k < m + 1; k++){
                scanf("%d", &map[j][k]);
            }
        }

        for(int j = 1; j < n + 1; j++){
            for(int k = 1; k < m + 1; k++){
                if((map[j][k] && map[j + 1][k] && map[j - 1][k] && map[j][k + 1] && map[j][k - 1]) || !map[j][k]){
                    printf("_ ");  
                }
                else{
                    printf("0 ");
                }
            }
            printf("\n");
        }
        if(i != N - 1){                                                  //最後一筆不能換行不然會錯
            printf("\n");
        }
    }
    return 0;
}