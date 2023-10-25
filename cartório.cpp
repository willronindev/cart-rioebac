#include <stdio.h>  //Aqui ao lado temos uma biblioteca ela vai ser responsável por traduzir a linguagem de máquina para o usuário
#include <stdlib.h> // biblioteca que alocação de espaço de memória
#include <locale.h> // biblioteca resposável por alocções de texto por região
#include <string.h> // biblioteca responsável por salvar as strings


int teste ()
{
	printf ("funcionou a função") ; // essa teste não aparece no programa porque ela não foi referenciada
	system ("pause") ;
}

int registro ()
{ 
    printf( " \n Vamos incluir um usuário \n");
    system ("pause") ;
    // início das variáveis/strings
    char arquivo [40]; 
    char cpf [40] ;
    char nome [50] ;
    char sobrenome [50] ;
    char cargo [50] ;
    // final das variáveis ou strings
    
    // coleta de informação
    printf ("digite seu cpf: ") ;
    scanf ("%s, ",cpf); //aqui o programa vai salvar as strings digitadas através do %s
    strcpy(arquivo, cpf); // o arquivo e o cpf teram o mesmo valor , copia o valor das strings
   
    FILE *file; // FILE já é um comando que tem na linguagem que puxa um outro arquivo 
    file = fopen(arquivo, "w"); // aqui to dizendo criar um arquivo e escrever ("w")
    fprintf(file,cpf); // aqui to dizendo para ele armazenar o cpf dentro do arquivo a variável cpf
	fclose(file); // Aqui fechamos 
	
	
    file = fopen (arquivo , "a" ); //estou abrindo um arquivo. "a" significa que eu estou atualizando o arquivo
    fprintf(file,","); // para ele salvar o elemento dentro do arquivo
    fclose(file);
    
    printf ("Digite o seu nome: "); // aqui estamos perguntando para o usuário o nome dele
    scanf ("%s", nome); // salva a sting digitada
    
    file = fopen (arquivo,"a"); // aqui salvaremos no arquivo
    fprintf(file,nome); // estou salvando a constante no meu arquivo
    fclose(file);
    
    file = fopen (arquivo , "a" ); //estou abrindo um arquivo. "a" significa que eu estou atualizando o arquivo
    fprintf(file,","); // para ele salvar o elemento dentro do arquivo
    fclose(file);
     
     printf ("Digite o seu sobrenome: "); // aqui estamos perguntando para o usuário o nome dele
    scanf ("%s",sobrenome); // salva a sting digitada
	
	file = fopen (arquivo,"a"); // aqui salvaremos no arquivo
    fprintf(file,sobrenome); // estou salvando a constante no meu arquivo
    fclose (file); 
    
    file = fopen (arquivo , "a" ); //estou abrindo um arquivo. "a" significa que eu estou atualizando o arquivo
    fprintf(file,","); // para ele salvar o elemento dentro do arquivo
    fclose(file);
    
     printf ("Digite o seu cargo: "); // aqui estamos perguntando para o usuário o nome dele
    scanf ("%s",cargo); // salva a sting digitada
	
	file = fopen (arquivo,"a"); // aqui salvaremos no arquivo
    fprintf(file,cargo); // estou salvando a constante no meu arquivo
    fclose(file);
    
    system("pause");
      
}

int consulta ()
{
	 setlocale (LC_ALL, "Portuguese") ; // definindo a linguagem
     // Estamos falando aqui para o computador que estamos usando o computador logo podemos usar acentos/ é preciso levalo para cada função
     
     // indicação das variáveis / strings
	char cpf [40];
	char conteudo [200];
	
	
	// digitando e salvando o cpf
	printf ("Digite o cpf a ser consultado: ");
	scanf ("%s", cpf); // Qual cpf vc vai querer
	
	
	FILE *file;
	file = fopen (cpf, "r"); // to pegando o arquivo e lendo o cpf e usando para ler "read"
	
    	if (file == NULL){ //  se o cpf não for encontrado
	printf ("o usuário não foi encontrado! \n");	
}
     while (fgets(conteudo , 200 , file) !=NULL);
	 // fgets está indo buscar um arquivo , = enquanto ele estiver escrevendo na string conteúdo , até 200 valores que estão dentro do arquivo enquanto dor diferente de nulo
    { 
    printf ("\n Estas são as informações dos usuários: ");
    printf ("%s",conteudo);
    printf ("\n\n");
    
    system ("pause") ;
    
    
	}   
	
}

int exclusao ()
// string
{  char cpf [40];
  //digitando e salvano o cpf
   printf ("Digite o cpf a ser deletado: ");
   scanf ("%s", cpf);
   //removendo o cpf
   remove(cpf);
   // Selecionando o arquivo e e abrindo para leitura
   FILE *file;
   file = fopen (cpf,"r"); // leia o cpf 
   
   // Se o cpf não for encontrado digite o conteúdo do printf
 if(file == NULL)
 {
   	printf ("Usuário não existente:\n");
   	system("pause");
   	
   	
   }
   // Se o usuário foi encontrado então escreva o conteúdo do printf
else if ( fgets ( cpf,40,file )!= NULL );
{
   	printf("Usuário deletado \n");
  	system("pause");	
  }


 } 


int main () 
{ //Aqui estamos criando a função main que é do tipo inteiro os "()" mostram que isso é uma função
             int opcao = 0 ; // Definição das variáveis
             int x=1; // criação da variável x
             
             
             for (x=1 ; x=1;) { // aqui definimos o valor inicial de x e até quando ele ficará rodando o looping
             
                system("cls") ;
             
                setlocale (LC_ALL, "Portuguese") ; // definindo a linguagem
             // Estamos falando aqui para o computador que estamos usando o computador logo podemos usar acentos
             
                printf(" \n \t\t\t   EBAC - Escola Britanica de Artes criativas e tecnologia \n ") ; // início do menu
                printf ("\n\n\t Este é o nosso algoritmo de inclusão ou exclusão de usuários \n\n ") ;
                printf("\n\t escolha a opção desejada ") ;
                printf("\n\t opção1 - inclusão de usuário \n\t nome:\t\n") ;
                printf("\n\t opção2 - consulta de usuário \n\t nome:\n") ;
                printf("\n\t opção3 - exclusão de usuário \n\t nome: \n") ;
			    printf("\n\t opção4 - sair do sistema \n\t ") ;
			    printf("opção:");
		
			  // final do menu
             
             
                scanf ("%d", &opcao) ; // Armazene na variável opção o valor desejável 
                system ("cls"); // Aqui foi feito um código para despoluir a tela
                
             switch (opcao) 
			 
			 {
             	case 1:
             	registro () ;
             	break;
             	
             	
             	case 2:
             	
             	consulta ();
                break;
                
                case 3:
                
                exclusao ();
                
                break;
                
                case 4 :
                	
                printf("Obrigado por utilizar o sistema! \n ");
                return 0 ; // Esse código faz com que o laço seja quebrado e o programa retorne novamente
                
                
                default: // é uma opção que não foi colocada
                
                printf ("Esta opção não está disponível \n");
                system ("pause");
                break;
                
                
                         	   
			 }   
                
             
        
            
             
             
   }
            
			 
			
}
