/*Made by Abhishek Agarwal */  
#include<bits/stdc++.h> 
using namespace std;  
#define fastio ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL); 
int main() 
{ 
fastio; 
// int t; 
// if(1&&2&&0)
// cout<<"ABHISHEK";
// else
// cout<<"AGarwal";
std::vector<int> v = {-5, -2, -8, -10, -9};
auto minmax = std::minmax_element(v.begin(), v.end());
cout<<*minmax.second;
return 0;
}