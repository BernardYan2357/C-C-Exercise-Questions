/*输入一个整数， 求它的各位之和。例如：输入1234，输出10（1+2+3+4=10）。*/
#include <stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    printf("%d\n",sum);
    return 0;
}
/*
编写一个程序，已知回文数的逆序和正序一样，如：12321。输入一个正整数，判断该数是否为回文数并输出是或否。输入输出示意如下：（第一行为输入，第二行为输出）
1234321
是
*/
#include <stdio.h>
int main(){
    int a=0;//输入数
    int b=0;//反转数
    int c=0;//原数（用于比较）
    scanf("%d",&a);
    c=a;
    while(a>0){
        b=b*10+a%10;//b*10是为了将b的位数向左移动一位，从而放入新的一位a%10
        a=a/10;
    }
    if(c==b) printf("是\n");
    else printf("否\n");
    return 0;
}