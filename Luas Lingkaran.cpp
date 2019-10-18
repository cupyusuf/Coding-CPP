#include <conio.h>
#include <iostream.h>
main()
{
	int r;
	float a;
	clrscr();
	cout<<"\t	Nama\t	:Yusuf Supriadi\n";
	cout<<"\t	NIM\t	:17180068\n";
	cout<<"\t	Kelas\t	:17.1A.33\n\n";
	cout<<"\t\t\tLuas Lingkaran\t\t\t\n\n";
	//*Input*//
	cout<<"Masukan Jari-jarinya\t 	: ";cin>>r;
	//*Proses*//
	r=r*r; a=3.14*r;
	//*Output*//
	cout<<"Luas Lingkarannya\t 	: "<<a;
	getch();
}