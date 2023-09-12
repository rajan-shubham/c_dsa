#include<stdio.h>
#include<stdlib.h>
#define max 5//Maximum no. of elements that can be stored
int top=-1,stack[max];
void push();
void pop();
void display();
void main(){
	int ch;
	while(1){//infinite loop, will end when choice will be 4
		printf("\n--- Stack Menu ---");
		printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
		printf("Enter your choice(1-4):");
		scanf("%d",&ch);
		switch(ch){
			case 1:push();
				break;
			case 2:pop();
				break;
			case 3:display();
				break;
			case 4:exit(0);
			default: printf("\nWrong choice !!\n");}
		}
		}
void push(){
	int val;
	if(top==max-1){
		printf("\nStack is Full\n");}
	else{
		printf("\nEnter Element to Push:");
		scanf("%d",&val);
		top += 1;
		stack[top] = val;}
	}
void pop(){
	if(top==-1)
		printf("\nstack is empty\n");
	else{
		printf("\nDeleted element is %d",stack[top]);
		top = top - 1;}
		}
void display(){
	int i;
	if(top==-1){
		printf("\nStack is empty!!\n");}
	else{
		printf("\nStack is ...\n");
		for(i=top;i>=0;--i)
		printf("%d\n",stack[i]);}
		}
