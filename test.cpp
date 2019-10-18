#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
	char menu,lg;
	awal:
	clrscr();
	cout<<"===================Cara Memasak Telur==================\n";
	cout<<"======================Daftar Menu======================\n";
	cout<<"\n";
	cout<<"1. Telur Dadar Sederhana\n";
	cout<<"2. Telur Dadar Gulung Sosis\n";//Spesial// LOL
	cout<<"Pilih Daftar Menu [1/2] : ";cin>>menu;
	if(menu=='1')
	{
		clrscr();

	}
	else if(menu=='2')
	{
		clrscr();
		cout<<"===============Membuat Telur Dadar=================\n"<<endl;
		cout<<"1. Siapkan Bahan-bahan Berikut : \n";
		cout<<"~ 3 Butir Telur Ayam\n";
		cout<<"~ 1 Sosis\n";
		cout<<"~ 2 sdm Susu\n";
		cout<<"~ Wortel potong dadu kecil secukupnya\n";
		cout<<"~ 2 helai seledri(potong halus)\n";
		cout<<"~ 1/4 sdt garam(sesuai selera)\n";
		cout<<"~ 1/4 sdt kaldu jamur\n";
		cout<<"~ 1 sdm margarin untuk mendadar telur\n";
	}
	else(menu=="menu")
	getch();
}