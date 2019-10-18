#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
	int a,b,c,d;
	clrscr();

	a= 30>=30 && 80 <= 75;
	b= 20>=20 && 65 <= 75;
	c= 30>=30 || 65 <= 75;
	d= 30>=20 || 80 <= 75;

	cout<<"Operator Logika\n";
	cout<<"==========================\n";
	cout<<"<S>=0 && S <=75>-->"<<a;
	cout<<"\n<S>=0 && S <=75>-->"<<b;
	cout<<"\n<S>=0 || S <=75>-->"<<c;
	cout<<"\n<S>=0 || S <=75>-->"<<d;
	getch();
}