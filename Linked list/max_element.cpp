#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*first;
void create(int arr[],int count)
{
    struct node *temp,*p;
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    p=new node;
    p=first;
    for (int i = 0; i < count; i++)
    {
        temp=new node;
        temp->data=arr[i];
        temp->next=NULL;
        p->next=temp;
        p=temp;
    }
}

int maximum(struct node *p)
{
    int x;
    if(p==NULL)
        return INT_MIN;
    x=maximum(p->next);
    if(x>p->data)
        return x;
    else
        return p->data;
}
int main()
{
    int arr[]={-1,-52,-20,-51,-6,-8};
    create(arr,6);
    cout<<maximum(first);
    return 0;
}