#include <stdio.h>
int main(){
	while(1){
	
	printf("Bem vindo ao fakebank escolha uma das opçoes\n");
	printf("1-criar conta 2-fazer login\n");
	printf("observacao se fizer login sem criar conta dara erro\n");
	int opcao;
	scanf("%d", &opcao);
	int nconta;
	if (opcao == 1){
		int opcao2;
		printf("digite o numero da sua conta:");
		scanf("%d", &nconta);
		printf("deseja fazer login? 1-para sim e 2-para nao:");
		scanf("%d", &opcao2);
		if (opcao2 == 1){
		int lconta2;
		printf("digite o numero da sua conta:");
		scanf("%d", &lconta2);
		if (lconta2 == nconta){
			printf("sucesso\n");
		} else {
				printf("erro\n");
			}
		}
	} else {
		int lconta;
		printf("digite o numero da sua conta:");
		scanf("%d", &lconta);
		if (lconta == nconta){
			printf("sucesso");
		} else {
				printf("erro");
			}
	}
}
}