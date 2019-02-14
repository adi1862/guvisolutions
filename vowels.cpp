#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	char N;
	cin>>N;
	if(N>='a'&&N<='z'||N>='A'&&N<='Z'){
	    if(N=='a'||N=='A'||N=='e'||N=='E'||N=='i'||N=='I'||N=='o'||N=='O'||N=='u'||N=='U')
	    cout<<"Vowels\n";
	    else
	    cout<<"Consonant\n";
	}
	else
	cout<<"invalid\n";
	
	return 0;
}