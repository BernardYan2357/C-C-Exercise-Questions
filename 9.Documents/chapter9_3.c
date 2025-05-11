/*  
编写一个程序，要求从二进制文件in.dat读入所有整数（int型，小于100个），
排序输出到out.dat中。
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
    FILE *in, *out;
    int num[100];
    if(fopen_s(&in,"in.dat","rb")){
        printf("Cannot open in.dat\n");
        return 1;
    }
    int count=fread(num,sizeof(int),100,in);
    fclose(in);
    if (fopen_s(&out,"out.dat","wb")){
        printf("Cannot open out.dat\n");
        return 1;
    }  
    sort(num, count);  
    fwrite(num,sizeof(int),count,out);
    fclose(out);
    return 0;
}