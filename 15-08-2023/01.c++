// Exercício 1:

// Escreva um programa que utilize um vetor de no máximo 50 alunos, contendo matrícula  e nome, que faça a leitura dos dados e os apresente em seguida na tela. O aluno deve ser  determinado através de um struct e seu nome deve ter no máximo 100 caracteres.

#include <iostream> // biblioteca para entrada e saída de dados: cout e cin
#include <string.h> // biblioteca para manipulação de strings: strcpy

using namespace std; // para não precisar escrever std::cout e std::cin

struct aluno // struct para armazenar os dados do aluno
{
  int matricula;  // matricula do aluno
  char nome[100]; // nome do aluno
};

int main() // função principal
{
  aluno alunos[50]; // vetor de alunos
  int i, n;         // variáveis auxiliares

  cout << "Digite o numero de alunos: "; // pede o número de alunos
  cin >> n;                              // lê o número de alunos

  for (i = 0; i < n; i++) // laço para ler os dados dos alunos
  {
    cout << "Digite a matricula do aluno " << i + 1 << ": "; // pede a matricula do aluno
    cin >> alunos[i].matricula;                              // lê a matricula do aluno
    cout << "Digite o nome do aluno " << i + 1 << ": ";      // pede o nome do aluno
    cin >> alunos[i].nome;                                   // lê o nome do aluno
  }

  cout << "\nAlunos cadastrados:\n " << endl; // imprime os dados dos alunos
  for (i = 0; i < n; i++)                     // laço para imprimir os dados dos alunos
  {
    cout << "Matricula: " << alunos[i].matricula << endl; // imprime a matricula do aluno
    cout << "Nome: " << alunos[i].nome << endl;           // imprime o nome do aluno
    cout << " " << endl;                                  // pula uma linha
  }

  return 0; // retorna 0 para a função main
}