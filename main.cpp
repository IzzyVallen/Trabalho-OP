#include <iostream>
#include "Evento.hpp"
#include "Ingresso.hpp"
using namespace std;

void EventosCadastrados(vector <Evento> &eventos){
  for(int i = 0;i < eventos.size(); i++ ){
    cout << "Nome" << eventos[i].getNomeEvento() << endl<< "Data" << eventos[i].getData() << endl << "Local:"<< eventos[i].getLocal() << endl ;
  }
}


int main() {
  //  sites importantes para estudar:https://www.w3schools.com/cpp/cpp_constructors.asp
  // https://www.cplusplus.com/reference/vector/vector/erase/
  int op, op1;
  string nomeEvento, local;
  string data, nome;
  vector <Ingresso> ingressos;
  vector <Evento> eventos;
  int login;
  int num, num1, num3;
  bool menu = true;
  Ingresso novoIngresso;
  Pessoa comprador;

  while (menu == true)
  {
  cout << endl << "Em que parte deseja entrar? "<< endl << "1 - Produtor" << endl << "2 - Comprador" << endl << "3 - Sair do programa" << endl << "Opcao: ";
  cin >> login;
    
  if(login == 1){
  cout << "-------------  Produtor  -------------" << endl << endl;
  cout << "1 - Cadastrar eventos" << endl << "2- Deletar eventos" << endl << "3 - Detalhes eventos" << endl << "4 - Voltar menu" << endl << "Opcao: ";
  cin >> op1;
    
switch(op1){
  case 1:
    // cadastrar eventos 
    cout << "Nome do evento: ";
    cin >> nomeEvento;
    cout << "Local do evento: ";
    cin >> local;
    cout << "Data do evento: ";
    cin >> data;
    eventos.push_back(Evento(nomeEvento, local, data));
    break;
  case 2:
//cancelar 
    cout << "Escolha qual evento deseja deletar ";
    cin >> num;
    eventos.erase (eventos.begin()+num);
    break;
  case 3:
  // ver eventos cadastrados 
    cout << "--------------------------------" << endl << endl;
    EventosCadastrados(eventos);
    cout << "--------------------------------" << endl << endl;
    break;
  case 4:
    break;
  }
    }
  else if(login == 2)
  {
    cout << "-------------  Comprador  -------------" << endl << endl;
    cout << "1 - Mstrar eventos" << endl << "2 - Comprar ingressos" << endl << "3 - Devolução de Ingresso" << endl << "4 - Voltar menu" << endl << "Opcao: ";
    cin >> op;
   
switch (op)
{
  case 1:
    cout << "--------------------------------" << endl << endl;
    EventosCadastrados(eventos);
    cout << "--------------------------------" << endl << endl;
    break;
  
  case 2:
    cout << "Escolha um evento";
    cin >> num1;
    eventos.at(num1); 
    cout << "Informe o nome do comprador: ";
    cin >> nome;
    comprador.setNome(nome);  
    novoIngresso.setProprietario(comprador); 
  //Adicionar o ingresso no Vetor
    ingressos.push_back(novoIngresso);
    cout << "O numero do seu ingresso" << ingressos.size() << endl;;
    break;
  
  //Devolução Ingresso
  case 3:
    cout << "Insira o numero do seu igresso?";
    cin >> num3;
    ingressos.erase(ingressos.begin()+num3);
    break;
  
    case 4:
     break;
  }
    
    }
    else
  {
  menu = false;    
    }
    }


}
