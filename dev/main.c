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
 * Cabecalhos                                      *
 * ************************************************/
 
 #include "info.h"
 #include "login.h"

 /***************************************************
 * Inicio	                                        *
 * ************************************************/
 
 int main(void){
 	setlocale(LC_ALL, "Portuguese");
 	SetConsoleTitle("Sistema - Pizzaria");
 	checkarConfig();
 	return 0;
 	
 }
