#include "Funcionario.cpp"
#include "MinhasExcecoes.cpp"
#include <iostream>
using namespace std;

int Pessoa::quantidade = 0;
int main() {
  Endereco e1("Rua Tangaras", "Flambs", 170);
  Endereco e2("Rua Hibiscus", "Fontes", 300);

  Funcionario f1(123, 2500.67, "Thiago", "Blumer", 24, 11, 2003, e1);
  Funcionario f2(456, 3567.89, "Aline", "Camargo", 17, 12, 2003, e2);

  Pessoa *pessoas[2];
  pessoas[0] = &f1;
  pessoas[1] = &f2;

  for (int i = 0; i < 2; i++) {
    cout << "Nome: " << pessoas[i]->getNomeCompleto() << endl;
    cout << "Data de nascimento: " << pessoas[i]->getDataNascimento() << endl;
    cout << "Endereco: " << pessoas[i]->getEndereco() << endl;
    cout << "--------------------------" << endl;
  }

  int dia, mes, ano;

while(true){
  try{
    cout << "Informe o dia: ";
    cin >> dia;
    cout << "Informe o mes: ";
    cin >> mes;
    cout << "Informe o ano: ";
    cin >> ano;

    if(dia<1 || dia>31){
      throw MinhasExcecoes("Dia invalido");
    }if (mes<1 || mes>12){
      throw MinhasExcecoes("Mes invalido");
    }if(ano<0){
      throw MinhasExcecoes("Ano invalido");
    }

    Data d(dia,mes,ano);
    cout << d.getData() << endl;
    break;
  }catch(MinhasExcecoes e){
    cout<< e.mensagem << endl;
  }
}
}