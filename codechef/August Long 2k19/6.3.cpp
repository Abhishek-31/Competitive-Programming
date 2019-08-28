#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y=20;
while(y--){
cin>>x;
    cout<<(long long int) log10(x);
    cout<<endl;
            long long int zom=0;
        while(x!=0)
        {
            x=x/10;
            zom++;
        }
    cout<<zom<<endl;
}
}