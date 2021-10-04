#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<iostream>
#include<windows.h>

#define pk 6
#define k 100

struct play1{
	char jog[k];
	int pont;
};
typedef struct play1 Tplay1;

struct play2{
	char jog[k];
	int pont;
};
typedef struct play2 Tplay2;

Tplay1 p;
Tplay2 p2;
int cc=0;
int vet[k];
char lan='j';
int op=0;
int tt=0, qq=0, ff=0, ss=0, s=0, gg=0;

void dado();
void dado2();
void dado3();
void dado4();
void reg();
void cad();
void cad2();
void game();
void game2();
void top();
void op1(int po);
void op2(int po);
void pontt();
void pontt2();

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	srand(time(NULL));
	
	char esc='Z';
	int z=2, nj=0;
	
	p.pont=0;
	
	do{
		
	dado();
	
	printf("\n\n                                   Insira o Número de Jogadores: ");
	scanf("%d", &nj);
	
	if((nj!=1)&&(nj!=2)){
		printf("\n\n                        Apenas um ou dois jogadores são permitidos por jogo!!");
		Sleep(2000);
		system("cls");
	}
	
	}while((nj!=1)&&(nj!=2));
	
	system("cls");
	
	do{
	
	printf("\n              -------------------------------- MENU --------------------------------");
	printf("\n              |                                                                    |");
	printf("\n              |  !!USE LETRAS MAIÚSCULAS!!                                         |");
	printf("\n              |                                                                    |");
	printf("\n              |  |C| Cadastrar Jogador                                             |");
	printf("\n              |  |R| Ranking                                                       |");
	printf("\n              |  |H| Regras                                                        |");
	printf("\n              |  |J| Jogar                                                         |");
	printf("\n              |  |S| Sair                                                          |");
	printf("\n              |                                                                    |");
	printf("\n              ----------------------------------------------------------------------\n\n");
	
	printf("\n\n                                   Escolha uma das opções: ");
	scanf("%c", &esc);
	
	if(esc=='S'){
		system("cls");
		dado2();
	}
	
	switch(esc){
		
		case ('S'):{
			break;
		}
		
		case ('C'):{
			
			system("cls");
			
			if(nj==1){
				cad();
			}
			
			if(nj==2){
				cad2();
			}
			
			printf("\n\n\n                           insira '0' para voltar ao menu principal: ");
			scanf("%d", &z);
			if(z=='0'){
				system("cls");
			}
			
			break;
		}
		
		case ('R'):{
			break;
		}
		
		case ('H'):{
			
			system("cls");
			
			reg();
			
			printf("\n\n\n                           insira '0' para voltar ao menu principal: ");
			scanf("%d", &z);
			if(z=='0'){
				system("cls");
			}
			
			break;
		}
		
		case ('J'):{
			
			system("cls");
			
			if(nj==1){
			if(cc!=0){
				game();
				
				dado3();	
				
			}
			else{
			printf("\n\n                                Primeiramente faça seu cadastro!!");
			}
			}
			
			if(nj==2){
			if(cc!=0){
				
				game2();
				
				dado4();
				
				if(p.pont>p2.pont){
					printf("\n\n                                      %s CAMPEÃO!!", p.jog);
				}
				else{
					printf("\n\n                                      %s CAMPEÃO!!",  p2.jog);
				}
				
			}
			else{
			printf("\n\n                                Primeiramente faça seu cadastro!!");
			}
			}	
			
			printf("\n\n\n                           insira '0' para voltar ao menu principal: ");
			scanf("%d", &z);
			if(z=='0'){
				system("cls");
			}
			
			break;
		}
	
		default:{
			
			system("cls");
			
			break;
		}
		
	}
	
	}while(esc!='S');
	
	
}

void dado(){
	
	printf("                                       *************");
	printf("\n                                       * *        * *");
	printf("\n                                       *   *      *   *");
	printf("\n                                       *     *    *     *");
	printf("\n                                       *    LET'S PLAY BOZÓ");
	printf("\n                                       ************      *");
	printf("\n                                        *    *      *    *");
	printf("\n                                          *  *         * *");
	printf("\n                                             *************");
}

void dado2(){
	
	printf("                                       *************");
	printf("\n                                       * *        * *");
	printf("\n                                       *   *      *   *");
	printf("\n                                       *     *    *     *");
	printf("\n                                       *    ATÉ UM OUTRO DIA");
	printf("\n                                       ************      *");
	printf("\n                                        *    *      *    *");
	printf("\n                                          *  *         * *");
	printf("\n                                             *************");
}

