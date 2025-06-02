#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int maior=0;
int pmaior=0;
void dfs(vector<vector<int>>& a,vector<int>& vis,int at,int cont)
{
  vis[at]=1;
  if(cont>maior) 
    {
        maior=cont;
        pmaior=at;
    }


  for(auto it:a[at])
  {
     
    if(!vis[it])
    {
      dfs(a,vis,it,cont+1);
    }
  }
}

int main()
{
  int n;
  cin>>n;
  vector<vector<int>> gra(n);
  for(int i=0;i<n-1;i++)
  {
    int a,b;
    cin>>a>>b;
    gra[a-1].pb(b-1);
    gra[b-1].pb(a-1);
  }
  vector<int> vis(n,0);
  for(int i=0;i<n;i++)
  { 
    if(!vis[i] && gra[i].size()==1)
    {
        dfs(gra,vis,i,0);
        i=n;
    }
  }
    vector<int> vis2(n,0);
    dfs(gra,vis2,pmaior,0);
    cout<<maior<<endl;
}