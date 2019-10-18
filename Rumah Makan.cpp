#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
	char kode,makanan[20], minuman[20];
   int jum_beli,dis,harga,harga1,total,total1;

   clrscr();

   cout<<"Kode Makanan:\n";
   cout<<"A: Nasi Rames Harga 10.000\n";
   cout<<"B: Nasi Kucing Harga 2.000\n";
   cout<<"C: Nasi Goreng Harga 12.000\n";

   cout<<"\nKode Minuman:\n";
   cout<<"1. Greentea Harga 10.000\n";
   cout<<"2. Orange Juice Harga 12.000\n";
   cout<<"3. Hot Tea Harga 5.000\n";

   cout<<"Masukkan Kode Makanan dan Minuman [A.B.C/1.2.3] : "; cin>>kode;
   cout<<"Masukkan Jumlah Beli : "; cin>>jum_beli;
   switch (kode)
   {
   	case 'A' :
      case 'a' :
      strcpy(makanan, "Nasi Rames ");
      harga = 10000;
      break;

      case 'B' :
      case 'b' :
      strcpy(makanan, "Nasi Kucing");
      harga = 2000;
      break;

      case 'C' :
      case 'c' :
      strcpy(makanan, "Nasi Goreng");
      harga = 12000;
   	break;

      case '1' :
      strcpy(minuman, "Greentea");
      harga = 10000;
      break;

      case '2' :
      strcpy(minuman, "Orange Juice");
      harga = 12000;
      break;

      case '3' :
      strcpy(minuman, "Hot Tea");
      harga = 5000;
      break;

      default :
      cout<<"Anda Salah Memasukkan Kode";
   }

      cout<<"\n-------Toko Berkah---------\n";
      cout<<"	  jl.berkah no.1\n";
      cout<<"---------------------------\n";
   	cout<<"Nama Makanan dan Minuman : "<<makanan<<minuman<<endl;
      cout<<"Harga : Rp. "<<harga<<endl;
         total = harga * jum_beli;

      if (total >= 12000)
      {
      	dis = total * 5 /100;
      	cout<<"Potongan : Rp. "<<dis;
      }
      else
      cout<<"Potongan : Tidak Mendapat Potongan";
      cout<<"\n--------------------------\n";

      total = harga * jum_beli;
      if (total >=12000)
      {
      	dis = total * 5 / 100;
      	total1 = total - dis;
      	cout<<"Total Bayar : Rp."<<total1<<endl;
      }
      else if(total <12000)
      {
      	dis = 0;
         total1 = total - dis;
         cout<<"Total Bayar : Rp."<<total1<<endl;
      }
   getch();
}