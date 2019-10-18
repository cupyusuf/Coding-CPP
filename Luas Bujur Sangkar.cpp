#include <conio.h>
#include <iostream.h>
main()
{
	int s1,s2;
	float a;
	clrscr();
	cout<<"\t	Nama\t	:Yusuf Supriadi\n";
	cout<<"\t	NIM\t	:17180068\n";
	cout<<"\t	Kelas\t	:17.1A.33\n\n";
	cout<<"\t\t\tLuas Bujur Sangkar\t\t\t\n\n";
	//*Input*//
	cout<<"Masukan Sisi\t\t 	: ";cin>>s1;
	cout<<"Masukan Sisi\t\t	: ";cin>>s2;
	//*Proses*//
	a=s1*s2;
	//*Output*//
	cout<<"Luas Bujur Sangkarnya\t 	: "<<a;
	getch();
}