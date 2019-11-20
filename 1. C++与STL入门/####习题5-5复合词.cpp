#include<bits/stdc++.h>
using namespace std;

typedef pair<string,string> faldo;

faldo cut(string &word,int i,int len)
{
	faldo one;
	int tmp=0;
	
	while(tmp<=i)
	{
		one.first[tmp]=word[tmp];
		tmp++;
	}
	
	
	while(tmp<=len){
		one.second[tmp]=word[tmp];
		tmp++;
	}
	
	return one;
}



faldo cut(string &word,int i,int len);

int main()
{
	set<string> dict;
	vector<string> compound;
	int n;
	
	while(cin>>n){
		int n1=n;
		string tmp;
		while(n1--){
			cin>>tmp;
			dict.insert(tmp);
		}
		break;
	}
	
	set<string>::iterator it=dict.begin();
	for(;it!=dict.end();it++)
	{
	
		string word=*it;
		string a,b;
		
		int len=word.length();
		for(int i=0;i<len-1;i++){
			faldo ok=cut(word,i,len);
			a=ok.first;
			b=ok.second;
			if(dict.count(a)&&dict.count(b)) compound.push_back(word);
		}
	}
	
	sort(compound.begin(),compound.end());
	
	vector<string>::iterator bye;
	for(bye=compound.begin();bye!=compound.end();bye++){
		cout<<*bye;
	} 
}