void dado3(){
	printf("\n\n                                         GAME OVER\n");
	printf("                                       *************");
	printf("\n                                       * *        * *");
	printf("\n                                       *   *      *   *");
	printf("\n                                       *     *    *     *");
	printf("\n                                       *    PONTUAÇÃO FINAL");
	printf("\n                                       ************      *");
	printf("\n                                        *    *   %d *    *", p.pont);
	printf("\n                                          *  *         * *");
	printf("\n                                             *************");
	
}

void dado4(){
	printf("\n\n                                             GAME OVER\n");
	printf("                     *************                          *************");
	printf("\n                     * *        * *                         * *        * *");
	printf("\n                     *   *      *   *                       *   *      *   *");
	printf("\n                     *     *    *     *                     *     *    *     *");
	printf("\n                     *        PLAYER 1                      *        PLAYER 2");
	printf("\n                     ************      *                    ************      *");
	printf("\n                      *    *   %d *    *                     *    *   %d *   *", p.pont, p2.pont);
	printf("\n                        *  *         * *                       *  *         * *");
	printf("\n                           *************                          *************");
	
}

void reg(){
	
	printf("\n              -------------------------------- REGRAS --------------------------------");
	printf("\n              |                                                                      |");
	printf("\n              |  General é um jogo de dados para dois ou mais jogadores,             |");
	printf("\n              |  conhecido como Yahtzee em inglês, francês, italiano e holandês,     |");
	printf("\n              |  Yatzy nas línguas nórdicas, Kniffel em alemão, Jamb em croata,      |");
	printf("\n              |  Kocakapóker em húngaro e Generala em espanhol. No Brasil, também    |");
	printf("\n              |  é conhecido como Bozó, ou Yam, em função da popularidade de         |");
	printf("\n              |  uma versão comercializada pela Grow nos anos 1970.                  |");
	printf("\n              |                                                                      |");
	printf("\n              |  REGRAS BÁSICAS:                                                     |");
	printf("\n              |  * 1 ou 2 jogadores                                                  |");
	printf("\n              |  * 5 dados                                                           |");
	printf("\n              |  * 7 rodadas para cada jogador                                       |");
	printf("\n              |  * Até 3 arremessos de dados por rodada                              |");
	printf("\n              |                                                                      |");
	printf("\n              |  COMO JOGAR:                                                         |");
	printf("\n              |  O jogo consiste de 7 rodadas onde cada jogador, em sua vez,         |");
	printf("\n              |  tem três chances de arremessar os dados. Na primeira, joga os       |");
	printf("\n              |  cinco dados; na segunda, conforme o resultado obtido, pode voltar a |");
	printf("\n              |  arremessar de um a cinco dados, mantendo os demais sobre a mesa,    |");
	printf("\n              |  ou aceitar o resultado, dando a jogada por encerrada; na terceira,  |");
	printf("\n              |  da mesma forma, pode arremessar de um a cinco dados (mesmo os       |");
	printf("\n              |  que ele tenha mantido sobre a mesa entre o primeiro e o segundo     |");
	printf("\n              |  arremesso) ou aceitar o resultado.                                  |");
	printf("\n              |  O resultado obtido ao final da jogada deve ser classificado,        |");
	printf("\n              |  pelo próprio jogador, como uma das 13 possíveis combinações.        |");
	printf("\n              |  De acordo com os dados obtidos na jogada, as combinações            |");
	printf("\n              |  fornecem diferentes pontuações.                                     |");
	printf("\n              |                                                                      |");
	printf("\n              |  TABELA DE PONTUAÇÃO:                                                |");
	printf("\n              |  ------------------------------------------------------------------  |");
	printf("\n              |  | |1|    Depende da soma                                         |  |");
	printf("\n              |  | |2|    Depende da soma                                         |  |");
	printf("\n              |  | |3|    Depende da soma                                         |  |");
	printf("\n              |  | |4|    Depende da soma                                         |  |");
	printf("\n              |  | |5|    Depende da soma                                         |  |");
	printf("\n              |  | |6|    Depende da soma                                         |  |");
	printf("\n              |  | |T|    15 Pontos                                               |  |");
	printf("\n              |  | |Q|    20 Pontos                                               |  |");
	printf("\n              |  | |F|    25 Pontos                                               |  |");
	printf("\n              |  | |S+|   30 Pontos                                               |  |");
	printf("\n              |  | |S-|   40 Pontos                                               |  |");
	printf("\n              |  | |G|    50 Pontos                                               |  |");
	printf("\n              |  | |X|    Depende da soma                                         |  |");
	printf("\n              |  ------------------------------------------------------------------  |");
	printf("\n              |                                                                      |");
	printf("\n              ------------------------------------------------------------------------\n\n");
}

