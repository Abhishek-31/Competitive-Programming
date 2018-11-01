#include<bits/stdc++.h>
#include<stdio.h>

#include<string.h>
using namespace std;
int main()
{
	long int t,n,u,c=0,z=0,j=0,h=0;
	scanf("%ld",&t);
	for(long int i=0;i<t;i++)
	{
		scanf("%ld",&n);
		long int a[n],b[n];
		for(j=0;j<n;j++)
		{
			scanf("%ld",&a[j]);
		}

sort(a,a+n);
		for(long int m=n-1;m>0;m=h)
		{
			c=1;
			for(h=m-1;h>=0;h--)
			{
				if(a[h]==a[m])
				{
					c++;
				}
				else
				{
				break;}
			}
			long int y=1;
			if((m%2!=0)||(m==n-1))
			{
			  for(long int l=c;l>2;)
			  {
			  	y=y*(l-1);
			  	l=l-2;
			  }
			  b[z]=y;
			  z++;
			}
			else
			{
			  for(long int l=c;l>2;)
			  {
			  	y=y*(l);
			  	l=l-2;
			}
			  b[z]=y;
			  z++;
			}
		}
		long int x=1;
		for(long int p=0;p<z;p++)
		{
			x=x*b[p];
		}
		x=x%1000000007;
		printf("%ld\n",x);
		z=0;
	}
}
