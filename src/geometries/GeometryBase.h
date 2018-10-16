// -----------------------------------------------------------------------------
// File    : GeometryBase.h
// Info    : Abstract base class for the encapsulation of detector geometries.
// Author  : Justo Martin-Albo
// Created : 9 Oct 2018
// -----------------------------------------------------------------------------

#ifndef GEOMETRY_BASE_H
#define GEOMETRY_BASE_H

class G4LogicalVolume;

class GeometryBase
{
public:
  // The different volumes that form the geometry must be created in this
  // method. It will be invoked during the detector initialization phase.
  virtual void Construct() = 0;

  // Get a pointer to the uppermost logical volume of the geometry
  G4LogicalVolume* GetLogicalVolume() const;

  // Constructor
  GeometryBase();
  // Destructor
  virtual ~GeometryBase();

protected:
  void SetLogicalVolume(G4LogicalVolume*);

private:
  G4LogicalVolume* logvol_; // Pointer to the geometry's logical volume
};

////////////////////////////////////////////////////////////////////////////////

inline GeometryBase::GeometryBase(): logvol_(0) {}

inline GeometryBase::~GeometryBase() {}

inline G4LogicalVolume* GeometryBase::GetLogicalVolume() const { return logvol_; }

inline void GeometryBase::SetLogicalVolume(G4LogicalVolume* p) { logvol_ = p; }

#endif
