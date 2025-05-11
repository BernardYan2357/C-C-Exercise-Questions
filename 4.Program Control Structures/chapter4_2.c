/*
3.编写一个程序，已知计算自然对数ex的公式如下：
e^x=1+x+x^2/2!+x^3/3!+...+x^n/n!+...
 输入x，计算输出自然对数e^x的近似值，要求累加的最后一项接近且不小于10^-6。输入输出示意如下：（第一行为输入，第二行为输出，输出保留2位小数）
1.0
2.72
*/
#include <stdio.h>
#include <math.h>
int main(){
    double x=0;
    double e=1.0;
    int i=1;
    int factorial=1;
    scanf("%lf",&x);
    while (pow(x,i)/factorial >= 1e-6){
        e+=pow(x,i)/factorial;
        i++;
        factorial*=i;
    }
    printf("%.2lf\n",e);
    return 0;
}
/*(写法二)
int main(){
    double s=1,temp,x;
    int i=1;
    scanf("%lf",&x);
    temp=1;
    while(temp>1e-6){
        temp=temp*x/i;//每一项都是前一项乘以x/i
        s=s+temp;
        i++;

    }
    printf("%.2f",s);
    return 0; 
}
*/