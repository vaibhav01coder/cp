#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)

#ifdef LOCAL
    #define debug(x) cerr << #x << " = "; _print(x); cerr << "\n"
#else
    #define debug(x)
#endif

void _print(int x){ cerr << x; }
void _print(long long x){ cerr << x; }
void _print(string x){ cerr << x; }
void _print(char x){ cerr << x; }
void _print(double x){ cerr << x; }
template<class T> void _print(vector<T> v){ cerr << "["; for(auto &i: v){ _print(i); cerr << " "; } cerr << "]"; }
template<class T1, class T2> void _print(pair<T1,T2> p){ cerr << "(" << p.first << "," << p.second << ")"; }

const ll INF = 1e18;
const int MOD = 1000000007;
// const int MOD = 998244353; // use when needed

void solve(){
    int n,m,q;
    cin>>n>>m>>q;
    int t3,t4;
    cin>>t3>>t4;
    int s1;
    cin>>s1;

    int t1 = min(t3,t4);
    int t2 = max(t3,t4);

    if(t1 <s1 && s1<t2 ){
        ll len = t2-t1+1;
        if(len%2)
        cout<<len/2<<endl;
        else
        cout<<(len/2)-1<<endl;
        return ;
    }

    if(s1 < t1)
    cout<<t1-1;
    else
    cout<<n-t2;
    cout<<endl;
}

int main(){
    fastio();

    int t ;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}