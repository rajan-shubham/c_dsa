#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *start;

int main(){
    struct node ll3 = {555, NULL};
    struct node ll2 = {55, &ll3};
    struct node ll1 = {5, &ll2};
    start = &ll1;

    struct node *traversal;
    while (start->next != NULL)
    {
        printf(" %d , %p ", start->data, start->next);
        start = start->next;
    }

    struct node *ptr = (struct node *)(malloc(sizeof(struct node)));
    if(ptr != NULL){
        ptr->data = 5555;
        ptr->next = NULL;
    }
    start = ptr;

    printf("%d\n", start->data);

    return 0;
}