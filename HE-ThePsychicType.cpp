#include<bits/stdc++.h>
using namespace std;

bool Solver(vector<int> &Arr,int S,int E)
{
    vector<bool> Vis(Arr.size(),false);
    bool ans=false;

    Vis[S]=true;
    for(int i=S;i<Arr.size();)
    {
        int j=Arr[i];
        if(j==E)
        {
            ans=true;
            break;
        }
        if(Vis[j])
        {
            break;
        }

        i=j;
    }

    return ans;
}

int main()
{
    int N,S,E;
    vector<int> Arr(N+1);

    cin>>N;
    for(int i=1;i<=N;i++)
    {
        cin>>Arr[i];
    }
    
    cin>>S>>E;

    bool ans=Solver(Arr,S,E);
	ans? cout<<"Yes":cout<<"No";

}