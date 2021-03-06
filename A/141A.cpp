#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define allre(v) v.rbegin(),v.rend()
#define sp(x,y) fixed<<setprecision(y)<<x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) ((a*b)/__gcd(a,b))
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

bool Reverse(long long a,long long b){return a>b;}

int main()
{
    IOS
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    s1+=s2;
    sort(s1.begin(),s1.end());
    sort(s3.begin(),s3.end());
    if(s1.size()!=s3.size()){cout<<"NO"<<endl;return 0;}
    for(int i=0;i<s1.size();i++)if(s1[i]!=s3[i]){cout<<"NO"<<endl;return 0;}
    cout<<"YES"<<endl;
    return 0;
}
