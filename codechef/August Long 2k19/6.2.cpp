#include<bits/stdc++.h>
using namespace std;
#define N (1000000000 + 7)
#define lli long long int
#define endl "\n"
void testcase(){
    lli l,r,nr,nl;
        cin>>nl>>l;
        cin>>nr>>r;
        lli nod = max(nl, nr);
        lli ans = 0;
        for(lli k = l; k <= r; k++) {
            lli num = k;
            lli d[nod][2] = {0}, dum1 = -1, dumm2 = 0;
        // long long int num = l;
        lli zom=0;
        while(num!=0)
        {
            num=num/10;
            zom++;
        }
        lli digits=zom-1;
            // long long int digits = (long long int) log10(num);
            lli pl = powl(10, digits);
            while(num != 0) {
                lli fum3 = (lli)(num / pl);
                if(fum3 != dum1) {
                    dum1 = fum3;
     d[dumm2][0] = fum3;
                d[dumm2][1] = log10(pl);
                 dumm2++;
                }
                num = num % pl;
                pl /= 10;
            }
            lli csum = 0;
            for(int i = 0; i < dumm2; i++) {
                csum = (csum + (d[i][0]*((long long int)powl(10, d[i][1]))%N) %N) %N;
            }
            // cout<<sum<<endl;
            ans += csum % N;
        }
        cout<<ans % N<<endl;
}
int main() {
    lli t;
    cin>>t;
    while(t--) {
        testcase();
    }
}