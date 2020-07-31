#include <iostream>

using namespace std;

const int LIMIT = 1000;
int N, X[LIMIT][LIMIT], soma, maior;
int soma_linhas[LIMIT], soma_colunas[LIMIT];

int main () {

   // entrada dos dados
   cin >> N;
   for (int l = 0; l < N; l++){
      for (int c = 0; c < N; c++){
         cin >> X[l][c];
            soma_linhas[l] += X[l][c];
            soma_colunas[c] += X[l][c];
      }
   }
   
   maior = 0;
   for (int l = 0; l < N; l++) {
      for(int c = 0; c < N; c++) {
         soma = soma_linhas[l] + soma_colunas[c] - 2*X[l][c]; 								
         if(soma > maior) {
            maior = soma;
         }
      }
   }
   cout << maior << '\n';
   return 0;
}
