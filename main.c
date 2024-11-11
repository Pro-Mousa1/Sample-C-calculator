#include <stdio.h>
int main(){
    int a,b,choice;
    char exit;
    do{
        printf("Enter the two integers\n");
        scanf("%d %d", &a,&b);
        printf("Enter choice 1.Addition 2.Subtraction 3. Multiplication 4.Division\n");
        scanf("%d", &choice);

        if(choice==1){
            printf("The sum of the numbers are:%d\n", a+b);
        }else if(choice==2){
            printf("The difference of the numbers are:%d\n", a-b);
        }else if(choice==3){
            printf("The product of the numbers are:%d\n", a*b);
        }else if(choice==4){
        if(b!=0){
            printf("The quotient of the numbers are:%f\n",(float) a/b);
        }else{
            printf("Cannot by divided by zero");
        }
        }else{
            printf("Invalid choice.Please enter again\n");
        }
            printf("Do you want to continue?(Y/N):\n");
            scanf("%c",&exit);
        }while(exit=='Y' || exit=='y');
        return 0;
}