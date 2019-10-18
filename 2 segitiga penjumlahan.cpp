#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
	int a=10,i,j,jum;
   char spasi[20];
	for(i=2;i<=a;i+=2)
	{
		jum=0;
		for(j=2;j<=i;j+=2)
		{
			if(j!=2)
				cout<<"+";
			cout<<j;
         jum+=j;
		}
		cout<<"	  	="<<jum<<endl;
	}
	cout<<endl;
getch();
}