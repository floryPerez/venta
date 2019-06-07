#include <stdio.h>
#include <string.h>
#define NOVENDEDOR 5
#define MES 3
#define LONGCAD 30
#define LONGPO 5

typedef  struct datosvendedor
{
char nombre [LONGCAD];
char mes [LONGCAD];

}vendedor;



//definicion de funciones
int menu();
int submenu();
void leer_ventas( vendedor[] );
void leervendedor(vendedor *);

void reportes (vendedor[]);

void reporteGral(vendedor[]);
void reporteindividual(vendedor []);

void imprimirvendedor(vendedor);
void calculatotaldeventa();
void vendedor_maximo();
void vendedor_minimo();
void mes_maximo ();
void mes_minimo();
void venta_anual(vendedor[]);
void  reporteestadistica(vendedor);





int main()
{

vendedor ven [NOVENDEDOR] ;

  int opc;
  do{
        opc=menu();
        switch(opc)
        {
            case 1:
                leer_ventas(ven);
                break;
            case 2:
              reportes (ven)  ;
           default:
            	
	puts("Opcion no valida \n");
        }
    }while (opc!=3);

}


int menu()
{
  int opcion;


puts("----Menu Principal \n");
puts ("1.Leer ventas\n ");
puts ("2.generar reportes \n ");
puts("3.- Salir\n\n");
  puts("Seleccione una opcion: ");
  scanf("%d", &opcion);

  return opcion;
}


int submenu()
{
  int opcion;
	puts ("1.reporte general\n ");
	puts ("2.reporte individual \n ");
	puts ("3.estadistica\n" );
    puts("4.- Regresar al menu principal\n\n");
	puts("Seleccione una opcion: ");

    scanf("%d", &opcion);

  return opcion;
}



void leer_ventas(  vendedor ven  [NOVENDEDOR])
{
	int i;
	for(i=0;i<NOVENDEDOR;i++)
	{
		printf("Datos del vendedor  %d \n",i+1);
		printf("Nombre: ");
     	leervendedor(&ven[i]);

		}

}


void leervendedor(vendedor *ven)
{
	int j;
	printf("Nombre: ");
	scanf("%[^\n]",ven->nombre);
	printf("ingrese mes: ");
	scanf("%[^\n]",ven->mes);

}







void reportes (vendedor ven[NOVENDEDOR])
{

	int opc;
	do{
		opc=submenu();
		switch(opc)
        {
            case 1:
                reporteGral(ven);
                break;
            case 2:
				reporteindividual(ven);
                break;
            case 3:
                /*reporteestadistica(ven);*/
                break;


            default:
				puts("Opcion no valida");
        }
	}while(opc!=4);
}



void reporteGral(vendedor ven[NOVENDEDOR])

{
int i;
puts("Nombre\t\t\tmes\t\t\t");
	for(i=0;i<NOVENDEDOR;i++)
	{
		imprimirvendedor(ven[i]);
		puts("");
	}



}
void imprimirvendedor(vendedor ven)
{
	int j;
	printf("%s\t\t\t%s\t\t",ven.nombre,ven.mes);
}


void reportemes(vendedor ven[NOVENDEDOR])
{
	char dato[LONGPO];
	int i, encontrado=0;
	printf("Proporcione el MES del que desea el reporte: ");
	
	scanf("%[^\n]",dato);
	
	puts("Nombre\t\t\tMES\t\t");
	for(i=0;i<MES;i++)
	{
		if (strcmp(dato,ven[i].mes)==0){
			encontrado=1;
			imprimirvendedor(ven[i]);
			puts("");
		}
	}
	if(encontrado==0)
	puts("No se encontro el mes");
}


void reporteindividual(vendedor ven[NOVENDEDOR] )
{}


void venta_anual(vendedor  ven[NOVENDEDOR])
{}



void calculatotaldeventa()
{}
