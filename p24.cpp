// --------------------------------------------------------------------------- p24 -----------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

int arr[100000];
int main()
{
    int n,q;
    cin>>n;
    int s[n];
    for(int i=1;i<=n;i++)
    {
        s[i]=0;
    }
    //int s[100000];
    for(int i=1;i<=100000;i++)
    {
        arr[i]=i;
    }
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int j=1;
        for(int i=l;i<=r;i++)
        {
            s[i]=s[i]+arr[j];
            j++;
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;
}
