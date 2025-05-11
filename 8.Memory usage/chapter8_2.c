/*编写一个程序，动态分配10个整数的空间并输入10个整数，求最大数和最小数。 输入输出示意如下：（第一行为输入，第二行为输出）
3 2 1 4 5 6 8 7 9 11 
11 1
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j;
    int *p=calloc(10,sizeof(int));
    for(i=0;i<10;i++){
        scanf("%d",p+i);
    }
    for(i=0;i<10;i++){
        for(j=0;j<9-i;j++){
            if(*(p+j)>*(p+j+1)){
                int temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
    printf("%d %d\n",*(p+9),*(p+0));
    free(p);
    return 0;
}