void cad(){
	
	printf("\n                                    Insira seu Nome: ");
	scanf("%s", &p.jog);
	
	printf("\n\n                                     Seja Bem Vindo %s", p.jog);
	
	cc++;
	
}

void cad2(){
	
	printf("\n                                Player 1: Insira seu Nome: ");
	scanf("%s", &p.jog);
	
	printf("\n                                Player 2: Insira seu Nome: ");
	scanf("%s", &p2.jog);
	
	printf("\n\n                                     Seja Bem Vindo %s", p.jog);
	
	printf("\n\n                                     Seja Bem Vindo %s", p2.jog);
	
	cc++;
	
}

void game(){
	
	int i, j;
	char e='J';
	
	p.pont=0;
	
	for(j=0; j<(pk/2); j++){
		
	do{
		printf("\n\n          -------------------------------- %dª Rodada -------------------------------\n\n", j+1);
		
		printf("                                         Pontuação: %d", p.pont);
		
		printf("\n");
		
		scanf("%c", &e);
		e=getchar();
	}while((e!='\n')&&(e!=EOF));
			
	printf("\n\n          -------------------------------- 1ª Jogada -------------------------------\n");	
	printf("\n\n                            Precione [L] para Lançar seus 5 dados: ");
	scanf("%c", &lan);
	fflush(stdin);
	
	for(i=1; i<6; i++){
		vet[i]=rand()%6+1;
	}
	
	printf("\n");
	
	for(i=1; i<6; i++){
		printf("          Dado %d=[%d]\n", i, vet[i]);
	}	
	
	top();	
		
	fflush(stdin);	
	
	if(op==3){
		
		fflush(stdin);
		
		printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);	
		
	}
	
	if(op==1){
		
		fflush(stdin);
		
		printf("\n\n          -------------------------------- 2ª Jogada -------------------------------\n");
		
		op1(op);
		
		top();
		
			if(op==3){
				
				fflush(stdin);
		
				printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);
				
				op=0;	
		
			}
	
			if(op==1){
				
				fflush(stdin);
				
				printf("\n\n          -------------------------------- 3ª Jogada -------------------------------\n");
		
				op1(op);
				
				printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);
				
				op=0;
					
			}
	
			if(op==2){
				
				fflush(stdin);
				
				printf("\n\n          -------------------------------- 3ª Jogada -------------------------------\n");
		
				op2(op);
				
				printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);
			
				op=0;
			}
		
	}
	
	if(op==2){
		
		fflush(stdin);
		
		printf("\n\n          -------------------------------- 2ª Jogada -------------------------------\n");
		
		op2(op);
		
		top();
		
		if(op==3){
			
				fflush(stdin);
		
				printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);	
				
				op=0;
		
			}
	
			if(op==1){
				
				fflush(stdin);
				
				printf("\n\n          -------------------------------- 3ª Jogada -------------------------------\n");
		
				op1(op);
				
				printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);
				
				op=0;
				
			}
	
			if(op==2){
				
				fflush(stdin);
				
				printf("\n\n          -------------------------------- 3ª Jogada -------------------------------\n");
		
				op2(op);
				
				printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);
				
				op=0;
		
			}
		
	}
	
	fflush(stdin);
	
	pontt();
	
	system("cls");
	
	}
	
	
}

void top(){
	
	fflush(stdin);
	
	printf("\n");
	
	printf("\n          Você deseja:");
	printf("\n          ----------------------------------------");
	printf("\n          [1] Jogar os 5 Dados novamente");
	printf("\n          [2] Escolher Dados");
	printf("\n          [3] Parar a Rodada");
	printf("\n          ----------------------------------------");
	printf("\n          Insira uma Opção: ");
	scanf("%d", &op);
	
}

