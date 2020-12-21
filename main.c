#include <stdio.h>
#include <string.h>

#include "sort.h"
#include "mode1.h"
#include "mode2.h"
#include "mode3.h"
#include "mode4.h"
#include "mode5.h"

int data[101][6];
char name[101][101];
int main(void){
    printf("入力する学生の数を入力してください\n");
    int N;
    scanf("%d",&N);
    
    for (int i = 0; i < N; i++){
        printf("出席番号 氏名 国語の成績 数学の成績 英語の成績を空白区切りで入力して下さい\n");
        scanf("%d %s %d %d %d",&data[i][0], name[i],&data[i][2],&data[i][3],&data[i][4]);
        data[i][1] = i;
        data[i][5] = data[i][2] + data[i][3] + data[i][4];
    }


    while (1){
        printf("\n使用する機能を選択してください\n");
        printf("0 プログラムを終了\n");
        printf("1 出席番号順(昇順)に成績情報を一覧表示\n");
        printf("2 出席番号を入力すると,該当者の氏名と各科目の成績を表示\n");
        printf("3 氏名を入力すると,該当者の出席番号と各科目の成績を表示\n");
        printf("4 科目名を入力(選択)すると,成績順に順位,出席番号,氏名を一覧表示し,末尾にその科目の平均点を表示\n");
        printf("5 3科目の平均点の順に,順位,平均点,出席番号,氏名を一覧表示\n");

        int input;
        scanf("%d",&input);

        if (input == 0) break;

        if (input == 1){
            mode1(N,data,name);
        }

        if (input == 2){
            printf("選択する出席番号を入力してください\n");
            int attendance_number;
            scanf("%d",&attendance_number);
            
            mode2(N,data,name,attendance_number);
        }
        if (input == 3){
            printf("選択する氏名を入力してください\n");
            char selected_name[101];
            scanf("%s",selected_name);

            mode3(N,data,name,selected_name);
        }
        if (input == 4){
            printf("科目を選択してください\n");
            printf("1 国語\n2 数学\n3 英語\n");
            int course_title;
            scanf("%d",&course_title);

            mode4(N,data,name,course_title);
        }
        if (input == 5){
            mode5(N,data,name);
        }
        

    }
} 