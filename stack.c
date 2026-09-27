#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max];
int top = -1;
void push(int value){
    if(top == max-1)
        printf("The stack is overflow\n");
    else{
        top++;
        stack[top]=value;
        printf("%d is successfully pushed\n",value);
    }


}
int pop(){
    if(top == -1)
        printf("The stack is empty\n");
    else{
        printf("value popped from stack is ");
        printf("%d\n",stack[top]);
        top--;
    }
}
int peep(){
     if(top == -1)
        printf("The stack is empty\n");
    else{

        printf("the top element is %d\n",stack[top]);
        }
}
int display(){
     if(top == -1)
        printf("The stack is empty\n");
    else{
        for(int i=top;i>=0;i--){
            printf("| %d |\n",stack[i]);
        }
    }
}
void main(){
int choice,value;
while(1){
    printf("1.push\n2.pop\n3.peep\n4.disply\n");
    printf("Enter your choice :");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter the value to push : ");
                scanf("%d",&value);
                push(value);
                break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            display();
            break;
        default:
            printf("Entered invalid choice\n");



    }

}
}
