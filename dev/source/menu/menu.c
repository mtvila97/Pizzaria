#include "../system/info.h"
#include "../login/login.h"
#include "../cabecalhos/cabecalhos.h"

void menuPrincipal(){
	int opcao;
	do {
		system("cls");
		cabecalhoPrincipal();
		printf("1 | Pedido\n");
		printf("2 | Estoque\n");
		printf("3 | Configura��es\n");
		cabecalhoFinal();
		scanf("%d", &opcao);
		
		switch (opcao) {
			case 1 : 
				//menuPedido();
				break;
			case 2 :
				//Estoque
				break;
			case 3 :
				//menuConfiguracoes();
				break;
			default :
				printf("Op��o Inv�lida!\n");
				getch();
				break;
		}
		
	} while (opcao != 3);
	
}
