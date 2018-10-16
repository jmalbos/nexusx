// -----------------------------------------------------------------------------
// File    : MaterialDatabase.cpp
// Author  : Justo Martin-Albo
// Created : 15 Oct 2018
// -----------------------------------------------------------------------------

#include "MaterialDatabase.h"

#include <G4Material.hh>
#include <G4NistManager.hh>
#include <G4SystemOfUnits.hh>


namespace MaterialDatabase
{

  G4Material* MuMetal()
  {
    G4String name = "MU-METAL";

    // Check whether material was defined already
    G4Material* material = G4Material::GetMaterial(name, false);

    if (!material) {
      material = new G4Material(name, 8.74*g/cm3, 4, kStateSolid);

      G4Element* Ni = G4NistManager::Instance()->FindOrBuildElement("Ni");
      material->AddElement(Ni, 0.80);

      G4Element* Fe = G4NistManager::Instance()->FindOrBuildElement("Fe");
      material->AddElement(Fe, 0.15);

      G4Element* Mo = G4NistManager::Instance()->FindOrBuildElement("Mo");
      material->AddElement(Mo, 0.05);
    }

    return material;
  }

} // namespace MaterialDatabase
