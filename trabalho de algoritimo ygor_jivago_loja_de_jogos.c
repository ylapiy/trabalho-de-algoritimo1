#include<stdio.h>
#include<stdlib.h>
#include<windows.h>



int main() {

//inicio do programa, apenas uma barra e o nome da loja, que logo levam o usuario para o menu de gerencia	
		
printf("+=======================================================================================================+\n");
printf("| B- -E- -M-  -V- -I- -N- -D- -O-  -A-  -M- -O- -O- -N- -L- -I- -G- -H- -T- -E- -R-  -G- -A- -M- -E- -S |\n");
printf("+=======================================================================================================+\n");
printf("\n");
barrainicial();	
printf("\n");

system("cls");	
menugerente();
	
}
 


// menu dos progrmas

void menugerente(){

//menu principal do program, serve para ir as funcionalidades do programa, o numero 1, 2 e 3 correspondem a uum menu de funcionalidades
//e o 4 é para o jogo da velha (que tipo de loja de jogos não te um jogo?) e sim para finalizar o programa
	
	
int menugerentevalor;		
	
printf("+==========================================+\n");
printf("| 1-verificar estoque |  2-funcionarios    |\n");
printf("+------------------------------------------+\n");
printf("|      3-vendas       |  4-jogo da velha   |\n");
printf("+------------------------------------------+\n");
printf("|                 5-sair                   |\n");
printf("+==========================================+\n");
scanf("%d", &menugerentevalor);

switch(menugerentevalor) {

case 1: 	
	
system("cls");
barragerenciainventario();
menuinventario ();

break;

case 2: 

system("cls");
barragerenciamentofunc ();
menufuncionarios ();

break;

case 3: 

system("cls");
barragerenciavendas ();
menuvendas();
	
break;

case 4: 

system("cls");
menujogodavelha();

break;

case 5:

system("cls");
printf("+=========================================+\n");
printf("| PROGRAMA FINALIZADO, OBRIGADO POR LOGAR |\n");
printf("+=========================================+\n");

break;

}}


void menuinventario (){
 
// Aqui é o menu de inventrario, aqui com a primeira opção se registra um jogo com as informações descristas na struct abaixo
//e na opção 2 se olha os jogos que já estão registrados no arquivo de texto "estoque"   
    
    
struct jogo {


char nome[60];
int preco;
int lancamento;
int id;
int nota;	

};

int menuinventariovalor;
	

printf("+====================================+\n");
printf("| 1-registrar jogo | 2-olhar estoque |\n");
printf("+------------------------------------+\n");
printf("|              3-sair                |\n");
printf("+====================================+\n");
scanf("%d",&menuinventariovalor);
printf("\n");


if (menuinventariovalor == 1){	

	
struct jogo novo_registro;
FILE *estoque = fopen("estoque.txt", "a");	
	
printf("Digite o nome jogo que gostaria de registrar\n\n");
scanf("%s",&novo_registro.nome);
fprintf(estoque,"nome: %s\n",novo_registro.nome);

printf("\n");

printf("Digite o preço do jogo\n");
scanf("%d",&novo_registro.preco);
fprintf(estoque,"preco: %d\n",novo_registro.preco);

printf("\n");

printf("Digite o ano de lancamento\n");
scanf("%d",&novo_registro.lancamento);
fprintf(estoque,"ano: %d\n",novo_registro.lancamento);

printf("\n");

printf("Digite o id do jogo (5 digitos)\n");
scanf("%d",&novo_registro.id);
fprintf(estoque,"id: %d\n",novo_registro.id);

printf("\n");

printf("Digite a nota media do jogo (1 a 100)\n");
scanf("%d",&novo_registro.nota);
fprintf(estoque,"nota: %d\n\n",novo_registro.nota);

printf("\n");	

fprintf(estoque,"------------------------\n\n");
fprintf(estoque,"\n");

fclose(estoque);

system("cls");

menuinventario();

}else{

if (menuinventariovalor == 2){

system("cls");
printf("+========================================================================================================+\n");
printf("|  I- -N- -I- -C- -I- -A- -N- -D- -O-  -L- -E- -I- -T- -U- -R- -A-  -D- -E-  -E- -S- -T- -O- -Q- -U- -E  |\n");
printf("+========================================================================================================+\n");
printf("\n");
	
char linha[256];	
FILE *estoque = fopen("estoque.txt", "r");

while(fgets(linha, sizeof(linha), estoque) != NULL){
	Sleep(15);
	printf("%s", linha);
	
}			

fclose(estoque);	
printf("\n\n");

menuinventario();	
	
}else{
	
if (menuinventariovalor == 3){
	
system("cls");
barraretornogerente();
menugerente();	
}	
	
}}}


