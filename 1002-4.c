#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node next;
};

int main() 
{
    struct Nodehead;
    head=malloc(sizeof(struct Node));
    if (head == NULL) {
        printf("無效");
        return 1;
    }
    head ->data=10;
    head ->next = NULL;
    printf("%d", head ->data);

    free(head);
    return 0;
}
