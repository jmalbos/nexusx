// -----------------------------------------------------------------------------
// File    : XenonSphere.h
// Info    :
// Author  : Justo Martin-Albo
// Created : 9 Oct 2018
// -----------------------------------------------------------------------------

#ifndef XENON_SPHERE_H
#define XENON_SPHERE_H

#include "GeometryBase.h"
#include <G4Types.hh>

class G4GenericMessenger;


class XenonSphere: public GeometryBase
{
public:
  // Constructor
  XenonSphere();
  // Destructor
  virtual ~XenonSphere();

  virtual void Construct();

private:
  G4GenericMessenger* msg_;
  G4double radius_;
  G4double density_;
};

#endif
