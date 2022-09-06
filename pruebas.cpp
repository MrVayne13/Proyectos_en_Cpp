#include <iostream>
using namespace std; 
int main (){
	
	int CantidadZapato;
	int precioInicial = 80;
	int precioZapato;
	int rebaja;
	int precioFijo;
	
	cout<<"Bienvenidos a nuestra tienda de zapatos al mayor! ¿Cuantos desea comprar?"<<endl; 
	cin>>CantidadZapato;
	
	if(CantidadZapato < 10)
	{
		precioFijo = precioInicial * CantidadZapato;
		cout<<"El costo de su compra es de: "<<precioFijo<<"$"<<endl;
	}
	
	if(CantidadZapato > 10 && CantidadZapato < 20)
		{
		precioFijo = precioInicial * CantidadZapato;
		rebaja = precioInicial * CantidadZapato * 10/100;
		precioZapato = precioFijo - rebaja;
		cout<<"El costo de su compra es de: "<<precioZapato<<"$"<<endl;
		}
		
	if(CantidadZapato > 20 && CantidadZapato < 30)
		{
		precioFijo = precioInicial * CantidadZapato;
		rebaja = precioInicial * CantidadZapato * 20/100;
		precioZapato = precioFijo - rebaja;
		cout<<"El costo de su compra es de: "<<precioZapato<<"$"<<endl;
		}
	
	if(CantidadZapato > 30)
		{
		precioFijo = precioInicial * CantidadZapato;
		rebaja = precioInicial * CantidadZapato * 40/100;
		precioZapato = precioFijo - rebaja;
		cout<<"El costo de su compra es de: "<<precioZapato<<"$"<<endl;
		}	
	
	cout<<"Gracias por visitarnos!"<<endl;
}