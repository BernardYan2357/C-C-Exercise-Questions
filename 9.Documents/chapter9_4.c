/*
编写一个程序，要求从二进制文件in.dat读入所有整数（int型，小于100个），
从小到大排序后写回原来文件中。
*/
#include <stdio.h>
void sort(int *num, int n){
    int i,j,t;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(num[i]>num[j]){
                t=num[i];
                num[i]=num[j];
                num[j]=t;
            }
        }
    }
}
int main(){
    FILE *in;
    int num[100],count;
    if((fopen_s(&in,"in.dat","rb+"))){
        printf("Cannot open in.dat\n");
        return 1;
    }
    count=fread(num,sizeof(int),100,in);//注意此时指针在文件末尾
    if(count==0){
        printf("No data in file\n");
        fclose(in);
        return 1;
    }
    sort(num,count);
    rewind(in);//将指针重新指向文件开头
    fwrite(num,sizeof(int),count,in);
    fclose(in);
    return 0;
}