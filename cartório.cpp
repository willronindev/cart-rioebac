#include <stdio.h>  //Aqui ao lado temos uma biblioteca ela vai ser respons�vel por traduzir a linguagem de m�quina para o usu�rio
#include <stdlib.h> // biblioteca que aloca��o de espa�o de mem�ria
#include <locale.h> // biblioteca respos�vel por aloc��es de texto por regi�o
#include <string.h> // biblioteca respons�vel por salvar as strings


int teste ()
{
	printf ("funcionou a fun��o") ; // essa teste n�o aparece no programa porque ela n�o foi referenciada
	system ("pause") ;
}

int registro ()
{ 
    printf( " \n Vamos incluir um usu�rio \n");
    system ("pause") ;
    // in�cio das vari�veis/strings
    char arquivo [40]; 
    char cpf [40] ;
    char nome [50] ;
    char sobrenome [50] ;
    char cargo [50] ;
    // final das vari�veis ou strings
    
    // coleta de informa��o
    printf ("digite seu cpf: ") ;
    scanf ("%s, ",cpf); //aqui o programa vai salvar as strings digitadas atrav�s do %s
    strcpy(arquivo, cpf); // o arquivo e o cpf teram o mesmo valor , copia o valor das strings
   
    FILE *file; // FILE j� � um comando que tem na linguagem que puxa um outro arquivo 
    file = fopen(arquivo, "w"); // aqui to dizendo criar um arquivo e escrever ("w")
    fprintf(file,cpf); // aqui to dizendo para ele armazenar o cpf dentro do arquivo a vari�vel cpf
	fclose(file); // Aqui fechamos 
	
	
    file = fopen (arquivo , "a" ); //estou abrindo um arquivo. "a" significa que eu estou atualizando o arquivo
    fprintf(file,","); // para ele salvar o elemento dentro do arquivo
    fclose(file);
    
    printf ("Digite o seu nome: "); // aqui estamos perguntando para o usu�rio o nome dele
    scanf ("%s", nome); // salva a sting digitada
    
    file = fopen (arquivo,"a"); // aqui salvaremos no arquivo
    fprintf(file,nome); // estou salvando a constante no meu arquivo
    fclose(file);
    
    file = fopen (arquivo , "a" ); //estou abrindo um arquivo. "a" significa que eu estou atualizando o arquivo
    fprintf(file,","); // para ele salvar o elemento dentro do arquivo
    fclose(file);
     
     printf ("Digite o seu sobrenome: "); // aqui estamos perguntando para o usu�rio o nome dele
    scanf ("%s",sobrenome); // salva a sting digitada
	
	file = fopen (arquivo,"a"); // aqui salvaremos no arquivo
    fprintf(file,sobrenome); // estou salvando a constante no meu arquivo
    fclose (file); 
    
    file = fopen (arquivo , "a" ); //estou abrindo um arquivo. "a" significa que eu estou atualizando o arquivo
    fprintf(file,","); // para ele salvar o elemento dentro do arquivo
    fclose(file);
    
     printf ("Digite o seu cargo: "); // aqui estamos perguntando para o usu�rio o nome dele
    scanf ("%s",cargo); // salva a sting digitada
	
	file = fopen (arquivo,"a"); // aqui salvaremos no arquivo
    fprintf(file,cargo); // estou salvando a constante no meu arquivo
    fclose(file);
    
    system("pause");
      
}

int consulta ()
{
	 setlocale (LC_ALL, "Portuguese") ; // definindo a linguagem
     // Estamos falando aqui para o computador que estamos usando o computador logo podemos usar acentos/ � preciso levalo para cada fun��o
     
     // indica��o das vari�veis / strings
	char cpf [40];
	char conteudo [200];
	
	
	// digitando e salvando o cpf
	printf ("Digite o cpf a ser consultado: ");
	scanf ("%s", cpf); // Qual cpf vc vai querer
	
	
	FILE *file;
	file = fopen (cpf, "r"); // to pegando o arquivo e lendo o cpf e usando para ler "read"
	
    	if (file == NULL){ //  se o cpf n�o for encontrado
	printf ("o usu�rio n�o foi encontrado! \n");	
}
     while (fgets(conteudo , 200 , file) !=NULL);
	 // fgets est� indo buscar um arquivo , = enquanto ele estiver escrevendo na string conte�do , at� 200 valores que est�o dentro do arquivo enquanto dor diferente de nulo
    { 
    printf ("\n Estas s�o as informa��es dos usu�rios: ");
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
   
   // Se o cpf n�o for encontrado digite o conte�do do printf
 if(file == NULL)
 {
   	printf ("Usu�rio n�o existente:\n");
   	system("pause");
   	
   	
   }
   // Se o usu�rio foi encontrado ent�o escreva o conte�do do printf
else if ( fgets ( cpf,40,file )!= NULL );
{
   	printf("Usu�rio deletado \n");
  	system("pause");	
  }


 } 


int main () 
{ //Aqui estamos criando a fun��o main que � do tipo inteiro os "()" mostram que isso � uma fun��o
             int opcao = 0 ; // Defini��o das vari�veis
             int x=1; // cria��o da vari�vel x
             
             
             for (x=1 ; x=1;) { // aqui definimos o valor inicial de x e at� quando ele ficar� rodando o looping
             
                system("cls") ;
             
                setlocale (LC_ALL, "Portuguese") ; // definindo a linguagem
             // Estamos falando aqui para o computador que estamos usando o computador logo podemos usar acentos
             
                printf(" \n \t\t\t   EBAC - Escola Britanica de Artes criativas e tecnologia \n ") ; // in�cio do menu
                printf ("\n\n\t Este � o nosso algoritmo de inclus�o ou exclus�o de usu�rios \n\n ") ;
                printf("\n\t escolha a op��o desejada ") ;
                printf("\n\t op��o1 - inclus�o de usu�rio \n\t nome:\t\n") ;
                printf("\n\t op��o2 - consulta de usu�rio \n\t nome:\n") ;
                printf("\n\t op��o3 - exclus�o de usu�rio \n\t nome: \n") ;
			    printf("\n\t op��o4 - sair do sistema \n\t ") ;
			    printf("op��o:");
		
			  // final do menu
             
             
                scanf ("%d", &opcao) ; // Armazene na vari�vel op��o o valor desej�vel 
                system ("cls"); // Aqui foi feito um c�digo para despoluir a tela
                
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
                return 0 ; // Esse c�digo faz com que o la�o seja quebrado e o programa retorne novamente
                
                
                default: // � uma op��o que n�o foi colocada
                
                printf ("Esta op��o n�o est� dispon�vel \n");
                system ("pause");
                break;
                
                
                         	   
			 }   
                
             
        
            
             
             
   }
            
			 
			
}
