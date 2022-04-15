/*
 ============================================================================
 Name        : menu.c
 Author      : Elias Pellegrino
 Description : Trabajo Practico Laboratorio 1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"

int main(){

	setbuf(stdout, NULL);

	char salir = 'n';
	int kilometros;
	float precioAerolineas;
	float precioLatam;
	float diferenciaPrecio;

	int banderaKm = 0;
	int banderaPrecio = 0;
	int banderaCostoA = 0;
	int banderaCostoL = 0;


	float precioDebitoAerolineas, precioCreditoAerolineas, precioBtcAerolineas, precioUnitarioAerolineas;
	float precioDebitoLatam, precioCreditoLatam, precioBtcLatam, precioUnitarioLatam;

	do
	{
		switch(menu())
		{
		case 1:
			ingresarKilometros(&kilometros, &banderaKm);
			break;
		case 2:
			if (banderaKm){
				ingresarPrecioVuelos(&precioAerolineas, &precioLatam, &banderaPrecio);
			}
			else {
				limpiarConsola();
				printf("Primero debes ingresar los kilometros\n\n");
			}
			break;
		case 3:
			if (banderaPrecio){
				banderaCostoA = calcularCostosAerolineas(precioAerolineas, kilometros, &precioDebitoAerolineas, &precioCreditoAerolineas, &precioBtcAerolineas, &precioUnitarioAerolineas);
				banderaCostoL = calcularCostosLatam(precioLatam, kilometros, &precioDebitoLatam, &precioCreditoLatam, &precioBtcLatam, &precioUnitarioLatam);
				calcularDiferencia(precioAerolineas, precioLatam, &diferenciaPrecio);
			}
			else{
				limpiarConsola();
				printf("Primero debes ingresar el precio\n\n");
			}
			break;
		case 4:
			if (banderaCostoA && banderaCostoL){
				informarResultadosLatam(precioDebitoLatam, precioCreditoLatam, precioBtcLatam, precioUnitarioLatam);
				informarResultadosAerolineas(precioDebitoAerolineas, precioCreditoAerolineas, precioBtcAerolineas, precioUnitarioAerolineas);
				informarDiferencia(diferenciaPrecio);
			}
			else{
				limpiarConsola();
				printf("Primero debes calcular los costos\n\n");
			}

			break;
		case 5:
			cargaForzada(&kilometros, &precioLatam, &precioAerolineas);
			calcularCostosAerolineas(precioAerolineas, kilometros, &precioDebitoAerolineas, &precioCreditoAerolineas, &precioBtcAerolineas, &precioUnitarioAerolineas);
			calcularCostosLatam(precioLatam, kilometros, &precioDebitoLatam, &precioCreditoLatam, &precioBtcLatam, &precioUnitarioLatam);
			calcularDiferencia(precioAerolineas, precioLatam, &diferenciaPrecio);
			printf("Kilometros ingresados: %d\n", kilometros);
			informarResultadosAerolineas(precioDebitoAerolineas, precioCreditoAerolineas, precioBtcAerolineas, precioUnitarioAerolineas);
			informarResultadosLatam(precioDebitoLatam, precioCreditoLatam, precioBtcLatam, precioUnitarioLatam);
			informarDiferencia(diferenciaPrecio);
			break;
		case 6:
			confirmarSalida(&salir);
			break;
		default:
			printf("Opcion Invalida.\n\n");

		}


	} while (salir != 's');

	return EXIT_SUCCESS;
}
