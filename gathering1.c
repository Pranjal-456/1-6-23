#include<stdio.h>
    fact(int n)
    {
      int factorical;
      if(n<=0)
      {
      	return 1;
	  }
	  else
	  {
	    factorical=n*fact(n-1);
	  }
	  return factorical;
    }
	main()
	{
		int a,ans;
		printf("enter value=");
		scanf("%d",&a);
		ans=fact(a);
		printf("factorical =%d",ans);
	}
