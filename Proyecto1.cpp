#include <iostream>
using namespace std;

int main()
{
	int direcciones, lugares, d1,d2,d3,d4,l1,l2,l3,l4,t1,t2,t3,t4;
	
	cout << "Ingrese las direcciones desde donde atacaran: "<< endl;
	cin >> direcciones;
	cout << "Ingrese los lugares: " << endl;
	cin >> lugares;
	
	
	if (direcciones )
	
	d1 = direcciones / 1000;
	d2 = direcciones % 1000 / 100;
	d3 = direcciones % 100 /10;
	d4 = direcciones % 10;
		
	l1 = lugares / 1000000;
	l2 = lugares / 10000 % 100;
	l3 = lugares / 100 % 100;
	l4 = lugares % 100;
	
	t1 = l1 % 10;
	t2 = l2 % 10; 
	t3 = l3 % 10;
	t4 = l4 % 10;
	
	if ((direcciones > 00) && (direcciones < 9999) && (d1 != d2) && (d2 != d3) && (d3 != d4) && (d4 != d1) && (d1 != d3) && (d2 != d4))
		{
		 	if ((lugares >= 10101010) && (lugares < 99999999) && (t1 >= 0 && t1 <= 6) && (t2 >= 0 && t2 <= 6) && (t3 >= 0 && t3 <= 6) && (t4 >= 0 && t4 <= 6))
 				{ 
		
	switch (d1)
		{
			case 1:
				cout << "Norte" << endl;
				break;
			case 2:
				cout << "Sur" << endl;
				break;
			case 3:
				cout << "Este" << endl;
				break;
			case 4:	
				cout << "Oeste" << endl;
				break;
			case 5:	
				cout << "Noreste" << endl;
				break;
			case 6:
				cout << "Sureste" << endl;
				break;
			case 7:
				cout << "Suroeste" << endl;
				break;
			case 8:
				cout << "Noroeste" << endl;
				break;
			case 9:
				cout << "Los cielos!" << endl;
				break;
			default: 
				break;
		}
	
	switch(d2)
		{
			case 1:
				cout << "Norte" << endl;
				break;
			case 2:
				cout << "Sur" << endl;
				break;
			case 3:
				cout << "Este" << endl;
				break;
			case 4:	
				cout << "Oeste" << endl;
				break;
			case 5:	
				cout << "Noreste" << endl;
				break;
			case 6:
				cout << "Sureste" << endl;
				break;
			case 7:
				cout << "Suroeste" << endl;
				break;
			case 8:
				cout << "Noroeste" << endl;
				break;
			case 9:
				cout << "Los cielos!" << endl;
				break;
			default: 
				break;
		}
		
	switch(d3)
		{
			case 1:
				cout << "Norte" << endl;
				break;
			case 2:
				cout << "Sur" << endl;
				break;
			case 3:
				cout << "Este" << endl;
				break;
			case 4:	
				cout << "Oeste" << endl;
				break;
			case 5:	
				cout << "Noreste" << endl;
				break;
			case 6:
				cout << "Sureste" << endl;
				break;
			case 7:
				cout << "Suroeste" << endl;
				break;
			case 8:
				cout << "Noroeste" << endl;
				break;
			case 9:
				cout << "Los cielos!" << endl;
				break;
			default: 
				break;
		}
	
	switch(d4)
		{
			case 1:
				cout << "Norte" << endl;
				break;
			case 2:
				cout << "Sur" << endl;
				break;
			case 3:
				cout << "Este" << endl;
				break;
			case 4:	
				cout << "Oeste" << endl;
				break;
			case 5:	
				cout << "Noreste" << endl;
				break;
			case 6:
				cout << "Sureste" << endl;
				break;
			case 7:
				cout << "Suroeste" << endl;
				break;
			case 8:
				cout << "Noroeste" << endl;
				break;
			case 9:
				cout << "Los cielos!" << endl;
				break;
			default: 
				break;
		}


	cout << endl;
		
	switch(l1)
		{
			case 10: 
				cout << " ";
				break;
			case 11:
				cout << "Dun";
				break;
			case 12:
				cout << "Mor";
				break;
			case 13:
				cout << "ogh";
				break;
			case 14:	
				cout << "Du";
				break;
			case 15:	
				cout << "ro";
				break;
			case 16:
				cout << "tar";
				break;
			case 20:
				cout << "Elw";
				break;
			case 21:
				cout << "ynn";
				break;
			case 22:
				cout << "For";
				break;
			case 23:
				cout << "est";
				break;
			case 24:
				cout << "Mul";
				break;
			case 25:
				cout << "go";
				break;
			case 26:
				cout << "re";
				break;			
			case 30:
				cout << "Tel";
				break;	
			case 31:
				cout << "dras";
				break;
			case 32:
				cout << "sil";
				break;
			case 33:
				cout << "Tiri";
				break;
			case 34:
				cout << "sfal";
				break;
			case 35:
				cout << "Gla";
				break;	
			case 36:
				cout << "des";
				break;
			case 40:
				cout << "Dark";
				break;
			case 41:
				cout << "shor";
				break;
			case 42:
				cout << "Loch";
				break;	
			case 43:
				cout << "Mo";
				break;								
			case 44:
				cout << "dan";
				break;	
			case 45:
				cout << "West";
				break;
			case 46:
				cout << "fall";
				break;	
					
			default: 
			
				break;
		}
	
	switch(l2)
		{
			case 10: 
				cout << " ";
				break;
			case 11:
				cout << "Dun";
				break;
			case 12:
				cout << "Mor";
				break;
			case 13:
				cout << "ogh";
				break;
			case 14:	
				cout << "Du";
				break;
			case 15:	
				cout << "ro";
				break;
			case 16:
				cout << "tar";
				break;
			case 20:
				cout << "Elw";
				break;
			case 21:
				cout << "ynn";
				break;
			case 22:
				cout << "For";
				break;
			case 23:
				cout << "est";
				break;
			case 24:
				cout << "Mul";
				break;
			case 25:
				cout << "go";
				break;
			case 26:
				cout << "re";
				break;			
			case 30:
				cout << "Tel";
				break;	
			case 31:
				cout << "dras";
				break;
			case 32:
				cout << "sil";
				break;
			case 33:
				cout << "Tiri";
				break;
			case 34:
				cout << "sfal";
				break;
			case 35:
				cout << "Gla";
				break;	
			case 36:
				cout << "des";
				break;
			case 40:
				cout << "Dark";
				break;
			case 41:
				cout << "shor";
				break;
			case 42:
				cout << "Loch";
				break;	
			case 43:
				cout << "Mo";
				break;								
			case 44:
				cout << "dan";
				break;	
			case 45:
				cout << "West";
				break;
			case 46:
				cout << "fall";
				break;	
					
			default: 
			
				break;
		}
		
	switch(l3)
		{
			case 10: 
				cout << " ";
				break;
			case 11:
				cout << "Dun";
				break;
			case 12:
				cout << "Mor";
				break;
			case 13:
				cout << "ogh";
				break;
			case 14:	
				cout << "Du";
				break;
			case 15:	
				cout << "ro";
				break;
			case 16:
				cout << "tar";
				break;
			case 20:
				cout << "Elw";
				break;
			case 21:
				cout << "ynn";
				break;
			case 22:
				cout << "For";
				break;
			case 23:
				cout << "est";
				break;
			case 24:
				cout << "Mul";
				break;
			case 25:
				cout << "go";
				break;
			case 26:
				cout << "re";
				break;			
			case 30:
				cout << "Tel";
				break;	
			case 31:
				cout << "dras";
				break;
			case 32:
				cout << "sil";
				break;
			case 33:
				cout << "Tiri";
				break;
			case 34:
				cout << "sfal";
				break;
			case 35:
				cout << "Gla";
				break;	
			case 36:
				cout << "des";
				break;
			case 40:
				cout << "Dark";
				break;
			case 41:
				cout << "shor";
				break;
			case 42:
				cout << "Loch";
				break;	
			case 43:
				cout << "Mo";
				break;								
			case 44:
				cout << "dan";
				break;	
			case 45:
				cout << "West";
				break;
			case 46:
				cout << "fall";
				break;	
					
			default: 
			
				break;
		}	
	
	switch(l4)
		{ 
		   	case 10: 
				cout << " ";
				break;
			case 11:
				cout << "Dun";
				break;
			case 12:
				cout << "Mor";
				break;
			case 13:
				cout << "ogh";
				break;
			case 14:	
				cout << "Du";
				break;
			case 15:	
				cout << "ro";
				break;
			case 16:
				cout << "tar";
				break;
			case 20:
				cout << "Elw";
				break;
			case 21:
				cout << "ynn";
				break;
			case 22:
				cout << "For";
				break;
			case 23:
				cout << "est";
				break;
			case 24:
				cout << "Mul";
				break;
			case 25:
				cout << "go";
				break;
			case 26:
				cout << "re";
				break;			
			case 30:
				cout << "Tel";
				break;	
			case 31:
				cout << "dras";
				break;
			case 32:
				cout << "sil";
				break;
			case 33:
				cout << "Tiri";
				break;
			case 34:
				cout << "sfal";
				break;
			case 35:
				cout << "Gla";
				break;	
			case 36:
				cout << "des";
				break;
			case 40:
				cout << "Dark";
				break;
			case 41:
				cout << "shor";
				break;
			case 42:
				cout << "Loch";
				break;	
			case 43:
				cout << "Mo";
				break;								
			case 44:
				cout << "dan";
				break;	
			case 45:
				cout << "West";
				break;
			case 46:
				cout << "fall";
				break;	
					
			default: 
			
				break;
		}

}else{
	cout << "Lugar Invalido" << endl; 
				return 0;
}
}else{
	cout << "Direcciones Invalidas" << endl;
			return 0;
} 
	return 0;
}