int mode1(int N,int data[][6],char name[][101]){
    
    sort(N,data,0);//出席番号順にソート 

    for (int i = 0;i < N;i++){
        printf("出席番号:%d 氏名:%s 国語:%d 数学:%d 英語:%d\n",
            data[i][0],name[data[i][1]],data[i][2],data[i][3],data[i][4]);

    }
    return 0;
}