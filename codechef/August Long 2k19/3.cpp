#include<bits/stdc++.h>
using namespace std;
int main(){
    long int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        long int count=0;
        for(long long i=0;i<a.size();i++)
        if(a[i]=='1')
        count++;
        if(count%2==0)
        cout<<"LOSE"<<"\n";
        else
        {
            cout<<"WIN"<<"\n";
        }

    }
}