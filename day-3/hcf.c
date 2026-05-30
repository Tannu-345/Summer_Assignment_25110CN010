# include <stdio.h>
int main (){
    int num1,num2,hcf;

    printf("enter the largest no:",num1);
    scanf("%d",&num1);
    
    printf("enter the smallest no:",num2);
    scanf("%d",&num2);

    if(num1>num2){

        for (int i=1; i<=num2; i++){
            if(num1%i==0 && num2%i==0){
            hcf=i;
        }
      
    }
     printf("hcf is%d",hcf);
     
    }
    else{
        printf("enter num1 as largest num");
    }

    return 0;
}