void menufuncionarios (){
	
// Aqui é o menu de funcionarios, aqui com a primeira opção se registra um novo funcionario com as informações descristas na struct abaixo
//e na opção 2 se olha os funcionarios que já estão registrados no arquivo de texto "funcionarios"   
    	
	
		
int menufuncionaariosvalor;	
	
printf("+=======================================+\n");
printf("|     1-registrar novo funcionario	|\n");
printf("+---------------------------------------+\n");
printf("|    2-olhar lista de funcionarios      |\n");
printf("+---------------------------------------+\n");
printf("|              3-sair                   |\n");
printf("+=======================================+\n");
scanf("%d",&menufuncionaariosvalor);
printf("\n");

struct registrofuncionarios {

char nome[50];
int idade;
char funcao[70];
int salario;
int ano;	
};


if (menufuncionaariosvalor == 1){
	
FILE *funcionarios = fopen("funcionarios.txt", "a");		
struct registrofuncionarios novo;

printf("Digite o nome do novo funcionario \n");
scanf("%s",&novo.nome);
fprintf(funcionarios,"nome: %s\n",novo.nome);

printf("\n");

printf("Digite a idade do novo funcionario\n");
scanf("%d",&novo.idade);
fprintf(funcionarios,"idade: %d\n",novo.idade);

printf("\n");

printf("Digite a funcao do novo funcionario\n");
scanf("%s",&novo.funcao);
fprintf(funcionarios,"funcao: %s\n",novo.funcao);

printf("\n");

printf("Digite o salario do novo funcionario\n");
scanf("%d",&novo.salario);
fprintf(funcionarios,"salario: %d\n",novo.salario);

printf("\n");

printf("Digite o ano de contratacao do novo funcionario\n");
scanf("%d",&novo.ano);
fprintf(funcionarios,"ano: %d\n\n",novo.ano);

printf("\n");	

fprintf(funcionarios,"------------------------\n\n");
fprintf(funcionarios,"\n");

fclose(funcionarios);

system("cls");

menufuncionarios();

}else{
	
if (menufuncionaariosvalor == 2){
	
system("cls");
printf("+======================================================================================================================+\n");
printf("| I- -N- -I- -C- -I- -A- -N- -D- -O-  -L- -E- -I- -T- -U- -R- -A-  -D- -E-  -F- -U- -N- -C- -I- -O- -N- -A- -R- -I- -O |\n");
printf("+======================================================================================================================+\n");
printf("\n");

	
	
char linha[256];	
FILE *funcionarios = fopen("funcionarios.txt", "r");

while(fgets(linha, sizeof(linha), funcionarios) != NULL){
	printf("%s", linha);
	Sleep(15);
	
}			

fclose(funcionarios);	
printf("\n\n");

menufuncionarios();	
	

}else{
	
if (menufuncionaariosvalor == 3){
		
system("cls");
barraretornogerente();
menugerente();	
		
		
		
}}}
}


