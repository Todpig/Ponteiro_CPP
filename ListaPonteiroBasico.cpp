#include <iostream>
#include <stdio.h>
#include<math.h>
using namespace std;

//QUESTAO 1
void Questao1(int inteiro, float real, char letra){
  /*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima osvalores das variáveis antes e após a modificação.*/
  
  cout << "-----Primeira questão----\n";
  //impressão das  variaveis
  cout <<"\n-----Antes-----" <<"\nInteiro: " << inteiro << "\nReal: " << real << "\nchar: " << endl;
  //Declaração dos ponteiros
  int *Pint;
  float *Pfloat;
  char *Pchar;
  //ponteiros recebendos os seus destinos
  Pint = &inteiro;;
  Pfloat = &real;
  Pchar = &letra;
  //ponteiros recebendo outros valores
  *Pint = 2;
  *Pfloat = 1.9;
  *Pchar = 'Z';
  
  //impressão das  variaveis
  cout << "\n-----Depois-----" <<"\nInteiro: " << inteiro << "\nReal: " << real << "\nchar: "<< letra << endl;
}
//____________________________________________________________________________________________________________________________________
//QUESTAO 2
void Questao2(int A, int B){
/*Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B. A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro. Imprima os valores de A e B
na função ao principal.*/
   cout << "\n-----Segunda questão----\n";
  int *Pmodifica;
  A += B;
  cout << "\n-----Antes-----\n" <<"Valor de A: " << A << "\nValor de B: " << B << endl;
  Pmodifica = & A;
  *Pmodifica = 10;
  cout << "\n-----Depois-----\n " <<"Valor de A: " << A << "\nValor de B: " << B << endl;
}
//____________________________________________________________________________________________________________________________________
//QUESTAO 3
void Questao3(){
  cout << "\n-----Terceira questão----\n";
  float array[10];
  float *ponteiro;
/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array.*/
for(int i=0; i<3; i++){
   array[i] = 1.5;
  ponteiro = &array[i];
   cout <<"Posição "<< i << " " << endl << ponteiro << endl;
 }   
}
//____________________________________________________________________________________________________________________________________
//QUESTAO 4
void Questao4(){
  float matriz[3][3];
  float *ponteiro;
  cout << "\n-----Quarta questão----\n";
  /*Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima o endereço de cada posição dessa matriz.*/  
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if(i==j){ 
        matriz[i][j] = 1;
        ponteiro = &matriz[i][j];
        }
      else{
        matriz[i][j] = 0;
        ponteiro = &matriz[i][j];
      }
     cout <<"Posição "<< i << j << " " << ponteiro << endl;
    }
   }
  }
//____________________________________________________________________________________________________________________________________
//QUESTAO 5
void Questao5(){
  cout << "\n-----Quinta questão----\n";
/*Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.*/
float array[5];
float *ponteiro;

for(int i=0; i<5; i++){
   cout << "Digite o valor inteiro: " << endl;
   cin >> array[i];
   ponteiro = &array[i];
  *ponteiro *= 2;
   ponteiro++;
  }
  for(int i=0; i<5; i++){
    cout << array[i] << " ";  
    }
  }
//____________________________________________________________________________________________________________________________________
//QUESTAO 6
void Questao6(){
  /*Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima
o endereço das posições contendo valores pares.*/
  int array[5];
  int *ponteiro;
  cout << "\n-----Sexta questão----\n";
  for(int i=0; i<5; i++){
   cout << "Digite o valor inteiro: " << endl;
   cin >> array[i];
   ponteiro = &array[i];
   if(*ponteiro % 2 == 0){
     cout << "A posiçao da memoria do elemento" << i << " é: " << ponteiro << endl;
      }
     else{
      cout << "O elemento não é par ;(" << endl;
    }
    }
  }
//____________________________________________________________________________________________________________________________________
//QUESTAO 7
void Questao7(){
  /*Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que leia a variável a e calcule e
exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve
ser usada para calcular o dobro, C o triplo e D o quádruplo.*/
  cout << "\n-----Setima questão----\n";
  int A, *B, **C, ***D;
  cout <<"Digite o valor de A: " << endl;
  cin >> A;
  B = &A;
  *B *= 2;
  cout <<"O dobro é: "<< *B << endl;
  C = &B;
  **C *= 3;
  cout <<"O triplo é: "<< **C << endl;
  D = &C;
  ***D *= 4;
  cout <<"O quadruplo é: "<< ***D << endl;
  }
