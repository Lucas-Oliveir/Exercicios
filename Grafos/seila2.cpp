#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>>& a,int* vis,int at,int cont)
{
    vis[at]=cont;
    for(auto it:a[at])
    {
        if(!vis[it])
        {
            dfs(a,vis,it,cont);
        }
    }

}
int main()
{
    int n,m;

    cin>>n>>m;
    vector<vector<int>> graf(n);
    map<int,vector<int>> mapa;
    int vis[n]={0};
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        graf[a-1].push_back(b-1);
        graf[b-1].push_back(a-1);
    }
    int cont=0;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            cont++;
            dfs(graf,vis,i,cont);
        }
    }
    for(int i=0;i<n;i++)
    {
        mapa[vis[i]].push_back(i);
    }
    cout<<cont-1<<endl;
    vector<int> rep;
    for(int i=1;i<=cont;i++)
    {
        rep.push_back(mapa[i][0]);
    }
    for(int i=0;i<cont-1;i++)
    {
        cout<<rep[i]+1<<" "<<rep[i+1]+1<<endl;
    }   
}