void menuvendas (){

// Aqui é o menu de vendas, aqui com a primeira opção se faz uma nova venda com as informações descristas na struct abaixo
//e na opção 2 se olha as vends que foram registrados no arquivo de texto "registro de vendas"   
    	
	
		
struct venda{

char nome_cliente[60];
char jogo[100];
int preco;
int copias;
int valor_cobrado;
	
};		
	
int menudevendasvalor;

printf("+============================+\n");
printf("|         1-vender           |\n");
printf("+----------------------------+\n");
printf("| 2-olhar registro de vendas |\n");
printf("+----------------------------+\n");
printf("|          3-sair            |\n");
printf("+============================+\n");
scanf("%d",&menudevendasvalor);
printf("\n");
	
	
if (menudevendasvalor == 1){
	
	
FILE *jogos_disponiveis = fopen("estoque.txt", "r");
FILE *registro_venda = fopen("registro de vendas.txt", "a");	
struct venda nova_venda;
char linha[256];	
	
printf("+================================================================+\n");
printf("| J- -O- -G- -O- -S-  -D- -I- -S- -P- -O- -N- -I- -V- -E- -I- -S |\n");
printf("+================================================================+\n");	
printf("\n");


while(fgets(linha, sizeof(linha), jogos_disponiveis) != NULL){
	printf("%s", linha);
	Sleep(15);
}	

printf("Digite o cliente\n");
scanf("%s",&nova_venda.nome_cliente);
fprintf(registro_venda,"cliente: %s\n", nova_venda.nome_cliente);

printf("\n");

printf("Digite o jogo que sera comprado\n");
scanf("%s",&nova_venda.jogo);
fprintf(registro_venda,"jogo comprado: %s\n",nova_venda.jogo);

printf("\n");

printf("Digite a o preco do jogo\n");
scanf("%d",&nova_venda.preco);
fprintf(registro_venda,"preco individual: %d\n",nova_venda.preco);

printf("\n");

printf("Digite a qauntidade de copias adquiridas\n");
scanf("%d",&nova_venda.copias);
fprintf(registro_venda,"copias: %d\n",nova_venda.copias);

printf("\n");

nova_venda.valor_cobrado = nova_venda.preco * nova_venda.copias;

printf("O valor total e: %d", nova_venda.valor_cobrado);
printf("\n");
fprintf(registro_venda,"O valor total é: %d\n\n", nova_venda.valor_cobrado);

Sleep(1000);

printf("\n");	

fprintf(registro_venda,"------------------------\n\n");
fprintf(registro_venda,"\n");

fclose(registro_venda);
fclose(jogos_disponiveis);

system("cls");

menuvendas();
	
}else{
	
if (menudevendasvalor == 2){

system("cls");
char linha[256];
FILE *registro_venda = fopen("registro de vendas.txt", "r");
	
		
printf("Iniciando leitura do resgistro de vendas:\n\n");

while(fgets(linha, sizeof(linha), registro_venda) != NULL){
	printf("%s", linha);
	Sleep(15);
}	

menuvendas ();
	
}else{
	
if (menudevendasvalor == 3){
	
system("cls");

barraretornogerente();
menugerente();
	
}}}}	
	
	
void menujogodavelha(){
	
char nome_jogador1[100];
char nome_jogador2[100];		

FILE *historico = fopen("historico.txt", "a+");

int menujogodavelhavalor;

printf("+====================================+\n");
printf("| 1-jogar | 2-ver historico | 3-sair |\n");
printf("+====================================+\n");
scanf("%d",&menujogodavelhavalor);

switch(menujogodavelhavalor){

case 1:
	
printf("Digite o nome do primeiro jogador\n");
scanf("%s", nome_jogador1);

printf("Digite o nome do segundo jogador\n");
scanf("%s", nome_jogador2);	
	
fprintf(historico, "Jogador 1: %s", nome_jogador1);
printf("\n");
fprintf(historico,"\n");
fprintf(historico, "Jogador 2: %s", nome_jogador2);
printf("\n");

fclose(historico);

system("cls");
barracarregamentojogos();	
jogodavelha();
	
break;

case 2 :

system("cls");
printf("+===============================================================================================================+\n");
printf("| I- -N- -I- -C- -I- -A- -N- -D- -O-  -L- -E- -I- -T- -U- -R- -A-  -D- -E-  -H- -I- -S- -T- -O- -R- -I- -C- -O- |\n");
printf("+===============================================================================================================+\n");
printf("\n");
	
char linha[256];	

while(fgets(linha, sizeof(linha), historico) != NULL){
	printf("%s", linha);
	Sleep(15);
	
}			

fclose(historico);	
printf("\n\n");

menujogodavelha();		
	
break;

case 3 :

system("cls");
barraretornogerente();
menugerente();		

break;
}	
}	

//fim dos menus do programa



//baras do programa
 
