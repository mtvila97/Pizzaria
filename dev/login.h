#ifndef LOGIN_H
#define LOGIN_H

/***************************************************
 * Bibliotecas                                     *
 * ************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/***************************************************
 * Structs                                         *
 * ************************************************/

typedef struct login LOGIN;
struct login{
  //Inf Gerente
  char idGEN[5];
  char passGEN[10];
  char nameGEN[50];
  //Inf Funcionario
  char idFUN[10];
  char passFUN[10];
  char nameFUN[50];
};

/***************************************************
 * Cabecalhos                                      *
 * ************************************************/
 
void registerGEN();
void logar();

#endif
