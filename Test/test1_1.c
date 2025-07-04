/*
编写程序，输入整数m，n，将m转成n（2<n<16）进制整数并输出。
【注意】输入和输出各占一行；运行效果应如下所示（第1行为输入，数据间用半角空格分隔，第2行为输出），格式错误算结果错误。
30 16
1E
*/
#include <stdio.h>
int main() {
    int m, n, i = 0;
    char c[200];
    scanf("%d %d", &m, &n);
    while (m != 0) {
        int remainder = m % n;//remainder是余数
        if (remainder < 10) {
            c[i] = '0'+remainder; 
        } else {
            c[i] = 'A'+(remainder - 10); 
        }
        m = m / n;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {//倒序输出
        printf("%c", c[j]);//%c表示将数组c[j]中存储的字符按字符格式输出
    }
    printf("\n");
    return 0;
}