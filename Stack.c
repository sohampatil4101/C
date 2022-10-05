#include <stdio.h>

int push();
int pop();
int isfull();
int isempty();
int display();
int size();
int peek();

int stack[100],n, top=-1;

int main(){
    int ch;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);

    stack[n];
    while(1){
    start:

  printf("\n\n\n\n1.push()\n2.pop()\n3.isfull()\n4.isempty()\n5.display()\n6.size()\n7.peek() ");
  printf("\nEnter the operation you want to perform on the stack:");
   scanf("%d", &ch);

   switch (ch)
   {
   case 1: push();
    break;
   case 2: pop();
    break;
   case 3: isfull();
    break;
   case 4: isempty();
    break;
   case 5: display();
    break;
   case 6: size();
    break;
   case 7: peek();
    break;
   
   default:printf("\n Enter a valid choice ");
           goto start;
    break;
   }}
}

 
 
int push(){
int a;
if(top==n){
  printf("\nStack is full!!");
}

else{
printf("\nEnter the value to be pushed:");
scanf("%d", &a);
top++;
stack[top]=a;
}

}



int pop(){
if (top<0)
{
    printf("\nThe stack is empty!!");
}


else{
printf("\nThe value %d will pop", stack[top]);
top--;

}
}


int isfull(){

if(top==n){
  printf("\nStack is full!!");
}
else{

}
printf("\nStack is not full!!");
}


int isempty(){

if (top<0)
{
    printf("\nThe stack is empty!!");
}


else{
printf("\nThe stack is not empty!!");

}
}



int display(){
if(top<0){
    isempty();  
}

else{

    for(int i=0; i<=n; i++){
        
        printf("\n%d", stack[i]);

    }
}

}





int size(){

printf("\nSize of the stack is %d", top);

}



int peek(){

printf("\nValue at Peek of the stack is %d", stack[top]);

}
    


