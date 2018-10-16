// -----------------------------------------------------------------------------
// File    : ParticleGun.cpp
// Author  : Justo Martin-Albo
// Created : 15 Oct 2018
// -----------------------------------------------------------------------------

#include "ParticleGun.h"

#include <G4GenericMessenger.hh>
#include <G4Event.hh>
#include <G4RandomDirection.hh>
#include <G4Particletable.hh>
#include <G4Electron.hh>
#include <G4ThreeVector.hh>


ParticleGun::ParticleGun():
  G4VPrimaryGenerator(), msg_(0), particle_def_(0), kinetic_energy_(0.)
{
  msg_ = new G4GenericMessenger(this, "/Generator/SingleParticle/",
    "Control commands of the particle gun generator.");

  msg_->DeclareMethod("pdg_code", &ParticleGun::SetParticleDefinition, "");

  G4GenericMessenger::Command& kinetic_energy_cmd =
    msg_->DeclareProperty("kinetic_energy", kinetic_energy_,
    "Kinetic energy of the particles to be shot.");
  kinetic_energy_cmd.SetUnitCategory("Energy");
  kinetic_energy_cmd.SetParameterName("kinetic_energy", false);
  kinetic_energy_cmd.SetRange("kinetic_energy>0.");
}


ParticleGun::~ParticleGun()
{
  delete msg_;
}


void ParticleGun::SetParticleDefinition(G4int pdg_code)
{
  particle_def_ = G4ParticleTable::GetParticleTable()->FindParticle(pdg_code);
}


void ParticleGun::GeneratePrimaryVertex(G4Event* event)
{
  // Create a new vertex in the center of the world and at time t=0
  G4PrimaryVertex* vertex = new G4PrimaryVertex(G4ThreeVector(), 0.);

  // Generate random direction by default
  G4ThreeVector momentum_direction = G4RandomDirection();

  // Calculate cartesian components of momentum
  G4double mass   = particle_def_->GetPDGMass();
  G4double energy = kinetic_energy_ + mass;
  G4double pmod = std::sqrt(energy*energy - mass*mass);
  G4double px = pmod * momentum_direction.x();
  G4double py = pmod * momentum_direction.y();
  G4double pz = pmod * momentum_direction.z();

  // Create the new primary particle and set it some properties
  G4PrimaryParticle* particle =
    new G4PrimaryParticle(G4Electron::Definition(), px, py, pz);

  // Add particle to the vertex and this to the event
  vertex->SetPrimary(particle);
  event->AddPrimaryVertex(vertex);
}
