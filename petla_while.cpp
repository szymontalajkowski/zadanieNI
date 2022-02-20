#include <iostream>

using namespace std;

int main()

{
	int liczba,k=0,suma=0;
	
	do
	{
		cout<<"Podaj liczbe:";
		cin>>liczba;
		suma= liczba+suma;
		k=k+1;
}
	while (suma<50);
	cout<< "Suma podanych liczb to:"<<suma<<endl;
	cout<<"Ilosc wprowadzonych liczb to:"<<k<<endl;
	


	
}
