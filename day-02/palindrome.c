# include <stdio.h>
int main (){
    int num,rev=0,r, originalNum;
    printf("enter a num:",num);
    scanf("%d",&num);

    originalNum=num;

    while(num>0){
        r=num%10;
        rev=(rev*10)+r;
        num/=10;
    }//it will turn n=0*
    
    printf("rev=%d",rev);

    if(originalNum==rev)
    {
        printf("it's palindrome");
    }
    else{
        printf("it's not a palindrome");
    }

    return 0;
}