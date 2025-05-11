/* 
编写函数void jiami(char *ch)实现对小写字母的简单加密，
把当前输入的字母变成后面第3个字母（如a变成d），如果是最后三个字母x、y、z则分别变成a、b、c。在main函数中输入一个小写字母后，调用jiami函数，程序输出加密后的字母。
输入输出示例如下：（第一行为输入，第二行为输出）。
f
i
*/
#include <stdio.h>
void jiami(char *ch){
    if(*ch>='a' && *ch<'x'){
        *ch+=2;
    }
    else if(*ch=='x'){
        *ch='a';
    }
    else if(*ch=='y'){
        *ch='b';
    }
    else if(*ch=='z'){
        *ch='c';
    }
}
int main(){
    char ch[1];
    scanf("%s",ch);
    jiami(ch);
    printf("%s",ch);
    return 0;
}