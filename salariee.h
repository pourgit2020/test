#ifndef __SALARIEE_H__
#define __SALARIEE_H__

#include "employee.h"

class Salariee : public Employee {
  protected:
    int salaire_hebdomadaire;
  public:
    Salariee(std::string nom, int le_salaire);
};

#endif // __SALARIEE_H__
