/*  
编写一个自定义函数sort，将一维数组中10个整数进行从大到小排序。
要求：在main函数中输入10个整数，调用自定义函数排序，在main函数中输出排序结果。
sort函数声明为：
//形参arr：存放n个元素的数组   形参n：数组中元素的个数
sort(int arr[], int n);
【注意】输入和输出各占一行，输入的正整数之间用一个英文下的空格分隔，运行效果应如下（第1行为输入，第2行为输出）：
3 1 0 2 8 5 9 7 6 4
9 8 7 6 5 4 3 2 1 0
*/
#include <stdio.h>
void sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int arr[10], i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, 10);
    for (i = 0; i < 10; i++) {
        printf("%d", arr[i]);
        if (i < 9) printf(" ");
    }
    printf("\n");
    return 0;
}