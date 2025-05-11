#include <stdio.h>
#include <string.h>
struct STU{
    char Name[20];    
    char Number[20]; 
}
a[5]={{"AAA","001"},{"BBB","002"},{"CCC","003"},{"DDD","004"},{"EEE","005"}};    
int main(){
    char SearchName[20]; 
    scanf("%s",SearchName); 
    int i,flag=0; //定义一个标志变量，flag=0表示没有找到，flag=1表示找到了
    for (i=0;i<5;i++){
        if (strcmp(SearchName,a[i].Name)==0){ //strcmp函数比较两个字符串是否相同
            printf("%s\n",a[i].Number);
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf("没找到\n");
    return 0;
}