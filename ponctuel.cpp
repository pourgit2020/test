#include "ponctuel.h"

Ponctuel::Ponctuel(std::string nom, int le_salaire):Employee(nom) {
  this->salaire_hebdomadaire = le_salaire;
}
