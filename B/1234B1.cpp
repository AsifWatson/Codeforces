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
#define all(v) v.begin(),v.end()
#define allre(v) v.rbegin(),v.rend()
#define sp(x,y) fixed<<setprecision(y)<<x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

long long bigmod(long long b, long long p, long long m)
{
    if(p==0)return 1;
    if(p%2==0)
    {
        long long c = bigmod(b, p/2, m);
        return ( (c%m)*(c%m) )%m;
    }
    else return ((b%m)*(bigmod(b, p-1, m)))%m;
}

template <class T> inline T gcd(T x,T y){if(y==0)return x; return gcd(y,x%y);}
template <class T> inline T lcm(T x,T y){return ((x/gcd(x,y))*y);}

bool Reverse(long long a,long long b){return a>b;}

bool compare(pair<long long,long long> a,pair<long long,long long> b)
{
    if(a.first==b.first)return a.second>b.second;
    return a.first<b.first;
}

set<pair<int,int> > chatListSorted;
set<int> chatListRandom;

int main()
{
    IOS

    int n,k,idx=0;
    cin>>n>>k;

    for(int i=1; i<=n; i++)
    {
        int id;
        cin>>id;

        if(chatListRandom.count(id)==0)
        {
            if(chatListRandom.size()>=k)
            {
                pair<int,int> pr = *chatListSorted.begin();
                chatListRandom.erase(pr.second);
                chatListSorted.erase(pr);
            }
            chatListRandom.insert(id);
            chatListSorted.insert({++idx,id});
        }
    }

    cout<<chatListSorted.size()<<endl;
    for(auto it=chatListSorted.rbegin(); it!= chatListSorted.rend(); it++)
    cout<<(*it).second<<" ";

    return 0;
}


