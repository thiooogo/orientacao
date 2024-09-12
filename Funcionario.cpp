#include "Pessoa.cpp"
#include <iostream>

class Funcionario : public Pessoa {
private:
  int cadastro;
  double salario;

public:
  Funcionario(int cadastro, double salario, string nome, string sobrenome, 
    int dia, int mes, int ano, Endereco endereco)
      : Pessoa(nome, sobrenome, dia, mes, ano, endereco), cadastro{cadastro},
        salario{salario} {}

  int getCadastro(){return cadastro;}
  double getSalario(){return salario;}
  void setSalario(double salario){
    this->salario = salario;
  }
};