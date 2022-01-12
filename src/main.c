/*
Autor: DarkCells

Este arquivo de codigo foi desenvolvido no perído de estudos, ou seja, por meios
de avaliações e de atividades de ESTRUTURAS DE DADOS. O paradgma deste documento
é procedural

Todos os direitos estão reservados, e este documento é livre para fins didáticos.
@Licença GNU 3.0
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>		
#include "index.h"

int main(){
   int opcao;
  Uni *primeiro_uni= NULL;
   while(opcao!='0') {
   	   }
        
      printf("Cadastro de produtos\n ");
      printf("1 - Novo cadastro\n");
      printf("2 - Listar\n");      
      printf("3 - Excluir cadastro\n");      
      printf("4 - Alterar cadastro\n"); 
      printf("5 - Cadastrar Unidades\n"); 
      printf("6 - Buscar Unidades\n"); 
      printf("7 - Deletar Unidades\n"); 
      printf("8 - Atualizar Unidades\n"); 
      printf("0 - Sair\n");      
      fflush(stdin);
      opcao= getch(); 
      
	  	
	  
      switch(opcao){
         case '1':    
              fflush(stdin);
              system("cls");
              printf("Novo cadastro\n");
              primeiro= adicionar_produto(primeiro);
         getch();
         system("cls"); 
         break;
         
         case '2':         
              system ("cls");
              printf(" Produtos cadastrados\n");
              
              listar_produto(primeiro);
         getch();
         system("cls");
         break;
         
         case '3':    
         	
              system ("cls");
              printf(" Excluir cadastro \n");
              primeiro= excluir_produto(primeiro);
         getch();
         system("cls");
         break;

         case '4':   
              system ("cls");
              printf("Alterar produtos\n");
               modificar_produto(primeiro);
         getch();
         system("cls");
         break;
     
      switch(opcao)  {
         case '5':    
         	
              fflush(stdin);
              system("cls");
              printf("Novo unidade\n");
              primeiro_uni= inserir_unidade(primeiro_uni);
         getch();
         system("cls"); 
         break;
      case '6':         
         	
              system ("cls");
              printf("Unidades cadastradas\n");
              listar_unidade(primeiro_uni);
         getch();
         system("cls");
         break;
         
         case '7':    
         	
              system ("cls");
              printf(" Excluir unidade \n");
              primeiro_uni= excluir_unidade(primeiro_uni);
         getch();
         system("cls");
         break;
      case '8':   
   
              system ("cls");
              printf("Atualizar unidade\n");
               alterar_unidade(primeiro_uni);
         getch();
         system("cls");
         break;
         
         case '0':        
              
              opcao='0';
         break;
         
         default:     

              system("cls");        
         break; 
      } 
   }  
   return 0;
}