void barrainicial (){

//barra de carregamento inicial do programa	
//menu inicial ---> menu gerente
	
int i;	
	
printf("+=======================================================================================================+\n");
printf("|   -A- -G- -U- -A- -R- -D- -E-  -O-  -P- -R- -O- -G- -R- -A- -M- -A-  -C- -A- -R- -R- -E- -G- -A- -R-  |\n");
printf("+=======================================================================================================+\n");
printf("\n");
	
for( i=1; i<=100; i++){
 printf("\xDB");
 system("color B");
 Sleep(5);
 
 
}
printf("\n");

int j; 
int espacamento = 45;

for(j = 1; j <= 100; j++){
	
	printf("\r%*d %%", espacamento, j);
	fflush(stdout);
		
}
system("cls");
 }


void barragerenciainventario (){	

//barra de carregaemnto do menu do gerente para o inventari
//menu gerente ---> menu inventario
	
printf("+====================================================================================================+\n");
printf("|          -I- -N- -D- -O-  -P- -A- -R- -A-  -O-  -I- -N- -V- -E- -N- -T- -A- -R- -I- -O-            | \n");
printf("+====================================================================================================+\n");

int i;

for( i=1; i<=45; i++){
 printf("\xDB");
 system("color B");
 
}
printf("\n");

int j; 
int espacamento = 45;

for(j = 1; j <= 100; j++){
	
	printf("\r%*d %%", espacamento, j);
	fflush(stdout);
		
}
system("cls");
 }
 
 	
void barragerenciamentofunc (){
	
//barra de carregaemnto do menu de gerencia para o menu de funcionarios
//menu gerente ---> menu funcionario
		
printf("+====================================================================================================+\n");
printf("|          -I- -N- -D- -O-  -P- -A- -R- -A-  -F- -U- -N- -C- -I- -O- -N- -A- -R- -I- -O- -S-         |\n");
printf("+====================================================================================================+\n");

int i;

for( i=1; i<=45; i++){
 printf("\xDB");
 system("color B");
 
}
printf("\n");

int j; 
int espacamento = 45;

for(j = 1; j <= 100; j++){
	
	printf("\r%*d %%", espacamento, j);
	fflush(stdout);
		
}
system("cls");	
	
	
}	
	
	
void barragerenciavendas(){

//barra de carregaemnto do menu de gerencia para o menu de vendas
//menu gerente ---> menu vendas	
	
printf("+=====================================================================================+\n");
printf("|          -I- -N- -D- -O-  -P- -A- -R- -A-  -A- -S-  -V- -E- -N- -D- -A- -S-         |\n");
printf("+=====================================================================================+\n");

int i;

for( i=1; i<=45; i++){
 printf("\xDB");
 system("color B");
 
}
printf("\n");

int j; 
int espacamento = 45;

for(j = 1; j <= 100; j++){
	
	printf("\r%*d %%", espacamento, j);
	fflush(stdout);
		
}
system("cls");	
}
	

void barraretornogerente(){
	
//barra de carregaemnto dos menus de vendas ou funcionarios ou inventario ou do jogo da velha
//menu vendas ou menu funcionarios ou menu inventario ou ao final do jogo da velha ---> menu gerente
	
printf("+================================================================================================================+\n");
printf("| -R -E- -T- -O- -R- -N- -A- -D- -O-  -P- -A- -R- -A-  -M- -E- -N- -U-  -D- -E-  -G- -E- -R- -E- -N- -C- -I- -A- |\n");
printf("+================================================================================================================+\n");

int i;

for( i=1; i<=70; i++){
 printf("\xDB");
 system("color B");
 
}
printf("\n");

int j; 
int espacamento = 45;

for(j = 1; j <= 100; j++){
	
	printf("\r%*d %%", espacamento, j);
	fflush(stdout);
		
}
system("cls");		
	
	
	
	
	
	
}


void barracarregamentojogos(){

//bara para a inicailização do jogo da velha	
		
printf("+=========================================================================+\n");
printf("|          -I- -N- -I- -C- -I- -A- -N- -D- -O-  -J- -O- -G- -O-           |\n");
printf("+=========================================================================+\n");

int i;

for( i=1; i<=45; i++){
 printf("\xDB");
 system("color B");
 
}
printf("\n");

int j; 
int espacamento = 45;

for(j = 1; j <= 100; j++){
	
	printf("\r%*d %%", espacamento, j);
	fflush(stdout);
		
}
system("cls");
 }	

