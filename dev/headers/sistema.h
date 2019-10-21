#include "produto.h"

//Cabecarios
void menuPedido();

void novoPedido();
void listaPedido();
void anotarPedido();

void menuConfiguracoes();
void configCardapio();


//structs
typedef struct nvPedido NVPEDIDO;
struct nvPedido{
//Tipo do pedido
char tPedido[10];
};

void menuPrincipal(){
	int opcao;
	do {
		cabecalhoMenu();
		printf("1 | Pedido\n");
		printf("2 | Estoque\n");
		printf("3 | Configura��es\n");
		cabecalhoFIM();
		scanf("%d", &opcao);
		
		switch (opcao) {
			case 1 : 
				menuPedido();
				break;
			case 2 :
				//Estoque
				break;
			case 3 :
				menuConfiguracoes();
				break;
			default :
				printf("Op��o Inv�lida!\n");
				getch();
				break;
		}
		
	} while (opcao != 3);
	
}

void menuPedido(){
	int opcao;
	do{
		cabecalhoMenu();
		printf("1 | Novo pedido\n");
		printf("2 | Cancelar pedido\n");
		printf("3 | Lista de pedidos\n");
		cabecalhoFIM();
		scanf("%d", &opcao);
		
		switch (opcao){
			case 1:
				novoPedido();
				break;
			case 2:
				//cancelarPedido();
				break;
			case 3:
				//listaPedido();
				break;
			default:
				printf("Op��o Inv�lida!\n");
				getch();
				break;
		} 
	} while (opcao != 3);
}

void novoPedido(){
	int opcao;
	do{
	cabecalhoNvPedido();
	printf("1 - Delivery |	2 - Mesa\n");
	cabecalhoFIM();
	scanf("%d", &opcao);
		switch (opcao){
		case 1: 
			anotarPedido();
			break;
		case 2:
			anotarPedido();
			break;
		default:
			printf("Op��o Inv�lida!\n");
			getch();
			break;
		}
	} while (opcao != 2);
}

void anotarPedido(){
	CARDAPIO cdp;
	
	//FILE* infoP;
	//infoP = fopen("configs/infoP.txt", "rb");
	
	printf("N� do produto: ");
	gets(cdp.nProduto);

}

void menuConfiguracoes(){
	int opcao;
	do{
	cabecalhoConfiguracoes();
	printf("1 | Relat�rio\n");
	printf("2 | Backup\n");
	printf("3 | Config card�pio\n");
	printf("4 | Voltar\n");
	cabecalhoFIM();
	scanf("%d", &opcao);
		switch (opcao){
		case 1: 
			//relatorios
			break;
		case 2:
			//Backup
			break;
		case 3:
			configCardapio();
			break;
		case 4:
			menuPrincipal();
			break;
		default:
			printf("Op��o Inv�lida!\n");
			getch();
			break;
		}
	} while (opcao != 4);
}

void configCardapio(){
	int opcao, listaP;
	CARDAPIO cdp;
	
	FILE* cardapio;
	cardapio = fopen("configs/cardapio.txt", "ab");
	
	if(cardapio == NULL){
		printf("Erro na abertura do arquivo!\n");
	} else{
	do{
		cabecalhoCardapio();
		printf("1 | Adicionar novo produto\n");
		printf("2 | Apagar produto\n");
		printf("3 | Alterar Informa��es do produto\n");
		printf("4 | Lista produtos\n");
		printf("5 | Voltar\n");
		cabecalhoFIM();
		scanf("%d", &opcao);
		
		switch (opcao){
			case 1:
				addCardapio();
				break;
			case 2:
				//Deletar Produto
				break;
			case 3:
				//Aletar inf do produto
				break;
			case 4:
				listaProdutos();
				break;
			case 5:
				menuConfiguracoes();
				break;
			default:
				printf("Op��o Inv�lida!\n");
				getch();
				break;
			}
		} while(opcao != 5);
	}
}