//____________________________________________________________________________________________________________________________________
//QUESTAO 8
  /*Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de entrada e
retorne eles ordenados, ou seja, o menor valor na primeira variável, o segundo menor valor na variável do
meio, e o maior valor na última variável. A função deve retornar o valor 1 se os três valores forem iguais e 0 se
existirem valores diferentes. Exibir os valores ordenados na tela.*/

void Questao8(int valor1, int valor2, int valor3){
  cout << "\n-----Oitava questão----\n";
  if(valor1 != valor2 && valor1 != valor3){
if( valor1 > valor2 && valor1 > valor3 && valor2> valor3){
  cout << "Primeio valor: "<< valor1 << "Segundo valor: " <<valor2 << "Terceiro valor: " << valor3 << endl;
}
  else if (valor1 > valor2 && valor1 > valor3 && valor2< valor3){
   cout << "Primeio valor: "<< valor1 << "Segundo valor: " <<valor3 << "Terceiro valor: " << valor2 << endl;
    }
  else if(valor2 > valor1 && valor2 > valor3 && valor1< valor3){
     cout << "Primeio valor: "<< valor2 << "Segundo valor: " <<valor3 << "Terceiro valor: " << valor1 << endl;
  }
  else if(valor2 > valor1 && valor2 > valor3 && valor1 > valor3){
     cout << "Primeio valor: "<< valor2 << "Segundo valor: " <<valor1 << "Terceiro valor: " << valor3 << endl;
  }
  else if(valor3 > valor1 && valor3 > valor2 && valor1< valor2){
     cout << "Primeio valor: "<< valor3 << "Segundo valor: " <<valor2 << "Terceiro valor: " << valor1 << endl;
  }
  else if(valor3 > valor1 && valor3 > valor2 && valor1 > valor2){
     cout << "Primeio valor: "<< valor3 << "Segundo valor: " <<valor1 << "Terceiro valor: " << valor2 << endl;
  }
    cout << '0';
  }
  
  else{
  cout << '1';
  }
}
//____________________________________________________________________________________________________________________________________
//QUESTÂO 9
/*Escreva uma função que dado um número real passado como parâmetro, retorne à parte inteira e a parte fracionaria deste número. Escreva um programa que chama a função Prototipo: void frac(float num, int* inteiro, float* frac);*/
void Questao9(float numreal, int *parteinteira, float *partereal){
  cout << "\n----Nona questão----\n";
  int numerointeiro;
  float numeroreal;
  numerointeiro = floor(numreal);
  parteinteira = &numerointeiro;
  numeroreal = numreal - numerointeiro;
  partereal = &numeroreal;
  cout << numreal << endl;
  cout << *parteinteira<< endl;
  cout << *partereal << endl;
  }
//____________________________________________________________________________________________________________________________________
//QUESTÂO 10
/*Implemente uma função que receba como parâmetro um array de números reais de tamanho N e retorne
quantos números negativos há nesse array. Essa função deve obedecer ao protótipo: int negativos(float *vet,
int N);*/
int Questao10(int n, float *vet) {      
    for (int i = 0; i < 5; i++) {
        if (vet[i] < 0) {
            n++;
        }
    }
    return n;
}
//____________________________________________________________________________________________________________________________________
//QUESTAO 11
void Questao11(float *vet, int tam) { 
  int max=vet[0], min=vet[1];
 
    for (int i = 0; i < tam; i++) {
        if (vet[i] > max) {
           max = vet[i];
        }       
        else if(vet[i]< min){
        min  = vet[i];   
      }  
    }
  cout << max << min << endl;
  }
