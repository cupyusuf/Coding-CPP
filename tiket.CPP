#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string>

main()
{
char pesawat[15], kelas, input;
string kode;
int harga, jumlah, tiket, total;

awal:
clrscr();
cout<<"\t\tProgram TIket Pesawat"<<endl;
cout<<"\t\t Jakarta - Malaysia"<<endl;
cout<<"----------------------------------------------"<<endl;
kode:
cout<<"\nMasukan Kode Pesawat [MPT/GRD/BIV] : ";cin>>kode;
if(kode == "MPT" || kode == "mpt")
{
strcpy(pesawat,"Merpati");
}
else if (kode == "GRD" || kode=="grd")
{
strcpy(pesawat,"Gardua");
}
else if (kode == "BIV" || kode=="biv")
{
strcpy(pesawat,"Batavia");
}
else
{
cout<<"Kode Pesawat Salah";
goto kode;
}
cout<<"Kelas Pesawat : "<<endl;
cout<<"\t1. Eksekutif"<<endl;
cout<<"\t2. Bisnis"<<endl;
cout<<"\t3. Ekonomi"<<endl;
kelas:
cout<<"Pilih Kelas [1/2/3] : ";cin>>kelas;
if(kode == "MPT" || kode == "mpt")
{
	if(kelas=='1')
	{
	harga=1500000;
	}
	else if(kelas=='2')
	{
	harga=900000;
	}
	else if(kelas=='3')
	{
	harga=500000;
	}
	else
   {
	cout<<"Kode Salah"<<endl;
   goto kelas;
	}
}
if(kode == "GRD" || kode == "grd")
{
	if(kelas=='1')
	{
	harga=1200000;
	}
	else if(kelas=='2')
	{
	harga=800000;
	}
	else if(kelas=='3')
	{
	harga=400000;
	}
	else
   {
	cout<<"Kode Salah"<<endl;
   goto kelas;
	}
}
if(kode == "BIV" || kode == "biv")
{
	if(kelas=='1')
	{
	harga=1000000;
	}
	else if(kelas=='2')
	{
	harga=700000;
	}
	else if(kelas=='3')
	{
	harga=300000;
	}
	else
   {
	cout<<"Kode Salah"<<endl;
   goto kelas;
	}
}
cout<<"\nNama Pesawat : "<<pesawat;
cout<<"\nHarga Tiket : "<<harga;
cout<<"\nJumlah Tiket : ";cin>>jumlah;
total=harga*jumlah;
cout<<"Total Bayar : "<<total;
cout<<endl;
cout<<"\t\t\t\t\tINGIN INPUT LAGI [Y] :";cin>>input;
if(input=='y')
{
goto awal;
}
else
goto end;
getch();
end:
}