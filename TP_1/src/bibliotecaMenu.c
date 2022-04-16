/*
 * bibliotecaMenu.c
 *
 *  Created on: 15 abr. 2022
 *      Author: Usuario
 */

#include "bibliotecaMenu.h"
#include "operaciones.h"

void MostrarMenu (void)
{
	int opcion;
	int contador4;
	float kmIngresados;
	float precioAerolineas;
	float precioLatam;
	float precioTarjetaDebitoA;
	float precioTarjetaCreditoA;
	float precioBtcA;
	float precioUnitarioA;
	float precioTarjetaDebitoL;
	float precioTarjetaCreditoL;
	float precioBtcL;
	float precioUnitarioL;
	float diferenciaPrecios;
	float opcion2;

	kmIngresados = 0;
	precioAerolineas=0;
	precioLatam= 0;
	contador4=0;

	do
	{
		printf("1. Ingresar Kilómetros: ( km=%.2f) \n", kmIngresados);
		printf("2. Ingresar Precio de Vuelos: (Aerolíneas=%.2f, Latam=%.2f) \n",precioAerolineas, precioLatam);
		printf("3. Calcular todos los costos \n");
		printf("4. Informar Resultados \n");
		printf("5. Carga forzada de datos \n");
		printf("6. Salir \n");
		printf("\n");
		fflush(stdin);
		scanf("%d", &opcion);

		switch(opcion)
		{
		case 1 :
			kmIngresados= PedirNumero("Ingrese los Kilometros: ");
			printf("\n");
			break;
		case 2:
			printf("1. Ingresar precio vuelo Aerolíneas \n");
			printf("2. Ingresar precio vuelo Latam \n");
			fflush(stdin);
			scanf("%f", &opcion2);
			printf("\n");

			while(opcion2 != 1 && opcion2 != 2)
			{
				printf("Ingrese un numero valido \n");
				fflush(stdin);
				scanf("%f", &opcion2);
				printf("\n");
			}

			if(opcion2 ==1)
			{
				precioAerolineas = PedirNumero("- Precio vuelo Aerolíneas: \n");
				printf("\n");
			}
			else
			{
				if(opcion2 == 2)
				{
					precioLatam= PedirNumero("- Precio vuelo Latam: \n");
					printf("\n");
				}
			}
			break;
		case 3:
			if(kmIngresados==0 || precioAerolineas ==0 || precioLatam ==0)
			{
				printf("No ha ingresado suficientes valores para calcular los costos \n");
				printf("\n");
			}
			else
			{
				precioTarjetaDebitoA = CalculaDescuento(precioAerolineas);
				precioTarjetaCreditoA = CalculaInteres(precioAerolineas);
				precioBtcA= CalculaBtcPesos(precioAerolineas);
				precioUnitarioA= CalculaPreUnitario(precioAerolineas, kmIngresados);

				precioTarjetaDebitoL=CalculaDescuento(precioLatam);
				precioTarjetaCreditoL=CalculaInteres(precioLatam);
				precioBtcL=CalculaBtcPesos(precioLatam);
				precioUnitarioL=CalculaPreUnitario(precioLatam, kmIngresados);

				diferenciaPrecios= CalculaDiferenciaPositiva(precioLatam, precioAerolineas);

				contador4++;

				printf("Los costos se han calculado \n");
				printf("\n");
			}
			break;
		case 4:
			if(contador4 > 0) {
			printf("KMs Ingresados: %.2f km \n", kmIngresados);
			printf("\n");
			printf("Precio Aerolineas: $ %.2f \n", precioAerolineas);
			printf("a) Precio con tarjeta de debito: $ %.2f \n", precioTarjetaDebitoA);
			printf("b) Precio con tarjeta de credito: $ %.2f \n", precioTarjetaCreditoA);
			printf("c) Precio pagando con bitcoin:  %.2f BTC \n", precioBtcA);
			printf("d) Mostrar precio unitario: $ %.2f \n", precioUnitarioA);
			printf("\n");
			printf("Precio Latam: $ %.2f \n", precioLatam);
			printf("a) Precio con tarjeta de debito: $ %.2f \n", precioTarjetaDebitoL);
			printf("b) Precio con tarjeta de credito: $ %.2f \n", precioTarjetaCreditoL);
			printf("c) Precio pagando con bitcoin:  %.2f BTC \n", precioBtcL);
			printf("d) Mostrar precio unitario: $ %.2f \n", precioUnitarioL);
			printf("\n");
			printf("La diferencia de precio es: $ %.2f \n", diferenciaPrecios);
			printf("\n");
			}
			else
			{
				printf("Todavia no se han calculado los costos \n");
				printf("\n");
			}
			break;
		case 5:
			printf("Carga Forzada \n");
			printf("\n");

			kmIngresados= 7090;
			precioAerolineas= 162965;
			precioLatam= 159339;

			contador4++;

			precioTarjetaDebitoA = CalculaDescuento(precioAerolineas);
			precioTarjetaCreditoA = CalculaInteres(precioAerolineas);
			precioBtcA= CalculaBtcPesos(precioAerolineas);
			precioUnitarioA= CalculaPreUnitario(precioAerolineas, kmIngresados);

			precioTarjetaDebitoL=CalculaDescuento(precioLatam);
			precioTarjetaCreditoL=CalculaInteres(precioLatam);
			precioBtcL=CalculaBtcPesos(precioLatam);
			precioUnitarioL=CalculaPreUnitario(precioLatam, kmIngresados);

			diferenciaPrecios= CalculaDiferenciaPositiva(precioLatam, precioAerolineas);

			printf("KMs Ingresados: %.2f km \n", kmIngresados);
			printf("\n");
			printf("Precio Aerolineas: $ %.2f \n", precioAerolineas);
			printf("a) Precio con tarjeta de debito: $ %.2f \n", precioTarjetaDebitoA);
			printf("b) Precio con tarjeta de credito: $ %.2f \n", precioTarjetaCreditoA);
			printf("c) Precio pagando con bitcoin:  %.2f BTC \n", precioBtcA);
			printf("d) Mostrar precio unitario: $ %.2f \n", precioUnitarioA);
			printf("\n");
			printf("Precio Latam: $ %.2f \n", precioLatam);
			printf("a) Precio con tarjeta de debito: $ %.2f \n", precioTarjetaDebitoL);
			printf("b) Precio con tarjeta de credito: $ %.2f \n", precioTarjetaCreditoL);
			printf("c) Precio pagando con bitcoin:  %.2f BTC \n", precioBtcL);
			printf("d) Mostrar precio unitario: $ %.2f \n", precioUnitarioL);
			printf("\n");
			printf("La diferencia de precio es: $ %.2f \n", diferenciaPrecios);
			printf("\n");
			break;
		case 6:
			printf("Fin. \n");
			break;
		default:
			printf("Ingrese un numero valido \n");
			printf("\n");
			break;
		}

	}while(opcion != 6);
}

float PedirNumero (char * mensaje)
{
	float numero;

	printf("%s", mensaje);
	fflush(stdin);
	scanf("%f", &numero);

	while(numero <= 0)
	{
		printf("\n");
		printf("ERROR. Ingrese un valor valido: \n");
		fflush(stdin);
		scanf("%f", &numero);
	}

	return numero;
}
