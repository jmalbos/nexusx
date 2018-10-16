// -----------------------------------------------------------------------------
// File    : PrimaryGeneration.cpp
// Author  : Justo Martin-Albo
// Created : 13 Oct 2018
// -----------------------------------------------------------------------------

#include "PrimaryGeneration.h"

#include <G4VPrimaryGenerator.hh>


PrimaryGeneration::PrimaryGeneration():
  G4VUserPrimaryGeneratorAction(), generator_(0)
{}

PrimaryGeneration::~PrimaryGeneration()
{
  delete generator_;
}

void PrimaryGeneration::GeneratePrimaries(G4Event* event)
{
  generator_->GeneratePrimaryVertex(event);
}
