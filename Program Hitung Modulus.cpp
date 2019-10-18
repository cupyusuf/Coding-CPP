#include <conio.h>
#include <iostream.h>
main()
{
	char lagi;
	int n1,n2,hasil;
	awal:
	clrscr();
	cout<<"Program Hitung Modulus\n";
	//*Input*//
	cout<<"Masukan Nilai 1\t\t: ";cin>>n1;
	cout<<"Masukan Nilai 2\t\t: ";cin>>n2;
	//*Proses*//
	hasil =n1%n2;
	if (hasil>=1)
	{
		hasil=n1%n2;
	//*Output*//
	cout<<"Hasil Dari Sisa Bagi\t: "<<hasil;	
	}
	else
	cout<<"";
	hasil=n1%n2;
	cout<<"\nAnda Ingin Menggulang [Y/N] = ";cin>>lagi;
	if (lagi=='y' || lagi=='Y')
		{
			goto awal;
		}
	else
	cout<<"Proses Selesai ";
	cout<<"Terima Kasih, Untuk Keluar Tekan Sembarang Tombol";
	getch();
}