#include<stdio.h>


int main(){
    int op, x, y, res;
    printf("Enter two numbers:\n");
    scanf("%d%d", &x, &y);
    printf("Enter the operation to be performed:\n1->Add\n2->Subtract\n3->Multiplication\n4->Division\n");
    scanf("%d", &op);
    
    switch(op){
        case 1: res = x + y;
                break;
        case 2: res = x - y;
                break;
        case 3: res = x * y;
                break;
        case 4: res = x/y;
                break;
        default: printf("You have entered wrong option.\n");
    }
    if (0 <= op && op <= 4){
        printf("The result of the operation is %d\n", res);
    }
    return 0;
}