void op1(int po){
	
	int i;
	
	fflush(stdin);
		
		printf("\n\n                            Precione [L] para Lançar seus 5 dados: ");
		scanf("%c", &lan);
		
		for(i=1; i<6; i++){
			vet[i]=rand()%6+1;
		}
	
		printf("\n\n");
	
		for(i=1; i<6; i++){
			printf("          Dado %d=[%d]\n", i, vet[i]);
		}
	
}

void op2(int po){
	
	int i, md, dad[k], con=0, j;
	
	fflush(stdin);
	
	printf("\n          Quantos Dados você deseja manter? ");
	scanf("%d", &md);
	
	printf("\n          Indique quais Dados você deseja manter:\n");
	for(i=1; i<=md; i++){
		printf("          ");
		scanf("%d", &dad[i]);
	}
	
	for(i=1; i<6; i++){
		con=0;
		for(j=1; j<=md; j++){
		if(i==dad[j]){
			con=1;
		}
		}
		if(con==1){
			vet[i]=vet[i];
		}
		else{
			vet[i]=rand()%6+1;
		}
	}
	
	printf("\n\n                            Precione [L] para Lançar seus %d dados: ", 5-md);
	scanf("%d", &md);
	
	printf("\n\n");
	
	for(i=1; i<6; i++){
		printf("          Dado %d=[%d]\n", i, vet[i]);
	}
	
}

void game2(){
	
	int i, j, ctd;
	char e='J';
	
	p.pont=0;
	
	for(j=0; j<pk; j++){
		
		if(j%2==0){
			ctd=0;
		}
		else{
			ctd=1;
		}
		
	if(ctd==0){
		
	do{
		
		printf("\n\n          --------------------------------- Player 1 -------------------------------\n\n", j+1);
		
		printf("\n\n          -------------------------------- %dª Rodada -------------------------------\n\n", j+1);
		
		printf("                                      Pontuação %s: %d", p.jog, p.pont);
		printf("\n                                    Pontuação %s: %d", p2.jog, p2.pont);
		
		printf("\n");
		
		scanf("%c", &e);
		e=getchar();
	}while((e!='\n')&&(e!=EOF));
			
	printf("\n\n          -------------------------------- 1ª Jogada -------------------------------\n");	
	printf("\n\n                            Precione [L] para Lançar seus 5 dados: ");
	scanf("%c", &lan);
	fflush(stdin);
	
	for(i=1; i<6; i++){
		vet[i]=rand()%6+1;
	}
	
	printf("\n");
	
	for(i=1; i<6; i++){
		printf("          Dado %d=[%d]\n", i, vet[i]);
	}	
	
	top();	
		
	fflush(stdin);	
	
	if(op==3){
		
		fflush(stdin);
		
		printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);	
		
	}
	
	if(op==1){
		
		fflush(stdin);
		
		printf("\n\n          -------------------------------- 2ª Jogada -------------------------------\n");
		
		op1(op);
		
		top();
		
			if(op==3){
				
				fflush(stdin);
		
				printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);
				
				op=0;	
		
			}
	
			if(op==1){
				
				fflush(stdin);
				
				printf("\n\n          -------------------------------- 3ª Jogada -------------------------------\n");
		
				op1(op);
				
				printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);
				
				op=0;
					
			}
	
			if(op==2){
				
				fflush(stdin);
				
				printf("\n\n          -------------------------------- 3ª Jogada -------------------------------\n");
		
				op2(op);
				
				printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);
			
				op=0;
			}
		
	}
	
	if(op==2){
		
		fflush(stdin);
		
		printf("\n\n          -------------------------------- 2ª Jogada -------------------------------\n");
		
		op2(op);
		
		top();
		
		if(op==3){
			
				fflush(stdin);
		
				printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);	
				
				op=0;
		
			}
	
			if(op==1){
				
				fflush(stdin);
				
				printf("\n\n          -------------------------------- 3ª Jogada -------------------------------\n");
		
				op1(op);
				
				printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);
				
				op=0;
				
			}
	
			if(op==2){
				
				fflush(stdin);
				
				printf("\n\n          -------------------------------- 3ª Jogada -------------------------------\n");
		
				op2(op);
				
				printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);
				
				op=0;
		
			}
		
	}
	
	fflush(stdin);
	
	pontt();
	
	system("cls");
	
	}
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	if(ctd==1){
		
	do{
		
		printf("\n\n          --------------------------------- Player 2 -------------------------------\n\n", j+1);
		
		printf("\n\n          -------------------------------- %dª Rodada -------------------------------\n\n", j+1);	
		
		printf("                                         Pontuação: %d", p.pont);
		printf("\n                                       Pontuação: %d", p2.pont);
		
		printf("\n");
		
		scanf("%c", &e);
		e=getchar();
	}while((e!='\n')&&(e!=EOF));
			
	printf("\n\n          -------------------------------- 1ª Jogada -------------------------------\n");	
	printf("\n\n                            Precione [L] para Lançar seus 5 dados: ");
	scanf("%c", &lan);
	fflush(stdin);
	
	for(i=1; i<6; i++){
		vet[i]=rand()%6+1;
	}
	
	printf("\n");
	
	for(i=1; i<6; i++){
		printf("          Dado %d=[%d]\n", i, vet[i]);
	}	
	
	top();	
		
	fflush(stdin);	
	
	if(op==3){
		
		fflush(stdin);
		
		printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);	
		
	}
	
	if(op==1){
		
		fflush(stdin);
		
		printf("\n\n          -------------------------------- 2ª Jogada -------------------------------\n");
		
		op1(op);
		
		top();
		
			if(op==3){
				
				fflush(stdin);
		
				printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);
				
				op=0;	
		
			}
	
			if(op==1){
				
				fflush(stdin);
				
				printf("\n\n          -------------------------------- 3ª Jogada -------------------------------\n");
		
				op1(op);
				
				printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);
				
				op=0;
					
			}
	
			if(op==2){
				
				fflush(stdin);
				
				printf("\n\n          -------------------------------- 3ª Jogada -------------------------------\n");
		
				op2(op);
				
				printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);
			
				op=0;
			}
		
	}
	
	if(op==2){
		
		fflush(stdin);
		
		printf("\n\n          -------------------------------- 2ª Jogada -------------------------------\n");
		
		op2(op);
		
		top();
		
		if(op==3){
			
				fflush(stdin);
		
				printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);	
				
				op=0;
		
			}
	
			if(op==1){
				
				fflush(stdin);
				
				printf("\n\n          -------------------------------- 3ª Jogada -------------------------------\n");
		
				op1(op);
				
				printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);
				
				op=0;
				
			}
	
			if(op==2){
				
				fflush(stdin);
				
				printf("\n\n          -------------------------------- 3ª Jogada -------------------------------\n");
		
				op2(op);
				
				printf("\n          ---------------------------- Fim da %dª Rodada ----------------------------\n", j+1);
				
				op=0;
		
			}
		
	}
	
	fflush(stdin);
	
	pontt2();
	
	system("cls");
	
	}
	
	}
	
}

