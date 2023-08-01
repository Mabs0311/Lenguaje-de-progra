#include <iostream>
#include <windows.h>
#include <string>
#include <stdlib.h>

using namespace std;

void Gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{

  int numcuenta;
  string alumno;
  double nota;
  
  cout << "numcuenta: " << endl;
  cin >> numcuenta;

  cout << "alumno: " << endl;
  cin >> alumno;

  cout << "Ingrese la cantidad de notas que quiere agregar: " << endl;
  cin >> nota;
  
  int nota;

  string codigo_materia = "IA-033";
  string asignatura = "Metod. de la programacion";

  for (int i = 0; i < nota; i++)
  {

    cout << "Ingrese una nota " << i + 1 << " : " << endl;
    cin >> nota(i);
  }
  system("CLS");

  cout << "--------------------------------------------------" << endl;
  cout << "|";

  Gotoxy(2, 1);
  cout << "numCuenta: " << cuenta;

  Gotoxy(25, 1);
  cout << "alumno : " << alumno;

  Gotoxy(48, 1);
  cout << "|" << endl;
  cout << "--------------------------------------------------" << endl;

  string menu[5] = {"-", "Codigo", "Asignatura", "Notas", "Observacion"};

  int contador_menu = 1;
  Gotoxy(contador_menu, 3);
  for (int i = 0; i <= 4; i++)
  {
    cout << menu[i] << endl;
    Gotoxy(contador_menu, 3);
    contador_menu = contador_menu + 15;
  }

  int contador_notas = 5;
  int contador_para_promedio = 0;
  int suma_notas = 0;
  for (int i = 0; i < notas; i++)
  {
    
    Gotoxy(1, nota);
    cout << codigo_materia << endl;

    Gotoxy(16, nota);
    cout << asignatura << endl;

    Gotoxy(31, nota);
    cout << nota[i] << endl;

    
    if (nota[i] > 65)
    {
      Gotoxy(46, contador_notas);
      cout << "Aprobado" << endl;
    }
    else
    {
      Gotoxy(46, contador_notas);
      cout << "Reprobado" << endl;
    }
    contador_notas = contador_notas + 2;
    contador_para_promedio++;
    suma_notas = suma_notas + notas[i];
  }
  
  cout << "--------------------------------------------------" << endl;
  promedio = suma_notas / contador_para_promedio;
  Gotoxy(20, contador_notas + 2);
  cout << "Promedio: "<< promedio << endl;

  return 0;
}
