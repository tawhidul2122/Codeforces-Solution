 #include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		if(a%b==0)
		{
			cout<<"0\n";
            continue;
		}
		ll val=a/b;
		val++;
		val*=b;
		cout<<val-a<<"\n";

		
	}
}