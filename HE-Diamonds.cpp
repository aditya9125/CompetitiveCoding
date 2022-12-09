#include<bits/stdc++.h>
using namespace std;

bool IsDiamond(int i,int j, vector<vector<char>> &Arr)
{
    bool ans = true;
    //ans = ans & (Arr[i][j+1]=='\')
    if(Arr[i][j]!='/') 
        ans = false;
    if(Arr[i][j+1]!='\\')
        ans = false; 
    if(Arr[i+1][j]!='\\')
        ans=false;
    if(Arr[i+1][j+1]!='/')
        ans=false;
    

    return ans;
}

int Solver(int n,int m, vector<vector<char>> &Arr)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m-1;)
        {
            if(IsDiamond(i,j,Arr))
            {    
                j+=2;
                count+=1;
            }
            else
                j++;
        }
    }
    return count;
}

int main()
{
    int t,n,m;
    cin>>t;

    //vector<vector<char>> Arr;
    
    while(t--)
    {
        cin>>n>>m;

        vector<vector<char>> Arr(n,vector<char>(m));
        
        for(int i=0;i<n;i++){ 
            for(int j=0;j<m;j++){
                       cin>>Arr[i][j];
            }
        }
        
        //for(int i=0;i<n;i++) for(int j=0;j<m;j++) cout<<Arr[i][j];
        

        cout<<Solver(n,m,Arr)<<endl;

    }

}