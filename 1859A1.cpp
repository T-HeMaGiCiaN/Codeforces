#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define popcount(x)     __builtin_popcountll(x)

#define w(t)            ll testcase; cin>>testcase; for (ll tc = 1; tc <= testcase; ++tc)
#define v(n) for(int i = 0; i < n; ++i){int x;cin>>x;v.pb(x);}
//if need to create vector of fixed size use other variable name than v like z(n)
//as v(n) will run this (we can only take input in v using this)
#define vm(n) for(int i = 0; i < n; ++i){int x;cin>>x;v.pb(x);m.pb(x);}
#define in(var) ll var;cin>>var;
#define op(var) cout<<var<<"\n";
#define pb push_back
#define sz(x) (int) (x).size()
#define fi first
#define se second
#define mp make_pair
#define fl(i,a,n) for(ll i=a;i<n;i++)
#define all(x) (x).begin(), (x).end()
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define eps 1e-8;

typedef pair<ll, ll> pll;
typedef pair<char, ll> pcl;
typedef pair<string, string> pss;
typedef vector<ll> vi;
typedef vector<vi> vvl;
typedef vector<pll> vpll;
typedef vector<pcl> vpcl;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef map<ll, ll> mll;
typedef unordered_map<string, int> msl;
typedef map<char, ll> mcl;
#define loop(n) for (int(i) = 0; i < (n); i++)// use loop(n-1) if not want loop to act on last number
#define loopj(n) for (int(j) = 0; j < (n); j++)
#define loop1(n) for (int(i) = 1; i <= n; i++)
#define loop1n(n) for (int(i) = 1; i < n; i++)//or use loop1(n-1)
#define loops(i, n) for (int(i) = 1; i <= n; i++)

#define magica(v, n) {for(int I = 0; I < n < ; I++) cout << (v)[I] << " ";}
#define magicv(v)     for (auto &x : v) {cout << x << " ";}
#define magicvp(v)     for (auto &x : v) {cout << x.fi << " "<<x.se<<endl;}
#define nline cout <<"\n"
#define nl "\n"

// debug code 


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.fi); cerr << ","; _print(p.se); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
/*template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {cerr<<"{";_print(i.fi); cerr << " ";_print(i.se);cerr<<"}";cerr<<" ";} cerr << "]";}*/

//to print stl template
//cout<<variable_name to print that variable(set,vector,map)

template <typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;
template <typename T>
using max_heap = priority_queue<T>;
 
template <typename T>
ostream &operator<<(ostream &os, min_heap<T> H)
{
    while (!H.empty())
    {
        os << H.top() << " ";
        H.pop();
    }
    os << endl;
    return os << "";
}
 
template <typename T>
ostream &operator<<(ostream &os, max_heap<T> H)
{
    while (!H.empty())
    {
        os << H.top() << " ";
        H.pop();
    }
    os << endl;
    return os << "";
}
 
template <typename F, typename S>
ostream &operator<<(ostream &os, pair<F, S> P)
{
    return os << P.first << " " << P.second;
}
 
template <typename T>
ostream &operator<<(ostream &os, vector<T> arr)
{
    for (int i = 0; i < (int)arr.size(); i++)
    {
        os << arr[i] << " ";
    }
    return os << "";
}
 
template <typename T>
ostream &operator<<(ostream &os, vector<vector<T>> matrix)
{
    os << endl;
    for (int i = 0; i < (int)matrix.size(); i++)
    {
        for (int j = 0; j < (int)matrix[i].size(); j++)
        {
            os << matrix[i][j] << " ";
        }
        os << endl;
    }
    return os << "";
}
 
template <typename T>
ostream &operator<<(ostream &os, set<T> S)
{
    for (auto s : S)
    {
        os << s << " ";
    }
    return os << "";
}
 
template <typename T>
ostream &operator<<(ostream &os, multiset<T> S)
{
    for (auto s : S)
    {
        os << s << " ";
    }
    return os << "";
}
 
template <typename F, typename S>
ostream &operator<<(ostream &os, map<F, S> M)
{
    os << endl;
    for (auto m : M)
    {
        os << m << endl;
    }
    return os << "";
}
 
template <typename F, typename S>
ostream &operator<<(ostream &os, multimap<F, S> M)
{
    os << endl;
    for (auto m : M)
    {
        os << m << endl;
    }
    return os << "";
}

//end

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
bool cmp(int c, int d) { return c > d; }

                         
const unsigned int M = 1e9+7;
const int N=1e5 +10;
const int INF=1e9 +10;
// const ll INF 0x3f3f3f3f3f3f3f3fLL;
double acc = 1e-6;

void themagician(){
in(n);
vector<ll>v,b,c;
vector<ll>x(n,0);
v(n);
sort(all(v),greater<ll>());
debug(v)
ll m=v[0];
for (int i = 0; i < n; ++i)
{
	if (m==v[i])
	{
		c.push_back(v[i]);
		x[i]=1;
	}
}
for (int i = 0; i < n; ++i)
{
	for (int j = i+1; j < n; ++j)
	{
		if (v[j]%v[i]==0)
		{
			// debug(1)
			// debug(v[j])
			// debug(v[i])
			if (x[i]==0)
			{
				b.pb(v[i]);
			}
			
			x[i]=1;
		}
		if (v[i]%v[j]==0)
		{
			// debug(2)
			// debug(v[i])
			// debug(v[j])
			if(x[j]==0)
			b.pb(v[j]);
			x[j]=1;
		}
		
		
	}
}

loop(n){
	if (x[i]==0&&b.size()==0)
	{
		b.pb(v[i]);
	}
	else if(x[i]==0&&c.size()==0)
	{
		c.pb(v[i]);
	}
	else if (x[i]==0)
	{
		c.pb(v[i]);
	}
}
debug(b)
debug(x)
debug(c)
if (b.size()==n||b.size()==0)
{
	cout<<-1<<nl;
	return;
}
else{
	cout<<b.size()<<" "<<c.size()<<nl;
	cout<<b<<nl;
	cout<<c<<nl;
}

}



int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
  optimize();
  
  w(t){
    themagician();
  }
  
return 0;
}
