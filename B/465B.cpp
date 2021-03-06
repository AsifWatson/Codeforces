/***********************************************************|
|          /\           /-------|   -----    |-----------|  |
|         /  \         /              |      |              |
|        /    \       |               |      |              |
|       /      \      |----|          |      |-------|      |
|      / ------ \          |-----|    |      |              |
|     /          \               |    |      |              |
|    /            \              /    |      |              |
|  ---            --- |---------/   -----  -----            |
|                                                           |
|   Codeforces = Asif_Watson  ||  Codechef = asif_watson    |
|   Mail = ashfaqislam33@gmail.com                          |
|   CSTE, Noakhali Science and Technology University(11)    |
|                                                           |
************************************************************/

#include "bits/stdc++.h"
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define Iterate(st,it) for(auto it=st.begin();it!=st.end();it++)
#define Iteratere(st,it) for(auto it=st.rbegin();it!=st.rend();it++)

#define All(v) v.begin(),v.end()
#define Allre(v) v.rbegin(),v.rend()
#define Unique(v) sort(All(v)),v.erase(unique(All(v)),v.end())
#define MEM(Array,Value,Size) for(int i=0;i<Size;i++)Array[i]=Value
#define SP(x,y) fixed<<setprecision(y)<<x

#define Min(v) *min_element(All(v))
#define Max(v) *max_element(All(v))
#define Max3(a,b,c) max(a,max(b,c))
#define Min3(a,b,c) min(a,min(b,c))

typedef long long i64;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

i64 Bigmod(i64 b, i64 p, i64 m)
{
    if(p==0)return 1LL;
    if(p%2==0)
    {
        i64 c = Bigmod(b, p/2, m);
        return ((c%m)*(c%m))%m;
    }
    else return ((b%m)*(Bigmod(b, p-1, m)))%m;
}

template <class T> inline T gcd(T x,T y){if(y==0)return x; return gcd(y,x%y);}
template <class T> inline T lcm(T x,T y){return ((x/gcd(x,y))*y);}

bool Reverse(i64 a, i64 b){return a > b;}

bool Compare(pair<i64,i64> a, pair<i64,i64> b)
{
    if(a.first == b.first) return a.second > b.second;
    return a.first < b.first;
}


#define Inside true
#define Outside false

int main()
{
    IOS

    int n;
    cin >> n;

    int Array[n], RestOnes = 0;

    for(int i = 0; i < n; i ++)
    {
        cin >> Array[i];
        if(Array[i] == 1) RestOnes++;
    }

    int Ans = 0;
    bool Now = Outside;
    for(int i = 0; i < n; i ++)
    {
        if(Now == Outside && Array[i] == 1)
        {
            Ans++;
            Now = Inside;
            RestOnes--;
        }
        else if(Now == Inside)
        {
            if(Array[i] == 1) Ans++, RestOnes--;
            else if(Array[i] == 0 && RestOnes > 0) Now = Outside, Ans++;
        }
    }

    cout << Ans << endl;

    return 0;
}
