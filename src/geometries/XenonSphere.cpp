// -----------------------------------------------------------------------------
// File    : XenonSphere.cpp
// Author  : Justo Martin-Albo
// Created : 9 Oct 2018
// -----------------------------------------------------------------------------

#include "XenonSphere.h"

#include <G4SystemOfUnits.hh>
#include <G4GenericMessenger.hh>
#include <G4Orb.hh>
#include <G4LogicalVolume.hh>
#include <G4Material.hh>
#include <G4NistManager.hh>


XenonSphere::XenonSphere():
  GeometryBase(), msg_(0), radius_(1.*m), density_(0.)
{
  msg_ = new G4GenericMessenger(this, "/Geometry/XenonSphere/",
  "Control commands of geometry XeSphere.");

  G4GenericMessenger::Command& density_cmd =
    msg_->DeclareProperty("density", density_, "Set density for xenon sphere.");
  density_cmd.SetUnitCategory("Density");
  density_cmd.SetParameterName("density", false);
  density_cmd.SetRange("density>0.");
}

XenonSphere::~XenonSphere()
{
  delete msg_;
}

void XenonSphere::Construct()
{
  G4String geom_name = "XENON_SPHERE";

  // Define solid volume as a sphere
  G4Orb* sphere_solid_vol = new G4Orb(geom_name, radius_);

  G4Material* xenon = G4NistManager::Instance()->FindOrBuildMaterial("G4_lXe");

  G4LogicalVolume* sphere_logic =
    new G4LogicalVolume(sphere_solid_vol, xenon, geom_name);
  GeometryBase::SetLogicalVolume(sphere_logic);

  // Set the logical volume of the sphere as an ionization
  // sensitive detector, i.e. position, time and energy deposition
  // will be stored for each step of any charged particle crossing
  // the volume.
//  IonizationSD* ionizsd = new IonizationSD("/XE_SPHERE");
//  G4SDManager::GetSDMpointer()->AddNewDetector(ionizsd);
//  sphere_logic->SetSensitiveDetector(ionizsd);
}
