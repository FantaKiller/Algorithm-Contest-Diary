#include<bits/stdc++.h>
using namespace std;

const int maxt=1000+10;//团队最大个数 

int main(){
	int t,kase=0;
	
	while(scanf("%d",&t)==1&&t)//t是团队个数 
	{
		printf("场景#%d\n",++kase); 
		
	    map<int,int> team;//将每个人编号映射为团队编号 
	
	    for(int i=0;i<t;i++)
		{
	     	int n,x;
		    scanf("%d",n);//当前团队人数 
		    while(n--)//巧妙循环风格 
			{
			scanf("%d",&x);//输入每个人不同的编号,x会被多次赋值 
			team[x]=i;//映射id 
		    }
	    }
	    
	    queue<int> q,q2[maxt];//两个队列，q是团队编号队列，q2是团队i的成员编号队列(这是一个数组) 
		 
	    for(;;){
	    	int x;
			char cmd[10];
			scanf("%s",cmd);//指令 
			
			if(cmd[0]='S') break;//退出 
			
			else if(cmd[0]='D') {
				int t=q.front();//先找到队首队列的编号 
				printf("%d\n",q2[t].front());//队首的人的编号 
				q2[t].pop();//出队 
				if(q2[t].empty()) q.pop();//如果出队后为该团队为空，就出大队列 
			}
			
			else if(cmd[0]='E'){
				scanf("%d",&x);//输入该人编号 
				int t=team[x];//其所在团队编号 
				if(q2[t].empty()) q.push(t);//如果该团队在大部队没人，就团队整体进入大部队 
				q2[t].push(x);//将该人进人团队 
			}
		}
		cout<<endl;
    }
    return 0;
}


