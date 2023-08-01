#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

double multiplicar (double num1, double num2){
	
	double multiplicar;
	multiplicar = num1 * num2 ;
	return multiplicar;
}
	int main (){
		
		double multi1;
		double multi2;
		cout<<"Ingrese un numero: "<<endl;
		cin>>multi1;
		
		cout<<"Ingrese otro numero: "<<endl;
		cin>>multi2;
		
		double final = multiplicar (multi1, multi2 );
		cout<<"El final de la multiplicacion de los dos numero es: "<<final<<endl;
		
		
		
	
	
	return 0;
	
}
