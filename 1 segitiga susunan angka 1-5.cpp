#include <stdio.h>
#include <conio.h>
#include <iostream>
int main()
{
	int a,b;
	clrscr();
	for (a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
			cout<<b<<"";
         cout<<endl;
	}
	getch();
}