#include <iostream>
#include <fstream>
using namespace std;

void escribir();
void leer();
int menu(int);

int main() 
{
  int op,x;

   do{
   switch (menu(op))
   {
    case 1:
    escribir();
    system("read -p 'Presiona Enter para continuar...' var"); 
    break;
    case 2:
    cout<<"------GRACIAS-----\n";
      x=3;
      system("read -p 'Presiona Enter para continuar...' var"); 
    break;
   }
system("clear");
  }while(x !=3);
  return 0;
}

int menu(int op)
{
  op= -1;
  while((op< 0) || (op>2)) 
  {
    cout<<"***************************"<<endl;
    cout<<"*  1- INGRESAR DATOS      *" << endl;
    cout<<"*  2- SALIR               *" << endl;
    cout<<"***************************"<<endl;
    cout<<"Digite la opción: ";
    cin>>op;
    if((op< 0) || (op> 2)) 
    {
      cout << "Opción no válida" << endl;
    }
  }
  return op;
}

void escribir()
{
  ofstream datos;
  string nombreArchivo;
  char r;
  int n;
  cout<<"INGRESA EL NOMBRE DEL ARCHIVO: ";
  cin.ignore();
  getline(cin,nombreArchivo);
  datos.open(nombreArchivo.c_str(),ios::app);
  do
  {
  cout<<"Ingrese un numero: ";
  cin>>n;
  for(int f=0;f<n;f++)
  {
    for (int c=f;c<n;c++)
    {
      if (f%2==0)
      {
        cout<<"*"<<" ";
        datos<<"*"<<" ";
      }
      else 
      {
        cout<<"-"<<" ";
        datos<<"-"<<" ";
      }
      datos<<"";
    }
    cout<<endl;
  }
  datos<<endl;
  cout<<"DESEA AGREGAR OTRO DATO s/n: ";
  cin>>r;
  cin.ignore();
  }while(r=='s');
  datos.close();
}
