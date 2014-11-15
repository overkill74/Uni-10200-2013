#include "mainwindow.h"
#include <QApplication>
#include <string>
#include <iostream>
#include "Engine.h"
#include "radiatore.h"

using namespace std;

static Engine m_eng;

int main(int argc, char *argv[])
{
  cout << "Scrivo ergo sono" << endl;

  QApplication a(argc, argv);

  cout << __LINE__ << endl;

  m_eng.createCondominio(string("Nome Condominio"), string("Indirizzo"), string("Citta"));
  cout << __LINE__ << endl;
  m_eng.addUser(string("Utente 1"), string("A"), 0);
  m_eng.addUser(string("Utente 2"), string("A"), 0);
  m_eng.addUser(string("Utente 3"), string("A"), 1);

  cout << __LINE__ << endl;
  Radiatore* r1 = m_eng.allocRadiatore();
  r1->m_descrizione = string("Radiatore 1234");
  r1->m_lungh = 100;
  r1->m_alt = 200;
  r1->m_prof = 50;
  r1->m_interasse = 25;
  r1->m_potenza = 2500;
  r1->m_code_rip = string("123456");
  r1->m_locale = string("cucina");
  m_eng.addRadiatore(std::string("Utente 1"), r1);

  cout << __LINE__ << endl;
  Radiatore* r2 = m_eng.allocRadiatore();
  r2->m_descrizione = string("Radiatore abc");
  r2->m_lungh = 102;
  r2->m_alt = 202;
  r2->m_prof = 52;
  r2->m_interasse = 225;
  r2->m_potenza = 2502;
  r2->m_code_rip = string("123457");
  r2->m_locale = string("sala");
  m_eng.addRadiatore(string("Utente 1"), r2);

  cout << __LINE__ << endl;
  m_eng.addRadiatore(string("Utente 2"), r1);
  m_eng.addRadiatore(string("Utente 2"), r1);
  m_eng.addRadiatore(string("Utente 2"), r2);

  cout << __LINE__ << endl;
  m_eng.addRadiatore(string("Utente 3"), r2);
  m_eng.addRadiatore(string("Utente 3"), r2);
  m_eng.addRadiatore(string("Utente 3"), r2);

  cout << __LINE__ << endl;
  string str;
  str.clear();
  m_eng.getReportUser(string("Utente 1"), str);
  cout << str;

  cout << __LINE__ << endl;
  str.clear();
  m_eng.getReportUser(string("Utente 2"), str);
  cout << str;

  cout << __LINE__ << endl;
  str.clear();
  m_eng.getReportUser(string("Utente 3"), str);
  cout << str << endl;

//  MainWindow w;
//  w.show();

 // return a.exec();
  cout << __LINE__ << endl;
  return 0;
}
