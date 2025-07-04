/*
完成程序，该程序读入3*4矩阵，根据该矩阵生成新矩阵，生成规则为：新矩阵元素取值为原矩阵中相同位置元素的左、右两个相邻元素前后拼接后形成的整数（左邻元素在前，右邻元素在后)。
规定最左（右)列元素的左（右)邻元素为该元素所在行的最右（左)侧的元素。输出新生成的矩阵。
程序运行输入输出示意如下：（第1-3行为输入，第4-6行为输出）
1 2 3 4
5 6 7 8
9 8 2 4
42 13 24 31
86 57 68 75
48 92 84 29
已有代码如下：
class CArray {
 int a[3][4];
 int b[3][4];
public:
 CArray(int t[][4], int n); //构造函数，利用数组t初始化数组a
 int fun1(int t1, int t2); //返回t1、t2拼接后形成的整数（t1在前，t2在后)
 void fun2();    //按题意生成数组b（调用fun1实现拼接）
 void print();    //输出数组b
};
int main()
{
 int t[3][4];
 for (int i = 0; i < 3; i++)
  for (int j = 0; j < 4; j++)
   cin >> t[i][j];
 CArray test(t, 4);
 test.fun2();
 test.print();
}
要求：请完成类CArray的编写，不可以修改main函数。
*/
#include <iostream>
#include <iomanip>
using namespace std;
class CArray {
    int a[3][4];
    int b[3][4];
public:
CArray(int t[][4], int n){
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 4; ++j)
            CArray::a[i][j] = t[i][j];
} //构造函数，利用数组t初始化数组a
int fun1(int t1, int t2){
    int temp = t2;
    int c = 1;
    while (temp > 0) {
         c *= 10;
         temp /= 10;
    }
     return t1 * c + t2;
} //返回t1、t2拼接后形成的整数（t1在前，t2在后)
void fun2(){
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) { // 计算左邻和右邻的下标（循环）
            int left = (j == 0) ? 3 : j - 1;
            int right = (j == 3) ? 0 : j + 1;
            b[i][j] = fun1(a[i][left], a[i][right]);
        }
    }
}; //按题意生成数组b（调用fun1实现拼接）
void print(){
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << b[i][j];
            if (j < 3) cout << " ";
        }
        cout << endl;
    }
}; //输出数组b
};
int main()
{
 int t[3][4];
 for (int i = 0; i < 3; i++)
  for (int j = 0; j < 4; j++)
   cin >> t[i][j];
 CArray test(t, 4);
 test.fun2();
 test.print();
}