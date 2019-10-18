//Bibliotecas 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <stdbool.h>
#include "funcoes-dupla.h"




//Funcao principal

int main(){
	contato  *inicio = cria_ponteiro();
	
	color_graphic();
	
	while(op!=666){
		printf("\n********AGENDA2000******");
		printf("\n1-inserir");
		printf("\n2-imprimir");
		printf("\n3-consultar");
		printf("\n4-editar contato");
		printf("\n5-remover contato");
		printf("\n6-imprimir inverso");
		printf("\n7-incerir inicio");
		printf("\n8-sair");
		printf("\n************************");
		printf("\ninforme a opcao\n: ");
		scanf("%d",&op);
		
		switch(op){
			case 1:{
			
				load();
				inserir(inicio);
				break;
			}
			case 2:{
				load();
				eh_vazia(inicio);
				imprimir(inicio);
				break;
			}
			case 3:{
				load();
				eh_vazia(inicio);
				consultar(inicio);
				break;
			}
			case 4:{
				load();
				editar_contato(inicio);
				break;
			}
			case 5:{
				load();
				remover_contato(inicio);
				break;
			}
			case 6:{
				load();
				eh_vazia(inicio);
				imprimir_inverso(inicio);
				break;
			}
			case 7:{
				load();
				eh_vazia(inicio);
				inserir_inicio(inicio);	
				break;
			}
			case 8:{
				exit();
				sair();	
				break;
			}
			default:{
				clear();
				printf("\n********AGENDA2000******");
				printf("\n1-inserir");
				printf("\n2-imprimir");
				printf("\n3-consultar");
				printf("\n4-editar contato");
				printf("\n5-remover contato");
				printf("\n6-imprimir inverso");
				printf("\n7-incerir inicio");
				printf("\n8-sair");
				printf("\n************************");
				op_invalida();
				break;
			}
		}	
	}
}
