#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
	float a,b,c,d,e,f;
	clrscr();
	a=4>7;
	b=5<9;
	c=3!=7;
	d=4>=7;
	e=2<=5;
	f=4==4;
	cout<<"Operator Pada C++\n";
	cout<<"Nilai "<<4<<" > "<<7<<" ? "<<a<<endl;
	cout<<"Nilai "<<5<<" < "<<9<<" ? "<<b<<endl;
	cout<<"Nilai "<<3<<" != "<<7<<" ? "<<c<<endl;
	cout<<"Nilai "<<4<<" >= "<<7<<" ? "<<d<<endl;
	cout<<"Nilai "<<2<<" <= "<<5<<" ? "<<e<<endl;
	cout<<"Nilai "<<4<<" == "<<4<<" ? "<<f<<endl;
	getch();
}