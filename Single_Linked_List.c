#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*header;

void CreateList(int n);
int main()
{
    int n;
    print("Enter the total Number of nodes :");
    scanf("%d",&n);
    CreateList(n);
    return 0;

    
}