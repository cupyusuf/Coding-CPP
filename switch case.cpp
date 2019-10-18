#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
	char kode,lagi;
	atas:
	clrscr();
	cout<<"INPUT KODE BARANG [A...C]:";
	kode=getche();
	cout<<'\n';
	switch(kode)
	{
		case 'A':
		case 'a':
		cout<<"Alat Olahraga";
		break;
		case 'B':
		case 'b':
		cout<<"Alat Elektronik";
		break;
		case 'C':
		case 'c':
		cout<<"Alat Masak";
		break;
		defaukt:
		cout<<"Anda Salah Memasuka Kode";
	}
	cout<<'\n';
	cout<<"\nIngin Pilih Lagi [Y/T]\t: ";
	lagi=getche();
	if(lagi=='Y'||lagi=='y')
		goto atas;
	getch();
}