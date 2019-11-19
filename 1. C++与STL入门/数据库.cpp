#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	int a[10+1];
	cin>>n>>m;//
	
	string tmp;//
	
	vector<int> database;//
	map<string,int> ease;//
	int k=0;//
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>tmp;
			if(!ease.count(tmp))
			{
				ease[tmp]=k;
				database.push_back(k);
				k++;
			}
			else
			{
				database.push_back(ease[tmp]);
			}			
		}
	}
	
	vector<int>::iterator it=database.begin();
	map<int,int> search;
	
	for(int i=0;i<n;i++){
		
		for(int j=1;j<=m;j++){
			a[j]=*it;
			++it;
			database.pop_back();
		}//
		
		while((m--)>1){
			int tmp=m;
			while((--m)>0){
				int p,q;
				p=a[tmp];
				q=a[m];
				if(!search.count(a[tmp])){
					search[a[tmp]]=a[m];
				}
				else
				{
					if(search[a[tmp]]=a[m]){
						printf("YES");
						return 0;
					}					
				}
			}
		}
	}
	
	printf("NO");
	return 0;
}
