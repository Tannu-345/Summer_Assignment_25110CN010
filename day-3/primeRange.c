# include <stdio.h>
int main (){
    int num,count;
    printf("enter a num:",num);
    scanf("%d",&num);

   
    for(int j=2; j<=num; j++){ 
        
    count =0;//count needs to change after every new j so that it won't get accumulated.
    for(int i=2; i<j; i++){
        if(j%i==0){
            count++;
        }
    }

    if (count==0){
        
        printf("prime is:%d",j);
    }
       
}
    return 0;
}