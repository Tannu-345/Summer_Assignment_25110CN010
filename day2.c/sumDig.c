# include <stdio.h>
int main (){
    int num,sumDig,digit;
    printf("enter a num",num);
    scanf("%d",&num);

    sumDig=0;
    while(num>0){
       digit= num%10;
       sumDig +=digit;
       num/=10;
    }
    printf("sum of digits=%d",sumDig);
    return 0;
}