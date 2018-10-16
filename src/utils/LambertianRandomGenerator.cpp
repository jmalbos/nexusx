// -----------------------------------------------------------------------------
// File    : LambertianRandomGenerator.cpp
// Author  : Justo Martin-Albo
// Created : 12 Oct 2018
// -----------------------------------------------------------------------------

#include "LambertianRandomGenerator.h"

#include <Randomize.hh>
#include <G4PhysicalConstants.hh>


LambertianRandomGenerator::LambertianRandomGenerator()
{
  tv1_.set(1.,0.,0.);
  tv2_.set(0.,1.,0.);
   nv_.set(0.,0.,1.);
}

LambertianRandomGenerator::~LambertianRandomGenerator()
{}


G4ThreeVector LambertianRandomGenerator::GetDirection()
{
  G4double sin_theta = std::sqrt(G4UniformRand());
  G4double cos_theta = std::sqrt(1.-sin_theta*sin_theta);
  G4double phi = G4UniformRand() * 2.*pi;

  G4double a = sin_theta * std::cos(phi);
  G4double b = sin_theta * std::sin(phi);
  G4double c = cos_theta;

  G4ThreeVector rndv;
  for (int i=0; i<3; ++i) {
    rndv[i] = a * tv1_[i] + b * tv2_[i] + c * nv_[i];
  }

  return rndv;
}
