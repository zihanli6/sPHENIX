#ifndef CALORECO_BEMCRECFEMC_H
#define CALORECO_BEMCRECFEMC_H

#include "BEmcRec.h"

#include <string>  // for string
#include <vector>  // for vector

class EmcModule;
// class BEmcProfile;

class BEmcRecFEMC : public BEmcRec
{
 public:
  BEmcRecFEMC();
  ~BEmcRecFEMC() override;
  void CorrectEnergy(float energy, float x, float y, float &ecorr) override;
  void CorrectECore(float ecore, float x, float y, float &ecorecorr) override;
  void CorrectPosition(float energy, float x, float y, float &xcorr, float &ycorr) override;
  void CorrectShowerDepth(float energy, float x, float y, float z, float &xc, float &yc, float &zc) override;
  static float GetImpactAngle(float e, float x, float y);

  void LoadProfile(const std::string &fname) override;
  //  float GetProb(std::vector<EmcModule> HitList, float e, float xg, float yg, float zg, float &chi2, int &ndf) override;
  void GetImpactThetaPhi(float xg, float yg, float zg, float &theta, float &phi) override;

 private:
  //  BEmcProfile *_emcprof;
};

#endif
