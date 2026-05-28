#include <stdio.h>
int main (){
    int num,count;
    printf("enter a num:",num);
    scanf("%d",&num);

    count=1;
    while(num/10!=0){
        num=num/10;
        count++;
    }

    printf("%d",count);
    return 0;

}