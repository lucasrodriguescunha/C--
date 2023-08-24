// - Fazer um programa que leia uma matriz de números inteiros de tamanho M x N tal que M
// <= 20 e N<=25. O usuário deve informar o tamanho da matriz que deseja utilizar. O programa
// deve então:
// 1. Calcular sua matriz transposta;
// 2. Calcular a multiplicação da matriz por um fator K informado pelo usuário;
// 3. Realizar a adição com uma segunda matriz informada pelo usuário.

#include <iostream>

using namespace std;

// Função para ler uma matriz MxN
void lerMatriz(int matriz[][25], int linhas, int colunas)
{
    cout << "Digite os elementos da matriz:" << endl;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cin >> matriz[i][j];
        }
    }
}

// Função para imprimir uma matriz MxN
void imprimirMatriz(int matriz[][25], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Função para calcular a matriz transposta
void calcularTransposta(int matriz[][25], int transposta[][25], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            transposta[j][i] = matriz[i][j];
        }
    }
}

// Função para multiplicar a matriz por um fator K
void multiplicarPorFator(int matriz[][25], int resultado[][25], int linhas, int colunas, int fator)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            resultado[i][j] = matriz[i][j] * fator;
        }
    }
}

// Função para realizar a adição de duas matrizes
void adicionarMatrizes(int matriz1[][25], int matriz2[][25], int resultado[][25], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main()
{
    int M, N, K;

    cout << "Digite o número de linhas da matriz: ";
    cin >> M;

    cout << "Digite o número de colunas da matriz: ";
    cin >> N;

    int matriz[M][25];
    int transposta[25][M];
    int resultadoMultiplicacao[M][25];
    int matriz2[M][25];
    int resultadoAdicao[M][25];

    lerMatriz(matriz, M, N);

    cout << "Digite o fator K para multiplicação: ";
    cin >> K;

    cout << "Digite os elementos da segunda matriz:" << endl;
    lerMatriz(matriz2, M, N);

    calcularTransposta(matriz, transposta, M, N);
    multiplicarPorFator(matriz, resultadoMultiplicacao, M, N, K);
    adicionarMatrizes(matriz, matriz2, resultadoAdicao, M, N);

    cout << "Matriz Transposta:" << endl;
    imprimirMatriz(transposta, N, M);

    cout << "Resultado da Multiplicação por K:" << endl;
    imprimirMatriz(resultadoMultiplicacao, M, N);

    cout << "Resultado da Adição:" << endl;
    imprimirMatriz(resultadoAdicao, M, N);

    return 0;
}