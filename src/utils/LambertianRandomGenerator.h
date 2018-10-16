// -----------------------------------------------------------------------------
// File    : LambertianRandomGenerator.h
// Info    : Random generator of directions following a Lambertian distribution.
// Author  : Justo Martin-Albo
// Created : 12 Oct 2018
// -----------------------------------------------------------------------------

#ifndef LAMBERTIAN_RANDOM_GENERATOR
#define LAMBERTIAN_RANDOM_GENERATOR

#include <G4ThreeVector.hh>


class LambertianRandomGenerator
{
public:
  LambertianRandomGenerator();

  ~LambertianRandomGenerator();

  G4ThreeVector GetDirection();

private:
  G4ThreeVector tv1_, tv2_, nv_; // Unit vectors defining the emission plane
};

#endif
