/*
编写一个程序，要求从文本文件in.txt读入所有整数（小于100个），排序输出到out.txt中。
输入输出示意如下：(第一行为输入文件内容，第二行为输出文件内容)
3 4 5 1 5 6 19 8
1 3 4 5 5 6 8 19
*/
#include <stdio.h>
void sort(int num[], int i);
int main(){
    FILE* in, *out;
    int num[100],i,j;
    if(fopen_s(&in,"in.txt","r")){
        printf("Cannot open in.txt\n");
        return 1;
    }
    if (fopen_s(&out,"out.txt","w")){
        printf("Cannot open out.txt\n");
        fclose(in);
        return 1;
    }
    for(i=0;i<100;i++){
        if((fscanf_s(in,"%d ",&num[i]))==EOF){
            break;
        }
    }
    fclose(in);
    sort(num,i);
    for(j=0;j<i;j++){
        fprintf_s(out,"%d ",num[j]);
    }
    fclose(out);
    return 0;
}
void sort(int num[],int i){
    int j,k,temp;
    for(j=0;j<i-1;j++){
        for(k=j+1;k<i;k++){
            if(num[j]>num[k]){
                temp=num[j];
                num[j]=num[k];
                num[k]=temp;
            }
        }
    }
}