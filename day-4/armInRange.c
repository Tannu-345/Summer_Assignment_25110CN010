# include <stdio.h>
# include <math.h>

int main(){
int num,rem,arm=0,a;
printf("enter the range:");
scanf("%d",&num);

for (int i =1; i<=num; i++){
    a=i;
    int origNum= num;
    int count=0;
    arm=0;
    while(a!=0){
        rem=a%10;
        count++;
    }

    a=i;
    while(a!=0){
        rem=a%10;
        arm= arm+pow(rem,count);
       a/=10;
        printf("%d",arm);
    }
}
return 0;
}