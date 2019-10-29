#include<bits/stdc++.h>
using namespace std;

const int maxn=1000;//取代#define 

int main(){
	vector<int> a;
	vector<int>::iterator p;//定义迭代器，作用类似指针 
	
	int i=0;
	for(;i<10;i++){
		int y=0;
		cin>>y;
		a.push_back(y);//在尾端添加元素 
	}
	
	sort(a.begin(),a.end());//排序，从小到大，end()代表末尾加一 
	
	
	int num=a.size();//元素个数 
	cout<<num;
	
	while(!a.empty()){//是不是为空 
		cout<<"fuck you"<<endl;
		break;
	}
	
	cout<<a.empty()<<endl;
	
	for(p=a.begin();p!=a.end();p++){//遍历 
		cout<<" "<<*p;//使用迭代器 
	}
	
	reverse(a.begin(),a.end());//反转元素 
	a.resize(9);//改变大小 
	cout<<a.pop_back;
	
	for(int j=0;j<a.size();j++)//遍历 
	{
		cout<<endl<<""<<a[j];//取vector数组元素 
	}
	
}
