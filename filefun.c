int factorial(int n1 ,int n2);
int main()
{
	int n1,n2,p
	int fact;
	printf("Enter value of num1 &num2");
	scanf("%d%d",&n1,&n2);
	
	 p=factorial(n1,n2);
	 printf("\n sum of fact is:%d",p)
}
	int factorial(int n1,int n2)
	{
		int i,j,k,fact=1,res=0;
	     k=n1;
		for(i=1;i<=k;i++)
		{
			fact=fact*i;
		}
			res=res+fact;
		for(j=n1+1;j<=n2;j++)
		{
		  fact=fact*j;
		  	res=res+fact;
		}
		return res;
	}

	  
