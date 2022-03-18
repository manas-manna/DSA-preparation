#include<bits/stdc++.h>
using namespace std;
vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<int>> &queries, int q) {
    int left,right,max_right=0;
    for(int i=0;i<q;i++)
    {
        max_right=max(max_right,queries[i][1]);
    }
    vector<int> B;
    B.push_back(arr[0]);
    for(int i=1;i<=max_right;i++)
    {
        B.push_back(B[i-1]+arr[i%n]);
    }
    vector<int> result;
    for(int i=0;i<q;i++)
    {
        left=queries[i][0];
        right=queries[i][1];
        result.push_back(B[right]-B[left-1]);
    }
    return result;
}
int main()
{
    
}