# include <stdio.h>
# include <math.h>
int main (){
    int num,armS,rem,count;
    printf("enter a num:",num);
    scanf("%d",&num);
    
    while(num>0){
        num=num/10;
        count++;
    }
    
    int origNum=num;
    
    while(origNum>0){
        rem= origNum%10;
        armS =armS+pow(rem,count);
        origNum =origNum/10;
        
    }
    if(armS==origNum){
        printf(" it's armstrong ");
    }
    else{
        printf(" it's not armstrong");
    }
    return 0;
}