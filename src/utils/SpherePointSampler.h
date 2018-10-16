// -----------------------------------------------------------------------------
// File    : SpherePointSampler.h
// Info    : Random generator of points in a sphere.
// Author  : Justo Martin-Albo
// Created : 10 Oct 2018
// -----------------------------------------------------------------------------

#ifndef SPHERE_POINT_SAMPLER_H
#define SPHERE_POINT_SAMPLER_H

#include <G4Types.hh>
#include <G4ThreeVector.hh>
#include <G4PhysicalConstants.hh>

enum class SphereRegion { SURFACE, VOLUME };


class SpherePointSampler
{
public:
  // Constructor
  SpherePointSampler(G4double radius_min=0., G4double radius_max=1.,
                     G4double phi_start=0., G4double phi_delta=2*pi,
                     G4double theta_start=0., G4double theta_delta=pi);
  // Destructor
  ~SpherePointSampler();

  // Get random point in sphere
  G4ThreeVector GetPoint(SphereRegion);

  // Accessors
  G4double GetInnerRadius() const;
  G4double GetOuterRadius() const;
  G4double GetStartPhiAngle() const;
  G4double GetDeltaPhiAngle() const;
  G4double GetStartThetaAngle() const;
  G4double GetDeltaThetaAngle() const;

  // Modifiers
  void SetInnerRadius(G4double);
  void SetOuterRadius(G4double);
  void SetStartPhiAngle(G4double);
  void SetDeltaPhiAngle(G4double);
  void SetStartThetaAngle(G4double);
  void SetDeltaThetaAngle(G4double);

  G4double RandomRadius();
  G4double RandomPhi();
  G4double RandomTheta();

private:
  G4double radius_min_, radius_max_;
  G4double phi_start_, phi_delta_;
  G4double theta_start_, theta_delta_;
  G4double cos_theta_start_, cos_theta_diff_;
};

////////////////////////////////////////////////////////////////////////////////

inline G4double SpherePointSampler::GetInnerRadius() const { return radius_min_; }
inline G4double SpherePointSampler::GetOuterRadius() const { return radius_max_; }
inline G4double SpherePointSampler::GetStartPhiAngle() const { return phi_start_; }
inline G4double SpherePointSampler::GetDeltaPhiAngle() const { return phi_delta_; }
inline G4double SpherePointSampler::GetStartThetaAngle() const { return theta_start_; }
inline G4double SpherePointSampler::GetDeltaThetaAngle() const { return theta_delta_; }

inline void SpherePointSampler::SetInnerRadius(G4double r) { radius_min_ = r; }
inline void SpherePointSampler::SetOuterRadius(G4double r) { radius_max_ = r; }
inline void SpherePointSampler::SetStartPhiAngle(G4double p) { phi_start_ = p; }
inline void SpherePointSampler::SetDeltaPhiAngle(G4double p) { phi_delta_ = p; }
inline void SpherePointSampler::SetStartThetaAngle(G4double t) { theta_start_ = t; }
inline void SpherePointSampler::SetDeltaThetaAngle(G4double t) { theta_delta_ = t; }

#endif
