/*
编写一个程序，使用以下通话记录结构体：
struct SR{
int id;         //编号
char name[20];  //通话对方的姓名
char phone[20]; //对方手机号码
int secs;       //通话时长（以秒为单位）
};
要求输入通话记录个数以及通话记录，统计共有多少个不同的通话对象。输入输出示意如下：（第1-6行为输入，第7行为输出）：
5
1 Tom 23713354661 51
2 Jack 23813567789 40
3 Tom 123713354661 34
4 Jack 23813567789 56
5 Lily 23956768980 23
3
*/
#include <stdio.h>
#include <string.h>
struct SR{
    int id;         
    char name[20];  
    char phone[20]; 
    int secs;
};
int main(){
    int n,i,count=0;
    scanf("%d", &n);
    struct SR sr[n];
    for (i=0;i<n;i++){
        scanf("%d %s %s %d", &sr[i].id, sr[i].name, sr[i].phone, &sr[i].secs);  
    }
    char checkedNames[n][20]; // 用于存储已统计的名字
    for (i = 0; i < n; i++) {
        int flag = 1; // 假设当前名字是新的
        for (int j = 0; j < count; j++) {
            if (strcmp(checkedNames[j], sr[i].name) == 0) {
                flag = 0; // 如果名字已存在，则标记为非新名字
                break;
            }
        }
        if (flag) {
            strcpy(checkedNames[count], sr[i].name); // 记录新名字
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}