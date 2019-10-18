#include <string.h>
#include <iostream.h>
#include <conio.h>
main()
{
	char a1[]="BSI", a2[]="Bsi", b1[]="BSI";
	clrscr();
	cout<<"Hasil Perbandigan "<<a1<<" Dan "<<a2<<"->";
	cout<<strcmp(a1,a2)<<endl;
	cout<<"Hasil Perbandigan "<<a2<<" Dan "<<a2<<"->";
	cout<<strcmp(a2,a1)<<endl;
	cout<<"Hasil Perbandigan "<<a1<<" Dan "<<a1<<"->";
	cout<<strcmp(a1,b1)<<endl;
	getch();
}