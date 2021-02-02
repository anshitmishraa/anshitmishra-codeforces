#include <bits/stdc++.h>

using namespace std;

#define endl ("\n")
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(){
	string s;
	cin>>s;

	map<int,vector<int>> m;

	for(int i = 0;i<s.size();i++){
		auto e = s[i];
		if(isupper(e)) m[0].push_back(i);
		if(islower(e)) m[1].push_back(i);
		if(isdigit(e)) m[2].push_back(i);
	}
	if(m.size() == 1) {
		if(!(m.begin() -> first)) s[1] = 'a', s[2] = '1';
		if(m.begin() -> first == 1) s[1] = 'A', s[2] = '1';
		if(m.begin() -> first == 2) s[1] = 'a', s[2] = 'A';
	}
	else if(m.size() == 2){
		auto comp_val = [](auto i, auto j) { return i.second.size() < j.second.size(); };
		auto i = max_element(m.begin(),m.end(),comp_val)->second[0];
		if(m[0].empty()) s[i] = 'A';
		if(m[1].empty()) s[i] = 'a';
		if(m[2].empty()) s[i] = '1';
	}
	cout<<s<<endl;
}


int main(){
    fast

    int t;
    cin>>t;

    while(t--)
    	solve();

	return 0;
}