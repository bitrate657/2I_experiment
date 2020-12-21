int mode4(int N,int data[][6],char name[][101],int course_title){//要素数,データ,名前のデータ,科目名
    //course_titleが1なら国語,2なら数学,3なら英語の成績
    
    int rank = 1;
    int total_score = 0;

    //これより上いじらない
    course_title++;
    sort(N , data , course_title );
    for(int i = N - 1; i >= 0 ; i--){
        int p = data[i][1];
        printf("順位:%d 出席番号:%d 氏名:%s \n", rank , data[i][0] , name[p]);
        rank++;
        total_score += data[i][course_title];
    }
    double average;
    average = total_score / (double)N;
    printf("平均点:%f\n", average);
     
    //これより下いじらない
    return 0;
}