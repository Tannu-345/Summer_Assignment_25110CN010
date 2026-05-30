# include <stdio.h>
int main (){
    int num,count=0;
    printf("enter a num:",num);
    scanf("%d",&num);

    for(int i=2; i <num; i++){
        if(num%i==0){
            count++;
        }
    }

    if (count==0){
        printf("prime");
    }else{
        printf("not prime");
    }
    return 0;
}