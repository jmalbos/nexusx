// -----------------------------------------------------------------------------
// File    : nexus.cpp
//
// Author  : Justo Martin-Albo
// Created : 10 Oct 2018
// -----------------------------------------------------------------------------

#include <G4RunManager.hh>
#include <G4UImanager.hh>
#include <QBBC.hh>
#include <G4VisManager.hh>
#include <G4UImanager.hh>
#include <G4VisExecutive.hh>

#include "DetectorConstruction.h"
#include "PrimaryGeneration.h"
#include "ParticleGun.h"
#include "XenonSphere.h"


int main(/*int argc, char const *argv[]*/)
{
  G4RunManager* runmgr = new G4RunManager();

  runmgr->SetUserInitialization(new QBBC());

  PrimaryGeneration* gen = new PrimaryGeneration();
  gen->SetPrimaryGenerator(new ParticleGun());

  DetectorConstruction* det = new DetectorConstruction();
  det->SetGeometry(new XenonSphere());
  runmgr->SetUserInitialization(det);



  runmgr->SetUserAction(new PrimaryGeneration());


  G4VisManager* vismgr = new G4VisExecutive();
  vismgr->Initialize();

  G4UImanager* uimgr = G4UImanager::GetUIpointer();
  if (!uimgr) {
    //G4String command = "/control/execute ";
    //G4String fileName = argv[1];
    //uimgr->ApplyCommand(command+fileName);
    uimgr->ApplyCommand("/run/beamOn 1");
  }
  else {
    //uimgr->ApplyCommand("/control/execute init_vis.mac");
    //vismgr->SessionStart();
    delete uimgr;
  }

  // Job termination
  // Free the store: user actions, physics_list and detector_description are
  // owned and deleted by the run manager, so they should not be deleted
  // in the main() program.
  delete vismgr;
  delete runmgr;

  return EXIT_SUCCESS;
}
