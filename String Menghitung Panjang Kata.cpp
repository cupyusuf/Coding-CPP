#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream.h>
main()
{
	char Huruf[70], Pindah[70];
	clrscr();
	cout<<"Masukkan Kata = ";
	gets(Huruf);
	cout<<"Panjang Kata Yang Diinputkan = ";
	cout<<strlen(Huruf);
	getch();
}