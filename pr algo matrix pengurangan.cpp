#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
int i,j, baris, kolom, m1[2][2], m2[2][2], hasil[2][2];
main()
{
	clrscr();
   cout<<"\t\tYusuf Supriadi\t17180068\n";
   cout<<"\t\tRinandi\t\t17180017\n";
   cout<<"\t\tAhmad Lukman N\t17180012\n";
   cout<<"\t\tSarifudin Hanafi17180051\n";
   cout<<"\t\tFawwas Fadhilah\t17180048\n\n";
	do
	{
		cout<<"Jumlah Baris = ";cin>>baris;
		cout<<"Jumlah Kolom = ";cin>>kolom;
	}
	while((baris>2)||(kolom>2));
	cout<<"\nMatrix A\n";
	for(i=0;i<baris;i++)
		for(j=0;j<kolom;j++)
		{
			cout<<"data ["<<i<<","<<j<<"] = ";
			cin>>m1[i][j];
		}
		cout<<"\nMAtrix B\n";
		for(i=0;i<baris;i++)
			for(j=0;j<kolom;j++)
			{
				cout <<"data [" << i << "," << j << "] = ";
				cin>>m2[i][j];
			}
			 for(i=0; i<baris;i++)
			 	for(j=0; j<kolom; j++)
			 		hasil[i][j] = m1[i][j] - m2[i][j];
			 	cout << "\nHasilnya...\n";
			 	cout << "Matrix A  -  Matrix B  =  Matrix C";
			 	for(i=0; i< baris; i++)
			 	{
			 		cout<<'\n';
			 		for(j=0; j<kolom; j++)
         			cout << setw(4) << m1[i][j];
        			cout << "     ";
        			for(j=0; j<kolom; j++)
        			cout << setw(4) << m2[i][j];
        			cout << "     ";
        			for(j=0; j<kolom; j++)
         			cout << setw(4) << hasil[i][j];
        			cout << endl;
    }
getch();
}