/*
 * operaciones.c
 *
 *  Created on: 15 abr. 2022
 *      Author: Usuario
 */

#include "operaciones.h"

float CalculaDescuento (float precio)
{
	float descuento;

	descuento = precio * 0.90;

	return descuento;
}

float CalculaInteres (float precio)
{
	float interes;

	interes = precio * 1.25;

	return interes;
}

float CalculaBtcPesos(float precio)
{
	float resultado;

	resultado = precio / 4606954.55;

	return resultado;
}

float CalculaPreUnitario(float precio, float km)
{
	float resultado;

	resultado= precio/km;

	return resultado;
}

float CalculaDiferenciaPositiva (float precio1, float precio2)
{
	float resultado;

	resultado= precio1 - precio2;

	if(resultado < 0)
	{
		resultado= precio2 - precio1;
	}

	return resultado;
}
