#ifndef INFO_H
#define INFO_H



/***************************************************
 * Bibliotecas                                     *
 * ************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <dir.h>

/***************************************************
 * Structs                                         *
 * ************************************************/


typedef struct system SYSTEM;
struct system{
  char 	namePizzaria[50];
  char 	telPizzaria[20];
  char*  endServidor;
  int 	idPizzaria;
};


/***************************************************
 * Cabecalhos                                      *
 * ************************************************/
 
void registrarInf();
void checkarConfig();


#endif
