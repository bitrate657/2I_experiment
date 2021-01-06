#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "sort.h"

int data[101][6];
char name[101][101];
int main(void){
    // int test[100][5];
    // for (int i = 0;i < 5;i++){
    //     test[0][i] = i;
    //     test[1][i] = 5 - i;
    // }
    // //array_swap(test[0],test[1],5);
    // for (int i = 0;i < 2; i++){    
    //     for(int j = 0;j < 5;j++){
    //         printf("%d",test[i][j]);
    //     }
    //     printf("\n");
    // }

    // int data[4][6] = {{1,2,3,4,5,10},{5,4,3,2,1,11},{1,4,3,4,2,1},{6,10,3,4,20,0}};
    // sort(data,5,4);
    // for (int i = 0;i < 4;i++){
    //     for(int j = 0;j < 6;j++){
    //         printf("%d ",data[i][j]);
    //     }
    //     printf("\n");
    // }
    srand(time(NULL));
    int flag = 1;

    for (int hoge = 0;hoge < 100;hoge++){
        int N = rand() % 101;
        
        for (int i = 0;i < N;i++){
            for (int j = 0;j < 5;j++){
                data[i][j] = rand() % (j==0?1025:101);
                data[i][5] = data[i][2] + data[i][3] + data[i][4];
            }
        }
        
        for (int mode = 0;mode < 6;mode++){
            sort(N,data,mode);
            
            for (int i = 0;i < N - 1;i++){
                if (data[i][mode] > data[i+1][mode]) flag = 0;
            }
        }
    }
    printf("%s\n",flag?"test_passed":"test_failed");
    
    return 0;
}