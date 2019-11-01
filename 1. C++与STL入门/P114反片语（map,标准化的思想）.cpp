#include<bits/stdc++.h>
using namespace std;

map<string,int> words;//将单词映射为数字 
vector<string> tmp;//


//然后标准化单词 
string standard(const string & s)//const代表只读，&代表引用（防止空间浪费） 
{
	
	string ans=s;
	
	for(int i=0;i<ans.length();i++)
	{
		ans[i]=tolower(ans[i]);
	}//转化为小写 
	
	sort(ans.begin(),ans.end());//然后排序，标准化 
	
	return ans;
}

int main()
{
	string s;
	
	while(cin>>s){
		
		if(s=="#")  break;//退出输入流的循环 
		
		tmp.push_back(s);// 
		string same=standard(s);//将该单词标准化 
		
		if(!words.count(same)) words[same]=0;//如果在单词映射中，没有这个标准化单词，则设置为0，随后加一，为1； 
		words[same]++;//如果有就+1; 
	}
	
	vector<string> output;//符合条件的输出 
	
	for(int i=0;i<tmp.size();i++)
	{
	    if(words[standard(tmp[i])]==1) 
		    output.push_back(tmp[i]);//若标准化单词映射数值为'1',说明符合条件，将其push; 
	}
	
	sort(output.begin(),output.end());//字典序排序 
	
	//两种vector的遍历 
	for(vector<string>::iterator it=output.begin();it!=output.end();++it)
	{
		cout<<*it<<endl;
	}
	for(int i=0;i<output.size();i++)
	{
		cout<<output[i]<<endl;
	}
	
	return 0;
}









