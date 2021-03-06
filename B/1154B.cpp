#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define allre(v) v.rbegin(),v.rend()
#define sp(x,y) fixed<<setprecision(y)<<x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) ((a*b)/__gcd(a,b) )
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

bool Reverse(long long a,long long b){return a>b;}

int main()
{
    IOS
    int n;
    cin>>n;
    int a[n];
    set<int> st;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        st.insert(a[i]);
    }
    ///cout<<st.size()<<endl;
    sort(a,a+n);
    if(st.size()==1)cout<<"0"<<endl;
    else if(st.size()==2)
    {
        if((a[n-1]-a[0])%2)cout<<a[n-1]-a[0]<<endl;
        else cout<<(a[n-1]-a[0])/2<<endl;
    }
    else
    {
        if((a[n-1]-a[0])%2){cout<<"-1"<<endl;return 0;}
        int ans=(a[n-1]-a[0])/2;
        int need=a[0]+ans;
        for(int i=0;i<n;i++)
        {
            if(a[i]<need)
            {
                if((a[i]+ans)!=need)
                {
                    cout<<"-1"<<endl;
                    return 0;
                }
            }
            if(a[i]>need)
            {
                if((a[i]-ans)!=need)
                {
                    cout<<"-1"<<endl;
                    return 0;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
