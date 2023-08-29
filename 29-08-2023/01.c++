// Você foi contratado para desenvolver um sistema simples de registro de operações realizadas na bolsa de valores. O sistema deve permitir que o usuário registre operações de compra e venda de ações, armazenando informações como o Ticket da empresa, a quantidade de ações em carteira e o preço médio por ação. Você deverá exibir ao usuário um menu para ele selecionar o que deseja fazer. As opções são:

// "Registrar compra" - Solicita ao usuário informações do ticket (cadeia de caracteres de até 6 letras, ex: ITSA4, TAEE11, BBAS3), quantidade comprada e valor do ativo no momento da compra.
// "Registrar Venda" - Solicita ao usuário informações do ticket, quantidade vendida e valor do ativo no momento da venda. Uma venda só pode ser registrada, caso o exista saldo para a venda.
// "Ver o saldo de um ativo (Busca por Ticket)" - Listar o saldo do ativo juntamente com o preço médio
// "Listar Patrimonio" - Listar todos os ativos do investidor juntamente com a quantidade e o preço médio.
// "Sair" - Fecha a aplicação
// Em cada compra realizada o preço médio será modificado, o mesmo não ocorre para a venda, onde apenas a quantidade será modificada.

// Sua solução deve contemplar os seguintes requisitos:

// Uso de Struct
// Uso de Funções e Procedures
// Uso de Recursividade (Implemente a busca binária para a consulta dos ativos)

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Ativo
{
  string ticket;
  int quantidade;
  double precoMedio;
};

vector<Ativo> portfolio;

int buscaBinaria(const string &ticket, int left, int right)
{
  if (right >= left)
  {
    int mid = left + (right - left) / 2;

    if (portfolio[mid].ticket == ticket)
      return mid;

    if (portfolio[mid].ticket > ticket)
      return buscaBinaria(ticket, left, mid - 1);

    return buscaBinaria(ticket, mid + 1, right);
  }

  return -1;
}

void registrarCompra()
{
  Ativo novoAtivo;
  cout << "Digite o ticket da empresa: ";
  cin >> novoAtivo.ticket;
  cout << "Digite a quantidade comprada: ";
  cin >> novoAtivo.quantidade;
  cout << "Digite o valor do ativo no momento da compra: ";
  double valorCompra;
  cin >> valorCompra;
  novoAtivo.precoMedio = valorCompra;

  portfolio.push_back(novoAtivo);
  cout << "Compra registrada com sucesso!\n";
}

void registrarVenda()
{
  string ticket;
  cout << "Digite o ticket da empresa: ";
  cin >> ticket;

  int index = buscaBinaria(ticket, 0, portfolio.size() - 1);

  if (index == -1)
  {
    cout << "Ativo nao encontrado.\n";
    return;
  }

  int quantidadeVendida;
  cout << "Digite a quantidade vendida: ";
  cin >> quantidadeVendida;

  if (quantidadeVendida > portfolio[index].quantidade)
  {
    cout << "Quantidade insuficiente para a venda.\n";
    return;
  }

  double valorVenda;
  cout << "Digite o valor do ativo no momento da venda: ";
  cin >> valorVenda;

  portfolio[index].quantidade -= quantidadeVendida;

  cout << "Venda registrada com sucesso!\n";
}

void verSaldoAtivo()
{
  string ticket;
  cout << "Digite o ticket da empresa: ";
  cin >> ticket;

  int index = buscaBinaria(ticket, 0, portfolio.size() - 1);

  if (index == -1)
  {
    cout << "Ativo nao encontrado.\n";
    return;
  }

  cout << "Ticket: " << portfolio[index].ticket << "\n";
  cout << "Quantidade: " << portfolio[index].quantidade << "\n";
  cout << "Preço Médio: " << portfolio[index].precoMedio << "\n";
}

void listarPatrimonio()
{
  cout << "Lista de Patrimonio:\n";
  for (const Ativo &ativo : portfolio)
  {
    cout << "Ticket: " << ativo.ticket << "\n";
    cout << "Quantidade: " << ativo.quantidade << "\n";
    cout << "Preço Medio: " << ativo.precoMedio << "\n";
    cout << "-----------------------\n";
  }
}

int main()
{
  int escolha;
  while (true)
  {
    cout << "Menu:\n";
    cout << "1. Registrar compra\n";
    cout << "2. Registrar venda\n";
    cout << "3. Ver saldo de um ativo\n";
    cout << "4. Listar patrimonio\n";
    cout << "5. Sair\n";
    cout << "Escolha uma opcao: ";
    cin >> escolha;

    switch (escolha)
    {
    case 1:
      registrarCompra();
      break;
    case 2:
      registrarVenda();
      break;
    case 3:
      verSaldoAtivo();
      break;
    case 4:
      listarPatrimonio();
      break;
    case 5:
      return 0;
    default:
      cout << "Opção invalida.\n";
    }
  }

  return 0;
}