void pontt(){
	
	fflush(stdin);
	
	int pp, i, j, cont=1, cs=0, css=0, ccs=0, ccss=0, fh=1, f=1, full=0;
	int mss[k]={0,2,3,4,5,6};
	int ms[k]={0,1,2,3,4,5};
	
	printf("\n                                        Menu de Opções:\n");
	
	printf("\n            ------------------------------------------------------------------------");
	printf("\n            |  TABELA DE PONTUAÇÃO:                                                |");
	printf("\n            |  ------------------------------------------------------------------  |");
	printf("\n            |  | |1|       |1|    Depende da soma                               |  |");
	printf("\n            |  | |2|       |2|    Depende da soma                               |  |");
	printf("\n            |  | |3|       |3|    Depende da soma                               |  |");
	printf("\n            |  | |4|       |4|    Depende da soma                               |  |");
	printf("\n            |  | |5|       |5|    Depende da soma                               |  |");
	printf("\n            |  | |6|   	   |6|    Depende da soma                               |  |");
	printf("\n            |  | |7|	   |T|    15 Pontos                                     |  |");
	printf("\n            |  | |8|	   |Q|    20 Pontos                                     |  |");
	printf("\n            |  | |9|	   |F|    25 Pontos                                     |  |");
	printf("\n            |  | |10|	   |S+|   30 Pontos                                     |  |");
	printf("\n            |  | |11| 	   |S-|   40 Pontos                                     |  |");
	printf("\n            |  | |12|	   |G|    50 Pontos                                     |  |");
	printf("\n            |  | |13|	   |X|    Depende da soma                               |  |");
	printf("\n            |  ------------------------------------------------------------------  |");
	printf("\n            ------------------------------------------------------------------------\n\n");
	
	printf("                              Escolha uma das opções apresentadas: ");
	scanf("%d", &pp);
	
	tt=0, qq=0, ff=0, ss=0, s=0, gg=0;
	
	for(i=1; i<6; i++){
		cont=0, ccss=0, ccs=0, fh=0;
		for(j=1; j<6; j++){
			
			if(full!=1){
			if(vet[i]==vet[j]){
				fh++;
			}
			}
			
			if(vet[i]==vet[j]){
				f++;
			}
			
			if(mss[i]==vet[j]){
				ccss=1;
			}
			
			if(ms[i]==vet[j]){
				ccs=1;
			}
			
			if(vet[i]==vet[j]){
				cont++;
			}
		}
		
		if((fh==2)||(fh==3)){
			full=1;
		}
		
		if((f==2)||(f==3)){
			full=1;
		}
		
		if(cont==3){
			tt=1;
		}
		if(cont==4){
			tt=1;
			qq=1;
		}
		if(cont==5){
			tt=1;
			qq=1;
			gg=1;
		}
		
		if(ccss==1){
			css++;
		}
		
		if(ccs==1){
			cs++;
		}
		
		if((f==2)&&(fh==3)){
			ff=1;
		}
	
		if((f==3)&&(fh==2)){
			ff=1;
		}
		
	}
	
	if(css==5){
		ss=1;
	}
	
	if(cs==5){
		s=1;
	}
	
	if(pp==1){
		
		for(i=1; i<6; i++){
			if(vet[i]==1){
			p.pont=p.pont+1;
			}
		}
		
	}
	if(pp==2){
		
		for(i=1; i<6; i++){
			if(vet[i]==2){
			p.pont=p.pont+2;
			}
		}
		
	}
	if(pp==3){
		
		for(i=1; i<6; i++){
			if(vet[i]==3){
			p.pont=p.pont+3;
			}
		}
		
	}
	if(pp==4){
		
		for(i=1; i<6; i++){
			if(vet[i]==4){
			p.pont=p.pont+4;
			}
		}
		
	}
	if(pp==5){
		
		for(i=1; i<6; i++){
			if(vet[i]==5){
			p.pont=p.pont+5;
			}
		}
		
	}
	if(pp==6){
		
		for(i=1; i<6; i++){
			if(vet[i]==6){
			p.pont=p.pont+6;
			}
		}
		
	}
	if(pp==7){
		
		if(tt==1){
			p.pont=p.pont+15;
		}
		if(tt==0){
			p.pont=p.pont+0;
		}
		
	}
	if(pp==8){
		
		if(qq==1){
			p.pont=p.pont+20;
		}
		if(qq==0){
			p.pont=p.pont+0;
		}	
		
	}
	if(pp==9){
		
		if(ff==1){
			p.pont=p.pont+25;
		}
		if(ff==0){
			p.pont=p.pont+0;
		}	
		
	}
	if(pp==10){
		
		if(ss==1){
			p.pont=p.pont+30;
		}
		if(ss==0){
			p.pont=p.pont+0;
		}
		
	}
	if(pp==11){
		
		if(s==1){
			p.pont=p.pont+40;
		}
		if(s==0){
			p.pont=p.pont+0;
		}
		
	}
	if(pp==12){
		
		if(gg==1){
			p.pont=p.pont+50;
		}
		if(gg==0){
			p.pont=p.pont+0;
		}
		
	}
	if(pp==13){
		
		for(i=1; i<6; i++){
			p.pont=p.pont+vet[i];
		}
		
	}
	
}

