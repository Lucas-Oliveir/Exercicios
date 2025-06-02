#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endll cout<<endl;
void solve(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
         if(j==1 || j==n || i==n || i==1)
         {
            cout<<" *";
         } 
         else cout<<"  ";
        }
        endll;
    }
}
int main() {
    ll N;
    cin >> N;

    solve(N);

    return 0;
}
