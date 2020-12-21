int mode2(int N,int data[][6],char name[][101],int attendance_number){//要素数,データ,名前のデータ,出席番号 
    //これより上いじらない
    int flag=0;
    for(int i=0;i<N;i++){
        if(data[i][0]==attendance_number){
            printf("氏名:%s 国語:%d 数学:%d 英語:%d\n",name[data[i][1]],data[i][2],data[i][3],data[i][4]);
            flag = 1;
        }
    }
    if(flag==0) printf("この出席番号は存在しません\n");

    //これより下いじらない
    return 0;
}