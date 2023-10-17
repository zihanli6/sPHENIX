#include "PdbCalBank.h"

#include <TSystem.h>

#include <iostream>

class PHObject;

PHObject* PdbCalBank::CloneMe() const
{
  std::cout << "Mandatory CloneMe method not implemented, exiting" << std::endl;
  gSystem->Exit(1);
  return nullptr;
}
