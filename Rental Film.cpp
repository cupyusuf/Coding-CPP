#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
	char kode,judul[20];
	int harga,hari,total,dis,ppn;
	awal:
	clrscr();
	cout<<"\tList Film\n\n";
	cout<<"1. Ayat-Ayat Cinta (A)\n";
	cout<<"2. Hantu Stan Manggarai (H)\n";
	cout<<"3. James Bond (J)\n";
	cout<<"4. Drop Out (D)\n";
	cout<<"5. Kungfu Panda (K)\n";
	//*Input*//
	cout<<"Masukan Kode Film [A/H/J/D/K]\t: ";cin>>kode;
	cout<<"Lama Sewa\t\t\t: ";cin>>hari;
	switch(kode)
	{
		case'A':
		case'a':
		strcpy(judul,"Ayat - Ayat Cinta");
		harga=15000;
		break;
		case'H':
		case'h':
		strcpy(judul,"Hantu Setan Manggarai");
		harga=12500;
		break;
		case'J':
		case'j':
		strcpy(judul,"James Bond");
		harga=12000;
		break;
		case'D':
		case'd':
		strcpy(judul,"Drop Out");
		harga=10000;
		break;
		case'K':
		case'k':
		strcpy(judul,"Kungfu Panda");
		harga=8500;
		break;
		default:
		cout<<"Salah Memasukan Kode Film";
		goto awal;
		break;
	}
	//*Proses*//
	total=harga*hari;
	if(hari>10)
	{
		dis=total*0.1;
	}
	else
	{
		dis=0;
	}
	clrscr();
	//*Output*//
	cout<<"Judul Film\t: "<<judul;
	cout<<"\nHarga\t\t: Rp."<<total;
	cout<<"\nPotongan\t: Rp."<<dis;
	ppn=total-dis;
	cout<<"\nTotal Bayar\t: Rp."<<ppn;
	cout<<"\nAnda Ingin Menggulang [Y/N] = ";cin>>kode;
	if (kode=='y' || kode=='Y')
		{
			goto awal;
		}
	else
	cout<<"Proses Selesai ";
	cout<<"Terima Kasih, Untuk Keluar Tekan Sembarang Tombol";
	getch();
}