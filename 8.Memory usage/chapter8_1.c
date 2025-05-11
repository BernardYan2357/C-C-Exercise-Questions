/*编写一个程序，动态分配5个整数的空间，输入5个整数，将其反向输出。
输入输出示意如下：（第一行为输入，第二行为输出）
1 3 5 2 4 
4 2 5 3 1
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int* p=calloc(5,sizeof(int));
    if (p==NULL){
        exit(0);
    }
    for(int i=0;i<5;i++){
        scanf("%d",p+i);
    }
    for(int i=4;i>=0;i--){
    printf("%d ",p[i]);
    }
    printf("\n");
    free(p);
    return 0;
}