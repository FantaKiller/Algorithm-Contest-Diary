#include<bits/stdc++.h>
using namespace std;

set<string> dict;//容器set 

int main(){
	string s,buf;
	while(cin>>s)//流输入 
	{
		for(int i=0;i<s.length();i++)//set的长度是length() 
		{
			if(isalpha(s[i])) s[i]=tolower(s[i]);//当这个是字母的时候，将其转化为小写字母，标准化； 
			else
			s[i]=' ';
		}
		
		stringstream ss(s);//将s流入ss; 
		while(ss>>buf) dict.insert(buf);//ss一次流出一个有效输入 
	}
	for(set<string>::iterator it=dict.begin();it!=dict.end();++it)//迭代器 
	{
		cout<<*it<<endl;
	}
	return 0;
}

//回车+(Ctrl+Z)+回车结束流输入 
