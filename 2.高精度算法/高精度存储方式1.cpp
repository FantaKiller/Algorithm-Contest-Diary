#include<bits/stdc++.h>
using namespace std;

const int num=100;//最大位数 

int main(){
	int a[num+1];//a[0]存储位数 
	
	string s1;
	cin>>s1;//当成字符串输入，一位就是一个字符，避免输入一次空格一次 
	
	memset(a,0,sizeof(a));//数组a全部元素置0 
	a[0]=s1.length();//string的特性 
	
	for(int i=1;i<=a[0];i++)
	{
		a[i]=s1[a[0]-i]-'0';//减去'0'是将字符转换为数字，位数减i后是s1[a[0]-1]到s1[0]，刚好倒序 
	}
	
	return 0;
	
}
