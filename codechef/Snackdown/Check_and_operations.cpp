#include <iostream>

using namespace std;

long long int main() {
    long long int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        long long int a[n],b[n],c[n],sum = 0, flag = 1;
        for(long long int i = 0 ; i < n ; i++) {
            cin>>a[i];
        }
        for(long long int i = 0 ; i < n ; i++) {
            cin>>b[i];
            c[i] = b[i] - a[i];
            sum += c[i];
        }
        if((sum % 6) != 0) {
            flag = 0;
        } else {
            for(long long int i = n - 1 ; i >= 2 ; i--) {
                long long int r = 0;
                if(c[i] < 0){
                    flag = 0;
                    break;
                }
                if(c[i] >= 3) {
                    long long int f = c[i] / 3;
                    r = c[i] % 3;
                    c[i] -= (3 * f);
                    c[i-1] -= (2 * f);
                    c[i-2] -= f;
                }
                if(r != 0) {
                    flag = 0;
                    break;
                }
            }
        }
        for(long long int i=0;i<n;i++)
        {
          if(c[i]!=0)
          flag=0;
          break;
        }
        if(flag == 0) {
            cout<<"NIE\n";
        } else {
            cout<<"TAK\n";
        }
    }
}
