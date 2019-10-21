void telaConfigs(){
	int c;

	printf("Tela Configurações: ");
	printf("1 | Voltar para o menu principal ");
	printf("Opcao desejada: ");
	scanf("%i", &c);	
	switch (c) {
		case 1 : 
			
		
		default :
			printf("Opcao invalida");
			telaConfigs();
	}
}