//____________________________________________________________________________________________________________________________________
//QUESTAO 12
/*Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas respectivas quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a união de x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3. Sendo x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 4, 5, 6, 7, 8}. Assinatura da função: int* uniao(int *x1, int *x2, int n1, int n2, int* qtd);*/
int *uniao (int *x1, int *x2, int n1, int n2, int *qtd){  
 int i=0, j=0, *x3; 
 x3 = (int*)malloc((n1+n2) * sizeof(int)); 
 if (x3 == NULL){    
 cout << "Impossível alocar memória."; 
        return 1; 
 }  
  for (i=0; i<(n1+n2); i++) {  
   if(*(x1+i) == *(x2+i)) {  
    *(x3+j) = *(x1+i); 
    j++; 
  } 
  else if(*(x1+i) <* (x2+i)) {     
       *(x3+j) = *(x1+i); 
        *(x3+j+1) = *(x2+i); 
        j=j+2; 
  } 
   else if (*(x1+i)>*(x2+i)) {  

        *(x3+j) = *(x1+i); 

        *(x3+j+1) = *(x2+i); 

        j=j+2; 
   } 
  } 
   return (x3); 
  } 
//____________________________________________________________________________________________________________________________________
//QUESTAO 13
/*Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas respectivas quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a intersecção de x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3. Sendo x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 6}. Assinatura da função: int* interseccao(int *x1, int *x2, int n1, int n2, int *qtd);*/
int *interseccao (int *x1, int *x2, int n1, int n2, int *qtd){  
 int i=0, j=0, *x3; 
 x3 = (int*)malloc((n1+n2) * sizeof(int)); 
 if (x3 == NULL){    
 cout << "Impossível alocar memória."; 
        return 1; 
 }  
  for (i=0; i<(n1+n2); i++) {  
   if(*(x1+i) == *(x2+i)) {  
    *(x3+j) = *(x1+i); 
    j++; 
  } 
  } 
   return (x3); 
  } 

//____________________________________________________________________________________________________________________________________
//QUESTAO 14
/*Faça um programa que leia a quantidade de elementos n e crie dinamicamente um vetor de n elementos e passe esse vetor para uma função que irá ler os elementos desse vetor. Depois, no programa principal, o vetor preenchido deve ser impresso.*/
void Questao14(float *array, int n){
  for (int i = 0; i < n; i++) {
    cout << *array; 
    array++;
    }
}


//____________________________________________________________________________________________________________________________________
//QUESTAO 15
/*Analise o código abaixo e determine o valor das variáveis ao final da execução. int i=34,j; int *p; p = &i; *P++; j = *p + 33;*/

//____________________________________________________________________________________________________________________________________
//QUESTAO 16
//o que faz o código abaixo?


//____________________________________________________________________________________________________________________________________

