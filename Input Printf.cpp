#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
	char Buah[20]="Jeruk";
	int JumlahJeruk=35;
	char Nama[20]="Nama", Kelas[20]="Kelas";

	
	printf("Masukan Jumlah Jeruk : "); scanf("%d",&JumlahJeruk);
	printf("Buah %s memiliki Jumlah Sebanyak %d Butir",&Buah,JumlahJeruk);
	getch();
}