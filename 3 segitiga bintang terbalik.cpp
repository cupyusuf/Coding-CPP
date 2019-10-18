#include <conio.h>
#include <stdio.h>
#include <iostream>
int main()
{
	int i=1,b=5,j;
	for(i=0;i<=b;i++){

    for(i=0;i<=b;i++){
        for(j=0;j<=b;j++){
            //cout<<"*";
            if(i<=j){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
	getch();
}