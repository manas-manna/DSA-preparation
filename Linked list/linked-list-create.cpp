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

//iteratively display all nodes
void display(struct node *p)
{
    while (p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}

//recursibly display all nodes
void rdisplay(struct node *p)
{
    if(p==NULL)
        return;
    cout<<p->data<<endl;
    rdisplay(p->next);
}
int main()
{
    int arr[]={1,3,5,7,8,10};
    create(arr,6);
    // display(first);
    rdisplay(first);
    return 0;
}