#ifndef INFO_H
#define INFO_H

/***************************************************
 * Bibliotecas                                     *
 * ************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/***************************************************
 * Structs                                         *
 * ************************************************/

typedef struct local LOCAL;
typedef struct local LOCAL;
struct local{
	char endereco[150];
	char cep[50];
	char bairro[500];
	int numero;
	char uf[5];
	char cidade[100];
};

typedef struct system SYSTEM;
struct system{
  //Inf Gerente
  char 	namePizzaria[50];
  char 	telPizzaria[20];
  int 	idPizzaria;
  LOCAL	end;
};


/***************************************************
 * Cabecalhos                                      *
 * ************************************************/
 
void registrarInf();
void checkarConfig();


#endif
