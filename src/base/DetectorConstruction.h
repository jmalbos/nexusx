// -----------------------------------------------------------------------------
// File    : DetectorConstruction.h
// Info    : Abstract base class for the encapsulation of detector geometries.
// Author  : Justo Martin-Albo
// Created : 9 Oct 2018
// -----------------------------------------------------------------------------

#ifndef DETECTOR_CONSTRUCTION_H
#define DETECTOR_CONSTRUCTION_H

#include <G4VUserDetectorConstruction.hh>

class GeometryBase;


class DetectorConstruction: public G4VUserDetectorConstruction
{
public:
  // Constructor
  DetectorConstruction();
  // Destructor
  virtual ~DetectorConstruction();

  // Constructs and returns the physical volume that represents the
  // simulation world. Invoked by the run manager during the initialization.
  virtual G4VPhysicalVolume* Construct();

  void SetGeometry(GeometryBase*);
  const GeometryBase* GetGeometry() const;

private:
  GeometryBase* geometry_;
};

////////////////////////////////////////////////////////////////////////////////

inline void DetectorConstruction::SetGeometry(GeometryBase* p)
{ geometry_ = p; }
inline const GeometryBase* DetectorConstruction::GetGeometry() const
{ return geometry_; }

#endif
