/*  
完成程序：以下程序的功能是输入数据类型（1代表整数，2代表浮点数，3代表字符），在输入10个数据后从大到小排序输出。程序运行输入输出示意如下：（第1行为输入、第2行为输出）
3 q w e r r t f g h f h
w t r r q h g f f e
已有程序代码如下：
int main() {
 void* p;
 int i;
 cin >> i;
 switch (i) {
 case 1:
  p = new int[10];
  Sort((int*)(p), 10);
  delete[](int*)p;
  break;
 case 2:
  p = new double[10];
  Sort((double*)(p), 10);
  delete[](double*)p;
  break;
 case 3:
  p = new char[10];
  Sort((char*)(p), 10);
  delete[](char*)p;
  break;
 default:
  cout << "Invalid input";
  return 0;
 }
 return 0;
}
要求：请合理使用函数模板，完成函数模板Sort的编写，不可以修改main函数。
*/
#include <iostream>
#include <fstream>
using namespace std;
template<typename T>
void Sort(T* p, int n){
    for(inti=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(p[j]<p[j+1]){
                T t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
int main() {
 void* p;
 int i;
 cin >> i;
 switch (i) {
 case 1:
  p = new int[10];
  Sort((int*)(p), 10);
  delete[](int*)p;
  break;
 case 2:
  p = new double[10];
  Sort((double*)(p), 10);
  delete[](double*)p;
  break;
 case 3:
  p = new char[10];
  Sort((char*)(p), 10);
  delete[](char*)p;
  break;
 default:
  cout << "Invalid input";
  return 0;
 }
 return 0;
}