#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    if(n>=7||n==6||n==5)
   cout<<fixed<<std::setprecision(7)<<double(1*1.0/1)<<endl;
    else if(n==1)
    cout<<fixed<<std::setprecision(7)<<double(3*1.0/7)<<endl;
    else if(n==2)
    cout<<fixed<<std::setprecision(7)<<double(4*1.0/7)<<endl;
    else if(n==3)
    cout<<fixed<<std::setprecision(7)<<double(5*1.0/7)<<endl;
    else if(n==4)
    cout<<fixed<<std::setprecision(7)<<double(6*1.0/7)<<endl;
}
}
