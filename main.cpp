#include <bits/stdc++.h>

using namespace std;

string s;
int mod[20]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char zh[20]={'1','0','X','9','8','7','6','5','4','3','2'};

char check(string a){
	long long ls=0;
	for(int i=0;i<a.size()-1;i++) ls+=(a[i]-'0')*mod[i];
	return zh[ls%11];
}

int main(){
	while(cin >> s){
		if(s[s.size()-1]==check(s)) cout << "YES" << endl;
		else cout << "Failed" << endl; 
	}
} 
