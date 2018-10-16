// -----------------------------------------------------------------------------
// File    : XenonSphere.cpp
// Author  : Justo Martin-Albo
// Created : 10 Oct 2018
// -----------------------------------------------------------------------------

#include "SpherePointSampler.h"

#include <Randomize.hh>


SpherePointSampler::SpherePointSampler(G4double radius_min, G4double radius_max,
                                       G4double phi_start, G4double phi_delta,
                                       G4double theta_start, G4double theta_delta):
  radius_min_(radius_min), radius_max_(radius_max),
  phi_start_(phi_start), phi_delta_(phi_delta),
  theta_start_(theta_start), theta_delta_(theta_delta)
{
  cos_theta_start_ = std::cos(theta_start_);
  cos_theta_diff_  = cos_theta_start_ - cos(theta_start_ + theta_delta_);
}


SpherePointSampler::~SpherePointSampler()
{
}


G4ThreeVector SpherePointSampler::GetPoint(SphereRegion region)
{
  G4ThreeVector point;

  if (region == SphereRegion::VOLUME) {
    G4double r     = RandomRadius();
    G4double phi   = RandomPhi();
    G4double theta = RandomTheta();
    G4double x = r * sin(theta) * cos(phi);
    G4double y = r * sin(theta) * sin(phi);
    G4double z = r * cos(theta);
    point.set(x,y,z);
  }

  return point;
}


G4double SpherePointSampler::RandomRadius()
{
  G4double rnd = G4UniformRand();
  return std::sqrt((1.-rnd) * radius_min_*radius_min_ + rnd * radius_max_*radius_max_);
}


G4double SpherePointSampler::RandomPhi()
{
  return (phi_start_ + G4UniformRand() * phi_delta_);
}


G4double SpherePointSampler::RandomTheta()
{
  return acos( cos_theta_start_ - G4UniformRand() * cos_theta_diff_ );
}
