#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

double calcular_media(double numero1, double numero2)
{
	double calmedi;
	calmedi = (numero1 + numero2) / 2;
	return calmedi;
	
}

int main(){
	
	double numer1;
	double numer2;
	cout<<"Ingrese el primer numero: "<<endl;
	cin>>numer1;
	
	cout<<"Ingrese otro numero: "<<endl;
	cin>>numer2;
	
	double final = calcular_media(numer1, numer2);
	cout<<"El trabajo final es :  "<<final<<endl; 
	
return 0;
	
}
