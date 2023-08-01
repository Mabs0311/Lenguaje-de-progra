#include<iostream>
#include<stdio.h>
#include<string>


using namespace std;

double sumar (double numero1, double numero2){
	

double suma;
suma= numero1+ numero2 ;
return suma;
}

int main(){

double num1;
double num2;

cout<<"Ingrese un numero cualquiera : "<<endl;
cin>>num1;

cout<<" Ingrese otro numero cualquiera  "<<endl;
cin>>num2;

double suma = sumar (num1, num2 );
cout<<"La suma de los dos numero es: "<<suma<<endl;
	
	
	
	
	
	
	
	
	
	return 0;
}
