#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <math.h>

struct cadastro{
	long int idade, cep, numero, cpf, rg, i;
	char nome[30], fone[20], celular[20], endereco[50], email[30], bairro[20], cidade[40], tipo[20], saldo[10], cpf_show[20];
	};
	
struct senha{
	int s1;
};	

struct ativa {
	int at = 1;
};

int main ()
{
	long int a, a2, op, i, cpf, n=0, b, card, s2, cod;
	float val[100], boleto;
	
	struct cadastro p[100];
	struct senha s[100];
	struct ativa c[100];
	setlocale(LC_ALL, "PORTUGUESE");

	system ("color 3f");
		
	printf("                 000                  0 0                    000 \n");
	printf("                 00000               00 00                 00000 \n");
	printf("                 000000             000 000               000000 \n");
	printf("                 000000            0000 00000             000000 \n");
	printf("                 0000000        0000000 00000000        0000000  \n");
	printf("                  0000000     00000000   000000000     0000000   \n");
	printf("                  0000000    00000000      00000000   0000000    \n");
	printf("                   000000  000000000        00000000  000000     \n");
	printf("                    00000 000000              00000000000        \n");
	printf("                     00000000                   00000000         \n");
	printf("                      0000000000000          0000000000000       \n");
	printf("                    00000000000000000      00000000000000000     \n");
	printf("                    000000000000   000    000   000000000000     \n");
	printf("                   0000000000000  00000  0000  00000000000000    \n");
	printf("                   00000000000000000000  00000000000000000000    \n");
	printf("                    0000000000000000000  0000000000000000000     \n");
	printf("                     00000000000000000    00000000000000000      \n");
	printf("                        0000000000            0000000000         \n");
	printf("                      0000000000000          0000000000000       \n");

	printf("\n");
	printf("                                Seja Bem-Vindo ao\n");
	printf("                                DOUBLE RABBIT 1.0");
	printf("\n\n");
	Sleep(1000);
	printf("                      Data :%s Hora:%s\n",__DATE__,__TIME__);
	printf("Press ENTER to start...");
	getchar();
	
	
	
	do
	{
	system("cls");
	system ("color f0");
	printf("                 000                  0 0                    000 \n");
	printf("                 00000               00 00                 00000 \n");
	printf("                 000000             000 000               000000 \n");
	printf("                 000000            0000 00000             000000 \n");
	printf("                 0000000        0000000 00000000        0000000  \n");
	printf("                  0000000     00000000   000000000     0000000   \n");
	printf("                  0000000    00000000      00000000   0000000    \n");
	printf("                   000000  000000000        000000000  00000     \n");
	printf("                    00000 000000              00000000000        \n");
	printf("                     00000000                   00000000         \n");
	printf("                      0000000000000          0000000000000       \n");
	printf("                    00000000000000000      00000000000000000     \n");
	printf("                    000000000000   000    000   000000000000     \n");
	printf("                   0000000000000  00000  0000  00000000000000    \n");
	printf("                   00000000000000000000  00000000000000000000    \n");
	printf("                    0000000000000000000  0000000000000000000     \n");
	printf("                     00000000000000000    00000000000000000      \n");
	printf("                        0000000000            0000000000         \n");
	printf("                      0000000000000          0000000000000       \n");

	printf("\n");
	printf("                                DOUBLE RABBIT 1.0\n");
	printf("                                -----------------");
	printf("\n\n\n");
	
	
		
	//##########OPÇOES DA TELA INICIAL############//		
	printf("                1) Criar Nova Conta\n\n");
									       Sleep(50);
	printf("                       		   2) Dados Pessoais\n\n");							
							Sleep(50);
	printf("                3)Relação de Clientes\n\n");
											Sleep(50);
	printf("                       		   4) Excluir Conta de Cliente\n\n");	
							Sleep(50);
	printf("                5) Saldo e Limite \n\n");
											Sleep(50);
	printf("                      		   6) Pagamento de Boleto \n\n") ;
							Sleep(50);
	printf("                7) Editar Informações Pessoais \n\n");	
											Sleep(50);
	printf("                      		   8) Saiba mais sobre o Double Rabbit \n\n");
							Sleep(50);
	printf("                0) Finalizar o Double Rabbit 1.0\n\n");
										
	printf("Informe a opção desejada: ");
	scanf("%d", &a);
	
	//##########INICIO DO USO DAS OPÇOES############//

switch (a){
	case 1:
		for (i=n ; i<100 ; i++){
		system("cls");
		system("color 2f");
		printf("000                  0\n");
		printf("00000               00\n");
		printf("000000             000\n");
		printf("000000            0000\n");
		printf("0000000        0000000\n");
		printf("0000000     00000000\n");
		printf("0000000    00000000\n");
		printf("000000  000000000\n");
		printf("00000 000000\n");
		printf("0000000000                                   DOUBLE RABBIT\n");
		printf("0000000000000                              _________________\n");
		printf("00000000000000000                       \n");
		printf("000000000000   000                     VAMOS CRIAR UMA NOVA CONTA\n");
		printf("0000000000000  00000\n");
		printf("00000000000000000000\n");
		printf("0000000000000000000\n");
		printf("00000000000000000\n");
		printf("   0000000000\n");
		printf(" 0000000000000\n\n\n\n\n\n");
		Sleep(1000);
			    fflush(stdin);
				printf("     Nome completo: ");
				gets(p[i].nome);
				fflush(stdin);
		
				printf("     idade: ");
				scanf("%d", &p[i].idade);
				fflush(stdin);
		
				printf("     RG: ");
				scanf("%d", &p[i].rg);
				fflush(stdin);
			
				printf("     CPF:");
				scanf("%d", &p[i].cpf);
				fflush(stdin);

				printf("	Confirme seu CPF: ");
				gets(p[i].cpf_show);
				fflush(stdin);
			
				printf("     Endereço: ");
				gets(p[i].endereco);
				fflush(stdin);
			
				printf("     Bairro: ");
				gets(p[i].bairro);
				fflush(stdin);
			
				printf("     Cidade: ");
				gets(p[i].cidade);
				fflush(stdin);
			
				printf("     Telefone: ");
				gets(p[i].fone);
				fflush(stdin);
			
				printf("     Celular: ");
				gets(p[i].celular);
				fflush(stdin);
			
				printf("     E-mail: ");
				gets(p[i].email);
				fflush(stdin);
	
				printf("     Tipo de cartão solicitado: ");
				printf("Platinum / Gold / Prata: ");
				gets(p[i].tipo);
				fflush(stdin);

				printf("     Saldo do Cliente (Use apenas números e uma vírgula, para centavos)\n	R$");
				scanf("%f", &val[i]);
				fflush(stdin);

				printf("     Gere uma senha Login (4 algarismos): ") ;
				scanf("%d", &s[i].s1);
				fflush(stdin);
				
				printf("\n\n Conta cadastrada com sucesso!\n\n\n");
				printf("\n\n");
				n = n+1;
				
				/*Vendo se o cliente quer um novo cadastro...
				Se nao, volta a tela inicial*/
					
				printf("Deseja cadastrar um novo cliente? (1/sim ou 2 p/ retonar a tela inicial): \n");
				scanf("%d", &op);
				if(op == 1){
					printf("Aguarde...");
					Sleep(500);
					system("cls");
					fflush(stdin);
				}
				else if(op != 1){
					printf("Voltando para a tela incial... ");
					break;
				}
			}
			
			
		break;
		fflush(stdin);

	/*######## case 2 ########*/
	case 2: 
		system("cls");
		system("color 6f");
		printf("000                  0\n");
		printf("00000               00\n");
		printf("000000             000\n");
		printf("000000            0000\n");
		printf("0000000        0000000\n");
		printf("0000000     00000000\n");
		printf("0000000    00000000\n");
		printf("000000  000000000\n");
		printf("00000 000000\n");
		printf("0000000000                                   DOUBLE RABBIT\n");
		printf("0000000000000                               _________________\n");
		printf("00000000000000000                       \n");
		printf("000000000000   000                      VAMOS CONSULTAR UM CLIENTE\n");
		printf("0000000000000  00000\n");
		printf("00000000000000000000\n");
		printf("0000000000000000000\n");
		printf("00000000000000000\n");
		printf("   0000000000\n");
		printf(" 0000000000000\n\n\n\n");
		Sleep(2000);
		printf("Digite o CPF de um cliente: ");
		scanf("%d", &cpf);
		printf("Digite a senha do cliente (4 DÍGITOS): ");
		scanf("%d", &s2);
		fflush(stdin);

		b = 0;
		i=0;
		for (i=0 ; i<100 ; i++){
	
			if ((cpf == p[i].cpf) && (s[i].s1 == s2)){
				if (c[i].at != 0){
					system("color 2F");
					printf("\n\nCPF ENCONTRADO");
					printf("\n\n");
					printf("Nome: %s\n", p[i].nome);
					printf("Idade: %d\n", p[i].idade);
					printf("RG: %d\n", p[i].rg);
					printf("CPF: %s\n", p[i].cpf_show);
					printf("Endereço: %s\n", p[i].endereco);
					printf("Bairro: %s\n", p[i].bairro);	
					printf("Cidade: %s\n", p[i].cidade);	
					printf("Telefone: %s\n", p[i].fone);
					printf("Celular: %s\n", p[i].celular);
					printf("E-mail: %s\n", p[i].email);
					printf("Tipo do cartão: %s", p[i].tipo);
					printf("\n\n");
					fflush(stdin);
					system("pause");
					b = 1;
					break;
				}
			}
		}
		if (b == 0){
			system("color 4F");
			printf("CPF não cadastrado ou senha inválida!\n\n");
			system("pause");
			fflush(stdin);
			break;
	
		}
		fflush(stdin);
	break;


	
	/*###########CASE3################*/
	
	case 3:
		fflush(stdin);
		system("cls");
		system ("color 6f");
		printf("000                  0\n");
		printf("00000               00\n");
		printf("000000             000\n");
		printf("000000            0000\n");
		printf("0000000        0000000\n");
		printf("0000000     00000000\n");
		printf("0000000    00000000\n");
		printf("000000  000000000\n");
		printf("00000 000000\n");
		printf("0000000000                                   DOUBLE RABBIT\n");
		printf("0000000000000                              _________________\n");
		printf("00000000000000000                       \n");
		printf("000000000000   000                        RELAÇAO DE CLIENTES\n");
		printf("0000000000000  00000\n");
		printf("00000000000000000000\n");
		printf("0000000000000000000\n");
		printf("00000000000000000\n");
		printf("   0000000000\n");
		printf(" 0000000000000\n\n");
		Sleep(1000);
		system ("color 5f");
		printf("Acessando serviço online...\n");
		Sleep(1000);
		system ("color 2f");
		printf("Baixando dados do servidor Double Rabbit...\n");
		Sleep(1000);
		printf("Montando relatório...\n");
		system ("color 8f");
		Sleep(1000);
		printf("\n\n");
		system ("color f1");
		printf("Tudo pronto!\n\n");
		for (i=0 ; i<n ; i++){
			if (c[i].at != 0){
				printf("______________________________________________\n");
				printf("nome: %s\n", p[i].nome);
				printf("idade: %d\n", p[i].idade);
				printf("RG: %d\n", p[i].rg);
				printf("CPF: %s\n", p[i].cpf_show);
				printf("Endereço: %s\n", p[i].endereco);
				printf("Bairro: %s\n", p[i].bairro);	
				printf("Cidade: %s\n", p[i].cidade);	
				printf("Telefone: %s\n", p[i].fone);
				printf("Celular: %s\n", p[i].celular);
				printf("E-mail: %s\n", p[i].email);
				printf("Tipo do cartão: %s\n\n", p[i].tipo);
				
			}
		}
		system("pause");
	break;
	
	/*################Case 4####################*/
	
	case 4:
	
		fflush(stdin);
		system("cls");
		system ("color cf");
		printf("000                  0\n");
		printf("00000               00\n");
		printf("000000             000\n");
		printf("000000            0000\n");
		printf("0000000        0000000\n");
		printf("0000000     00000000\n");
		printf("0000000    00000000\n");
		printf("000000  000000000\n");
		printf("00000 000000\n");
		printf("0000000000                                   DOUBLE RABBIT\n");
		printf("0000000000000                              _________________\n");
		printf("00000000000000000                       \n");
		printf("000000000000   000                       VAMOS EXCLUIR UMA CONTA\n");
		printf("0000000000000  00000\n");
		printf("00000000000000000000\n");
		printf("0000000000000000000\n");
		printf("00000000000000000\n");
		printf("   0000000000\n");
		printf(" 0000000000000\n\n\n");
		Sleep(1000);
		printf("Digite o CPF de um cliente: ");
		scanf("%d", &cpf);
		printf("Digite a senha do cliente (4 DÍGITOS): ");
		scanf("%d", &s2);
		fflush(stdin);
	
		b = 0;
		i=0;
		for (i=0 ; i<100 ; i++){
	
			if ((cpf == p[i].cpf) && (s[i].s1 == s2)){
		
				printf("\n\n CLIENTE ENCONTRADO");
				printf("\n\n\n\n");
				printf("Nome: %s\n", p[i].nome);
				printf("Idade: %d\n", p[i].idade);
				printf("RG: %d\n", p[i].rg);
				printf("CPF: %s\n", p[i].cpf_show);
				printf("Endereço: %s\n", p[i].endereco);
				printf("Bairro: %s\n", p[i].bairro);	
				printf("Cidade: %s\n", p[i].cidade);	
				printf("Telefone: %s\n", p[i].fone);
				printf("Celular: %s\n", p[i].celular);
				printf("E-mail: %s\n\n", p[i].email);
				printf("Tipo do cartão: %s\n\n", p[i].tipo);
				
						
				printf("\n\n");
				fflush(stdin);
				
				printf("Voce realmente dejesa excluir esta conta?\n");
				printf("Insira 1 para sim ou outro numero para não.\n");
				scanf("%d", &op);
					if (op == 1){
						c[i].at = 0;
						system("color 4f");
						printf("\nCONTA EXCLUIDA COM SUCESSO!!! \n\n");
						system("pause");
					}
				
				b = 1;
				break;
			}
		}
		if (b == 0){
			system("color 4F");
			printf("CPF não cadastrado ou senha inválida!\n\n");
			system("pause");
			fflush(stdin);
			break;
	
		}
		fflush(stdin);
	break;

	/*#################CASE 5###############*/
	
	case 5:
		fflush(stdin);
		system("cls");
		system ("color 9f");
		printf("000                  0\n");
		printf("00000               00\n");
		printf("000000             000\n");
		printf("000000            0000\n");
		printf("0000000        0000000\n");
		printf("0000000     00000000\n");
		printf("0000000    00000000\n");
		printf("000000  000000000\n");
		printf("00000 000000\n");
		printf("0000000000                                   DOUBLE RABBIT\n");
		printf("0000000000000                              _________________\n");
		printf("00000000000000000                       \n");
		printf("000000000000   000                       VAMOS CONSULTAR O SALDO\n");
		printf("0000000000000  00000\n");
		printf("00000000000000000000\n");
		printf("0000000000000000000\n");
		printf("00000000000000000\n");
		printf("   0000000000\n");
		printf(" 0000000000000\n\n\n");
		Sleep(1000);
		printf("Digite o CPF de um cliente: ");
		scanf("%d", &cpf);
		printf("Digite a senha do cliente (4 DÍGITOS): ");
		scanf("%d", &s2);
		fflush(stdin);

		b = 0;
		i=0;
		for (i=0 ; i<100 ; i++){
	
			if ((cpf == p[i].cpf) && (s[i].s1 == s2)){
				if (c[i].at != 0){
					printf("\n\nNome: %s\n", p[i].nome);
					printf("RG: %d\n\n", p[i].rg);
					printf("SALDO ATUAL: R$%.2f\n\n", val[i]);
				
					printf("O seu cartão é o Double Rabbit %s. \nVeja abaixo o limite de crédito para cada um:\n\n", p[i].tipo);
					printf("PLATINUM: R$3.200,00\n");
					printf("GOLD: R$2.400,00\n");
					printf("SILVER: R$1.200,00\n\n");
					system("pause");
					b = b+1;
					
					
					}
				}
			
		}
		if (b == 0){
			system("color 4F");
			printf("CPF não cadastrado ou senha inválida!\n\n");
			system("pause");
			fflush(stdin);
			break;
		}
	break;
	
	
	/*############ Case 6 ############# */
	
	case 6:
		
		fflush(stdin);
		system("cls");
		system ("color 3f");
		printf("000                  0\n");
		printf("00000               00\n");
		printf("000000             000\n");
		printf("000000            0000\n");
		printf("0000000        0000000\n");
		printf("0000000     00000000\n");
		printf("0000000    00000000\n");
		printf("000000  000000000\n");
		printf("00000 000000\n");
		printf("0000000000                                   DOUBLE RABBIT\n");
		printf("0000000000000                              _________________\n");
		printf("00000000000000000                       \n");
		printf("000000000000   000                        VAMOS PAGAR UM BOLETO\n");
		printf("0000000000000  00000\n");
		printf("00000000000000000000\n");
		printf("0000000000000000000\n");
		printf("00000000000000000\n");
		printf("   0000000000\n");
		printf(" 0000000000000\n\n\n");
		Sleep(1000);
		printf("Digite o CPF de um cliente: ");
		scanf("%d", &cpf);
		printf("Digite a senha do cliente (4 DÍGITOS): ");
		scanf("%d", &s2);
		fflush(stdin);

		b = 0;
		i=0;
		for (i=0 ; i<100 ; i++){
	
			if ((cpf == p[i].cpf) && (s[i].s1 == s2)){
				if (c[i].at != 0){
					b = 1;
					printf("\n\nNome: %s\n", p[i].nome);
					printf("RG: %d\n\n", p[i].rg);
					printf("SALDO ATUAL: R$%.2f\n\n", val[i] );
					printf("Informe o código de série do código de barras \nSem esaços ou caracteres: ");
					scanf("%d", &cod);
					printf("Informe o valor do boleto: R$");
					scanf("%f", &boleto);
						if (val[i] >= boleto){
							system("color 2f");
							printf("Pagamento relizado com sucesso!");
							val[i] = val[i] - boleto;
							system("pause");
						
						}
						else if (val[i] < boleto){
							system("color 4f");
							printf("\n\nPAGAMENTO NAO REALIZADO POR UM DOS SEGUINTES MOTIVOS: \n");
							printf("    	*O seu saldo é inferior ao valor do boleto\n");
							printf("    	*O sistema está operando com erro\n");
							printf("    	*Voce deve entrar novamento com o CPF e senha\n\n");
							system("pause");
					}
				}
			}
			if (b == 0){
			system("color 4F");
			printf("CPF não cadastrado ou senha inválida!\n\n");
			system("pause");
			fflush(stdin);
			break;
			}
	}

	break;
	
	/*############ case 7 ######### */
	
	case 7:
		
		fflush(stdin);
		system("cls");
		system ("color 5f");
		printf("000                  0\n");
		printf("00000               00\n");
		printf("000000             000\n");
		printf("000000            0000\n");
		printf("0000000        0000000\n");
		printf("0000000     00000000\n");
		printf("0000000    00000000\n");
		printf("000000  000000000\n");
		printf("00000 000000\n");
		printf("0000000000                                   DOUBLE RABBIT\n");
		printf("0000000000000                               _________________\n");
		printf("00000000000000000                       \n");
		printf("000000000000   000                        VAMOS EDITAR UMA CONTA\n");
		printf("0000000000000  00000\n");
		printf("00000000000000000000\n");
		printf("0000000000000000000\n");
		printf("00000000000000000\n");
		printf("   0000000000\n");
		printf(" 0000000000000\n\n\n");
		Sleep(1000);
		printf("Digite o CPF de um cliente: ");
		scanf("%d", &cpf);
		printf("Digite a senha do cliente (4 DÍGITOS): ");
		scanf("%d", &s2);
		fflush(stdin);

		b = 0;
		i=0;
		for (i=0 ; i<100 ; i++){
	
			if ((cpf == p[i].cpf) && (s[i].s1 == s2)){
				if (c[i].at != 0){
					b = 1;
					printf("\n\nNome: %s\n", p[i].nome);
					printf("RG: %d\n\n", p[i].rg);
					printf("\n\n O que voce deseja editar?\n\n");
					
					printf("	1) Nome \n");
					printf("	2) Idade \n");
					printf("	3) RG \n");
					printf("	4) CPF \n ");
					printf("	5) Endereço \n");
					printf("	6) Bairro \n");
					printf("	7) Cidade \n");
					printf("	8) Telefone \n");
					printf("	9) Celular \n");
					printf("	10) Email \n");
					printf("	11) Tipo de cartão \n");
					printf("	12) Senha \n\n");
					scanf("%d", &op);
					
						if (op == 1){
							fflush(stdin);
							printf("Insira novo nome: ");
							gets(p[i].nome);
						}
						else if (op == 2){
							fflush(stdin);
							printf("Insira nova idade: ");
							scanf("%d", &p[i].idade);
						}
						else if (op == 3){
							fflush(stdin);
							printf("Insira novo RG: ");
							scanf("%d", &p[i].rg);
						}
						else if (op == 4){
							fflush(stdin);
							printf("Insira novo CPF: ");
							scanf("%d", &p[i].cpf);
							fflush(stdin);
							printf("O domínio do seu CPF é vital!");
							printf("Confirme-o para a sua segurança: ");
							gets(p[i].cpf_show);
						}
						else if (op == 5){
							fflush(stdin);
							printf("Insira novo Endereço: ");
							gets(p[i].endereco);
						}
						else if (op == 6){
							fflush(stdin);
							printf("Insira novo Bairro: ");
							gets(p[i].bairro);
						}
						else if (op == 7){
							fflush(stdin);
							printf("Insira novo Cidade: ");
							gets(p[i].cidade);
						}
						else if (op == 8){
							fflush(stdin);
							printf("Insira novo Telefone: (Apenas numeros, sem espaços): ");
							scanf("%d", &p[i].fone);
						}
						else if (op == 9){
							fflush(stdin);
							printf("Insira novo Celular (apens numeros, sem espaços): ");
							scanf("%d", &p[i].celular);
						}
						else if (op == 10){
							fflush(stdin);
							printf("Insira novo E-mail: ");
							gets(p[i].email);
						}
						else if (op == 11){
							fflush(stdin);
							printf("Insira novo Tipo do cartão: ");
							gets(p[i].tipo);
						}
						else if (op == 12){
							fflush(stdin);
							printf("Insira nova senha: ");
							scanf("%d", &s[i].s1);
						}
						
						
						printf("\n\n	*Por motivos de segurança, caso queira editar outra\n");
						printf("    	informação, voce deverá retornar ao menu principal e refazer o login\n\n");
						printf("Pressione enter para retornar ao menu principal... ");
						getchar();
					}
				}
		}
	break;
	
	/*######## case 8 #######*/
	
	case 8:
		system("cls");
		system ("color 5f");
		printf("000                  0\n");
		printf("00000               00\n");
		printf("000000             000\n");
		printf("000000            0000\n");
		printf("0000000        0000000\n");
		printf("0000000     00000000\n");
		printf("0000000    00000000\n");
		printf("000000  000000000\n");
		printf("00000 000000\n");
		printf("0000000000                                   DOUBLE RABBIT\n");
		printf("0000000000000                               _________________\n");
		printf("00000000000000000                       \n");
		printf("000000000000   000               VAMOS SABER MAIS SOBRE O DOUBLE RABBIT\n");
		printf("0000000000000  00000\n");
		printf("00000000000000000000\n");
		printf("0000000000000000000\n");
		printf("00000000000000000\n");
		printf("   0000000000\n");
		printf(" 0000000000000\n\n\n");
		Sleep(2000);
		
		printf("	O Double Rabbit é uma nova forma de usar seu cartão de crédito e débito\n");
		printf("	de uma maneira mais rápida, prática e inteligente!\n\n");
		printf("	Nossa grande facilidade de uso proporciona ao usuário uma\n");
		printf("	maior satisfação e comodidade, desprezando a necessidade\n");
		printf("	de ir a bancos e caixas eletronicos para realizar suas\n");
		printf("	tarefas. Faça tudo que precisar diretamente da tela do seu\n");
		printf("	computador ou melhor, do seu celular!\n\n\n");
		printf("Pressione enter e descubra ainda mais sobre o Double Rabbit\n\n");
		
		system("pause");
		
		system("cls");
		
		printf("000                  0\n");
		printf("00000               00\n");
		printf("000000             000\n");
		printf("000000            0000\n");
		printf("0000000        0000000\n");
		printf("0000000     00000000\n");
		printf("0000000    00000000\n");
		printf("000000  000000000\n");
		printf("00000 000000\n");
		printf("0000000000                                   DOUBLE RABBIT\n");
		printf("0000000000000                               _________________\n");
		printf("00000000000000000                       \n");
		printf("000000000000   000               VAMOS SABER MAIS SOBRE O DOUBLE RABBIT\n");
		printf("0000000000000  00000\n");
		printf("00000000000000000000\n");
		printf("0000000000000000000\n");
		printf("00000000000000000\n");
		printf("   0000000000\n");
		printf(" 0000000000000\n\n\n");
		
		printf("Cartão Platinum: Feito para aqueles que não querem\n");
		printf("se preocupar com nada durante suas viagems e dia a dia...\n");
		printf("Com uma serie de recursos promocionais e alta gama\n");
		printf("de benefícios, é o nosso cartão mais usado.\n\n");
		Sleep(200);
		
		printf("\n\nCartão Gold: Feito para quem está sempre afim\n");
		printf("de curtir a vida sem se preocupar com imprevistos,\n");
		printf("porém, que nunca deixam de fora a caltela com os\n");
		printf("gastos de fim de semana.");
		Sleep(200);
		
		printf("\n\n\n\nCartão Silver: Feito para clientes que estão sempre\n");
		printf("a par de sua situaçao financeira, pois sabem que\n");
		printf("no final do mes a situação pode apertar e participam\n");
		printf("do plano Double Rabbit pois sabem que nossos serviços\n");
		printf("iram ajudá-lo a seguir seus planos\n\n\n\n\n\n");
		system("pause");
		
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		system("cls");
		
	printf("                                                  0                    00 \n");
	printf("                                                  00                  000 \n");
	printf("                                                  000                0000 \n");
	printf("                                                  0000             00000  \n");
	printf("                                                   0000000        000000  \n");
	printf("                                                   00000000       00000   \n");
	printf("                                                    00000000    000000    \n");
	printf("                                                     000000000  00000    \n");
	printf("                                                        00000000000       \n");
	printf("                                                          00000000        \n");
	printf("                                                       0000000000000      \n");
	printf("                                                      00000000000000000    \n");
	printf("                                                    000   000000000000    \n");
	printf("                                                    0000  00000000000000   \n");
	printf("                                                    00000000000000000000 \n");
	printf("           Para mais informações, acesse:           0000000000000000000     \n");
	printf("                                                     00000000000000000      \n");
	printf("                                                          000000000         \n");
	printf("                                                        0000000000000    \n\n\n");	
	printf("                                   W W W . D O U B L E R A B B I T . C O M . BR\n\n");
	
		printf("	                    e descubra um novo mundo.\n\n");
		system("pause");
		}
	
}while(a != 0);

	system("cls");
	
	system ("color f4");

	printf("     000                  0 0                    000 \n");
	printf("     00000               00 00                 00000 \n");
	printf("     000000             000 000               000000 \n");
	printf("     000000            0000 0000             000000  \n");
	printf("     0000000        0000000 00000000        0000000  \n");
	printf("      0000000     00000000   000000000     0000000   \n");
	printf("      0000000    00000000      00000000   0000000    \n");
	printf("        000000  00000000         000000000  00000    \n");
	printf("         00000 000000              00000000000       \n");
	printf("          00000000                   00000000        \n");
	printf("         0000000000000            0000000000000      \n");
	printf("        00000000000000000       00000000000000000    \n");
	printf("        000000000000   000     000   000000000000    \n");
	printf("       0000000000000  00000   0000  00000000000000     Obrigado por usar o \n");
	printf("        00000000000000000000  00000000000000000000     DOUBLE RABBIT 1.0\n");
	printf("         0000000000000000000  0000000000000000000     \n");
	printf("          00000000000000000    00000000000000000      \n");
	printf("             0000000000            0000000000         \n");
	printf("           0000000000000          0000000000000       \n\n\n");	
	printf("Encerrando em 5 segundos...");
	Sleep(5000);
	exit(0);
	
	
}

