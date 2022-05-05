#include "Evento.hpp"

Evento::Evento(string n, string d, string l){
  m_nomeEvento = n;
  m_data = d;
  m_local = l;
}

  string Evento::getNomeEvento()
{
 return m_nomeEvento;
}
    string Evento::getData()
{
  return m_data;
}
    string Evento::getLocal()
{
  return m_local;
}
