// -----------------------------------------------------------------------------
// File    : ParticleGun.h
// Info    :
// Author  : Justo Martin-Albo
// Created : 15 Oct 2018
// -----------------------------------------------------------------------------

#ifndef PARTICLE_GUN_H
#define PARTICLE_GUN_H

#include <G4VPrimaryGenerator.hh>

class G4GenericMessenger;
class G4ParticleDefinition;


class ParticleGun: public G4VPrimaryGenerator
{
public:
  // Constructor
  ParticleGun();
  // Destructor
  virtual ~ParticleGun();

  virtual void GeneratePrimaryVertex(G4Event*);

private:
  void SetParticleDefinition(G4int);

private:
  G4GenericMessenger* msg_;
  G4ParticleDefinition* particle_def_;
  G4double kinetic_energy_;
};

#endif
