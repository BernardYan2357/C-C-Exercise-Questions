/*  
假设有一个英文文本文件in.txt，编写程序，读取其内容，并将其中的大写字母转为小写字母，小写字母转为大写字母，其余不变,转换后的结果写入到文件out.txt中。
(1)假设in.txt文件在当前目录（和源程序在同一目录）下。
(2)假设out.txt文件存放在当前目录（和源程序在同一目录）下。
文件示例如下：
[FILE=in.txt]
HELLO,everybody,123$%2w4,What's your name?
[FILE=out.txt]
hello,EVERYBODY,123$%2W4,wHAT'S YOUR NAME?
*/
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fin, *fout;
    int ch;
    fin = fopen("in.txt", "r");
    if (fin == NULL) return 1;
    fout = fopen("out.txt", "w");
    if (fout == NULL) {
        fclose(fin);
        return 1;
    }
    while ((ch = fgetc(fin)) != EOF) {
        if (isupper(ch))
            ch = tolower(ch);
        else if (islower(ch))
            ch = toupper(ch);
        fputc(ch, fout);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}