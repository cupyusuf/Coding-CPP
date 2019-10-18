#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
	char plh,plh1,lg;
	int al,tg,pj,lb,r;
	float a;
awal:
	clrscr();
	cout<<"============================\n";
	cout<<"BINA CERDAS SEOKARNO-HATTA\n";
	cout<<"============================\n";
	cout<<"Pilihan Menu\n";
	cout<<" 1.Perhitungan\n";
	cout<<" 2.Keluar\n";
	cout<<"Masukkan Pilihan Anda [1/2] = ";
	cin>>plh;
	if(plh=='1')
	{
		clrscr();
		cout<<"1.Luas Segitiga\n";
		cout<<"2.Luas Persegi Panjang\n";
		cout<<"3.Luas Lingkaran\n";
		cout<<"Masukkan Pilihan = ";
		cin>>plh1;

		if (plh1=='1')
		{
			clrscr();
			cout<<"Anda Memilih Rumus Perhitungan Luas Segitiga\n";
			cout<<"Masukkan Alas = ";
			cin>>al;
			cout<<"Masukkan Tinggi = ";
			cin>>tg;
			a=0.5*al*tg;
			cout<<"Luas Segitiganya = "<<a;
		}
		else if(plh1=='2')
		{
			clrscr();
			cout<<"Anda Memilih Rumus Perhitungan Luas Persegi Panjang\n";
			cout<<"Masukkan Panjang = ";
			cin>>pj;
			cout<<"Masukkan Lebar = ";
			cin>>lb;
			a=pj*lb;
			cout<<"Luas Persegi Panjangnya = "<<a;
		}
		else if (plh1=='3')
		{
			clrscr();
			cout<<"Anda Memilih Rumus Perhitungan Luas Lingkaran\n";
			cout<<"Masukkan Jari Jarinya = ";
			cin>>r;
			r=r*r;
			a=3.14*r;
			cout<<"Luas Lingkarannya = "<<a;
		}
		else
		{
			cout<<"Pilihan Tidak Tersedia";
		}
		cout<<"\nAnda Ingin Menggulang [Y/N] = ";
		cin>>lg;
		if (lg=='y' || lg=='Y')
		{
			goto awal;
		}
		else
			cout<<"Proses Selesai";
	}
	cout<<"Terima Kasih, Untuk Keluar Tekan Sembarang Tombol";
	getch();
}