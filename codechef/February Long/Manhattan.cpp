///*Made by Abhishek Agarwal */  
// #include<bits/stdc++.h> 
// using namespace std;  
// #define fastio ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL); 
// #define number 100;
// int main() 
// { 
// fastio
// long long int t; 
// cin>>t; 
// for(long long i=0;i<t;i++)
// {
//   long long int x,y,d1,d2,d3,d4;
//   x=0;
//   y=0;  
// cout<<"Q "<<x<<" "<<y<<"\n"<<flush;
// cin>>d1;
// if(d1<0)
// {return 0;}
// x=number;
// y=0;
// cout<<"Q "<<x<<" "<<y<<"\n"<<flush;
// cin>>d2;
// if (d1 < 0)
// {
//     return 0;
// }
// x=(x-(d2-d1))/2;
// cout<<"Q "<<x<<" "<<y<<"\n"<<flush;
// cin>>d3;
// if (d1 < 0)
// {
//     return 0;
// }
// x=number;
// y=x;
// cout<<"Q "<<x<<" "<<y<<"\n"<<flush;
// cin>>d4;
// if (d1 < 0)
// {
//     return 0;
// }
// cout<<"A "<<abs(d1-d3)<<" "<<abs(d3)<<" "<<abs(d2-d3)<<" "<<abs(d4-d2+d3)<<flush;

// }
// return 0;

// /*
/*Made by Abhishek Agarwal */
#include <bits/stdc++.h>
    using namespace std;
    // #define fastio ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
    int main()
    {
        // fastio
        long long int t;
        char q = 'Q';
        char a = 'A';
        cin >> t;
        for (long long int i = 0; i < t; i++)
        {
            long long int x,y, d1, d2, d3, d4, z;
            x = 0;
            y = 0;
            cout << q << " " << x << " " << y<<endl<<flush;
            cin >> d1;
            // cout <<flush;
            // cout.flush();
            // if (d1 < 0)
            //     return 0;
            x = 1000000000;
            y = 0;
            cout << q << " "<< x << " " << y<<endl<<flush;
            cin >> d2;
            // cout.flush();
            // if (d2 < 0)
            //     return 0;
            x = (x - (d2 - d1)) / 2;
            cout << q << " " << x << " " << y<<endl<<flush;
            cin >> d3;
            // cout << endl;
            // cout.flush();
            // if (d3 < 0)
            //     return 0;
            x = 1000000000;
            y = x;
            cout << q << " " << x << " " << y<<endl<<flush;
            cin >> d4;
            // cout << endl;
            // cout.flush();
            // if (d4 < 0)
            //     return 0;

            cout << a << " " << (d1 - d3) << " " << (d3) << " " << 1000000000 - (d2 - d3) << " " << 1000000000 - (d4 - d2 + d3)<<endl<<flush;
            cin >> z;
            // cout << endl;
            // cout.flush();
            // if (z < 0)
            //     return 0;
        }
        return 0;
    }
            