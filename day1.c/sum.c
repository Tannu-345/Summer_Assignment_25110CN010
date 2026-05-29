# include <stdio.h>
int main (){
    int num,sum;
    printf("enter a number:",num);
    scanf("%d",&num);
    sum=0;
    for(int i=1; i<=num; i++){
        sum=sum+i;
    }
    printf("%d",sum);
   
    return 0;
}