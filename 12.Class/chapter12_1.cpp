/*  
程序改错：以下程序的功能是输入一个整数并输出它的平方，程序运行输入输出示意如下：（第1行为输入、第2行为输出）
100
10000
含错误的源程序如下：
#include<iostream>
using namespace std;
class CEx {
 int x;
public:
 void CEx(int x) {
  this->x = x*x;
 }
 void Show() {
  cout << x << endl;
 }
};
int main() {
 CEx* p;
 int x;
 cin >> x;
 p = new CEx(x);
 p->Show();
 delete p;
 return 0;
}
要求：改正程序中错误，可以修改语句中的一部分内容,但不允许添加新的语句,也不能删除整条语句。

*/
#include<iostream>
using namespace std;
class CEx {
 int x;
public:
 CEx(int x) { //构造函数不能写void
  this->x = x*x;
 }
 void Show() {
  cout << x << endl;
 }
};
int main() {
 CEx* p;
 int x;
 cin >> x;
 p = new CEx(x); //构造时要传入参数x
 p->Show();
 delete p;
 return 0;
}