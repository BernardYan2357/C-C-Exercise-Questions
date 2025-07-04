/*
程序改错：以下程序的功能是输入一个圆柱体的底面半径和高并输出它的表面积，程序运行输入输出示意如下：（第1行为输入、第2行为输出,要求保留小数点后2位）
3 4
131.88
含错误的源程序如下：
#include<iostream>
using namespace std;
#define PI 3.14
class CCircle {
protected:
 double r;
public:
 CCircle(double r) {
  this->r = r;
 }
 virtual ~CCircle() {
 }
 double GetS() {
  return PI * r * r;
 }
};
class CCylinder : public CCircle {
 double h;
public:
 CCylinder(double r, double h) :CCircle(r) {
  this->h = h;
 }
 ~CCylinder() : ~CCircle() {
 }
 double GetS() {
  return 2*PI*r*h + GetS()*2;
 }
};
int main() {
 CCylinder* p;
 double x, y;
 cin >> x >> y;
 p = new CCircle(x, y);
 cout << p->GetS() << endl;
 delete p;
 return 0;
}
要求：改正程序中错误，但CCircle类不可修改，可以修改其它部分，可以修改语句中的一部分内容,但不允许添加新的语句,也不能删除整条语句。
*/
#include<iostream>
using namespace std;
#define PI 3.14
class CCircle {
protected:
 double r;
public:
 CCircle(double r) {
  this->r = r;
 }
 virtual ~CCircle() {
 }
 double GetS() {
  return PI * r * r;
 }
};
class CCylinder : public CCircle {
 double h;
public:
 CCylinder(double r, double h) :CCircle(r) {
  this->h = h;
 }
 ~CCylinder() { //子类析构函数无需加父类声明
 }
 double GetS() {
  return 2*PI*r*h + CCircle::GetS()*2; //必须明确是CCircle的GetS函数，否则会导致无限迭代
 }
};
int main() {
 CCylinder* p;
 double x, y;
 cin >> x >> y;
 p = new CCylinder(x,y); //调用类应为子类
 cout << p->GetS() << endl;
 delete p;
 return 0;
}