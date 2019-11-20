#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> two;

int main(){
	int a,b,n;
	multiset<two> exchange;
	while(scanf("%d",&n)==1){
		for(int i=0;i<n;i++){
			cin>>a>>b;
			two tmp;
			tmp.first=b;
			tmp.second=a;
			if(exchange.count(tmp)){
				exchange.erase(tmp);
				continue;
			}
			tmp.first=a;
			tmp.second=b;
			exchange.insert(tmp);
		}
		break;
	}
	int one=exchange.size();
	cout<<one;
}
