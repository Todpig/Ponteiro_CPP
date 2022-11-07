#include <iostream>
#include<locale.h>

using namespace std;

int *uniao(int *x1, int *x2, int n1, int n2, int *qtd) {

  int *p3 = new int[n1 + n2];

  for (int i = 0; i < *qtd; i++) {
    if(x1 == NULL || x2 == NULL){ // Erro de alocação de memória
        cout << "Impossível de alocar memória!" << endl;
    }
    if(*x1 != *x2){
      p3[i] = *x1;
      x1++;
      p3[i + 1] = *x2;
      x2++;
      }
    else if(*x1 == *x2){
      p3[i] = *x1;
      x1++;
    }
    else if(*x1 == NULL || *x2 == NULL){ // Erro de alocação de memória
        cout << "Impossível de alocar memória!" << endl;
    }
  }
   for (int i = 0; i < *qtd; i++) {
    if(p3[i] == NULL){ // Erro de alocação de memória
        cout << "Impossível de alocar memória!" << endl;
    }
   else{
        cout << p3[i] << " ";
    }
   }
  return p3;
}


int main() {
    setlocale(LC_ALL, "Portuguese");
  int n1, n2;

  cout << "Qual tamanho da primeira lista?" << endl;
  cin >> n1;
  cout << "Qual tamanho da segunda lista?" << endl;
  cin >> n2;

  int vetor1[n1], vetor2[n2];

  cout << "Digite os valores do primeiro vetor:\n";
  for (int i = 0; i < n1; i++) {
    cin >> vetor1[i];
  }
  cout << "Digite os valores do segundo vetor:\n";
  for (int i = 0; i < n2; i++) {
    cin >> vetor2[i];
  }

  cout << endl;
  cout << endl;

  int *qtd = new int();
  *qtd = n1 + n2;

  int *x3 = new int();
  x3 = uniao(vetor1, vetor2, n1, n2, qtd);

  x3 -= *qtd;

  return 0;
}
