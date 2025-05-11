/*3.编写一个程序，输入一个3行3列的整数矩阵，根据该矩阵各行元素和的大小从上到下按升序重新排列各行。输入输出示意如下：（第1-3行为输入，第4-6行为输出）
1 3 6
3 1 2
3 2 3
3 1 2
3 2 3
1 3 6
*/
#include <stdio.h>
int main(){
    int i,j,k,a[3][3];
    int sum[3],temparray[3]=0;
    int temp=0;
    //输入矩阵
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //计算各行元素和
    for (i=0;i<3;i++) {
        sum[i]=0; // 初始化sum[i]为0（很重要）
        for (j=0;j<3;j++){
            sum[i] += a[i][j];
        }
    }
    //排序矩阵
    for(i=0;i<2;i++){        //前一行
        for(j=i+1;j<3;j++){  //下一行及下下行
            // 如果前一行的和大于下一行的和，则交换两行
            if(sum[i]>sum[j]){
                // 交换sum数组中的元素
                temp=sum[i];
                sum[i]=sum[j];
                sum[j]=temp;
                // 交换两行元素
                for(k=0;k<3;k++){
                    temparray[k] = a[i][k];
                    a[i][k] = a[j][k];
                    a[j][k] = temparray[k];
                }
            }
        }
    }
    // 输出排序后的矩阵
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}