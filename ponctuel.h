#ifndef __PONCTUEL_H__
#define __PONCTUEL_H__

#include "employee.h"

class Ponctuel : public Employee {
  protected:
    int salaire_hebdomadaire;
  public:
    Ponctuel(std::string nom, int le_salaire);
};

#endif // __PONCTUEL_H__
