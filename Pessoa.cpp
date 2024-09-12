#include "Data.cpp"
#include "Endereco.cpp"
#include <iostream>
using namespace std;

class Pessoa {
private:
  string nome;
  string sobrenome;
  // de outras classes
  const Data nascimento;
  Endereco endereco;

public:
  static int quantidade;
  // destrutor
  ~Pessoa() {}

  // construtor prametrizado
  Pessoa(string nome, string sobrenome, int dia, int mes, int ano,
         Endereco endereco)
      : nome{nome}, sobrenome{sobrenome},
        nascimento{dia, mes, ano}, endereco{endereco} {
    this->quantidade++;
  }

  string getNomeCompleto() { return nome + " " + sobrenome; }
  string getDataNascimento() { return nascimento.getData(); }
  string getEndereco() { return endereco.getEndereco(); }

  // exibe dados
  void exibeDados() {
    cout << "Nome: " << nome << " " << sobrenome << endl;
    cout << "Endereco: " << endereco.getEndereco() << endl;
    cout << "Data de nascimento: " << nascimento.getData() << endl;
    cout << "----------------------------" << endl;
  }
};
