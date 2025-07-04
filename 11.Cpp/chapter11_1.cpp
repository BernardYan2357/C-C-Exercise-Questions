/*  
完成程序：以下程序的功能是输入一个整数，输出该数是偶数还是奇数，程序运行输入输出示意如下：（第1行为输入、第2行为输出）
9
9是奇数
已有程序代码如下：
int main() {
 int x;
 cin >> x;
 if (x % 2 == 0) {
  f(x, "偶数");
 } else 
  f(x);
 return 0;
}
要求：请合理使用函数缺省参数，完成f函数的编写，不可以修改main函数。
*/
#include <iostream>
#include <fstream>
using namespace std;
void f(int x,string s){
    cout<<x<<"是"<<s<<endl;
}
void f(int x){
    cout<<x<<"是奇数"<<endl;
}
int main() {
    int x;
    cin>>x;
    if(x%2==0){
        f(x, "偶数");
    } 
    else 
        f(x);
    return 0;
}