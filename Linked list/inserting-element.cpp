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

//inserting element at the desired position
void insert(struct node *p,int element,int position)
{
    if(first==NULL)   //checking if there is any element or not in the list
    {
        first=new node;
        first->data=element;
        first->next=NULL;
        return;
    }
    if(position==2)
    {
        struct node *temp;
        temp=new node;
        temp->data=element;
        temp->next=p->next;
        p->next=temp;
        return;
    }
    insert(p->next,element,position-1);
}

void display(struct node *p)
{
    while (p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}

int main()
{
    int arr[]={2,5,0,6,8,9,10};
    create(arr,7);
    insert(first,25,8);
    display(first);
    return 0;
}