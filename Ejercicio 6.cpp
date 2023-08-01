#include<iostream>
#include<windows.h>
#include<string>

using namespace std;

// funcion para mover el cursor de una posicion especifica en la consola 

void Gotoxy(int x, int y)
{
	// creamos una estructura COORD en coordenadas 
	
	COORD coord;
	coord.X = x;
	coord.Y =  y;
	
	// obtenemos el handle de la consola y establecer la posicion del cursor 
	
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
  
}
int main()

{
	
int factura;
	
Gotoxy (3,1);

cout<<"factura: ";
cin>>factura;

int fecha;

Gotoxy (20, 1);
cout<<"fecha: ";
cin>>fecha;

int cliente;
Gotoxy (35, 1);
cout<<"cliente: ";
cin>>cliente;


return 0;
}
