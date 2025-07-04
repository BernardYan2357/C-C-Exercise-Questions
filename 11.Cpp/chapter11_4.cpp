/*  
完成程序：以下程序的功能是输入一个整数数组，求其中偶数的平均值并输出，程序运行输入输出示意如下：（第1行为输入、第2行为输出，保留小数点后2位）
21 3 41 3 21 1 21 3 41 5 
无偶数
已有程序代码如下：
int main() {
 try {
  int x[10];
  for (int i = 0; i < 10; i++)
   cin >> x[i];
  cout << fixed << setprecision(2) << f(x, 10) << endl;
 }
 catch (const char* s) {
  cout << s << endl;
 }
 return 0;
}
要求：请合理使用异常处理，完成函数f的编写，不可以修改main函数。
*/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
double f(int* x,int n){
    double average;
    int sum,count=0;
        for(int i=0;i<n;i++){
            if(x[i]%2==0){
            sum+=x[i];
            count++;
            }
        }
        if(count==0){
            throw"无偶数";
        }
        average=(double)sum/count;
        return average;
}
int main() {
 try {
  int x[10];
  for (int i = 0; i < 10; i++)
   cin >> x[i];
  cout << fixed << setprecision(2) << f(x, 10) << endl;
 }
 catch (const char* s) {
  cout << s << endl;
 }
 return 0;
}