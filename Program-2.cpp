#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int ans=1;
    for(int i=0;i<x;i++)
    {
        cout<<ans<<", ";
        ans+=2;
    }
    return 0;
}