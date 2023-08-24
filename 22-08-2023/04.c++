#include <iostream>

using namespace std;

void lerMatriz(int M, int N, int matriz[M][N])
{
  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cout << "Digite o valor da posicao (" << i << "," << j << "): ";
      cin >> matriz[i][j];
    }
  }
}

void imprimirMatriz(int M, int N, int matriz[M][N])
{
  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }
}

int **transposta(int M, int N, int matriz[M][N])
{
  int **transposta = new int *[N];
  for (int i = 0; i < N; i++)
  {
    transposta[i] = new int[M];
    for (int j = 0; j < M; j++)
    {
      transposta[i][j] = matriz[j][i];
    }
  }
  return transposta;
}

int **multiplicar(int M, int N, int K, int matriz[M][N])
{
  int **novaMatriz = new int *[M];
  for (int i = 0; i < M; i++)
  {
    novaMatriz[i] = new int[N];
    for (int j = 0; j < N; j++)
    {
      novaMatriz[i][j] = matriz[i][j] * K;
    }
  }
  return novaMatriz;
}

int **somar(int M, int N, int matriz1[M][N], int matriz2[M][N])
{
  int **novaMatriz = new int *[M];
  for (int i = 0; i < M; i++)
  {
    novaMatriz[i] = new int[N];
    for (int j = 0; j < N; j++)
    {
      novaMatriz[i][j] = matriz1[i][j] + matriz2[i][j];
    }
  }
  return novaMatriz;
}

int main()
{
  int M, N, K;
  int matriz[20][25], matrizTransposta[25][20], novaMatriz[20][25], novaMatriz2[20][25];

  cout << "Digite a dimensao M: ";
  cin >> M;

  cout << "Digite a dimensao N: ";
  cin >> N;

  lerMatriz(M, N, matriz);

  cout << "Matriz original: " << endl;
  imprimirMatriz(M, N, matriz);

  matrizTransposta = transposta(M, N, matriz);

  cout << "Matriz transposta: " << endl;
  imprimirMatriz(N, M, matrizTransposta);

  cout << "Digite o fator K: ";
  cin >> K;

  novaMatriz = multiplicar(M, N, K, matriz);

  cout << "Matriz multiplicada por K: " << endl;
  imprimirMatriz(M, N, novaMatriz);

  novaMatriz2 = somar(M, N, matriz, matrizTransposta);

  cout << "Matriz somada com sua transposta: " << endl;
  imprimirMatriz(M, N, novaMatriz2);

  return 0;
}