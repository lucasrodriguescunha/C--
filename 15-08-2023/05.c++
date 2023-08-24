// Exercício 5:

// Faça um procedimento que recebe a idade de um nadador por parâmetro e informa a  categoria desse nadador de acordo com a tabela abaixo:

// IDADE

// CATEGORIA

// 5 a 7 anos

// Infantil A

// 8 a 10 anos

// Infantil B

// 11-13 anos

// Juvenil A

// 14-17 anos

// Juvenil B

// Maiores de 18 anos (inclusive)

// Adulto

#include <iostream> // cout, cin

using namespace std; // std::cout, std::cin

void categorizarNadador(int idade)
{ // void = não retorna nada
  if (idade >= 5 && idade <= 7)
  {                                          // && = e
    cout << "Categoria: Infantil A" << endl; // endl = quebra de linha
  }
  else if (idade >= 8 && idade <= 10)
  {                                          // else if = senão se
    cout << "Categoria: Infantil B" << endl; // cout = escrever na tela
  }
  else if (idade >= 11 && idade <= 13)
  {                                         // || = ou
    cout << "Categoria: Juvenil A" << endl; // << = inserir na tela
  }
  else if (idade >= 14 && idade <= 17)
  {                                         // >= = maior ou igual
    cout << "Categoria: Juvenil B" << endl; // <= = menor ou igual
  }
  else if (idade >= 18)
  {                                      // == = igual
    cout << "Categoria: Adulto" << endl; // != = diferente
  }
  else
  {                                                      // else = senão
    cout << "Idade inválida para categorização" << endl; // {} = bloco de código
  }
}

int main()
{
  int idade;                             // int = inteiro
  cout << "Digite a idade do nadador: "; // << = inserir na tela
  cin >> idade;                          // cin = ler do teclado

  categorizarNadador(idade); // chama a função categorizarNadador

  return 0;
}
