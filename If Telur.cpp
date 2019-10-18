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
	cout<<"2. Telur Dadar Gulung Sosis\n";
	cout<<"Pilih Daftar Menu [1/2] : ";cin>>menu;
	switch(menu)
	{
		case'1':
		clrscr();
		cout<<"==============Membuat Telur Dadar Sederhana================\n";
		cout<<"1. Panaskan Wajan Dan Masukkan Margarin\n";
		cout<<"2. Tunggu Hingga Margarin Meleleh/Panas\n";
		cout<<"3. Pecahkan Telur ke wajan\n";
		cout<<"4. Masukan Penyedap Rasa\n";
		cout<<"5. Tunggu Hingga Matang\n";
		cout<<"6. Telur Dadar Siap Dihidangkan\n";
		cout<<"=========================Selesai============================";
		break;
		case'2':
		clrscr();
		cout<<"===============Membuat Telur Dadar Gulung Sosis=================\n";
		cout<<"1. Siapkan Bahan-bahan Berikut : \n";
		cout<<"~ 3 Butir Telur Ayam\n";
		cout<<"~ 1 Sosis\n";
		cout<<"~ 2 sdm Susu\n";
		cout<<"~ Wortel potong dadu kecil secukupnya\n";
		cout<<"~ 2 helai seledri(potong halus)\n";
		cout<<"~ 1/4 sdt garam(sesuai selera)\n";
		cout<<"~ 1/4 sdt kaldu jamur\n";
		cout<<"~ 1 sdm margarin untuk mendadar telur\n";
		cout<<"2. Masukkan Semua Bahan Kecuali Sosis Kocok Lepas\n";
		cout<<"3. Panaskan Wajan Dan Masukkan Margarin\n";
		cout<<"4. Setelah wajan Panas 1/2 bagian masukkan telur kemudian tipiskan\n";
		cout<<"   dengan cara diputar-putar wajannya kemudian letakkan sosis diatas telur\n";
		cout<<"5. Telur Dadar Gulung Sosis Siap Dihidangkan\n";
		cout<<"=========================Selesai==========================";
		break;
		default:
		goto awal;
		break;
	}
	cout<<"\nApakah Anda Akan Memasak Lagi [Y/N] : ";cin>>lg;
	if(lg=='y' || lg=='Y')
	{
		goto awal;
	}
	else cout<<"Memasak Selesai, Terima Kasih. Tekan sembarang untuk keluar";
	getch();
}