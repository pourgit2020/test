#include <iostream>
#include "employee.h"
#include "salariee.h"
#include "contractuelle.h"
#include "concierge.h"
#include "mecanicienne.h"
#include "chargeedecours.h"
#include "correctrice.h"

int main() {
  // Tableau des employéEs
  Employee* nos_employees[5];

  // Création des employéEs.
  Concierge bob("Bob", 600);
  Mecanicienne lisa("Lisa", 800);
  ChargeeDeCours alice("Alice", 8000, 15);
  Correctrice eve("Eve", 1000, 2);
  Mecanicienne hamza("Hamza", 850);

  // Ajout des employéEs au tableau.
  nos_employees[0] = &bob; // Employee* = Concierge*
  nos_employees[1] = &lisa; // Employee* = Mecanicienne*
  nos_employees[2] = &alice; // Employee* = ChargeeDeCours*
  nos_employees[3] = &eve; // Employee* = Correctrice*
  nos_employees[4] = &hamza; // Employee* = Mecanicienne*

  // Calcul de la paie et affichage des montants individuels.
  int total_paie = 0;
  for (int i=0 ; i<5 ; i++) {
    total_paie = total_paie + nos_employees[i]->getPaie();
  }
  
  // Affichage de la paie totale. 
  std::cout << std::endl;
  std::cout << "La paie totale cette semaine est de " << total_paie << "." << std::endl;
}
