#include <stdio.h>
#include <string.h>
#define VENDEDOR 5
#define LONGCAD 30
int menu();
int submenu();
void leer_Datos( );

void consultas();

void individual(float);

void total_mes(char, char );

void total_vendedor(char,char);

void vendedor_maximo(char ,char);

void vendedor_minimo(char, char);

void mes_maximo(float);

void mes_minimo (float);
void venta_anual(float);


  

int main()
{

	
	
  int opc;
  do{
        opc=menu();
        switch(opc)
        {
            case 1:
                leer_Datos();
                break;
            case 2:
              consultas ()  ;
                break;
            
            default:
	puts("Opcion no valida \n");
        }
    }while (opc!=3);

}


int menu()
{
  int opcion;

    
puts("----Menu Principal \n");
puts ("1.Leer datos\n ");
puts ("2.consultas \n ");
puts("3.- Salir\n\n");
  puts("Seleccione una opcion: ");
  scanf("%d", &opcion);

  return opcion;
}


int submenu()
{
  int opcion;
	puts ("1.consultas individuales\n ");
	puts ("2.consultar total del mes \n ");
	puts ("3.consultar vendedor maximototal del mes\n" );
	puts ("4.consultar vendedor minimo\n" );
	puts ("5.consultar mes maximo\n" );
	puts ("6.consultar mes  minimo\n" );
	puts ("7.consultar venta anual \n" );
	puts("8.- Regresar al menu principal\n\n");
	puts("Seleccione una opcion: ");
    
    scanf("%d", &opcion);

  return opcion;
}


void leerDatos(char VENDEDOR [][LONGCAD])
{
	int i,j;
	for(i=0;i<VENDEDOR;i++)
	{
		printf("Datos del vendedor  %d \n",i+1);
		printf("Nombre: ");
		setbuf(stdin,NULL);
		
		}
		
}



void consultas()
{
	int opc;
	do{
		opc=submenu();
	}while(opc!=8);
}