//INT MAIN- ONDE CHAMO TODAS AS FUNÇOES
int main(){
Questao1(1, 2.8, 's');//Essa questao recebvariaveis q cada valor é mudado por um respectivo ponteiro.
//_________________________________________________________________________________________________________________________________
Questao2(3, 3); //essa função rece valores, onde o valor de a é somado junto ao de b e depois o mesmo é mudado seu valor.
//_________________________________________________________________________________________________________________________________
Questao3(); // essa funçao recebe um array, e depois imprime a posiçao de cada elemento do mesmo.
//__________________________________________________________________________________________________________________________________
Questao4(); //essa questao cria uma matriz 3 por 3, e imprime as posições de todos os elementos.
//__________________________________________________________________________________________________________________________________
Questao5(); // essa função recebe um array de 5 elementos e depois dobra os eu valor.
//__________________________________________________________________________________________________________________________________
Questao6(); // essa funçao recebe um array de 5 elementos e imprime a posiçao de memoria se o elemento for par.
//__________________________________________________________________________________________________________________________________
Questao7(); //essa função rece um valor A, e 3 ponteiros que modifica seu valor com o dobro, triplo e quadruplo.
//__________________________________________________________________________________________________________________________________
Questao8(2, 15, 32);// essa função organzar numeros inteiros, por ordem de 1, 2 e 3 maior valor.
//__________________________________________________________________________________________________________________________________
//QUESTAO 9
float numreal, numeroreal;
int numerointeiro;
   cout << "\n----Décima questão----\n";
  cout << "Digite um numero real: " << endl;
  cin >> numreal;
Questao9(numreal, &numerointeiro, &numeroreal);;// essa função recebe um numero real e divide o mesmo na parte, inteira e real.
//_________________________________________________________________________________________________________________________________
//QUESTAO 10
int tam;
cout << "Digite o tamanho do vetor: " << endl;
cin >> tam;
    float vetor[tam];
    for (int i = 0; i < tam; i++) {
        cout << "Digite o valor da posição " << i << endl;
        cin >> vetor[i];
    }       
  cout << "Numero de negativos no vetor: "<<  Questao10(0, vetor); //essa funçao cria um vetor de tamanho determinado pelo usuario e retorna o numero de valores negativos desse vetor.
//____________________________________________________________________________________________________________________________________
//QUESTAO 11
int tamanho;
cout << "Digite o tamanho do vetor: " << endl;
cin >> tam;
int *ptr = &tamanho;
    float arr[tam];
    for (int i = 0; i < tam; i++) {
        cout << "Digite o valor da posição " << i << endl;
        cin >> arr[i];
    }       
   Questao11(arr, *ptr); //____________________________________________________________________________________________________________________________________
//QUESTAO 12
int i, x1[] = {1,3,5,6,7}, x2[] = {1,3,4,6,8}, *x3, tam1, tam2, tam3; 
tam1 = 5; 
tam2 = 5; 
tam3 = tam1 + tam2; 
if (x1 == NULL){      
    cout << "Impossível alocar memória." << endl; 
    return 1; 
} 
if (x2 == NULL){    
    cout << "Impossível alocar memória."<< endl; 
    return 1; 
} 
 cout << "Vetor 1: " << endl; 
 for (i=0; i<tam1; i++) {  
  cout << *(x1+i); 
 } 
  cout << "Vetor 2: " << endl; 
  for (i=0; i<tam2; i++) {  
  cout << *(x2+i); 
  } 
  x3 = (int*)malloc(tam3*sizeof(int)); 
  x3 = uniao(x1, x2, tam1, tam2, x3); 
  tam1 = tam1 + 2; 
  cout << "Vetor união: " << endl;
 for (i=0; i<tam1; i++) {   
 cout << *(x3+i) << endl; 
 } 
//____________________________________________________________________________________________________________________________________
//QUESTAO 13 
int i, x1[] = {1,3,5,6,7}, x2[] = {1,3,4,6,8}, *x3, tam1, tam2, tam3; 
tam1 = 5; 
tam2 = 5; 
tam3 = tam1 + tam2; 
if (x1 == NULL){      
    cout << "Impossível alocar memória." << endl; 
    return 1; 
} 
if (x2 == NULL){    
    cout << "Impossível alocar memória."<< endl; 
    return 1; 
} 
 cout << "Vetor 1: " << endl; 
 for (i=0; i<tam1; i++) {  
  cout << *(x1+i); 
 } 
  cout << "Vetor 2: " << endl; 
  for (i=0; i<tam2; i++) {  
  cout << *(x2+i); 
  } 
  x3 = (int*)malloc(tam3*sizeof(int)); 
  x3 = uniao(x1, x2, tam1, tam2, x3); 
  tam1 = tam1 + 2; 
  cout << "Vetor união: " << endl;
 for (i=0; i<tam1; i++) {   
 cout << *(x3+i) << endl; 
 }
//____________________________________________________________________________________________________________________________________
//QUESTAO 14
int n;
cout << "Digite o tamanho do vetor: " << endl;
cin >> n;
int *ptr = &n;
    float vetor[n];
    for (int i = 0; i < n; i++) {
        cout << "Digite o valor da posição " << i << endl;
        cin >> vetor[i];
    }
  Questao14(vetor, *ptr);
//____________________________________________________________________________________________________________________________________
//QUESTAO 15
/*Analise o código abaixo e determine o valor das variáveis ao final da execução.
int i=34,j; 
int *p; 
p = &i;
*P++; 
j = *p + 33;*/
//acontece que, é determinado as variaveis e seu ponteiro, onde ele é atribuido a I, so que ao acontecer *p++, ele incrementa alterando sua posiçao. caso o usuario quisesse apenas modificar o valor, era so colocar assim:
/*int i = 34, j;
int *p;
p = &i;
*p++;
j = *p + 33;
cout << " valor de i " << i << " valor de j "<< j;*/
//____________________________________________________________________________________________________________________________________
//QUESTAO 16
//Aloca dinamicamente A; a rpimeiro instate como um array de 2 elementos e osteriormente uma matriz de 2x2, imprime a respectiva e ao final libera a memomria alocada.
return 0;
}