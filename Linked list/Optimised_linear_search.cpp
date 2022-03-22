#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*first;

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

//when it finds an element it brings that element to the first place so that 
//next time when the same element is searched again the program will find it in first iteration
int search(struct node *p,int key,struct node *q)
{
    if(p==NULL)
        return 0;
    if(p->data==key)
    {
        q->next=p->next;
        p->next=first;
        first=p;
        return 1;
    }       
    search(p->next,key,p);
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
    int arr[]={2,7,45,78,4,5};
    create(arr,6);
    search(first,78,first);
    display(first);
    return 0;
}