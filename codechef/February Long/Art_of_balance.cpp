// /*Made by Abhishek Agarwal */  
// #include<bits/stdc++.h> 
// using namespace std;  
// #define fastio ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
// int main() 
// {   
//     long long int i;
//     map<char,int> m;
//     map<char,int>::const_iterator b;
// fastio;
// int t; 
// cin>>t; 
// while(t--) 
// {
// vector<int> z;
// string s;
// cin>>s;

// for(i=0;s[i]!='\0';i++)
// {
//     m[s[i]]++;
// }
// long long int a[m.size()],count=0;
// for(b=m.begin(),i=0;b!=m.end();b++,i++)
// {
//     a[i]=b->second;
// count+=b->second;
// }
// sort(a, a + m.size(),greater<int>());
// for(i=0;i<m.size();i++)
// cout<<a[i]<<" ";
// cout<<endl;
// cout<<count;
// for(i=0;i<26;i++){
//     if(count%(i+1)==0)
//     {
//     z.push_back(count/(i+1));
// }}
// for(auto v=z.begin();v!=z.end();v++)
// cout<<*v<<" ";
// cout<<endl;
// vector<int> cost;
// long long int j,occur=m.size(),fac=z.size(),la=0,k;
// // long long int damdam=0,j;

// // for(i=0,j=0;i<m.size(),j<z.size();i++)
// // {long long int flag1=0;
// //     while(a[i]>=z[j])
// //             damdam++;
        
// // 
// m.clear();
// }
// return 0;
// }
/*Made by Abhishek Agarwal */  
#include<bits/stdc++.h> 
using namespace std;  
#define fastio ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL); 
#define pb push_back;
#define  lli long long int
int main() 
{ 
fastio; 
long long int t; 
// cin>>t; 
char a[20];
int b[26]={0};
cin>>a;
for(int i=0;i<strlen(a);i++)
b[a[i]-65]++;
for(int i=0;i<26;i++)
{
    cout<<b[i];
}
return 0;
}