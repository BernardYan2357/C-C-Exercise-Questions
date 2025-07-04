/*
编写一个C/C++程序依次从键盘输入2个整数，判断第一个整数是否能被第二个整除，
如果能够整除输出：能，否则输出：不能，如果输入的第二个数为0，则输出一个字：错。
【注意】输出文件应在当前路径下，即在程序中不能指定文件路径。任何数不能被0整除，
输入输出不能有多余的符号，其内容及格式示意如下（第一行为输入，第二行为在文件out.txt中的输出）：
11 6
不能
*/
#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    FILE*fp;
    fopen_s(&fp,"out.txt","wt");
    if(fp == NULL){
    return 1;
    } //打开文件失败判断不能少
    if(y!=0){
        if(x%y==0){
            fputs("能",fp);
        }
        else{
            fputs("不能",fp);
        }
    }
    else{
        fputs("错",fp);
    }
    fclose(fp); //关闭文件不能忘
    return 0;
}