/*
编写函数int prime(int n)，判断一个正整数是否为素数。
并在main函数中输入一个正整数，调用prime函数后，根据返回值输出“是”或“否”。输入输出示例如下：（第一行为输入，第二行为输出）。
17 
是 
*/
#include <stdio.h>
int prime(int n){
    int i;
    if(n <= 1){
        return 0;
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
        return 1;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    if(prime(n)==1){
        printf("是");
    }
    else{
        printf("否");
    }
    return 0;
}