#include <bits/stdc++.h>
using namespace std;

char gender(int n, char gen, int k)
{
    char sex;
    static int ans=k;
    if (ans == 1){
        sex=gen;
        return sex;
    }
    if (n == 1)   
    {
        ans--;
        cout<<gen<<" ";
        return gen;
    }
    if (gen == 'm')
    {
        gender(n - 1, 'm',k);
        gender(n - 1, 'f',k);
    }
    else
    {
        gender(n - 1, 'f',k);
        gender(n - 1, 'm',k);
    }
}

int main()
{
    char ans = gender(4, 'm', 4);
    if (ans == 'm')
        cout << "Male";
    else
        cout << "Female";
}