/*
完成程序，该程序读入一个字符串，将字符串连接在已有字符串“ABC”的后面并输出，程序运行输入输出示意如下：（第1行为输入，第二行为输出）
123
ABC123
已有代码如下：
class CStr {
 char* s;
public:
 CStr();
 CStr(const char s[]);
 void Add(CStr& str);
 int GetS();
 void PutS();
 ~CStr();
};
int main() {
 CStr s1("ABC"), s2;
 s2.GetS();
 s1.Add(s2);
 s1.PutS();
 return 0;
};
要求：请完成类CStr的编写，不可以修改main函数。
*/
#include<iostream>
#include<cstring>
using namespace std;
class CStr {
    char* s;
public:
    CStr(){
        s=new char[1];
        s[0]='\0';
    }; //默认构造函数
    CStr(const char str[]){
        s=new char[strlen(str)+1];
        strcpy(s,str); 
    }; //带参构造函数
    void Add(CStr& str){
        int len1 = strlen(s);//s是this指针指向的成员变量
        int len2 = strlen(str.s);//str.s是CStr类的成员变量
        char* temp = new char[len1 + len2 + 1];
        strcpy(temp, s);
        strcat(temp, str.s);
        delete[] s;
        s = temp;
    }; //拼接函数
    int GetS(){
     char temp[101];
        cin >> temp;
        delete[] s;
        s = new char[strlen(temp) + 1];
        strcpy(s, temp);
        return strlen(s);
    }; //读入函数
    void PutS() {
        cout << s << endl;
    }; //输出函数
    ~CStr() {
        delete[] s;
    }; //析构函数
};
int main() {
 CStr s1("ABC"), s2;
 s2.GetS();
 s1.Add(s2);
 s1.PutS(); 
 return 0;
};