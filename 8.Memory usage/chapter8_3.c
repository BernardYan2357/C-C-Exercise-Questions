/*编写一个程序，要求读入若干个自然数依次存入链表，读入-1代表结束，依读入次序输出链表内容。
输入输出示意如下：（第一行为输入，第二行为输出）
1 3 5 2 -1 
1 3 5 2 
*/
#include <stdio.h>
#include <stdlib.h>
struct node{
    int num;
    struct node* next;
};
void print(struct node*p){
    while(p!=NULL){
        printf("%d ",p->num);
        p=p->next;
    }
    printf("\n");
}
int main(){
    struct node*p,*head,*tail=NULL;
    do{
        p=malloc(sizeof(struct node));
        scanf("%d",&p->num);
        if(p->num==-1){
            free(p); //释放内存
            break;
        }
        p->next=NULL;  //用尾插法，因为要按照输入顺序输出
        if (head == NULL) {
            head = tail = p; // 第一个节点既是头节点也是尾节点
        } else {
            tail->next = p; // 将新节点链接到链表尾部
            tail = p;       // 更新尾指针
        }
    }while(1);
    print(head);  //使用head输出链表内容,因为此时p指向NULL
    return 0;
}
//不用链表的解法如下：
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int *p=malloc(sizeof(int));
//     if (p==NULL){
//         exit(0);
//     }
//     int i=0;
//     scanf("%d",p+i);
//     while(*(p+i)!=-1){
//         i++;
//         int *temp=realloc(p,(i+1)*sizeof(int));
//         if (temp==NULL){
//             free(p);
//             exit(0);
//         }
//         p=temp;
//         scanf("%d",p+i);
        
//     }
//     for(int j=0;j<i;j++){
//         printf("%d ",*(p+j));
//     }
//     printf("\n");
//     free(p);
//     return 0;   
// }
