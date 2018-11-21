#include <iostream.h>
#include <conio.h>
#include <stdio.h>

int main()
{
int i,j,k,l;
cout<<"Masukkan besar segitiga: ";
cin>>k;
l=k;

for(i=1; i <=k; i++)
{

	for(j=1; j<=i; j++){
		cout<<" ";
      }

   for (l=k; l>2*i-1; l--){
      if(l==k||l==2*i||i==1)
      {
      	cout<<"*";

      }
      else
      {
      cout<<" ";
      }
   }
   cout<<endl;
}
getch();
}