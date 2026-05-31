# include <stdio.h>
int main (){
    int num, num1,num2, fibo;
    printf("enter a num:",num);
    scanf("%d",&num);

    num1=0;
    num2=1;
    printf("fibonacci series is:");

    for(int i=1; i<=num; i++){
        fibo=num1+num2;
        num1=num2;
        num2=fibo;
        
        printf("%d \n",fibo);
    }
    
    return 0;
}