void pontt2(){
	
	fflush(stdin);
	
	int pp, i, j, cont=1, cs=0, css=0, ccs=0, ccss=0, fh=1, f=1, full=0;
	int mss[k]={0,2,3,4,5,6};
	int ms[k]={0,1,2,3,4,5};
	
	printf("\n                                        Menu de Opções:\n");
	
	printf("\n            ------------------------------------------------------------------------");
	printf("\n            |  TABELA DE PONTUAÇÃO:                                                |");
	printf("\n            |  ------------------------------------------------------------------  |");
	printf("\n            |  | |1|       |1|    Depende da soma                               |  |");
	printf("\n            |  | |2|       |2|    Depende da soma                               |  |");
	printf("\n            |  | |3|       |3|    Depende da soma                               |  |");
	printf("\n            |  | |4|       |4|    Depende da soma                               |  |");
	printf("\n            |  | |5|       |5|    Depende da soma                               |  |");
	printf("\n            |  | |6|   	   |6|    Depende da soma                               |  |");
	printf("\n            |  | |7|	   |T|    15 Pontos                                     |  |");
	printf("\n            |  | |8|	   |Q|    20 Pontos                                     |  |");
	printf("\n            |  | |9|	   |F|    25 Pontos                                     |  |");
	printf("\n            |  | |10|	   |S+|   30 Pontos                                     |  |");
	printf("\n            |  | |11| 	   |S-|   40 Pontos                                     |  |");
	printf("\n            |  | |12|	   |G|    50 Pontos                                     |  |");
	printf("\n            |  | |13|	   |X|    Depende da soma                               |  |");
	printf("\n            |  ------------------------------------------------------------------  |");
	printf("\n            ------------------------------------------------------------------------\n\n");
	
	printf("                              Escolha uma das opções apresentadas: ");
	scanf("%d", &pp);
	
	tt=0, qq=0, ff=0, ss=0, s=0, gg=0;
	
	for(i=1; i<6; i++){
		cont=0, ccss=0, ccs=0, fh=0;
		for(j=1; j<6; j++){
			
			if(full!=1){
			if(vet[i]==vet[j]){
				fh++;
			}
			}
			
			if(vet[i]==vet[j]){
				f++;
			}
			
			if(mss[i]==vet[j]){
				ccss=1;
			}
			
			if(ms[i]==vet[j]){
				ccs=1;
			}
			
			if(vet[i]==vet[j]){
				cont++;
			}
		}
		
		if((fh==2)||(fh==3)){
			full=1;
		}
		
		if((f==2)||(f==3)){
			full=1;
		}
		
		if(cont==3){
			tt=1;
		}
		if(cont==4){
			tt=1;
			qq=1;
		}
		if(cont==5){
			tt=1;
			qq=1;
			gg=1;
		}
		
		if(ccss==1){
			css++;
		}
		
		if(ccs==1){
			cs++;
		}
		
		if((f==2)&&(fh==3)){
			ff=1;
		}
	
		if((f==3)&&(fh==2)){
			ff=1;
		}
		
	}
	
	if(css==5){
		ss=1;
	}
	
	if(cs==5){
		s=1;
	}
	
	if(pp==1){
		
		for(i=1; i<6; i++){
			if(vet[i]==1){
			p2.pont=p2.pont+1;
			}
		}
		
	}
	if(pp==2){
		
		for(i=1; i<6; i++){
			if(vet[i]==2){
			p2.pont=p2.pont+2;
			}
		}
		
	}
	if(pp==3){
		
		for(i=1; i<6; i++){
			if(vet[i]==3){
			p2.pont=p2.pont+3;
			}
		}
		
	}
	if(pp==4){
		
		for(i=1; i<6; i++){
			if(vet[i]==4){
			p2.pont=p2.pont+4;
			}
		}
		
	}
	if(pp==5){
		
		for(i=1; i<6; i++){
			if(vet[i]==5){
			p2.pont=p2.pont+5;
			}
		}
		
	}
	if(pp==6){
		
		for(i=1; i<6; i++){
			if(vet[i]==6){
			p2.pont=p2.pont+6;
			}
		}
		
	}
	if(pp==7){
		
		if(tt==1){
			p2.pont=p2.pont+15;
		}
		if(tt==0){
			p2.pont=p2.pont+0;
		}
		
	}
	if(pp==8){
		
		if(qq==1){
			p2.pont=p2.pont+20;
		}
		if(qq==0){
			p2.pont=p2.pont+0;
		}	
		
	}
	if(pp==9){
		
		if(ff==1){
			p2.pont=p2.pont+25;
		}
		if(ff==0){
			p2.pont=p2.pont+0;
		}	
		
	}
	if(pp==10){
		
		if(ss==1){
			p2.pont=p2.pont+30;
		}
		if(ss==0){
			p2.pont=p2.pont+0;
		}
		
	}
	if(pp==11){
		
		if(s==1){
			p2.pont=p2.pont+40;
		}
		if(s==0){
			p2.pont=p2.pont+0;
		}
		
	}
	if(pp==12){
		
		if(gg==1){
			p2.pont=p2.pont+50;
		}
		if(gg==0){
			p2.pont=p2.pont+0;
		}
		
	}
	if(pp==13){
		
		for(i=1; i<6; i++){
			p2.pont=p2.pont+vet[i];
		}
		
	}
	
}

