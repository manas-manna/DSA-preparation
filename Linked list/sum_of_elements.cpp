#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*first;

void create(int arr[],int count){
    struct node *p,*temp;
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    p=new node;
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
void sum(struct node *p)
{
    int sum=0;
    while(p!=NULL)
    {
        sum+=p->data;
        p=p->next;
    }
    cout<<sum;
};

// finding sum recursively
int rsum(struct node *p)
{
    if(p==NULL)
        return 0;
    return rsum(p->next)+p->data;
}

int main()
{
    int arr[]={10,2,6,9,12};
    create(arr,5);
    // sum(first);
    cout<<rsum(first);
    return 0;
}