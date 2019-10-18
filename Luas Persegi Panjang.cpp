#include <conio.h>
#include <iostream.h>
main()
{
	int p,l;
	float a;
	clrscr();
	cout<<"\t	Nama\t	:Yusuf Supriadi\n";
	cout<<"\t	NIM\t	:17180068\n";
	cout<<"\t	Kelas\t	:17.1A.33\n\n";
	cout<<"\t\t\tLuas Persegi Panjang\t\t\t\n\n";
	///*Input*//
	cout<<"Masukan Panjang\t\t 	: ";cin>>p;
	cout<<"Masukkan Lebar\t\t 	: ";cin>>l;
	//*Proses*//
	a=p*l;
	//*Output*//
	cout<<"Luas Persegi Panjangnya\t 	: "<<a;
	getch();

}