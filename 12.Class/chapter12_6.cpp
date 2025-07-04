/*	
完成程序：编写两个重载函数swap分别实现对两个整数和浮点数的交换功能，该程序通过main函数读入2个整数
和2个实数，调用函数swap分别对它们进行交换，程序运行输入输出示意如下：
5.6 7.7 3 26
 7.7,5.6,26,3
 main函数的源代码如下：
int main(){
 int a, b;
 double c, d;
 cin >> a >> b >> c >> d;
 swap(a, b);
 swap(c, d);
 cout << a << "," << b << "," << c << "," << d << endl;
 return 0;
 }
要求：完成程序，可以添加代码，但不能修改已给出的代码(注意标识符的大小写)。
*/
#include <iostream>
using namespace std;
void swap(int &a,int &b){
	int t;// 使用引用参数来交换整数
	t=a;
	a=b;
	b=t;
}
void swap(double &a,double &b){
	double t; // 使用引用参数来交换浮点数
	t=a;
	a=b;
	b=t;
}
int main(){
	int a, b;
	double c, d;
	cin >> a >> b >> c >> d;
	swap(a, b);
	swap(c, d);
	cout << a << "," << b << "," << c << "," << d << endl;
	return 0;
}
