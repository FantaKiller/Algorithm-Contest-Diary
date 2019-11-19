#include<bits/stdc++.h>
using namespace std;

int main(){
	queue<int> poke;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		poke.push(i);
	}
	cout<<"每次扔掉的牌:"<<endl; 
	while((poke.size())>1){
		cout<<(poke.front())<<" ";
		poke.pop();
		int j=poke.front();
		poke.pop();
		poke.push(j);
	}
	cout<<endl<<"最后剩下的牌："<<(poke.front());
	return 0;
}
