void array_swap(int data1[],int data2[],int element_count){
    for (int i = 0;i < element_count;i++){
        int hoge = data1[i];
        data1[i] = data2[i];
        data2[i] = hoge;
    }
    return;
}


int sort(int N,int data[][6],int mode){//sortする配列、どの要素でソートするか、要素数
    for (int i = N-1;i > 0;i--){
        for (int j = 0;j < i;j++){
            if (data[j][mode] > data[j+1][mode]) array_swap(data[j],data[j+1],6);
        }
    }
    return 0;
}


