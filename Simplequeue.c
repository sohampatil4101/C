#include <stdio.h>

int Enqueue();
int Dequeue();
int isfull();
int isempty();
int display();
int size();
int peek();

int Queue[100], n, top=-1,end;


int main(){
    int ch;
    printf("Enter the size of the Queue:\n");
    scanf("%d",&n);
    n=n-1;
    end=0;
    Queue[n];
    while(1){
    start:

  printf("\n\n\n\n1.Enqueue()\n2.Dequeue()\n3.isfull()\n4.isempty()\n5.display()\n6.size()\n7.peek() ");
  printf("\nEnter the operation you want to perform on the Queue:");
   scanf("%d", &ch);

   switch (ch)
   {
   case 1: Enqueue();
    break;
   case 2: Dequeue();
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

 
 
int Enqueue(){
int a;
if(top>=n){
  printf("\nQueue is full!!");
}

else{
printf("\nEnter the value to Enqueue :");
scanf("%d", &a);
top++;
Queue[top]=a;
}

}



int Dequeue(){
if (top<0 || top<end)
{
    printf("\nThe Queue is empty!!");
}


else{
printf("\n %d is Dequeued", Queue[end]);
end++;

}
}


int isfull(){

if(top==n || top<end){
  printf("\nQueue is full!!");
}
else{

}
printf("\nqueue is not full!!");
}


int isempty(){

if (top<0 || top<end)
{
    printf("\nThe Queue is empty!!");
}


else{
printf("\nThe Queue is not empty!!");

}
}



int display(){
if(top<0 || top<end){
    isempty();  
}

else{

    for(int i=end; i<=top; i++){
        
        printf("\t%d", Queue[i]);

    }
}

}





int size(){

printf("\nSize of the Queue is %d", top+1);

}



int peek(){

printf("\nValue at Peek of the Queue is %d", Queue[top]);

}
    


