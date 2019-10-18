#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
	char kalimat1[20], kalimat2[20];
	clrscr();
	cout<<"Masukan kalimat1 : ";
	cin>>kalimat1;
	cout<<"Masukan kalimat2 : ";
	cin>>kalimat2;
	strcat(kalimat1,kalimat2);
	cout<<"Hasilnya : "<<kalimat1;
	getch();
}