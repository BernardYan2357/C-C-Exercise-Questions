/*  
编写程序，创建一个由3个学生数据节点组成的链表。输入1个学号，若链表中有该学号，则输出其对应的学生信息，否则输出“Not found!”。
每个节点的数据类型如下：
struct student
{
 int num;
 char name[20];
 double score;
 struct student *next; 
};
测试1：（第1-4行为输入，第5行为输出）：
2210 张三 80
2211 李四 90
2212 王五 100
2211
2211 李四 90.00
测试1：（第1-4行为输入，第5行为输出）：
2210 张三 80
2211 李四 90
2212 王五 100
2213
Not found!
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student {
    int num;
    char name[20];
    double score;
    struct student *next;
};
int main() {
    struct student *head = NULL, *tail = NULL, *p;
    int i, search_num, found = 0;
    for (i = 0; i < 3; i++) {
        p = (struct student*)malloc(sizeof(struct student));
        scanf("%d %s %lf", &p->num, p->name, &p->score);
        p->next = NULL;
        if (head == NULL) {
            head = tail = p;
        } else {
            tail->next = p;
            tail = p;
        }
    }
    scanf("%d", &search_num);
    p = head;
    while (p != NULL) {
        if (p->num == search_num) {
            printf("%d %s %.2f\n", p->num, p->name, p->score);
            found = 1;
            break;
        }
        p = p->next;
    }
    if (!found) {
        printf("Not found!\n");
    }
    while (head) {
        p = head;
        head = head->next;
        free(p);
    }
    return 0;
}