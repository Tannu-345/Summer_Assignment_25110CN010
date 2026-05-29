# include <stdio.h>
int main (){
    int num,fac;
    printf("enter a num:",num);
    scanf("%d",&num);
    fac=1;

    if (num==0){
        printf("1");
    }else{
        
    for(int i=num; i>=1; i--){
        fac=fac*i;
    }
     printf("%d",fac);
}

    return 0;
}