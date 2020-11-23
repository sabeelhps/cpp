#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<map>
#include<stack>
#include<queue>
#include<set>
#include<cstring>
#include<cmath>

using namespace std;

#define int long long int


int solve(vector<vector<int> >v){

	vector<int>ans,a,b;

	a=v[0];
	b=v[1];

	ans.resize(a.size()+b.size());
	merge(a.begin(),a.end(),b.begin(),b.end(),ans.begin());

	for(int i=2;i<v.size();i++){

		b.clear();
		b=v[i];
		a.swap(ans);
		ans.clear();
		ans.resize(a.size()+b.size());
		merge(a.begin(),a.end(),b.begin(),b.end(),ans.begin());

	}

	int median=ans[ans.size()/2];

	return median;
}

int32_t main(){

	int row,col;
	cin>>row>>col;
	vector<vector<int> >v(row,vector<int>(col,0));
	
	int d;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>d;
			v[i][j]=d;
		}
	}

	cout<<solve(v)<<endl;


	return 0;
}