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

//delete a node at any given location.  (note:I have not handled the case where position is greater than the list size)
void Delete(int count)
{
    struct node *p;
    p=new node;
    p=first;
    if(count==1)
    {
        first=first->next;
        cout<<p->data<<" deleted";
        delete p;
    }
    else
    {
        struct node *q;
        q=new node;
        q=NULL;
        for (int i = 1; i < count; i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        cout<<p->data<<" deleted";
        delete p;
    }
}

int main()
{
    int arr[]={2,4,7,8,2,5,10};
    create(arr,7);
    Delete(1);
    return 0;
}