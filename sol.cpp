#include<bits/stdc++.h>
using namespace std;

#define quickread                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define endll cout<<"\n";
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define hii cout << "Hii there Maverick! \n";
#define vi vector<long long int>
#define vvi vector<vector<long long int>>
#define fori(i,a,b) for(ll i=a;i<b;i++)
#define forn(n) for(ll i=0;i<n;i++)
#define forauto(a,b) for(auto a : b)
#define vecp(a,b,c) vector<pair<a,b>> c
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define vec(x,y) vector<x> y ;
#define fr(i, a, b) for(int i = (a); i < (b); ++i)
#define fb(i, b, a) for(int i = (b); i > (a); --i)
#define fill(x,y) memset(x,y,sizeof(x))
#define dbg(x) std::cout << #x << " = " << (x) << std::endl;
#define rr return; 



typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld;


ll gcd (ll a, ll b)
{
    if (a < b) 
        {
            a = a ^ b;
            b = a ^ b;
            a = a ^ b;
        }
    if (b == 0)  
        {
            return a;
        }
         else 
         {
            return gcd(b, a % b);
         }
}

void solve()
{

    string s; cin>>s;
    vector<string> shit ;
    string x = "";

    for (ull i= 0 ; i < s.length() ; i++){
        if (i+1 <= s.length()){
            
            char fi = s[i]; 
            char se = s[i+1]; 
            
            x += fi;
           
            if (fi!= se){
                shit.push_back(x);
                //dbg(x);
                x = "";
            }
        }
    }

    ull max= 0;
    for (auto el : shit){
        int len = el.length();
        if (len>max) max = len;
    }
    cout<<max;

}


int main() 
{
    
    quickread;
     ll t=1;
     while(t-->0)
        {
            solve();
            endll;
        }
    return 0;

}


/*

Checklist : 

 - Verify that your code solves the given problem and produces the correct output.
 - Test your code with sample inputs provided in the problem statement.
 - Consider edge cases and test your code with them (0,1).
 - Double-check any constraints mentioned in the problem.


 - Ensure that your code runs within the specified time limits for all test cases.
 - Optimize critical parts of your code if needed.
 - Avoid unnecessary computations or redundant operations.

*/