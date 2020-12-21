int mode5(int N,int data[][6],char name[][101]){//要素数,データ,名前のデータ
    int rank = 1;
    //これより上いじらない

    sort(N , data , 5);

    for(int i = N - 1; i >= 0; i--){
        int p = data[i][1]; 
        printf("順位:%d 平均点:%f 出席番号:%d 氏名:%s\n", rank , data[i][5] / 3.0 , data[i][0] , name[p]);
        rank++;
    }
    
    //これより下いじらない
    return 0;
}