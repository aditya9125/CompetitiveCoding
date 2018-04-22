#include<bits/stdc++.h>

using namespace std;

const int max_=128;

vector<int> isPrime;

/*
void preProcess(set<int> & primes)
{

	isPrime[0]=0;
	isPrime[1]=1;
	isPrime[2]=1;

    for(int i=2; i*i<max_;i++)
    {

		if(isPrime[i]){

			for(int j=i*i;j<max_; j+=i)
			{
				isPrime[j]=false;

			}
		}
    }

    for(int i=32;i<max_;i++)
    {
        if(isPrime[i]) primes.insert(i);
    }

}
*/


int findRes(int v,vector<int> &primes)
{
	//cout<<"Called for "<<v<<"\n";
	int x,y;

    auto rit= lower_bound(primes.begin(),primes.end(),v);

    if(rit!=primes.end()){
		y=*rit;

        if(prev(rit)!=primes.end()){
    		x=*prev(rit);

    		return ((v-x)<=(y-v))? x:y;
        }
        else return *(primes.begin());

    }
    else return primes.back();
}
int main()
{

	int t;
	cin>>t;

	isPrime= vector<int>(max_,1);

	vector<int> primes{31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127};

//	set<int> primes;

//	preProcess(primes);

//	for(auto item:primes) cout<<item<<" ";


	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;

		for(int i=0;i<s.size();i++)
		{
			//cout<<s[i]<<": ";
			if(find(primes.begin(),primes.end(),int(s[i]))!=primes.end()) continue;

            s[i]=char(findRes(s[i],primes));
		}

		cout<<s<<'\n';



	}

}
