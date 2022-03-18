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

int search(struct node *p,int key)
{
    if(p==NULL)
        return 0;
    if(p->data==key)
        return 1;
    search(p->next,key);
}
int main()
{
    int arr[]={2,7,45,78,4,5};
    create(arr,6);
    if(search(first,70))
        cout<<"Element found";
    else
        cout<<"Element not found";
    return 0;
}