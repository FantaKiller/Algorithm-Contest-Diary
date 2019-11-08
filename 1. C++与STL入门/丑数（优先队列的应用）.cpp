#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
const int one[3]={2,3,5};//对于任意丑数x:2x,3x,5x也是丑数 

int main(){
	
	priority_queue<LL,vector<LL>,greater<LL> >pq;//从小到大的优先队列（越小优先度越高） 
	set<LL> s;
	
	pq.push(1); 
	s.insert(1);//丑数集合 
	
	for(int i=0;;i++){
		
		LL x=pq.top();pq.pop();
		
		if(i==1500){
			cout<<"第1500个丑数是"<<x<<endl;//
			break; 
		}

		for(int j=0;j<3;j++)
		{
			LL x2=x*one[j];//2x,3x,5x;这是一个发散的过程 
			
			if(!s.count(x2))//如果没有x(防止重复) 
			{
				s.insert(x2);
				pq.push(x2);//入队 
			}
		}
	}
	return 0;
}
