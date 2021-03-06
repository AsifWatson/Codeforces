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
|   CSTE,Noakhali Science and Technology University(11)     |
|                                                           |
************************************************************/

#include "bits/stdc++.h"
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

bool compare(pair<long long,long long> a,pair<long long,long long> b)
{
    if(a.first==b.first)return a.second>b.second;
    return a.first<b.first;
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int q;
    cin>>q;

    while(q--)
    {
        long long n;
        cin>>n;

        map<long long,long long> mp;
        set<long long> st;

        for(int i=1; i<=4*n; i++)
        {
            long long a;
            cin>>a;
            mp[a]++;
            st.insert(a);
        }

        vector<long long> v;
        v.push_back(0);

        bool finish=false;
        for(auto it=st.begin(); it!=st.end(); it++)
        {
            if(mp[*it]%2 == 1)
            {
                cout<<"NO"<<endl;
                finish=true;
                break;
            }
            for(int i=1; i<=mp[*it]/2; i++)v.push_back(*it);
        }

        if(finish)continue;

        set<long long> ans;
        for(int i=1; i<=(v.size()-1)/2; i++)
        {
            ans.insert(v[i]*v[v.size()-i]);
        }

        if(ans.size()==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}


