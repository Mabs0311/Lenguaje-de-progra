#include<iostream>

using namespace std;

int main(){
	
	float suma = 0;
	float multiplicar = 0;
	float contador = 15;
	
	while(contador <=50)
	{
		suma = contador + 2;
		multiplicar = contador * 3;
		cout<<"El ciclo va por el numero "<<contador<< ", por el momento y la suma es = "<< suma << " y la multiplicacion es "<<multiplicar<<endl;
		contador++;
		
	}
	
	
	
	
	
	
	return 0;
}
