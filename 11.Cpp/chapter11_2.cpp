/*  
完成程序：以下程序的功能是输入三个整数，输出其中最大数。程序运行输入输出示意如下：（第1行为输入、第2行为输出）
9 15 1
15
已有程序代码如下：
int main(){
 int x, y, z;
 cin >> x >> y >> z;
 f(f(x, y), z);
 cout << x << endl;
 return 0;
}
要求：请合理使用引用（&），完成f函数的编写，不可以修改main函数。
*/
#include <iostream>
#include <fstream>
using namespace std;
int& f(int &a,int &b){
    if(a<b){
        a=b;
    }
    return a;
}
int main(){
 int x, y, z;
 cin >> x >> y >> z;
 f(f(x, y), z);
 cout << x << endl;
 return 0;
}