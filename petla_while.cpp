#include <iostream>

using namespace std;

int main()

{
	int liczba,k=0,suma=0;
	
	do
	{
		cout<<"Podaj liczbę: ";
		cin>>liczba;
		suma= liczba+suma;
		k=k+3;
}
	while (suma<=30);
	cout<< "Suma podanych liczb to: "<<suma<<endl;
	cout<<"Ilość wprowadzonych liczb to: "<<k<<endl;
	


	
}
