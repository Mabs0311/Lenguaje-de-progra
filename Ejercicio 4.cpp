#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

double dividir (double num1, double num2){
	
	double dividir;
	dividir = num1 / num2;
	return dividir;	
	
}

int main (){
	
	double divi1;
	double divi2;
	cout<<"Ingrese un numero: "<<endl;
	cin>>divi1;
		
	cout<<"Ingrese otro numero :"<<endl;
	cin>>divi2;
	
	double resultado =  dividir(divi1, divi2);
		cout<<"El restultado de ambos numeros es: "<<resultado<<endl;
	
	
	
}
