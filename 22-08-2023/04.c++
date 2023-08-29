// Exercício 4: Fazer um programa em C++ que leia uma matriz inteira de dimensões M x N (M<=20, N<=25), onde M e N são lidos. Calcule e escreva: 

// - A matriz transposta 

// - A multiplicação da matriz por um fator K informado pelo usuário; 

// - A adição com uma segunda matriz informada pelo usuário; 

// As matrizes informadas pelo usuário não devem ser alteradas. 

// O programa deve utilizar pelo menos uma função para ler os valores a serem  armazenados nas matrizes, uma função para calcular a matriz transposta, uma função  para calcular a multiplicação por K e uma função para fazer a adição das matrizes. 


#include <iostream>

using namespace std;

void lerMatriz(int m, int n, int matriz[][n]) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << "Digite o elemento [" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }
  }
}

void transposta(int m, int n, int matriz[][n], int transposta[][m]) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      transposta[j][i] = matriz[i][j];
    }
  }
}

void multiplicacao(int m, int n, int matriz[][n], int k, int multiplicada[][n]) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      multiplicada[i][j] = matriz[i][j] * k;
    }
  }
}

void soma(int m, int n, int matriz1[][n], int matriz2[][n], int soma[][n]) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      soma[i][j] = matriz1[i][j] + matriz2[i][j];
    }
  }
}

int main() {
  int m, n;
  int matriz1[20][25], matriz2[20][25], transposta[20][25], multiplicada[20][25], soma[20][25];

  cout << "Digite o número de linhas da matriz: ";
  cin >> m;
  cout << "Digite o número de colunas da matriz: ";
  cin >> n;

  lerMatriz(m, n, matriz1);

  cout << "Matriz original:" << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << matriz1[i][j] << " ";
    }
    cout << endl;
  }

  // Matriz transposta

  transposta(m, n, matriz1, transposta);

  cout << "Matriz transposta:" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << transposta[i][j] << " ";
    }
    cout << endl;
  }

  // Matriz multiplicada por K

  int k;
  cout << "Digite um valor para K: ";
  cin >> k;

  multiplicacao(m, n, matriz1, k, multiplicada);

  cout << "Matriz multiplicada por K:" << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << multiplicada[i][j] << " ";
    }
    cout << endl;
  }

  // Matriz somada com uma segunda matriz

  cout << "Digite os elementos da segunda matriz:" << endl;
  lerMatriz(m, n, matriz2);

  soma(m, n, matriz1, matriz2, soma);

  cout << "Matriz somada com uma segunda matriz:" << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << soma[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}