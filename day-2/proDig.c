# include <stdio.h>
int main (){
    int num,proDig,digit;
    printf("enter a num",num);
    scanf("%d",&num);

    proDig=1;
    while(num>0){
       digit= num%10;
       proDig *=digit;
       num/=10;
    }
    printf("prod of digits=%d",proDig);
    return 0;
}