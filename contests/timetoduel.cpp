#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
const ll MOD = 1e9 + 7;
int main()
{
  int n;
  cin>>n;
  

  if(n==0)
  {
    cout<<"*"<<endl<<"*"<<endl;
  }
  else
  {

    if(n>5)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<"I";
            if(i==5)cout<<endl;
        }
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            cout<<"I";
        }
        cout<<endl;
        cout<<"*"<<endl;
    }

}



}