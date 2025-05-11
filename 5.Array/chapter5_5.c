/*  
编写一个程序，输入一个长度小于1000的字符串（每个字符串以半角‘.’结束，字符串内可能有空格和换行符），
将其中的小写字母转换成大写字母后输出。输入输出示意如下：（第1行为输入，第2行为输出）
Aav98 c!F
aBc.
AAV98 C!F
ABC.
*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    int i=0;
    char c;
    //输入字符串直到遇到 '.'
    while((c=getchar())!='.'){
        str[i]=c;//用一个中间量c来接收输入的字符，因为判断式中getchar已经执行过了
        i++;
    } 
    str[i]='.';//将最后一个字符设为'.',因为上面的循环在遇到'.'之后就结束了
    str[i+1]='\0';//将字符串的最后一个字符设为'\0'
    //将小写字母转换成大写字母
    for(i=0;i<strlen(str);i++){
        if('a'<=str[i]&&str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    printf("%s\n",str);
    return 0;
}