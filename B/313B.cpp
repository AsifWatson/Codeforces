#include<bits/stdc++.h>
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

bool Reverse(long long a,long long b)
{
    return a>b;
}

int main()
{
    IOS
    string s1;
    cin>>s1;
    string s=" "+s1;
    long long a[s1.size()+5];
    a[0]=0;
    for(int i=1;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1]) a[i]=a[i-1]+1;
        else a[i]=a[i-1];
    }
    a[s.size()-1]=a[s.size()-2];
    long long m;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        long long l,r;
        cin>>l>>r;
        cout<<a[r-1]-a[l-1]<<endl;
    }
    return 0;
}
