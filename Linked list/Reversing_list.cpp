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

void display(struct node *p)
{
    while (p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}

//reverse function using recursion
void reverse(struct node *p,struct node *q)  //'p' storing current element and 'q' storing previous element
{
    if(p!=NULL)
    {
        reverse(p->next,p);   
        p->next=q;
    }
    else
        first=q;   
}

int main()
{
    int arr[]={2,4,6,8,9,10,11};
    create(arr,7);
    reverse(first,NULL);
    display(first);
    return 0;
}