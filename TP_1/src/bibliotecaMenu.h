/*
 * bibliotecaMenu.h
 *
 *  Created on: 15 abr. 2022
 *      Author: Usuario
 */

#ifndef BIBLIOTECAMENU_H_
#define BIBLIOTECAMENU_H_
#include <stdio.h>

/// @brief Permite mostrar un menu con diferentes funciones
void MostrarMenu (void);

/// @brief Permite pedir un numero, validarlo y devolverlo
/// @param char * El mensaje que voy a mostrar
/// @return Devuelve el numero validado
float PedirNumero(char *);

#endif /* BIBLIOTECAMENU_H_ */
