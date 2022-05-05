using namespace std;
#include <iostream>
#include <string>
#include <vector>

class Evento{
  private:
    string m_nomeEvento;
    string m_data;
    string m_local;

  public:
    string getNomeEvento();
    string getData();
    string getLocal();
    Evento(string n, string d, string l);
 



};
