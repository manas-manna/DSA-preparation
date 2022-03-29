#include<bits/stdc++.h>
using namespace std;

vector<vector<long long int>>printPascal(int n)
{
    vector<vector<long long int>>triangle;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < i-1; j++)
        {
            if(j==0 || j==i)
                triangle[i].push_back(1);
            else
                triangle[i].push_back(triangle[i-1][j-1]+triangle[i-1][j]);
        }
    }
    return triangle;
}
int main()
{
    
    return 0;
}