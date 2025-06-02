#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define int long long
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
const ll MOD = 1e9 + 7;
signed main()
{
  int n;
  vi a;
  
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int b;
    cin>>b;
    a.pb(b);
  }

  sort(rbegin(a),rend(a));
  int soma=0;
  int somb=0;
  soma=a[0];
  for(int i=1;i<n;i++)
  {
    if(soma>somb) somb+=a[i];
    else soma+=a[i];
  }

  cout<<abs(soma-somb)<<endl;

}