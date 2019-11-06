#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(),x.end()
#define ins(x) inserter(x,x.begin())//这是两个宏 

typedef set<int> Set;//本题是对集合的操作，将集合看作一个个元素就好 

map<Set,int> Idcache;//将集合映射为数字ID,方便使用栈操作

vector<Set> Setcache;//让不定长数组的序号代表不同的id 

int Id(Set x){
	if(Idcache.count(x)) return Idcache(x);//如果找到了，就返回集合x映射的数字id 
	Setcache.push_back(x);//如果没有找到，就将x进入数组 
	return Idcache[x]=Setcache.size()-1;//它的ID就是数组序号 
}

int main()
{
	stack<int> s;
	int n;
	cin>>n;//
	
	for(int i=0;i<n;i++){
		string op;
		cin>>op; 
		if(op[0]=='P') s.push(Id(Set()));//Set()表示一个空集,将空集的ID入栈 
		else if(op[0]=='D') s.push(s.top());
		else
		{
			Set x1=Setcache[s.top()];s.pop();
			Set x2=Setcache[s.top()];s.pop();//由id取set，然后pop 
			Set x;
			if(op[0]='U') set_union(all(x1),all(x2),ins(x));
			if(op[0]='I') set_intersection(all(x1),all(x2),ins(x));//set_union和set_intersection是stl的内置操作 
			
			if(op[0]='A') 
			{
				x=x2;x.insert(x1);
			}
			
			s.push(Id(x));//入栈 
		}
		cout<<Setcache[s.top()].size()<<endl;
	}
}
