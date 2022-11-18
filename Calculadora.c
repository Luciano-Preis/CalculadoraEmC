#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int escolhaOperador, continuar;
	float numero1, numero2, resultado;
	
	do{
	
		printf("Escolha uma operacao: \n\n");
		printf("1) Soma \n");
		printf("2) Subtracao \n");
		printf("3) Multiplicacao \n");
		printf("4) Divisao \n");
		printf("5) Sair \n\n");
		printf("Digite o numero para continuar: ");
		scanf("%i",&escolhaOperador);
		fflush(stdin);
		system("cls");
		
		if(escolhaOperador == 1){
			
			printf("Digite um numero: ");
			scanf("%f",&numero1);
			fflush(stdin);
			system("cls");
			resultado = numero1;
			do{
				printf("Digite outro numero: ");
				scanf("%f",&numero2);
				fflush(stdin);
				system("cls");
	
				resultado = resultado + numero2;
				
				printf("Resultado: %f \n\n", resultado);
				printf("Deseja continuar? \n");
				printf("1) Sim \n");
				printf("2) Nao \n\n");
				printf("Digite numero para continuar: ");
				scanf("%i",&continuar);
				fflush(stdin);
				system("cls");
				
				if(continuar == "2"){
					printf("Deseja fazer outra operação?\n");
					printf("1) Sim \n");
					printf("2) Nao \n\n");
					printf("Digite numero para continuar: ");
					scanf("%i",&escolhaOperador);
					fflush(stdin);
					system("cls");
					
				}
			}while(continuar == 1);
		}
		else if(escolhaOperador == 2){
			
			printf("Digite um numero: ");
			scanf("%f",&numero1);
			fflush(stdin);
			system("cls");
			resultado = numero1;
			do{
				printf("Digite outro numero: ");
				scanf("%f",&numero2);
				fflush(stdin);
				system("cls");
	
				resultado = resultado - numero2;
				
				printf("Resultado: %f \n\n", resultado);
				printf("Deseja continuar? \n");
				printf("1) Sim \n");
				printf("2) Nao \n\n");
				printf("Digite numero para continuar: ");
				scanf("%i",&continuar);
				fflush(stdin);
				system("cls");
				
				if(continuar == "2"){
					printf("Deseja fazer outra operação?\n");
					printf("1) Sim \n");
					printf("2) Nao \n\n");
					printf("Digite numero para continuar: ");
					scanf("%i",&escolhaOperador);
					fflush(stdin);
					system("cls");
					
				}
			}while(continuar == 1);
			
		}
		else if(escolhaOperador == 3){
			
			printf("Digite um numero: ");
			scanf("%f",&numero1);
			fflush(stdin);
			system("cls");
			resultado = numero1;
			do{
				printf("Digite outro numero: ");
				scanf("%f",&numero2);
				fflush(stdin);
				system("cls");
	
				resultado = resultado * numero2;
				
				printf("Resultado: %f \n\n", resultado);
				printf("Deseja continuar? \n");
				printf("1) Sim \n");
				printf("2) Nao \n\n");
				printf("Digite numero para continuar: ");
				scanf("%i",&continuar);
				fflush(stdin);
				system("cls");
				
				if(continuar == "2"){
					printf("Deseja fazer outra operação?\n");
					printf("1) Sim \n");
					printf("2) Nao \n\n");
					printf("Digite numero para continuar: ");
					scanf("%i",&escolhaOperador);
					fflush(stdin);
					system("cls");
					
				}
			}while(continuar == 1);
		}
		else if(escolhaOperador == 4){
			
			printf("Digite um numero: ");
			scanf("%f",&numero1);
			fflush(stdin);
			system("cls");
			resultado = numero1;
			do{
				printf("Digite outro numero: ");
				scanf("%f",&numero2);
				fflush(stdin);
				system("cls");
	
				resultado = resultado / numero2;
				
				printf("Resultado: %f \n\n", resultado);
				printf("Deseja continuar? \n");
				printf("1) Sim \n");
				printf("2) Nao \n\n");
				printf("Digite numero para continuar: ");
				scanf("%i",&continuar);
				fflush(stdin);
				system("cls");
				
				if(continuar == "2"){
					printf("Deseja fazer outra operação?\n");
					printf("1) Sim \n");
					printf("2) Nao \n\n");
					printf("Digite numero para continuar: ");
					scanf("%i",&escolhaOperador);
					fflush(stdin);
					system("cls");
					
				}
			}while(continuar == 1);
			
		}
	
	}while(escolhaOperador != 5);
	
	printf("Programa finalizado!");
	return 0;
}