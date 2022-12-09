#include<iostream>
using namespace std;

typedef long long int LL;
LL Solver(LL c, LL n)
{
    LL min= n*(n+1)/2, ans, k, y=n*(n-1)/2, chocDist;
    k=(c-y)/n;

    if(c<min)
        ans=c;
    else{
        chocDist= k*n+(n*(n-1))/2;
        ans=c-chocDist;
    }

    return ans;

}
int main()
{
    int t,c,n;
    // cout<<"hello world";
    cin>>t;
    while(t--){
        cin>>c>>n;
        cout<<Solver(c,n);
    }
    //cout<<t;
    return 0;

}
