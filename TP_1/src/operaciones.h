/*
 * operaciones.h
 *
 *  Created on: 15 abr. 2022
 *      Author: Usuario
 */

#ifndef OPERACIONES_H_
#define OPERACIONES_H_
#include <stdio.h>

/// @brief Calcula un descuento del 10%
/// @param Numero al que se le hace el descuento
/// @return Numero con el descuento aplicado
float CalculaDescuento(float);

/// @brief Calcula un interes del 25%
/// @param Numero al que se le hace el interes
/// @return Numero con el interes aplicado
float CalculaInteres(float);

/// @brief Transforma pesos a BTC
/// @param Numero que se pasara a BTC
/// @return Cantidad de BTC que equivale el numero
float CalculaBtcPesos(float);

/// @brief Calcula el precio por Kilometro
/// @param Precio
/// @param Cantidad de Kilometros
/// @return Cuanto sale cada Kilometro
float CalculaPreUnitario(float, float);

/// @brief Calcula la diferencia entre dos precios y muestra la diferencia positiva
/// @param Primer precio
/// @param Segundo precio
/// @return La diferencia de los dos precios que es positva
float CalculaDiferenciaPositiva (float, float);

#endif /* OPERACIONES_H_ */