//fim das barras




//codigo do jogo da velha 
//variaveis compartilhadas entre as funções abaixo
 
int turno = 1;
int matriz[3][3]; 
int contador_jogador1;
int contador_jogador2;
 
void jogodavelha(){

//aqui o jogo da velha roda propriamente dito, é pego uma matriz 3x3 e pede-se ao jogador respectivo para escolher a "casa"
//que deseja marcar ( 1-para o jogdaor 1, 2-para o jogador 2), e ainda é feito uma verificação se aquela ja não foi preenchida,
//caso tenha sida o programa requisita uma nova casa até a nova casa não tenha sida uma preenchida	
	
int i, j, linha,coluna;
	
		
if (turno == 1){		

printf("\n\n");
printf("+---------------------------+\n");
printf("| TURNO DO PRIMEIRO JOGADOR |\n");
printf("+---------------------------+\n");
printf("\n");

//é retirado 1 da entrada para alinhar com a matriz, assim o usurairo pode digitar 3 e o program ira enteder que se refere ou 
//a linha 2 ou a coluna 2

printf("linha:");
scanf("%d", &linha);
printf("\n");

linha = linha - 1;

printf("coluna:");
scanf("%d", &coluna);
printf("\n");

coluna = coluna - 1;

 while (matriz[linha][coluna] == 1 || matriz[linha][coluna] == 2){
	 printf("A casa ja esta preenchida, digite outra casa\n\n");
	 
	 printf("Linha:");
     scanf("%d", &linha);
     printf("\n");

     printf("Coluna:");
     scanf("%d", &coluna);
     printf("\n");
     
}	

system("CLS");	
		
matriz[linha][coluna] = 1;

 for (i = 0; i<3; i++){
 	printf("\n");
	 for (j = 0; j<3; j++){
		 printf("%4d|", matriz[i][j]);
		 
}}

contador_jogador1 = contador_jogador1 + 1;

velha();			
	
}else{
	
if (turno = 2){		

printf("\n\n");
printf("+---------------------------+\n");
printf("|  TURNO DO SEGUNDO JOGADOR |\n");
printf("+---------------------------+\n");
printf("\n");

printf("Linha:");
scanf("%d", &linha);
printf("\n");

linha = linha - 1;

printf("Coluna:");
scanf("%d", &coluna);
printf("\n");

coluna = coluna - 1;

 while (matriz[linha][coluna] == 1 || matriz[linha][coluna] == 2){
	 printf("A casa ja esta preenchida, digite outra casa\n\n");
	 
	 printf("Linha:");
     scanf("%d", &linha);
     printf("\n");

     printf("Coluna:");
     scanf("%d", &coluna);
     printf("\n");

 }	
		
system("cls");
			
matriz[linha][coluna] = 2;

 for (i = 0; i<3; i++){
 	printf("\n");
	 for (j = 0; j<3; j++){
		 printf("%4d|", matriz[i][j]);
		 
}}		

velha();

contador_jogador1 = contador_jogador1 + 1;

turno = 2;		
	
}}	

}	


