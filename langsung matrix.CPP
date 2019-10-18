#include<iostream.h>
#include<conio.h>
main()
{
int i,j;
int data[4] [4] ={
							{1,1,1,1},
                     {0,2,3,4},
                     {0,0,3,4},
                     {0,0,0,4}
                     };
for(i=0; i<4;i++)
{
	for(j=0; j<4; j++)
   {
   cout<<data[i][j]<<" ";
   }
   cout<<endl;

   }
getch();
}


