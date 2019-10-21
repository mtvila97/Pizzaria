#include "produto.h"

//Cabecarios
void menuPedido();

void novoPedido();
void listaPedido();
void anotarPedido();

void menuConfiguracoes();
void configCardapio();
void configSistema();


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
		printf("3 | Configurações\n");
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
				printf("Opção Inválida!\n");
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
		printf("4 | Voltar\n");
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
			case 4:
				menuPrincipal();
				break;
			default:
				printf("Opção Inválida!\n");
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
			printf("Opção Inválida!\n");
			getch();
			break;
		}
	} while (opcao != 2);
}

void anotarPedido(){
	CARDAPIO cdp;
	
	//FILE* infoP;
	//infoP = fopen("configs/infoP.txt", "rb");
	
	printf("Nª do produto: ");
	gets(cdp.nProduto);

}

void menuConfiguracoes(){
	int opcao;
	do{
	cabecalhoConfiguracoes();
	printf("1 | Relatório\n");
	printf("2 | Backup\n");
	printf("3 | Config cardápio\n");
	printf("4 | Config sistema\n");
	printf("5 | Voltar\n");
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
			configSistema();
			break;
		case 5:
			menuPrincipal();
			break;
		default:
			printf("Opção Inválida!\n");
			getch();
			break;
		}
	} while (opcao != 4);
}

void configCardapio(){
	int opcao, listaP;
	
	do{
		cabecalhoCardapio();
		printf("1 | Adicionar novo produto\n");
		printf("2 | Apagar produto\n");
		printf("3 | Alterar Informações do produto\n");
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
				printf("Opção Inválida!\n");
				getch();
				break;
			}
		} while(opcao != 5);
	}

void configSistema(){
	int opcao;
		cabecalhoConfiguracoes();
		printf("1 | Alterar nome da pizzaria\n");
		printf("2 | Alterar identificação da pizzaria\n");
		printf("3 | Alterar endereço da pasta backup\n");
		printf("4 | Funcionarios\n");
		printf("5 | Voltar\n");
		cabecalhoFIM();
}
