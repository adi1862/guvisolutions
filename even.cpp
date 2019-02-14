#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll N;
	cin>>N;
	if(N<0)cout<<"invalid\n";
	else if(N&1)cout<<"Odd\n";
	else cout<<"Even\n";
	
	return 0;
}