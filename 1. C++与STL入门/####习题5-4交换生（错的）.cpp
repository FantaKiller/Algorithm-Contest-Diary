#include<bits/stdc++.h>
using namespace std;

typedef struct two{
	int a;
	int b;
}pair;

int main(){
	int a,b,n;
	set<pair> exchange;
	while(scanf("%d",&n)==1){
		for(int i=0;i<n;i++){
			cin>>a>>b;
			pair tmp;
			tmp.a=b;
			tmp.b=a;
			if(exchange.count(tmp)) continue;
			tmp.a=a;
			tmp.b=b;
			exchange.insert(tmp);
		}
		break;
	}
	int one=exchange.size();
	cout<<one;
}
