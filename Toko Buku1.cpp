#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
	char nm_buku[20], kd_buku[10], *bonus, kode, lagi;
	int hrg_buku, jml_buku, discon, total_bayar;
	float ppn;
	menuutama:
	clrscr();
	cout<<"Masukkan Kode Buku [1/2/3] : ";cin>>kd_buku;
	cout<<"\n";
	switch(kode)
	{
		case '1':
		cout<<"Sukses Belajar Borland C++";
		break;
		case '2':
		cout<<"Kunci Pribadi Yang Sukses";
		break;
		case '3':
		cout<<"Mencari Mutiara DI Dasar Hati";
		break;
		goto menuutama;
		break;
	}
	cout<<"Jumlah Pembelian Buku Anda : ";cin>>jml_buku;

	if (strcmp(kd_buku, "1")== 0)
	{
		strcpy(nm_buku, "Sukses Belajar Borland C++");
		 {hrg_buku = 50000;}
		 if(jml_buku >=5)
		 	{discon = 0.1*hrg_buku*jml_buku;
		 		bonus ="Note Book";}
	else if (jml_buku < 5)
		{discon = 0;
			bonus ="Maaf ANda Tidak Dapat Bonus";}
	else if (ppn)
		{ppn = 0.1*total_bayar;}
	else{hrg_buku = 0;}
	}
	if (strcmp(kd_buku, "2")== 0)
	{
		strcpy(nm_buku, "Kunci Pribadi Yang Sukses");
		{hrg_buku = 35000;}
		bonus ="Note Book";}
	else if (jml_buku <5)
		{discon = 0;
			bonus ="Maaf Anda Tidak Dapat Bonus";}
	else if (ppn)
		{ppn = 0.1*total_bayar;}
	else{hrg_buku = 0;
	}

	if (strcmp(kd_buku, "3")== 0)
	{
		strcpy(nm_buku, "Mencari Mutiara DI Dasar Hati");
		{hrg_buku = 45000;}
		if (jml_buku >=5)
		{discon = 0.1*hrg_buku*jml_buku;}
      else if (ppn)
		{ppn = 0.1*total_bayar;}
		else if (hrg_buku)
		{hrg_buku = 0;}
		else{
		cout<<"Maaf Buku Ynag Anda Cari Tidak Ada"<<endl;}
	}
clrscr();
cout<<"\t\t\t 	***TOKO BUKU HALIFI*** 	"<<endl;
cout<<"\t\t\t 	JL. KEADILAN NO. 16	"<<endl;
cout<<"=================================================="<<endl;
cout<<endl;
cout<<"Nama Buku : "<<nm_buku<<endl;
cout<<"Harga Buku : "<<hrg_buku<<endl;
cout<<"Potongan : "<<discon<<endl;
cout<<"Bonus : "<<bonus<<endl;
total_bayar = hrg_buku*jml_buku-discon;
cout<<"Total Bayar : "<<total_bayar<<endl;
ppn = 0.1*total_bayar;
cout<<"ppn : "<<ppn<<endl;
cout<<endl;
cout<<" 	TERIMA KASIH 	"<<endl;
cout<<"INPUT DATA LAGI [Y/T] :";cin>>lagi;
switch(lagi)
{
	case'Y':
	case'y': goto menuutama;
	break;
	case'T':
	case't': goto keluar;
	break;
}
getch();
keluar:
}