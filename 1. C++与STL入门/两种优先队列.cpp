#include<bits/stdc++.h>
using namespace std;

int main(){
	int num,x;
	priority_queue<int> pq1;//从大到小的排列 
	priority_queue<int,vector<int>,greater<int> >pq2;//从小到大 
	//最后两个> >不能写一起，会被误认为是>>运算符 
	
	while(scanf("%d",&num)==1){
		int tmp=num,tmp1=num;
		while(num--){
			scanf("%d",&x);
			pq1.push(x);
			pq2.push(x);
		}
		
		while(tmp--){
			printf("%d ",pq1.top());//top()返回值,pop()并不返回值 
			pq1.pop();
		}
		cout<<endl;
		while(tmp1--){
		    printf("%d ",pq2.top());
		    pq2.pop();
		}
		break;
	}
}