void velha(){

//aqui é feito a verificações de vitoria e empate para o jogo da velha, se verifica cada possibildade de vitoria 
//respectiva a cada jogador e quando, e quando nenhum dos dosi jogadores alcançaram essa condições de vitoria, se
//inverte o valor da variavel "turno" e se passa o turno para o proximo jogador espectivo
	
		
	
if ( matriz[0][1] == 1 && matriz[0][0] == 1 && matriz[0][2] == 1){
 FILE *historico = fopen("historico.txt", "a");

 printf("\n");
 printf("o jogador 1 ganhou com %d rodadas", contador_jogador1);	
 fprintf(historico,"\n");
 fprintf(historico,"o jogador 1 ganhou com %d rodadas", contador_jogador1 );
 Sleep(1000);
 system("cls");	
 printf("\n");
 
 fprintf(historico,"\n");
 fprintf(historico,"------------------------\n\n");
 fprintf(historico,"\n");
 
 fclose(historico);
 
 barraretornogerente();
 menugerente();
 	
}else{

if (matriz[1][1] == 1 && matriz[1][0] == 1 && matriz[1][2] == 1){
 FILE *historico = fopen("historico.txt", "a");

 printf("\n");
 printf("o jogador 1 ganhou com %d rodadas", contador_jogador1);	
 fprintf(historico,"\n");
 fprintf(historico,"o jogador 1 ganhou com %d rodadas", contador_jogador1 );
 Sleep(1000);
 system("cls");	
 printf("\n");
 
 fprintf(historico,"\n");
 fprintf(historico,"------------------------\n\n");
 fprintf(historico,"\n");
 
 fclose(historico);
 
 barraretornogerente();
 menugerente();
	
}else{
	
if (matriz[2][1] == 1 && matriz[2][0] == 1 && matriz[2][2] == 1){
 FILE *historico = fopen("historico.txt", "a");

 printf("\n");
 printf("o jogador 1 ganhou com %d rodadas", contador_jogador1);	
 fprintf(historico,"\n");
 fprintf(historico,"o jogador 1 ganhou com %d rodadas", contador_jogador1 );
 Sleep(1000);
 system("cls");	
 printf("\n");
 
 fprintf(historico,"\n");
 fprintf(historico,"------------------------\n\n");
 fprintf(historico,"\n");
 
 fclose(historico);
 
 barraretornogerente();
 menugerente();
 	
}else{

if (matriz[2][1] == 1 && matriz[2][0] == 1 && matriz[2][2] == 1){
 FILE *historico = fopen("historico.txt", "a");

 printf("\n");
 printf("o jogador 1 ganhou com %d rodadas", contador_jogador1);	
 fprintf(historico,"\n");
 fprintf(historico,"o jogador 1 ganhou com %d rodadas", contador_jogador1 );
 Sleep(1000);
 system("cls");	
 printf("\n");
 
 fprintf(historico,"\n");
 fprintf(historico,"------------------------\n\n");
 fprintf(historico,"\n");
 
 fclose(historico);
 
 barraretornogerente();
 menugerente();
	
}else{	
	
if (matriz[1][0] == 1 && matriz[0][0] == 1 && matriz[2][0] == 1){
 FILE *historico = fopen("historico.txt", "a");

 printf("\n");
 printf("o jogador 1 ganhou com %d rodadas", contador_jogador1);	
 fprintf(historico,"\n");
 fprintf(historico,"o jogador 1 ganhou com %d rodadas", contador_jogador1 );
 Sleep(1000);
 system("cls");	
 printf("\n");
 
 fprintf(historico,"\n");
 fprintf(historico,"------------------------\n\n");
 fprintf(historico,"\n");
 
 fclose(historico);
 
 barraretornogerente();
 menugerente();
	
}else{
	
if (matriz[1][1] == 1 && matriz[0][1] == 1 && matriz[2][1] == 1){
 FILE *historico = fopen("historico.txt", "a");

 printf("\n");
 printf("o jogador 1 ganhou com %d rodadas", contador_jogador1);	
 fprintf(historico,"\n");
 fprintf(historico,"o jogador 1 ganhou com %d rodadas", contador_jogador1 );
 Sleep(1000);
 system("cls");	
 printf("\n");
 
 fprintf(historico,"\n");
 fprintf(historico,"------------------------\n\n");
 fprintf(historico,"\n");
 
 fclose(historico);
 
 barraretornogerente();
 menugerente();	
	
}else{
	
if (matriz[1][2] == 1 && matriz[0][2] == 1 && matriz[2][2] == 1){
 FILE *historico = fopen("historico.txt", "a");

 printf("\n");
 printf("o jogador 1 ganhou com %d rodadas", contador_jogador1);	
 fprintf(historico,"\n");
 fprintf(historico,"o jogador 1 ganhou com %d rodadas", contador_jogador1 );
 Sleep(1000);
 system("cls");	
 printf("\n");
 
 fprintf(historico,"\n");
 fprintf(historico,"------------------------\n\n");
 fprintf(historico,"\n");
 
 fclose(historico);
 
 barraretornogerente();
 menugerente();
	
}else{
	
if (matriz[0][0] == 1 && matriz[1][1] == 1 && matriz[2][2] == 1){
 FILE *historico = fopen("historico.txt", "a");

 printf("\n");
 printf("o jogador 1 ganhou com %d rodadas", contador_jogador1);	
 fprintf(historico,"\n");
 fprintf(historico,"o jogador 1 ganhou com %d rodadas", contador_jogador1 );
 Sleep(1000);
 system("cls");	
 printf("\n");
 
 fprintf(historico,"\n");
 fprintf(historico,"------------------------\n\n");
 fprintf(historico,"\n");
 
 fclose(historico);
 
 barraretornogerente();
 menugerente();
	
}else{
	
if (matriz[2][0] == 1 && matriz[1][1] == 1 && matriz[0][2] == 1){
 FILE *historico = fopen("historico.txt", "a");

 printf("\n");
 printf("o jogador 1 ganhou com %d rodadas", contador_jogador1);	
 fprintf(historico,"\n");
 fprintf(historico,"o jogador 1 ganhou com %d rodadas", contador_jogador1 );
 Sleep(1000);
 system("cls");	
 printf("\n");
 
 fprintf(historico,"\n");
 fprintf(historico,"------------------------\n\n");
 fprintf(historico,"\n");
 
 fclose(historico);
 
 barraretornogerente();
 menugerente();	
	 	
}else{
	
if (matriz[0][0] == 2 && matriz[0][1] == 2 && matriz[0][2] == 2){
 FILE *historico = fopen("historico.txt", "a");

 printf("\n");
 printf("o jogador 2 ganhou com %d rodadas", contador_jogador2);	
 fprintf(historico,"\n");
 fprintf(historico,"o jogador 2 ganhou com %d rodadas", contador_jogador2 );
 Sleep(1000);
 system("cls");	
 printf("\n");
 
 fprintf(historico,"\n");
 fprintf(historico,"------------------------\n\n");
 fprintf(historico,"\n");
 
 fclose(historico);
 
 barraretornogerente();
 menugerente();
 	
}else{
	
if (matriz[1][0] == 2 && matriz[1][1] == 2 && matriz[1][2] == 2){
 FILE *historico = fopen("historico.txt", "a");

 printf("\n");
 printf("o jogador 2 ganhou com %d rodadas", contador_jogador2);	
 fprintf(historico,"\n");
 fprintf(historico,"o jogador 2 ganhou com %d rodadas", contador_jogador2 );
 Sleep(1000);
 system("cls");	
 printf("\n");
 
 fprintf(historico,"\n");
 fprintf(historico,"------------------------\n\n");
 fprintf(historico,"\n");
 
 fclose(historico);
 
 barraretornogerente();
 menugerente();
 	
}else{
	
if (matriz[2][0] == 2 && matriz[2][1] == 2 && matriz[2][2] == 2){
 FILE *historico = fopen("historico.txt", "a");

 printf("\n");
 printf("o jogador 2 ganhou com %d rodadas", contador_jogador2);	
 fprintf(historico,"\n");
 fprintf(historico,"o jogador 2 ganhou com %d rodadas", contador_jogador2 );
 Sleep(1000);
 system("cls");	
 printf("\n");
 
 fprintf(historico,"\n");
 fprintf(historico,"------------------------\n\n");
 fprintf(historico,"\n");
 
 fclose(historico);
 
 barraretornogerente();
 menugerente();
 	
}else{
	
if (matriz[1][0] == 2 && matriz[0][0] == 2 && matriz[2][0] == 2){
 FILE *historico = fopen("historico.txt", "a");

 printf("\n");
 printf("o jogador 2 ganhou com %d rodadas", contador_jogador2);	
 fprintf(historico,"\n");
 fprintf(historico,"o jogador 2 ganhou com %d rodadas", contador_jogador2 );
 Sleep(1000);
 system("cls");	
 printf("\n");
 
 fprintf(historico,"\n");
 fprintf(historico,"------------------------\n\n");
 fprintf(historico,"\n");
 
 fclose(historico);
 
 barraretornogerente();
 menugerente();
 	
}else{
	
if (matriz[0][1] == 2 && matriz[1][1] == 2 && matriz[2][1] == 2){
 FILE *historico = fopen("historico.txt", "a");

 printf("\n");
 printf("o jogador 2 ganhou com %d rodadas", contador_jogador2);	
 fprintf(historico,"\n");
 fprintf(historico,"o jogador 2 ganhou com %d rodadas", contador_jogador2 );
 Sleep(1000);
 system("cls");	
 printf("\n");
 
 fprintf(historico,"\n");
 fprintf(historico,"------------------------\n\n");
 fprintf(historico,"\n");
 
 fclose(historico);
 
 barraretornogerente();
 menugerente();
 	
}else{
	
if (matriz[0][2] == 2 && matriz[1][2] == 2 && matriz[2][2] == 2){
 FILE *historico = fopen("historico.txt", "a");

 printf("\n");
 printf("o jogador 2 ganhou com %d rodadas", contador_jogador2);	
 fprintf(historico,"\n");
 fprintf(historico,"o jogador 2 ganhou com %d rodadas", contador_jogador2 );
 Sleep(1000);
 system("cls");	
 printf("\n");
 
 fprintf(historico,"\n");
 fprintf(historico,"------------------------\n\n");
 fprintf(historico,"\n");
 
 fclose(historico);
 
 barraretornogerente();
 menugerente();
}else{
	
if (matriz[0][0] == 2 && matriz[1][1] == 2 && matriz[2][2] == 2){
 FILE *historico = fopen("historico.txt", "a");

 printf("\n");
 printf("o jogador 2 ganhou com %d rodadas", contador_jogador2);	
 fprintf(historico,"\n");
 fprintf(historico,"o jogador 2 ganhou com %d rodadas", contador_jogador2 );
 Sleep(1000);
 system("cls");	
 printf("\n");
 
 fprintf(historico,"\n");
 fprintf(historico,"------------------------\n\n");
 fprintf(historico,"\n");
 
 fclose(historico);
 
 barraretornogerente();
 menugerente();
 	
}else{
	
if (matriz[2][0] == 2 && matriz[1][1] == 2 && matriz[0][2] == 2){
 FILE *historico = fopen("historico.txt", "a");

 printf("\n");
 printf("o jogador 2 ganhou com %d rodadas", contador_jogador2);	
 fprintf(historico,"\n");
 fprintf(historico,"o jogador 2 ganhou com %d rodadas", contador_jogador2 );
 Sleep(1000);
 system("cls");	
 printf("\n");
 
 fprintf(historico,"\n");
 fprintf(historico,"------------------------\n\n");
 fprintf(historico,"\n");
 
 fclose(historico);
 
 barraretornogerente();
 menugerente();
	
}else{
	
if ((matriz[0][0] == 1 || matriz[0][0] == 2) && (matriz[1][0] == 1 || matriz[1][0] == 2) && (matriz[2][0] == 1 || matriz[2][0] == 2) &&
(matriz[2][1] == 1 || matriz[2][1] == 2) && (matriz[0][1] == 1 || matriz[0][1] == 2) && (matriz[0][2] == 1 || matriz[0][2] == 2) &&
(matriz[1][2] == 1 || matriz[1][2] == 2) && (matriz[1][1] == 1 || matriz[1][1] == 2) && (matriz[2][2] == 1 || matriz[2][2] == 2)){	
 
 FILE *historico = fopen("historico.txt", "a");

 printf("\n");
 printf("o jogo resultou em empate");	
 fprintf(historico,"\n");
 fprintf(historico,"O jogo resultou em empate");
 Sleep(1000);
 system("cls");	
 printf("\n");
 
 fprintf(historico,"\n");
 fprintf(historico,"------------------------\n\n");
 fprintf(historico,"\n");
 
 fclose(historico);
 
 barraretornogerente();
 menugerente();
	

	
}else{
			
if (turno == 1){

turno = 2;
jogodavelha();
		
}else{

turno = 1;	
jogodavelha();
	
}}}}}}}}}}}}}}}}}}}

}
 
 
void resetdavelha(){

//aqui é feito o reset do jogo da velha, para toda vez que o jogo ser chamado novamente a matriz dele ter voltando a ter todos
//os elementos iguais a 0, ao inves de salvar os 1 e 2 colocados na ultima partida	
	
int contador_jogador1 = 0;
int contador_jogador2= 0;
	
int i, j;	
	
 for (i = 0; i<3; i++){
	for (j = 0; j<3; j++){
		matriz[i][j] = 0;

}}		
	
	
	
} 

		
	
	
	
	
 
 
 
 