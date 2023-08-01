#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

double resta (double numero1,double  numero2){
	
	
double resta;
resta = numero1 - numero2 ;
return resta;


}

int main(){
	
	double rest1;
	double rest2;
	cout<<"Ingrese un numero cualquiera: "<<endl;
	cin>>rest1;
	
	cout<<"Ingrese otro numero: "<<endl;
	cin>>rest2;
	
	double exito = resta (rest1, rest2 );
	cout<<"El exito de la resta de los numeros es: "<<exito<<endl;
}
