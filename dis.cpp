#include <bits/stdc++.h>
using namespace std;
#define inff 1000000
int nodes,edges;


vector<vector<pair<int,int>>>adj;
vector<int>dis;

void bell_man()
{
  for(int i=0; i<nodes; i++) dis.push_back(inff);
  dis[0]=0;

  for(int i=0; i<nodes; i++)
   {
      for(int j=0; j<adj[i].size(); j++)
         { 
               int x=adj[i][j].first;
               int y=adj[i][j].second;
               if(dis[x]>dis[j] + y)
                 dis[x]=dis[j]+ y;
         }
   }
   
}


int main()
{
  
  cin>>nodes>>edges;
 
  for(int i=0; i<edges; i++)
{
    int x,y,z;
    cin>>x>>y>>z;
    adj.push_back({});
    adj[x].push_back({y,z});
}
 bell_man();

for(int i=0; i<nodes; i++) cout<<dis[i]<<endl;

}

