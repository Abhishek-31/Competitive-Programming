#include<iostream>
using namespace std;
int main()
{
    int a,b,t,i,j,c;
    char s[100001];
    cin>>t;
    while(t--)
    {
        a=0;
        b=0;
        c=0;
        cin>>s;
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='(')
            a++;
            if(s[i]==')')
           {
            b++;
            if((a-b)<0)
            {
                a=0;
                b=0;
            }
            else if((a-b)==0)
            {
                a-=1;
                b-=1;
                c+=1;
            }
            else
            continue;

           }

        }
        cout<<c<<endl;
    }
return 0;

}
