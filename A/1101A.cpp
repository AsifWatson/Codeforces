#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
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

int main()
{
    IOS
    long long q;
    cin>>q;
    while(q--)
    {
        long long l,r,d;
        cin>>l>>r>>d;
        long long F,L;
        F=d;
        if(F>=l && F<=r)
        {
            F=10000000000;
        }
        L=(r-(r%d))+d;
        cout<<min(F,L)<<endl;
    }
    return 0;
}