/*编写一个程序，输入一个16进制的整数，依次以16进制输出其在内存中0~3字节中存放的值。输入输出示意如下：（第1行为输入，第2-5行为输出）
12345678
0x78
0x56
0x34
0x12
提示：通过 unsigned char *p = (unsigned char *) &a，得到变量a第一个字节的地址，将p指向的字节中数据以16进制输出，然后改变p的值指向下一个字节的地址，逐个打印连续4个字节内存中的值。*/
#include <stdio.h>
int main(){
    int a;
    scanf_s("%x",&a);
    unsigned char *p = (unsigned char *) &a;
    for (int i = 0; i < 4; i++) {
        printf("%#X\n", *(p + i));
    }
    return 0;
}