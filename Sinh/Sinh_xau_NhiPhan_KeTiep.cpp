#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i=s.length()-1;
		while(s[i]=='1' && i>=0) i--;
		if(i<0){
			int j=s.length();
			while(j--){
				cout<<0;
			}
		}
		else{
			s[i]='1';
			for(int j=i+1;j<s.length();j++){
				s[j]='0';
			}
			cout<<s;
		}
		
		cout<<endl;
	}
	return 0;
}
