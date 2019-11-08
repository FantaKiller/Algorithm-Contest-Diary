  
  int compare(int a[],int b[])
  {
  	if(a[0]>b[0]) return 1;//a>b返回1 
  	if(a[0]<b[0]) return -1;//a<b返回-1 
  	
  	for(int i=a[0];i>0;i--)//此时意味着：a,b位数相同 ，从高位比到低位 
	  {
  		if(a[i]>b[i]) return 1;
  		if(a[i]<b[i]) return -1;
	  }
	
	return 0;//两轮筛选后，说明a=b; 
  }
