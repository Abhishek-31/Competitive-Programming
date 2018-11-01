#include<stdio.h>
int main()
{
    long long int t;
    long long int n , a[100000],i,j,k,l,count;
    long long int f=1;
    int b[1000001];
    scanf("%lld",&t);
    while(t--)
    {

        f=1;
        for(i=0;i<1000001;i++)
            b[i]=0;
        k=1000000007;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            b[a[i]]++;
        }
        for(i=1000000;i>0;i--)
        {
            l=1;
            if(b[i]==0)
                continue;
            else
            {
                if(b[i]%2==0 && count==0)
                    j=b[i]-1;
                else if(b[i]%2==0 && count==1)
                {
                    l=b[i];
                    j=b[i]-1;
                }
                else
                {
                    j=b[i];
                    if(count==0)
                        count=1;
                    else
                        count=0;
                }
                while(j>=1)
                {
                    l=(l*j)%k;
                    j=j-2;
                }
                f=(f*l)%k;
            }
        }
        printf("%lld\n",f);
    }
    return 0;
}
