/*
完成程序，该程序读入数据三角形的底边长和高，输出三角形面积，程序运行输入输出示意如下：（第1行为输入，第二行为输出，保留小数点后2位）
3 4
6
已有代码如下：
class CTriangle {
 double a;   //底边长
 double h;   //高
public:
 CTriangle();  //构造函数
 void ReadP();  //读入底边长和高
 double GetS(); //返回三角形面积
};
int main() {
 CTriangle t;
 t.ReadP();
 cout <<fixed << setprecision(2) << t.GetS() << endl;
 return 0;
}
要求：请完成类CTriangle的编写，不可以修改main函数。
*/
#include <iostream>
#include <iomanip>
using namespace std;
class CTriangle {
 double a;   //底边长
 double h;   //高
public:
 CTriangle(){};  //构造函数
 void ReadP(){
    cin>>a>>h;
 };  //读入底边长和高
 double GetS(){
    return 0.5*a*h;
 }; //返回三角形面积
};
int main() {
 CTriangle t;
 t.ReadP();
 cout << fixed << setprecision(2) << t.GetS() << endl;
 return 0;
}