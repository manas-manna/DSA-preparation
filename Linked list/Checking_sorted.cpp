#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
}*first=NULL;

//creating initial list
void create(int arr[],int count)
{
    struct node *p,*temp;
    p=new node;
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    p=first;
    for (int i = 1; i < count; i++)
    {
        temp=new node;
        temp->data=arr[i];
        temp->next=NULL;
        p->next=temp;
        p=temp;
    }
}

//checking the linked list sorted or not using recursion
bool checkSort(struct node *p)
{
    if(p==NULL)
    {
        return;
    }

}


int main()
{
    int arr[]={2,4,6,8,9,9,10};
    create(arr,7);
    checkSort(first);
    return 0;
}