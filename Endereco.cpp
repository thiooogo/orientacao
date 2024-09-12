#include <iostream>
using namespace std;

class Endereco {
private:
  string rua;
  string bairro;
  int numero;

public:
  Endereco() {}
  Endereco(string rua, string bairro, int numero) {
    this->rua = rua;
    this->bairro = bairro;
    this->numero = numero;
  }
  string getEndereco() { return rua + " " + to_string(numero) + " " + bairro; }
};