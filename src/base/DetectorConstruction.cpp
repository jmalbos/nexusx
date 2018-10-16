// -----------------------------------------------------------------------------
// File    : DetectorConstruction.cpp
// Author  : Justo Martin-Albo
// Created : 13 Oct 2018
// -----------------------------------------------------------------------------

#include "DetectorConstruction.h"

#include "GeometryBase.h"

#include <G4SystemOfUnits.hh>
#include <G4Box.hh>
#include <G4NistManager.hh>
#include <G4LogicalVolume.hh>
#include <G4PVPlacement.hh>
#include <G4VisAttributes.hh>


DetectorConstruction::DetectorConstruction():
  G4VUserDetectorConstruction(), geometry_(0)
{
}


DetectorConstruction::~DetectorConstruction()
{
  delete geometry_;
}


G4VPhysicalVolume* DetectorConstruction::Construct()
{
  // Check that a detector geometry was already set
  if (!geometry_) {
    G4Exception("DetectorConstruction::Construct()", "", FatalException,
      "Geometry not set!");
  }

  // At this point the user should have loaded the configuration parameters
  // of the geometry or it will get built with the default values.
  geometry_->Construct();

  // We define now the world volume as an empty box big enough
  // to fit the user's geometry inside.
  G4double size = 1.;//geometry_->GetSpan();

  G4String name = "WORLD";

  G4Box* world_solid_vol = new G4Box(name, size/2., size/2., size/2.);

  G4Material* vacuum =
    G4NistManager::Instance()->FindOrBuildMaterial("G4_Galactic");

  G4LogicalVolume* world_logic_vol =
    new G4LogicalVolume(world_solid_vol, vacuum, name, 0, 0, 0, true);

  world_logic_vol->SetVisAttributes(G4VisAttributes::Invisible);

  G4PVPlacement* world_phys_vol =
    new G4PVPlacement(0, G4ThreeVector(), world_logic_vol, name, 0, false, 0);

  // We place the user's geometry in the center of the world

  G4LogicalVolume* geom_logic_vol = geometry_->GetLogicalVolume();

  new G4PVPlacement(0, G4ThreeVector(0,0,0),
		    geom_logic_vol, geom_logic_vol->GetName(), world_logic_vol, false, 0);

  return world_phys_vol;
}
