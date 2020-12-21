int mode3(int N,int data[][6],char name[][101],char selected_name[101]){//要素数,データ,名前のデータ,選択した氏名 
    //これより上いじらない
    int flag=0;
    for(int i=0;i<N;i++){
        if(strcmp(selected_name,name[data[i][1]])==0){
            printf("出席番号:%d 国語:%d 数学:%d 英語:%d",data[i][0],data[i][2],data[i][3],data[i][4]);
            flag=1;
        }
    }
    if(flag==0) printf("この氏名は存在しません\n");
    //これより下いじらない
    return 0;
}
//char name[15]