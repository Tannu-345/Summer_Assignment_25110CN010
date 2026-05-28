# include <stdio.h>
int main (){
    int num,table;
    printf("enter a num:",num);
    scanf("%d",&num);

    table =1;
    for(int i=1; i<=10; i++){
        table=num*i;
        printf("%d%d%d",num, i, table);
       
        printf("\n");
    }
    return 0;
}