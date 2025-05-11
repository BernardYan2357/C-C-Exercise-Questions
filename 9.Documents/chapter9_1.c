/*  
编写一个程序，要求读入文本文件in.txt，将文件中小写字母改成大写。输出到out.txt中。输入输出示意如下：(第一行为输入文件内容，第二行为输出文件内容)
ad,6f
AD,6F
*/
#include <stdio.h>
int main(){
    FILE* in,* out;
    char ch;
    if(fopen_s(&in,"in.txt","r")){
        printf("Cannot open in.txt\n");
        return 1;
    }
    if (fopen_s(&out,"out.txt","w")){
        printf("Cannot open out.txt\n");
        fclose(in);
        return 1;
    }
    while((ch=fgetc(in))!=EOF){
        if(ch>='a'&&ch<='z'){
            ch=ch-32;
        }
        fputc(ch,out);
    }
    fclose(in);
    fclose(out);
    return 0;
}