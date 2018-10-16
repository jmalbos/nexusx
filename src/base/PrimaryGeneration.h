// -----------------------------------------------------------------------------
// File    : PrimaryGeneration.h
// Info    :
// Author  : Justo Martin-Albo
// Created : 13 Oct 2018
// -----------------------------------------------------------------------------

#ifndef PRIMARY_GENERATION_H
#define PRIMARY_GENERATION_H

#include <G4VUserPrimaryGeneratorAction.hh>

class G4VPrimaryGenerator;


class PrimaryGeneration: public  G4VUserPrimaryGeneratorAction
{
public:
  PrimaryGeneration();
  virtual ~PrimaryGeneration();

  virtual void GeneratePrimaries(G4Event*);

  //
  void SetPrimaryGenerator(G4VPrimaryGenerator*);
  //
  const G4VPrimaryGenerator* GetPrimaryGenerator() const;

private:
  G4VPrimaryGenerator* generator_;
};

////////////////////////////////////////////////////////////////////////////////

inline void PrimaryGeneration::SetPrimaryGenerator(G4VPrimaryGenerator* p)
{ generator_ = p;}

inline const G4VPrimaryGenerator* PrimaryGeneration::GetPrimaryGenerator() const
{ return generator_; }

#endif
