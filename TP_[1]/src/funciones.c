#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int menu(){

	limpiarConsola();

	int opcion;

	printf(" --- Menu de Opciones ---\n\n");

	printf("1. Ingresar kilometros\n\n");

	printf("2. Ingresar precio de vuelos\n\n");

	printf("3. Calcular todos los costos\n\n");

	printf("4. Informar resultados\n\n");

	printf("5. Carga forzada de datos\n");

	printf("6. Salir\n");

	fflush(stdin);

	scanf("%d", &opcion);

	return opcion;
}

void ingresarKilometros(int* kilometros, int* banderaKm){

	int kmIngresados;

	printf("Ingrese los kilometros a continuacion: ");

	fflush(stdin);

	scanf("%d", &kmIngresados);

	while (kmIngresados < 0){

		printf("El numero debe ser mayor a 0. Ingrese los kilometros a continuacion: ");

		fflush(stdin);

		scanf("%d", &kmIngresados);

	}

	printf("Kilometros ingresados: %d\n\n", kmIngresados);

	*kilometros = kmIngresados;
	*banderaKm = 1;

}

void ingresarPrecioVuelos(float* aerolineas, float* latam, int* banderaPrecio){

	float precioAerolineas;
	float precioLatam;

	printf("A continuacion, ingrese el precio del vuelo en Aerolineas: ");
	fflush(stdin);
	scanf("%f", &precioAerolineas);

	while (precioAerolineas < 0) {
		printf("El precio debe ser mayor a 0. Ingrese el precio del vuelo en Aerolineas: ");
		fflush(stdin);
		scanf("%f", &precioAerolineas);
	}

	printf("A continuacion, ingrese el precio del vuelo en Latam: ");
	fflush(stdin);
	scanf("%f", &precioLatam);

	while (precioLatam < 0) {
		printf("El precio debe ser mayor a 0. Ingrese el precio del vuelo en Aerolineas: ");
		fflush(stdin);
		scanf("%f", &precioLatam);
	}

	*aerolineas = precioAerolineas;
	*latam = precioLatam;
	*banderaPrecio = 1;

}

int calcularCostosAerolineas(float precioAerolineas, int km, float* precioDebitoAerolineas, float* precioCreditoAerolineas, float* precioBtcAerolineas, float* precioUnitarioAerolineas){

	*precioDebitoAerolineas = precioAerolineas * 0.90;

	*precioCreditoAerolineas = precioAerolineas * 1.25;

	*precioBtcAerolineas = precioAerolineas / 4606954.55;

	*precioUnitarioAerolineas = precioAerolineas / km;

	return 1;

}

int calcularCostosLatam(float precioLatam, int km, float* precioDebitoLatam, float* precioCreditoLatam, float* precioBtcLatam, float* precioUnitarioLatam){

	*precioDebitoLatam = precioLatam * 0.90;

	*precioCreditoLatam = precioLatam * 1.25;

	*precioBtcLatam = precioLatam / 4606954.55;

	*precioUnitarioLatam = precioLatam / km;

	return 1;

}

void calcularDiferencia(float precioAerolineas, float precioLatam, float* diferenciaPrecio){

	*diferenciaPrecio = precioLatam - precioAerolineas;

}

void informarResultadosAerolineas(float precioDebitoAerolineas, float precioCreditoAerolineas, float precioBtcAerolineas, float precioUnitarioAerolineas){

	printf("Aerolineas: \n");
	printf("Precio con tarjeta de debito: %.2f\n", precioDebitoAerolineas);
	printf("Precio con tarjeta de credito: %.2f\n", precioCreditoAerolineas);
	printf("Precio pagando con bitcoin: %.7f\n", precioBtcAerolineas);
	printf("Precio unitario: %.2f\n", precioUnitarioAerolineas);

}

void informarResultadosLatam(float precioDebitoLatam, float precioCreditoLatam, float precioBtcLatam, float precioUnitarioLatam){

	printf("Latam: \n");
	printf("Precio con tarjeta de debito: %.2f\n", precioDebitoLatam);
	printf("Precio con tarjeta de credito: %.2f\n", precioCreditoLatam);
	printf("Precio pagando con bitcoin: %.7f\n", precioBtcLatam);
	printf("Precio unitario: %.2f\n", precioUnitarioLatam);

}

void informarDiferencia(float diferenciaPrecio){
	printf("La diferencia de precio es: %.2f\n", diferenciaPrecio);
}


void cargaForzada(int* kilometros, float *precioAerolineas, float* precioLatam){
	*kilometros = 7090;
	*precioAerolineas = 162965.0;
	*precioLatam = 159339;
}

void confirmarSalida(char* salir)
{
    char confirma;
    printf("Confirma salida?: (S/N)");
    fflush(stdin);
    scanf("%c", &confirma);

    if(confirma == 's'){
    	printf("Hasta luego!");
    }

    *salir = confirma;

}


void limpiarConsola(){
	printf("\n\n\n\n\n\n\n");
}
