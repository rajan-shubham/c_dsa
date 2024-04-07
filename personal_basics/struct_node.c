#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *start;

void insert(int x){
    struct node *ptr = start;
    struct node *temp = (struct node *)(malloc(sizeof(struct node)));
    if(temp == NULL){
        return;
    }
    temp->data = x;
    temp->next = NULL;

    if (start == NULL){
        start = temp;
        return;
    }
    while (ptr -> next != NULL){
        ptr = ptr->next;
    }
    ptr->next = temp;
}

int main(){
    struct node ll3 = {555, NULL};
    struct node ll2 = {55, &ll3};
    struct node ll1 = {5, &ll2};
    start = &ll1;

    struct node *traversal;
    while (start != NULL)
    {
        printf(" %d , %p ", start->data, start->next);
        start = start->next;
    }

    // struct node *ptr = (struct node *)(malloc(sizeof(struct node)));
    // if(ptr != NULL){
    //     ptr->data = 5555;
    //     ptr->next = NULL;
    // }
    // start = ptr;

    // printf("\n%d\n", start->data);

    insert(35);
    printf("\n%d\n", start->data);

    return 0;
}