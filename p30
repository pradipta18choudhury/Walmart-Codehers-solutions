// ------------------------------------------- p30 ------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int cnt=1;
    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            if(s[i]==s[j])
            continue;
            else
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
