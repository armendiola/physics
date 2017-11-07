//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Sep 29 15:58:58 2017 by ROOT version 6.06/02
// from TTree ntp1/myNtuple
// found on file: LambdaC-Run1-OffPeak-R24c-v07-1.root
//////////////////////////////////////////////////////////

#ifndef makeHist_h
#define makeHist_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class makeHist {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           runNumber;
   Int_t           platform;
   Int_t           partition;
   Int_t           upperID;
   Int_t           lowerID;
   Int_t           majorID;
   Int_t           configKey;
   Int_t           date;
   Int_t           ddate;
   Float_t         eePx;
   Float_t         eePy;
   Float_t         eePz;
   Float_t         eeE;
   Float_t         beamSX;
   Float_t         beamSY;
   Float_t         beamSZ;
   Float_t         beamSCovXX;
   Float_t         beamSCovYY;
   Float_t         beamSCovZZ;
   Float_t         beamSCovXZ;
   Int_t           nTracks;
   Float_t         R2All;
   Float_t         xPrimaryVtx;
   Float_t         yPrimaryVtx;
   Float_t         zPrimaryVtx;
   Int_t           nUpsilon;
   Float_t         UpsilonChi2[6];   //[nUpsilon]
   Float_t         UpsilonMass[6];   //[nUpsilon]
   Float_t         UpsilonMassErr[6];   //[nUpsilon]
   Float_t         UpsilonVtxx[6];   //[nUpsilon]
   Float_t         UpsilonVtxy[6];   //[nUpsilon]
   Float_t         UpsilonVtxz[6];   //[nUpsilon]
   Float_t         Upsiloncosth[6];   //[nUpsilon]
   Float_t         UpsiloncosthCM[6];   //[nUpsilon]
   Float_t         Upsilonenergy[6];   //[nUpsilon]
   Float_t         UpsilonenergyCM[6];   //[nUpsilon]
   Float_t         Upsilonp3[6];   //[nUpsilon]
   Float_t         Upsilonp3CM[6];   //[nUpsilon]
   Float_t         Upsilonphi[6];   //[nUpsilon]
   Float_t         UpsilonphiCM[6];   //[nUpsilon]
   Int_t           UpsilonLund[6];   //[nUpsilon]
   Int_t           UpsilonMCIdx[6];   //[nUpsilon]
   Int_t           UpsilonVtxStatus[6];   //[nUpsilon]
   Int_t           UpsilonnDof[6];   //[nUpsilon]
   Int_t           Upsilond1Lund[6];   //[nUpsilon]
   Int_t           Upsilond1Idx[6];   //[nUpsilon]
   Int_t           Upsilond2Lund[6];   //[nUpsilon]
   Int_t           Upsilond2Idx[6];   //[nUpsilon]
   Int_t           nLambdaC;
   Float_t         LambdaCChi2[6];   //[nLambdaC]
   Float_t         LambdaCFlightBSCosA[6];   //[nLambdaC]
   Float_t         LambdaCFlightBSErr[6];   //[nLambdaC]
   Float_t         LambdaCFlightBSLen[6];   //[nLambdaC]
   Float_t         LambdaCMass[6];   //[nLambdaC]
   Float_t         LambdaCMassErr[6];   //[nLambdaC]
   Float_t         LambdaCVtxx[6];   //[nLambdaC]
   Float_t         LambdaCVtxy[6];   //[nLambdaC]
   Float_t         LambdaCVtxz[6];   //[nLambdaC]
   Float_t         LambdaCcosth[6];   //[nLambdaC]
   Float_t         LambdaCcosthCM[6];   //[nLambdaC]
   Float_t         LambdaCenergy[6];   //[nLambdaC]
   Float_t         LambdaCenergyCM[6];   //[nLambdaC]
   Float_t         LambdaCp3[6];   //[nLambdaC]
   Float_t         LambdaCp3CM[6];   //[nLambdaC]
   Float_t         LambdaCphi[6];   //[nLambdaC]
   Float_t         LambdaCphiCM[6];   //[nLambdaC]
   Int_t           LambdaCLund[6];   //[nLambdaC]
   Int_t           LambdaCMCIdx[6];   //[nLambdaC]
   Int_t           LambdaCVtxStatus[6];   //[nLambdaC]
   Int_t           LambdaCnDof[6];   //[nLambdaC]
   Int_t           LambdaCd1Lund[6];   //[nLambdaC]
   Int_t           LambdaCd1Idx[6];   //[nLambdaC]
   Int_t           LambdaCd2Lund[6];   //[nLambdaC]
   Int_t           LambdaCd2Idx[6];   //[nLambdaC]
   Int_t           LambdaCd3Lund[6];   //[nLambdaC]
   Int_t           LambdaCd3Idx[6];   //[nLambdaC]
   Int_t           nSigma;
   Float_t         SigmaChi2[1];   //[nSigma]
   Float_t         SigmaMass[1];   //[nSigma]
   Float_t         SigmaMassErr[1];   //[nSigma]
   Float_t         SigmaVtxx[1];   //[nSigma]
   Float_t         SigmaVtxy[1];   //[nSigma]
   Float_t         SigmaVtxz[1];   //[nSigma]
   Float_t         Sigmacosth[1];   //[nSigma]
   Float_t         SigmacosthCM[1];   //[nSigma]
   Float_t         Sigmaenergy[1];   //[nSigma]
   Float_t         SigmaenergyCM[1];   //[nSigma]
   Float_t         Sigmap3[1];   //[nSigma]
   Float_t         Sigmap3CM[1];   //[nSigma]
   Float_t         Sigmaphi[1];   //[nSigma]
   Float_t         SigmaphiCM[1];   //[nSigma]
   Int_t           SigmaLund[1];   //[nSigma]
   Int_t           SigmaMCIdx[1];   //[nSigma]
   Int_t           SigmaVtxStatus[1];   //[nSigma]
   Int_t           SigmanDof[1];   //[nSigma]
   Int_t           Sigmad1Lund[1];   //[nSigma]
   Int_t           Sigmad1Idx[1];   //[nSigma]
   Int_t           Sigmad2Lund[1];   //[nSigma]
   Int_t           Sigmad2Idx[1];   //[nSigma]
   Int_t           Sigmad3Lund[1];   //[nSigma]
   Int_t           Sigmad3Idx[1];   //[nSigma]
   Int_t           nLambda;
   Float_t         LambdaChi2[3];   //[nLambda]
   Float_t         LambdaMass[3];   //[nLambda]
   Float_t         LambdaMassErr[3];   //[nLambda]
   Float_t         LambdaVtxx[3];   //[nLambda]
   Float_t         LambdaVtxy[3];   //[nLambda]
   Float_t         LambdaVtxz[3];   //[nLambda]
   Float_t         Lambdacosth[3];   //[nLambda]
   Float_t         LambdacosthCM[3];   //[nLambda]
   Float_t         Lambdaenergy[3];   //[nLambda]
   Float_t         LambdaenergyCM[3];   //[nLambda]
   Float_t         Lambdap3[3];   //[nLambda]
   Float_t         Lambdap3CM[3];   //[nLambda]
   Float_t         Lambdaphi[3];   //[nLambda]
   Float_t         LambdaphiCM[3];   //[nLambda]
   Int_t           LambdaLund[3];   //[nLambda]
   Int_t           LambdaMCIdx[3];   //[nLambda]
   Int_t           LambdaVtxStatus[3];   //[nLambda]
   Int_t           LambdanDof[3];   //[nLambda]
   Int_t           Lambdad1Lund[3];   //[nLambda]
   Int_t           Lambdad1Idx[3];   //[nLambda]
   Int_t           Lambdad2Lund[3];   //[nLambda]
   Int_t           Lambdad2Idx[3];   //[nLambda]
   Int_t           Lambdad3Lund[3];   //[nLambda]
   Int_t           Lambdad3Idx[3];   //[nLambda]
   Int_t           nKs;
   Float_t         KsChi2[2];   //[nKs]
   Float_t         KsMass[2];   //[nKs]
   Float_t         KsMassErr[2];   //[nKs]
   Float_t         KsVtxx[2];   //[nKs]
   Float_t         KsVtxy[2];   //[nKs]
   Float_t         KsVtxz[2];   //[nKs]
   Float_t         Kscosth[2];   //[nKs]
   Float_t         KscosthCM[2];   //[nKs]
   Float_t         Ksenergy[2];   //[nKs]
   Float_t         KsenergyCM[2];   //[nKs]
   Float_t         Ksp3[2];   //[nKs]
   Float_t         Ksp3CM[2];   //[nKs]
   Float_t         Ksphi[2];   //[nKs]
   Float_t         KsphiCM[2];   //[nKs]
   Int_t           KsLund[2];   //[nKs]
   Int_t           KsMCIdx[2];   //[nKs]
   Int_t           KsVtxStatus[2];   //[nKs]
   Int_t           KsnDof[2];   //[nKs]
   Int_t           Ksd1Lund[2];   //[nKs]
   Int_t           Ksd1Idx[2];   //[nKs]
   Int_t           Ksd2Lund[2];   //[nKs]
   Int_t           Ksd2Idx[2];   //[nKs]
   Int_t           nP;
   Float_t         PChi2[4];   //[nP]
   Float_t         PMass[4];   //[nP]
   Float_t         PMassErr[4];   //[nP]
   Float_t         PVtxx[4];   //[nP]
   Float_t         PVtxy[4];   //[nP]
   Float_t         PVtxz[4];   //[nP]
   Float_t         Pcosth[4];   //[nP]
   Float_t         PcosthCM[4];   //[nP]
   Float_t         Penergy[4];   //[nP]
   Float_t         PenergyCM[4];   //[nP]
   Float_t         Pp3[4];   //[nP]
   Float_t         Pp3CM[4];   //[nP]
   Float_t         Pphi[4];   //[nP]
   Float_t         PphiCM[4];   //[nP]
   Int_t           PLund[4];   //[nP]
   Int_t           PMCIdx[4];   //[nP]
   Int_t           PVtxStatus[4];   //[nP]
   Int_t           PnDof[4];   //[nP]
   Int_t           PTrkIdx[4];   //[nP]
   Int_t           nK;
   Float_t         KChi2[4];   //[nK]
   Float_t         KKLHTightGTVL_w[4];   //[nK]
   Float_t         KKLHTightGTVL_werr[4];   //[nK]
   Float_t         KMass[4];   //[nK]
   Float_t         KMassErr[4];   //[nK]
   Float_t         KVtxx[4];   //[nK]
   Float_t         KVtxy[4];   //[nK]
   Float_t         KVtxz[4];   //[nK]
   Float_t         Kcosth[4];   //[nK]
   Float_t         KcosthCM[4];   //[nK]
   Float_t         Kenergy[4];   //[nK]
   Float_t         KenergyCM[4];   //[nK]
   Float_t         Kp3[4];   //[nK]
   Float_t         Kp3CM[4];   //[nK]
   Float_t         Kphi[4];   //[nK]
   Float_t         KphiCM[4];   //[nK]
   Int_t           KKLHTightGTVL_stat[4];   //[nK]
   Int_t           KLund[4];   //[nK]
   Int_t           KMCIdx[4];   //[nK]
   Int_t           KVtxStatus[4];   //[nK]
   Int_t           KnDof[4];   //[nK]
   Int_t           KTrkIdx[4];   //[nK]
   Int_t           nPi;
   Float_t         PiChi2[6];   //[nPi]
   Float_t         PiMass[6];   //[nPi]
   Float_t         PiMassErr[6];   //[nPi]
   Float_t         PiVtxx[6];   //[nPi]
   Float_t         PiVtxy[6];   //[nPi]
   Float_t         PiVtxz[6];   //[nPi]
   Float_t         Picosth[6];   //[nPi]
   Float_t         PicosthCM[6];   //[nPi]
   Float_t         Pienergy[6];   //[nPi]
   Float_t         PienergyCM[6];   //[nPi]
   Float_t         Pip3[6];   //[nPi]
   Float_t         Pip3CM[6];   //[nPi]
   Float_t         Piphi[6];   //[nPi]
   Float_t         PiphiCM[6];   //[nPi]
   Int_t           PiLund[6];   //[nPi]
   Int_t           PiMCIdx[6];   //[nPi]
   Int_t           PiVtxStatus[6];   //[nPi]
   Int_t           PinDof[6];   //[nPi]
   Int_t           PiTrkIdx[6];   //[nPi]
   Int_t           nPi0;
   Float_t         Pi0Chi2[77];   //[nPi0]
   Float_t         Pi0Mass[77];   //[nPi0]
   Float_t         Pi0MassErr[77];   //[nPi0]
   Float_t         Pi0Vtxx[77];   //[nPi0]
   Float_t         Pi0Vtxy[77];   //[nPi0]
   Float_t         Pi0Vtxz[77];   //[nPi0]
   Float_t         Pi0costh[77];   //[nPi0]
   Float_t         Pi0costhCM[77];   //[nPi0]
   Float_t         Pi0energy[77];   //[nPi0]
   Float_t         Pi0energyCM[77];   //[nPi0]
   Float_t         Pi0p3[77];   //[nPi0]
   Float_t         Pi0p3CM[77];   //[nPi0]
   Float_t         Pi0phi[77];   //[nPi0]
   Float_t         Pi0phiCM[77];   //[nPi0]
   Int_t           Pi0Lund[77];   //[nPi0]
   Int_t           Pi0MCIdx[77];   //[nPi0]
   Int_t           Pi0VtxStatus[77];   //[nPi0]
   Int_t           Pi0nDof[77];   //[nPi0]
   Int_t           Pi0d1Lund[77];   //[nPi0]
   Int_t           Pi0d1Idx[77];   //[nPi0]
   Int_t           Pi0d2Lund[77];   //[nPi0]
   Int_t           Pi0d2Idx[77];   //[nPi0]
   Int_t           ngamma;
   Float_t         gammaChi2[24];   //[ngamma]
   Float_t         gammaVtxx[24];   //[ngamma]
   Float_t         gammaVtxy[24];   //[ngamma]
   Float_t         gammaVtxz[24];   //[ngamma]
   Float_t         gammacosth[24];   //[ngamma]
   Float_t         gammacosthCM[24];   //[ngamma]
   Float_t         gammaenergy[24];   //[ngamma]
   Float_t         gammaenergyCM[24];   //[ngamma]
   Float_t         gammap3[24];   //[ngamma]
   Float_t         gammap3CM[24];   //[ngamma]
   Float_t         gammaphi[24];   //[ngamma]
   Float_t         gammaphiCM[24];   //[ngamma]
   Int_t           gammaLund[24];   //[ngamma]
   Int_t           gammaMCIdx[24];   //[ngamma]
   Int_t           gammaVtxStatus[24];   //[ngamma]
   Int_t           gammanDof[24];   //[ngamma]
   Int_t           nTRK;
   Float_t         TRKDoca[18];   //[nTRK]
   Float_t         TRKDocaErr[18];   //[nTRK]
   Float_t         TRKDocaXY_xy[18];   //[nTRK]
   Float_t         TRKDocaXY_xyErr[18];   //[nTRK]
   Float_t         TRKDocaXY_z[18];   //[nTRK]
   Float_t         TRKDocaXY_zErr[18];   //[nTRK]
   Float_t         TRKDoca_z[18];   //[nTRK]
   Float_t         TRKDoca_zErr[18];   //[nTRK]
   Float_t         TRKcosth[18];   //[nTRK]
   Float_t         TRKcosthCM[18];   //[nTRK]
   Float_t         TRKenergy[18];   //[nTRK]
   Float_t         TRKenergyCM[18];   //[nTRK]
   Float_t         TRKp3[18];   //[nTRK]
   Float_t         TRKp3CM[18];   //[nTRK]
   Float_t         TRKphi[18];   //[nTRK]
   Float_t         TRKphiCM[18];   //[nTRK]
   Int_t           TRKLund[18];   //[nTRK]
   Int_t           TRKMCIdx[18];   //[nTRK]
   Int_t           TRKnHitXY[18];   //[nTRK]
   Int_t           TRKnHitZ[18];   //[nTRK]
   Int_t           TRKnSvtXY[18];   //[nTRK]
   Int_t           TRKnSvtZ[18];   //[nTRK]
   UChar_t         TRKsvtViewXY1[18];   //[nTRK]
   UChar_t         TRKsvtViewXY2[18];   //[nTRK]
   UChar_t         TRKsvtViewXY3[18];   //[nTRK]
   UChar_t         TRKsvtViewXY4[18];   //[nTRK]
   UChar_t         TRKsvtViewXY5[18];   //[nTRK]
   UChar_t         TRKsvtViewZ1[18];   //[nTRK]
   UChar_t         TRKsvtViewZ2[18];   //[nTRK]
   UChar_t         TRKsvtViewZ3[18];   //[nTRK]
   UChar_t         TRKsvtViewZ4[18];   //[nTRK]
   UChar_t         TRKsvtViewZ5[18];   //[nTRK]
   Int_t           TRKnDchXY[18];   //[nTRK]
   Int_t           TRKnDchZ[18];   //[nTRK]
   Int_t           TRKdchFirst[18];   //[nTRK]
   Int_t           TRKdchLast[18];   //[nTRK]
   Float_t         TRKEff[18];   //[nTRK]
   Float_t         TRKEfferr[18];   //[nTRK]
   Int_t           pSelectorsMap[18];   //[nTRK]
   Int_t           KSelectorsMap[18];   //[nTRK]
   Int_t           piSelectorsMap[18];   //[nTRK]
   Int_t           TracksMap[18];   //[nTRK]
   Float_t         gammaLat[24];   //[ngamma]
   Float_t         gammaA42[24];   //[ngamma]
   Float_t         gammaECal[24];   //[ngamma]
   Float_t         gammaErawCal[24];   //[ngamma]
   Float_t         gammaCentx[24];   //[ngamma]
   Float_t         gammaCenty[24];   //[ngamma]
   Float_t         gammaCentz[24];   //[ngamma]
   Int_t           gammanCrys[24];   //[ngamma]

   // List of branches
   TBranch        *b_runNumber;   //!
   TBranch        *b_platform;   //!
   TBranch        *b_partition;   //!
   TBranch        *b_upperID;   //!
   TBranch        *b_lowerID;   //!
   TBranch        *b_majorID;   //!
   TBranch        *b_configKey;   //!
   TBranch        *b_date;   //!
   TBranch        *b_ddate;   //!
   TBranch        *b_eePx;   //!
   TBranch        *b_eePy;   //!
   TBranch        *b_eePz;   //!
   TBranch        *b_eeE;   //!
   TBranch        *b_beamSX;   //!
   TBranch        *b_beamSY;   //!
   TBranch        *b_beamSZ;   //!
   TBranch        *b_beamSCovXX;   //!
   TBranch        *b_beamSCovYY;   //!
   TBranch        *b_beamSCovZZ;   //!
   TBranch        *b_beamSCovXZ;   //!
   TBranch        *b_nTracks;   //!
   TBranch        *b_R2All;   //!
   TBranch        *b_xPrimaryVtx;   //!
   TBranch        *b_yPrimaryVtx;   //!
   TBranch        *b_zPrimaryVtx;   //!
   TBranch        *b_nUpsilon;   //!
   TBranch        *b_UpsilonChi2;   //!
   TBranch        *b_UpsilonMass;   //!
   TBranch        *b_UpsilonMassErr;   //!
   TBranch        *b_UpsilonVtxx;   //!
   TBranch        *b_UpsilonVtxy;   //!
   TBranch        *b_UpsilonVtxz;   //!
   TBranch        *b_Upsiloncosth;   //!
   TBranch        *b_UpsiloncosthCM;   //!
   TBranch        *b_Upsilonenergy;   //!
   TBranch        *b_UpsilonenergyCM;   //!
   TBranch        *b_Upsilonp3;   //!
   TBranch        *b_Upsilonp3CM;   //!
   TBranch        *b_Upsilonphi;   //!
   TBranch        *b_UpsilonphiCM;   //!
   TBranch        *b_UpsilonLund;   //!
   TBranch        *b_UpsilonMCIdx;   //!
   TBranch        *b_UpsilonVtxStatus;   //!
   TBranch        *b_UpsilonnDof;   //!
   TBranch        *b_Upsilond1Lund;   //!
   TBranch        *b_Upsilond1Idx;   //!
   TBranch        *b_Upsilond2Lund;   //!
   TBranch        *b_Upsilond2Idx;   //!
   TBranch        *b_nLambdaC;   //!
   TBranch        *b_LambdaCChi2;   //!
   TBranch        *b_LambdaCFlightBSCosA;   //!
   TBranch        *b_LambdaCFlightBSErr;   //!
   TBranch        *b_LambdaCFlightBSLen;   //!
   TBranch        *b_LambdaCMass;   //!
   TBranch        *b_LambdaCMassErr;   //!
   TBranch        *b_LambdaCVtxx;   //!
   TBranch        *b_LambdaCVtxy;   //!
   TBranch        *b_LambdaCVtxz;   //!
   TBranch        *b_LambdaCcosth;   //!
   TBranch        *b_LambdaCcosthCM;   //!
   TBranch        *b_LambdaCenergy;   //!
   TBranch        *b_LambdaCenergyCM;   //!
   TBranch        *b_LambdaCp3;   //!
   TBranch        *b_LambdaCp3CM;   //!
   TBranch        *b_LambdaCphi;   //!
   TBranch        *b_LambdaCphiCM;   //!
   TBranch        *b_LambdaCLund;   //!
   TBranch        *b_LambdaCMCIdx;   //!
   TBranch        *b_LambdaCVtxStatus;   //!
   TBranch        *b_LambdaCnDof;   //!
   TBranch        *b_LambdaCd1Lund;   //!
   TBranch        *b_LambdaCd1Idx;   //!
   TBranch        *b_LambdaCd2Lund;   //!
   TBranch        *b_LambdaCd2Idx;   //!
   TBranch        *b_LambdaCd3Lund;   //!
   TBranch        *b_LambdaCd3Idx;   //!
   TBranch        *b_nSigma;   //!
   TBranch        *b_SigmaChi2;   //!
   TBranch        *b_SigmaMass;   //!
   TBranch        *b_SigmaMassErr;   //!
   TBranch        *b_SigmaVtxx;   //!
   TBranch        *b_SigmaVtxy;   //!
   TBranch        *b_SigmaVtxz;   //!
   TBranch        *b_Sigmacosth;   //!
   TBranch        *b_SigmacosthCM;   //!
   TBranch        *b_Sigmaenergy;   //!
   TBranch        *b_SigmaenergyCM;   //!
   TBranch        *b_Sigmap3;   //!
   TBranch        *b_Sigmap3CM;   //!
   TBranch        *b_Sigmaphi;   //!
   TBranch        *b_SigmaphiCM;   //!
   TBranch        *b_SigmaLund;   //!
   TBranch        *b_SigmaMCIdx;   //!
   TBranch        *b_SigmaVtxStatus;   //!
   TBranch        *b_SigmanDof;   //!
   TBranch        *b_Sigmad1Lund;   //!
   TBranch        *b_Sigmad1Idx;   //!
   TBranch        *b_Sigmad2Lund;   //!
   TBranch        *b_Sigmad2Idx;   //!
   TBranch        *b_Sigmad3Lund;   //!
   TBranch        *b_Sigmad3Idx;   //!
   TBranch        *b_nLambda;   //!
   TBranch        *b_LambdaChi2;   //!
   TBranch        *b_LambdaMass;   //!
   TBranch        *b_LambdaMassErr;   //!
   TBranch        *b_LambdaVtxx;   //!
   TBranch        *b_LambdaVtxy;   //!
   TBranch        *b_LambdaVtxz;   //!
   TBranch        *b_Lambdacosth;   //!
   TBranch        *b_LambdacosthCM;   //!
   TBranch        *b_Lambdaenergy;   //!
   TBranch        *b_LambdaenergyCM;   //!
   TBranch        *b_Lambdap3;   //!
   TBranch        *b_Lambdap3CM;   //!
   TBranch        *b_Lambdaphi;   //!
   TBranch        *b_LambdaphiCM;   //!
   TBranch        *b_LambdaLund;   //!
   TBranch        *b_LambdaMCIdx;   //!
   TBranch        *b_LambdaVtxStatus;   //!
   TBranch        *b_LambdanDof;   //!
   TBranch        *b_Lambdad1Lund;   //!
   TBranch        *b_Lambdad1Idx;   //!
   TBranch        *b_Lambdad2Lund;   //!
   TBranch        *b_Lambdad2Idx;   //!
   TBranch        *b_Lambdad3Lund;   //!
   TBranch        *b_Lambdad3Idx;   //!
   TBranch        *b_nKs;   //!
   TBranch        *b_KsChi2;   //!
   TBranch        *b_KsMass;   //!
   TBranch        *b_KsMassErr;   //!
   TBranch        *b_KsVtxx;   //!
   TBranch        *b_KsVtxy;   //!
   TBranch        *b_KsVtxz;   //!
   TBranch        *b_Kscosth;   //!
   TBranch        *b_KscosthCM;   //!
   TBranch        *b_Ksenergy;   //!
   TBranch        *b_KsenergyCM;   //!
   TBranch        *b_Ksp3;   //!
   TBranch        *b_Ksp3CM;   //!
   TBranch        *b_Ksphi;   //!
   TBranch        *b_KsphiCM;   //!
   TBranch        *b_KsLund;   //!
   TBranch        *b_KsMCIdx;   //!
   TBranch        *b_KsVtxStatus;   //!
   TBranch        *b_KsnDof;   //!
   TBranch        *b_Ksd1Lund;   //!
   TBranch        *b_Ksd1Idx;   //!
   TBranch        *b_Ksd2Lund;   //!
   TBranch        *b_Ksd2Idx;   //!
   TBranch        *b_nP;   //!
   TBranch        *b_PChi2;   //!
   TBranch        *b_PMass;   //!
   TBranch        *b_PMassErr;   //!
   TBranch        *b_PVtxx;   //!
   TBranch        *b_PVtxy;   //!
   TBranch        *b_PVtxz;   //!
   TBranch        *b_Pcosth;   //!
   TBranch        *b_PcosthCM;   //!
   TBranch        *b_Penergy;   //!
   TBranch        *b_PenergyCM;   //!
   TBranch        *b_Pp3;   //!
   TBranch        *b_Pp3CM;   //!
   TBranch        *b_Pphi;   //!
   TBranch        *b_PphiCM;   //!
   TBranch        *b_PLund;   //!
   TBranch        *b_PMCIdx;   //!
   TBranch        *b_PVtxStatus;   //!
   TBranch        *b_PnDof;   //!
   TBranch        *b_PTrkIdx;   //!
   TBranch        *b_nK;   //!
   TBranch        *b_KChi2;   //!
   TBranch        *b_KKLHTightGTVL_w;   //!
   TBranch        *b_KKLHTightGTVL_werr;   //!
   TBranch        *b_KMass;   //!
   TBranch        *b_KMassErr;   //!
   TBranch        *b_KVtxx;   //!
   TBranch        *b_KVtxy;   //!
   TBranch        *b_KVtxz;   //!
   TBranch        *b_Kcosth;   //!
   TBranch        *b_KcosthCM;   //!
   TBranch        *b_Kenergy;   //!
   TBranch        *b_KenergyCM;   //!
   TBranch        *b_Kp3;   //!
   TBranch        *b_Kp3CM;   //!
   TBranch        *b_Kphi;   //!
   TBranch        *b_KphiCM;   //!
   TBranch        *b_KKLHTightGTVL_stat;   //!
   TBranch        *b_KLund;   //!
   TBranch        *b_KMCIdx;   //!
   TBranch        *b_KVtxStatus;   //!
   TBranch        *b_KnDof;   //!
   TBranch        *b_KTrkIdx;   //!
   TBranch        *b_nPi;   //!
   TBranch        *b_PiChi2;   //!
   TBranch        *b_PiMass;   //!
   TBranch        *b_PiMassErr;   //!
   TBranch        *b_PiVtxx;   //!
   TBranch        *b_PiVtxy;   //!
   TBranch        *b_PiVtxz;   //!
   TBranch        *b_Picosth;   //!
   TBranch        *b_PicosthCM;   //!
   TBranch        *b_Pienergy;   //!
   TBranch        *b_PienergyCM;   //!
   TBranch        *b_Pip3;   //!
   TBranch        *b_Pip3CM;   //!
   TBranch        *b_Piphi;   //!
   TBranch        *b_PiphiCM;   //!
   TBranch        *b_PiLund;   //!
   TBranch        *b_PiMCIdx;   //!
   TBranch        *b_PiVtxStatus;   //!
   TBranch        *b_PinDof;   //!
   TBranch        *b_PiTrkIdx;   //!
   TBranch        *b_nPi0;   //!
   TBranch        *b_Pi0Chi2;   //!
   TBranch        *b_Pi0Mass;   //!
   TBranch        *b_Pi0MassErr;   //!
   TBranch        *b_Pi0Vtxx;   //!
   TBranch        *b_Pi0Vtxy;   //!
   TBranch        *b_Pi0Vtxz;   //!
   TBranch        *b_Pi0costh;   //!
   TBranch        *b_Pi0costhCM;   //!
   TBranch        *b_Pi0energy;   //!
   TBranch        *b_Pi0energyCM;   //!
   TBranch        *b_Pi0p3;   //!
   TBranch        *b_Pi0p3CM;   //!
   TBranch        *b_Pi0phi;   //!
   TBranch        *b_Pi0phiCM;   //!
   TBranch        *b_Pi0Lund;   //!
   TBranch        *b_Pi0MCIdx;   //!
   TBranch        *b_Pi0VtxStatus;   //!
   TBranch        *b_Pi0nDof;   //!
   TBranch        *b_Pi0d1Lund;   //!
   TBranch        *b_Pi0d1Idx;   //!
   TBranch        *b_Pi0d2Lund;   //!
   TBranch        *b_Pi0d2Idx;   //!
   TBranch        *b_ngamma;   //!
   TBranch        *b_gammaChi2;   //!
   TBranch        *b_gammaVtxx;   //!
   TBranch        *b_gammaVtxy;   //!
   TBranch        *b_gammaVtxz;   //!
   TBranch        *b_gammacosth;   //!
   TBranch        *b_gammacosthCM;   //!
   TBranch        *b_gammaenergy;   //!
   TBranch        *b_gammaenergyCM;   //!
   TBranch        *b_gammap3;   //!
   TBranch        *b_gammap3CM;   //!
   TBranch        *b_gammaphi;   //!
   TBranch        *b_gammaphiCM;   //!
   TBranch        *b_gammaLund;   //!
   TBranch        *b_gammaMCIdx;   //!
   TBranch        *b_gammaVtxStatus;   //!
   TBranch        *b_gammanDof;   //!
   TBranch        *b_nTRK;   //!
   TBranch        *b_TRKDoca;   //!
   TBranch        *b_TRKDocaErr;   //!
   TBranch        *b_TRKDocaXY_xy;   //!
   TBranch        *b_TRKDocaXY_xyErr;   //!
   TBranch        *b_TRKDocaXY_z;   //!
   TBranch        *b_TRKDocaXY_zErr;   //!
   TBranch        *b_TRKDoca_z;   //!
   TBranch        *b_TRKDoca_zErr;   //!
   TBranch        *b_TRKcosth;   //!
   TBranch        *b_TRKcosthCM;   //!
   TBranch        *b_TRKenergy;   //!
   TBranch        *b_TRKenergyCM;   //!
   TBranch        *b_TRKp3;   //!
   TBranch        *b_TRKp3CM;   //!
   TBranch        *b_TRKphi;   //!
   TBranch        *b_TRKphiCM;   //!
   TBranch        *b_TRKLund;   //!
   TBranch        *b_TRKMCIdx;   //!
   TBranch        *b_TRKnHitXY;   //!
   TBranch        *b_TRKnHitZ;   //!
   TBranch        *b_TRKnSvtXY;   //!
   TBranch        *b_TRKnSvtZ;   //!
   TBranch        *b_TRKsvtViewXY1;   //!
   TBranch        *b_TRKsvtViewXY2;   //!
   TBranch        *b_TRKsvtViewXY3;   //!
   TBranch        *b_TRKsvtViewXY4;   //!
   TBranch        *b_TRKsvtViewXY5;   //!
   TBranch        *b_TRKsvtViewZ1;   //!
   TBranch        *b_TRKsvtViewZ2;   //!
   TBranch        *b_TRKsvtViewZ3;   //!
   TBranch        *b_TRKsvtViewZ4;   //!
   TBranch        *b_TRKsvtViewZ5;   //!
   TBranch        *b_TRKnDchXY;   //!
   TBranch        *b_TRKnDchZ;   //!
   TBranch        *b_TRKdchFirst;   //!
   TBranch        *b_TRKdchLast;   //!
   TBranch        *b_TRKEff;   //!
   TBranch        *b_TRKEfferr;   //!
   TBranch        *b_pSelectorsMap;   //!
   TBranch        *b_KSelectorsMap;   //!
   TBranch        *b_piSelectorsMap;   //!
   TBranch        *b_TracksMap;   //!
   TBranch        *b_gammaLat;   //!
   TBranch        *b_gammaA42;   //!
   TBranch        *b_gammaECal;   //!
   TBranch        *b_gammaErawCal;   //!
   TBranch        *b_gammaCentx;   //!
   TBranch        *b_gammaCenty;   //!
   TBranch        *b_gammaCentz;   //!
   TBranch        *b_gammanCrys;   //!

   makeHist(TTree *tree=0);
   virtual ~makeHist();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef makeHist_cxx
makeHist::makeHist(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/net/g20/ph/1/jsn150130/LambdaC-Run1-OffPeak-R24c-v07-1.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/net/g20/ph/1/jsn150130/LambdaC-Run1-OffPeak-R24c-v07-1.root");
      }
      f->GetObject("ntp1",tree);

   }
   Init(tree);
}

makeHist::~makeHist()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t makeHist::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t makeHist::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry); //Switches to tree where entry is found and returns position of entry within that tree.
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) { //If the tree was switched in LoadTree then modifies the fCurrent variable
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void makeHist::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("platform", &platform, &b_platform);
   fChain->SetBranchAddress("partition", &partition, &b_partition);
   fChain->SetBranchAddress("upperID", &upperID, &b_upperID);
   fChain->SetBranchAddress("lowerID", &lowerID, &b_lowerID);
   fChain->SetBranchAddress("majorID", &majorID, &b_majorID);
   fChain->SetBranchAddress("configKey", &configKey, &b_configKey);
   fChain->SetBranchAddress("date", &date, &b_date);
   fChain->SetBranchAddress("ddate", &ddate, &b_ddate);
   fChain->SetBranchAddress("eePx", &eePx, &b_eePx);
   fChain->SetBranchAddress("eePy", &eePy, &b_eePy);
   fChain->SetBranchAddress("eePz", &eePz, &b_eePz);
   fChain->SetBranchAddress("eeE", &eeE, &b_eeE);
   fChain->SetBranchAddress("beamSX", &beamSX, &b_beamSX);
   fChain->SetBranchAddress("beamSY", &beamSY, &b_beamSY);
   fChain->SetBranchAddress("beamSZ", &beamSZ, &b_beamSZ);
   fChain->SetBranchAddress("beamSCovXX", &beamSCovXX, &b_beamSCovXX);
   fChain->SetBranchAddress("beamSCovYY", &beamSCovYY, &b_beamSCovYY);
   fChain->SetBranchAddress("beamSCovZZ", &beamSCovZZ, &b_beamSCovZZ);
   fChain->SetBranchAddress("beamSCovXZ", &beamSCovXZ, &b_beamSCovXZ);
   fChain->SetBranchAddress("nTracks", &nTracks, &b_nTracks);
   fChain->SetBranchAddress("R2All", &R2All, &b_R2All);
   fChain->SetBranchAddress("xPrimaryVtx", &xPrimaryVtx, &b_xPrimaryVtx);
   fChain->SetBranchAddress("yPrimaryVtx", &yPrimaryVtx, &b_yPrimaryVtx);
   fChain->SetBranchAddress("zPrimaryVtx", &zPrimaryVtx, &b_zPrimaryVtx);
   fChain->SetBranchAddress("nUpsilon", &nUpsilon, &b_nUpsilon);
   fChain->SetBranchAddress("UpsilonChi2", UpsilonChi2, &b_UpsilonChi2);
   fChain->SetBranchAddress("UpsilonMass", UpsilonMass, &b_UpsilonMass);
   fChain->SetBranchAddress("UpsilonMassErr", UpsilonMassErr, &b_UpsilonMassErr);
   fChain->SetBranchAddress("UpsilonVtxx", UpsilonVtxx, &b_UpsilonVtxx);
   fChain->SetBranchAddress("UpsilonVtxy", UpsilonVtxy, &b_UpsilonVtxy);
   fChain->SetBranchAddress("UpsilonVtxz", UpsilonVtxz, &b_UpsilonVtxz);
   fChain->SetBranchAddress("Upsiloncosth", Upsiloncosth, &b_Upsiloncosth);
   fChain->SetBranchAddress("UpsiloncosthCM", UpsiloncosthCM, &b_UpsiloncosthCM);
   fChain->SetBranchAddress("Upsilonenergy", Upsilonenergy, &b_Upsilonenergy);
   fChain->SetBranchAddress("UpsilonenergyCM", UpsilonenergyCM, &b_UpsilonenergyCM);
   fChain->SetBranchAddress("Upsilonp3", Upsilonp3, &b_Upsilonp3);
   fChain->SetBranchAddress("Upsilonp3CM", Upsilonp3CM, &b_Upsilonp3CM);
   fChain->SetBranchAddress("Upsilonphi", Upsilonphi, &b_Upsilonphi);
   fChain->SetBranchAddress("UpsilonphiCM", UpsilonphiCM, &b_UpsilonphiCM);
   fChain->SetBranchAddress("UpsilonLund", UpsilonLund, &b_UpsilonLund);
   fChain->SetBranchAddress("UpsilonMCIdx", UpsilonMCIdx, &b_UpsilonMCIdx);
   fChain->SetBranchAddress("UpsilonVtxStatus", UpsilonVtxStatus, &b_UpsilonVtxStatus);
   fChain->SetBranchAddress("UpsilonnDof", UpsilonnDof, &b_UpsilonnDof);
   fChain->SetBranchAddress("Upsilond1Lund", Upsilond1Lund, &b_Upsilond1Lund);
   fChain->SetBranchAddress("Upsilond1Idx", Upsilond1Idx, &b_Upsilond1Idx);
   fChain->SetBranchAddress("Upsilond2Lund", Upsilond2Lund, &b_Upsilond2Lund);
   fChain->SetBranchAddress("Upsilond2Idx", Upsilond2Idx, &b_Upsilond2Idx);
   fChain->SetBranchAddress("nLambdaC", &nLambdaC, &b_nLambdaC);
   fChain->SetBranchAddress("LambdaCChi2", LambdaCChi2, &b_LambdaCChi2);
   fChain->SetBranchAddress("LambdaCFlightBSCosA", LambdaCFlightBSCosA, &b_LambdaCFlightBSCosA);
   fChain->SetBranchAddress("LambdaCFlightBSErr", LambdaCFlightBSErr, &b_LambdaCFlightBSErr);
   fChain->SetBranchAddress("LambdaCFlightBSLen", LambdaCFlightBSLen, &b_LambdaCFlightBSLen);
   fChain->SetBranchAddress("LambdaCMass", LambdaCMass, &b_LambdaCMass);
   fChain->SetBranchAddress("LambdaCMassErr", LambdaCMassErr, &b_LambdaCMassErr);
   fChain->SetBranchAddress("LambdaCVtxx", LambdaCVtxx, &b_LambdaCVtxx);
   fChain->SetBranchAddress("LambdaCVtxy", LambdaCVtxy, &b_LambdaCVtxy);
   fChain->SetBranchAddress("LambdaCVtxz", LambdaCVtxz, &b_LambdaCVtxz);
   fChain->SetBranchAddress("LambdaCcosth", LambdaCcosth, &b_LambdaCcosth);
   fChain->SetBranchAddress("LambdaCcosthCM", LambdaCcosthCM, &b_LambdaCcosthCM);
   fChain->SetBranchAddress("LambdaCenergy", LambdaCenergy, &b_LambdaCenergy);
   fChain->SetBranchAddress("LambdaCenergyCM", LambdaCenergyCM, &b_LambdaCenergyCM);
   fChain->SetBranchAddress("LambdaCp3", LambdaCp3, &b_LambdaCp3);
   fChain->SetBranchAddress("LambdaCp3CM", LambdaCp3CM, &b_LambdaCp3CM);
   fChain->SetBranchAddress("LambdaCphi", LambdaCphi, &b_LambdaCphi);
   fChain->SetBranchAddress("LambdaCphiCM", LambdaCphiCM, &b_LambdaCphiCM);
   fChain->SetBranchAddress("LambdaCLund", LambdaCLund, &b_LambdaCLund);
   fChain->SetBranchAddress("LambdaCMCIdx", LambdaCMCIdx, &b_LambdaCMCIdx);
   fChain->SetBranchAddress("LambdaCVtxStatus", LambdaCVtxStatus, &b_LambdaCVtxStatus);
   fChain->SetBranchAddress("LambdaCnDof", LambdaCnDof, &b_LambdaCnDof);
   fChain->SetBranchAddress("LambdaCd1Lund", LambdaCd1Lund, &b_LambdaCd1Lund);
   fChain->SetBranchAddress("LambdaCd1Idx", LambdaCd1Idx, &b_LambdaCd1Idx);
   fChain->SetBranchAddress("LambdaCd2Lund", LambdaCd2Lund, &b_LambdaCd2Lund);
   fChain->SetBranchAddress("LambdaCd2Idx", LambdaCd2Idx, &b_LambdaCd2Idx);
   fChain->SetBranchAddress("LambdaCd3Lund", LambdaCd3Lund, &b_LambdaCd3Lund);
   fChain->SetBranchAddress("LambdaCd3Idx", LambdaCd3Idx, &b_LambdaCd3Idx);
   fChain->SetBranchAddress("nSigma", &nSigma, &b_nSigma);
   fChain->SetBranchAddress("SigmaChi2", &SigmaChi2, &b_SigmaChi2);
   fChain->SetBranchAddress("SigmaMass", &SigmaMass, &b_SigmaMass);
   fChain->SetBranchAddress("SigmaMassErr", &SigmaMassErr, &b_SigmaMassErr);
   fChain->SetBranchAddress("SigmaVtxx", &SigmaVtxx, &b_SigmaVtxx);
   fChain->SetBranchAddress("SigmaVtxy", &SigmaVtxy, &b_SigmaVtxy);
   fChain->SetBranchAddress("SigmaVtxz", &SigmaVtxz, &b_SigmaVtxz);
   fChain->SetBranchAddress("Sigmacosth", &Sigmacosth, &b_Sigmacosth);
   fChain->SetBranchAddress("SigmacosthCM", &SigmacosthCM, &b_SigmacosthCM);
   fChain->SetBranchAddress("Sigmaenergy", &Sigmaenergy, &b_Sigmaenergy);
   fChain->SetBranchAddress("SigmaenergyCM", &SigmaenergyCM, &b_SigmaenergyCM);
   fChain->SetBranchAddress("Sigmap3", &Sigmap3, &b_Sigmap3);
   fChain->SetBranchAddress("Sigmap3CM", &Sigmap3CM, &b_Sigmap3CM);
   fChain->SetBranchAddress("Sigmaphi", &Sigmaphi, &b_Sigmaphi);
   fChain->SetBranchAddress("SigmaphiCM", &SigmaphiCM, &b_SigmaphiCM);
   fChain->SetBranchAddress("SigmaLund", &SigmaLund, &b_SigmaLund);
   fChain->SetBranchAddress("SigmaMCIdx", &SigmaMCIdx, &b_SigmaMCIdx);
   fChain->SetBranchAddress("SigmaVtxStatus", &SigmaVtxStatus, &b_SigmaVtxStatus);
   fChain->SetBranchAddress("SigmanDof", &SigmanDof, &b_SigmanDof);
   fChain->SetBranchAddress("Sigmad1Lund", &Sigmad1Lund, &b_Sigmad1Lund);
   fChain->SetBranchAddress("Sigmad1Idx", &Sigmad1Idx, &b_Sigmad1Idx);
   fChain->SetBranchAddress("Sigmad2Lund", &Sigmad2Lund, &b_Sigmad2Lund);
   fChain->SetBranchAddress("Sigmad2Idx", &Sigmad2Idx, &b_Sigmad2Idx);
   fChain->SetBranchAddress("Sigmad3Lund", &Sigmad3Lund, &b_Sigmad3Lund);
   fChain->SetBranchAddress("Sigmad3Idx", &Sigmad3Idx, &b_Sigmad3Idx);
   fChain->SetBranchAddress("nLambda", &nLambda, &b_nLambda);
   fChain->SetBranchAddress("LambdaChi2", LambdaChi2, &b_LambdaChi2);
   fChain->SetBranchAddress("LambdaMass", LambdaMass, &b_LambdaMass);
   fChain->SetBranchAddress("LambdaMassErr", LambdaMassErr, &b_LambdaMassErr);
   fChain->SetBranchAddress("LambdaVtxx", LambdaVtxx, &b_LambdaVtxx);
   fChain->SetBranchAddress("LambdaVtxy", LambdaVtxy, &b_LambdaVtxy);
   fChain->SetBranchAddress("LambdaVtxz", LambdaVtxz, &b_LambdaVtxz);
   fChain->SetBranchAddress("Lambdacosth", Lambdacosth, &b_Lambdacosth);
   fChain->SetBranchAddress("LambdacosthCM", LambdacosthCM, &b_LambdacosthCM);
   fChain->SetBranchAddress("Lambdaenergy", Lambdaenergy, &b_Lambdaenergy);
   fChain->SetBranchAddress("LambdaenergyCM", LambdaenergyCM, &b_LambdaenergyCM);
   fChain->SetBranchAddress("Lambdap3", Lambdap3, &b_Lambdap3);
   fChain->SetBranchAddress("Lambdap3CM", Lambdap3CM, &b_Lambdap3CM);
   fChain->SetBranchAddress("Lambdaphi", Lambdaphi, &b_Lambdaphi);
   fChain->SetBranchAddress("LambdaphiCM", LambdaphiCM, &b_LambdaphiCM);
   fChain->SetBranchAddress("LambdaLund", LambdaLund, &b_LambdaLund);
   fChain->SetBranchAddress("LambdaMCIdx", LambdaMCIdx, &b_LambdaMCIdx);
   fChain->SetBranchAddress("LambdaVtxStatus", LambdaVtxStatus, &b_LambdaVtxStatus);
   fChain->SetBranchAddress("LambdanDof", LambdanDof, &b_LambdanDof);
   fChain->SetBranchAddress("Lambdad1Lund", Lambdad1Lund, &b_Lambdad1Lund);
   fChain->SetBranchAddress("Lambdad1Idx", Lambdad1Idx, &b_Lambdad1Idx);
   fChain->SetBranchAddress("Lambdad2Lund", Lambdad2Lund, &b_Lambdad2Lund);
   fChain->SetBranchAddress("Lambdad2Idx", Lambdad2Idx, &b_Lambdad2Idx);
   fChain->SetBranchAddress("Lambdad3Lund", Lambdad3Lund, &b_Lambdad3Lund);
   fChain->SetBranchAddress("Lambdad3Idx", Lambdad3Idx, &b_Lambdad3Idx);
   fChain->SetBranchAddress("nKs", &nKs, &b_nKs);
   fChain->SetBranchAddress("KsChi2", KsChi2, &b_KsChi2);
   fChain->SetBranchAddress("KsMass", KsMass, &b_KsMass);
   fChain->SetBranchAddress("KsMassErr", KsMassErr, &b_KsMassErr);
   fChain->SetBranchAddress("KsVtxx", KsVtxx, &b_KsVtxx);
   fChain->SetBranchAddress("KsVtxy", KsVtxy, &b_KsVtxy);
   fChain->SetBranchAddress("KsVtxz", KsVtxz, &b_KsVtxz);
   fChain->SetBranchAddress("Kscosth", Kscosth, &b_Kscosth);
   fChain->SetBranchAddress("KscosthCM", KscosthCM, &b_KscosthCM);
   fChain->SetBranchAddress("Ksenergy", Ksenergy, &b_Ksenergy);
   fChain->SetBranchAddress("KsenergyCM", KsenergyCM, &b_KsenergyCM);
   fChain->SetBranchAddress("Ksp3", Ksp3, &b_Ksp3);
   fChain->SetBranchAddress("Ksp3CM", Ksp3CM, &b_Ksp3CM);
   fChain->SetBranchAddress("Ksphi", Ksphi, &b_Ksphi);
   fChain->SetBranchAddress("KsphiCM", KsphiCM, &b_KsphiCM);
   fChain->SetBranchAddress("KsLund", KsLund, &b_KsLund);
   fChain->SetBranchAddress("KsMCIdx", KsMCIdx, &b_KsMCIdx);
   fChain->SetBranchAddress("KsVtxStatus", KsVtxStatus, &b_KsVtxStatus);
   fChain->SetBranchAddress("KsnDof", KsnDof, &b_KsnDof);
   fChain->SetBranchAddress("Ksd1Lund", Ksd1Lund, &b_Ksd1Lund);
   fChain->SetBranchAddress("Ksd1Idx", Ksd1Idx, &b_Ksd1Idx);
   fChain->SetBranchAddress("Ksd2Lund", Ksd2Lund, &b_Ksd2Lund);
   fChain->SetBranchAddress("Ksd2Idx", Ksd2Idx, &b_Ksd2Idx);
   fChain->SetBranchAddress("nP", &nP, &b_nP);
   fChain->SetBranchAddress("PChi2", PChi2, &b_PChi2);
   fChain->SetBranchAddress("PMass", PMass, &b_PMass);
   fChain->SetBranchAddress("PMassErr", PMassErr, &b_PMassErr);
   fChain->SetBranchAddress("PVtxx", PVtxx, &b_PVtxx);
   fChain->SetBranchAddress("PVtxy", PVtxy, &b_PVtxy);
   fChain->SetBranchAddress("PVtxz", PVtxz, &b_PVtxz);
   fChain->SetBranchAddress("Pcosth", Pcosth, &b_Pcosth);
   fChain->SetBranchAddress("PcosthCM", PcosthCM, &b_PcosthCM);
   fChain->SetBranchAddress("Penergy", Penergy, &b_Penergy);
   fChain->SetBranchAddress("PenergyCM", PenergyCM, &b_PenergyCM);
   fChain->SetBranchAddress("Pp3", Pp3, &b_Pp3);
   fChain->SetBranchAddress("Pp3CM", Pp3CM, &b_Pp3CM);
   fChain->SetBranchAddress("Pphi", Pphi, &b_Pphi);
   fChain->SetBranchAddress("PphiCM", PphiCM, &b_PphiCM);
   fChain->SetBranchAddress("PLund", PLund, &b_PLund);
   fChain->SetBranchAddress("PMCIdx", PMCIdx, &b_PMCIdx);
   fChain->SetBranchAddress("PVtxStatus", PVtxStatus, &b_PVtxStatus);
   fChain->SetBranchAddress("PnDof", PnDof, &b_PnDof);
   fChain->SetBranchAddress("PTrkIdx", PTrkIdx, &b_PTrkIdx);
   fChain->SetBranchAddress("nK", &nK, &b_nK);
   fChain->SetBranchAddress("KChi2", KChi2, &b_KChi2);
   fChain->SetBranchAddress("KKLHTightGTVL_w", KKLHTightGTVL_w, &b_KKLHTightGTVL_w);
   fChain->SetBranchAddress("KKLHTightGTVL_werr", KKLHTightGTVL_werr, &b_KKLHTightGTVL_werr);
   fChain->SetBranchAddress("KMass", KMass, &b_KMass);
   fChain->SetBranchAddress("KMassErr", KMassErr, &b_KMassErr);
   fChain->SetBranchAddress("KVtxx", KVtxx, &b_KVtxx);
   fChain->SetBranchAddress("KVtxy", KVtxy, &b_KVtxy);
   fChain->SetBranchAddress("KVtxz", KVtxz, &b_KVtxz);
   fChain->SetBranchAddress("Kcosth", Kcosth, &b_Kcosth);
   fChain->SetBranchAddress("KcosthCM", KcosthCM, &b_KcosthCM);
   fChain->SetBranchAddress("Kenergy", Kenergy, &b_Kenergy);
   fChain->SetBranchAddress("KenergyCM", KenergyCM, &b_KenergyCM);
   fChain->SetBranchAddress("Kp3", Kp3, &b_Kp3);
   fChain->SetBranchAddress("Kp3CM", Kp3CM, &b_Kp3CM);
   fChain->SetBranchAddress("Kphi", Kphi, &b_Kphi);
   fChain->SetBranchAddress("KphiCM", KphiCM, &b_KphiCM);
   fChain->SetBranchAddress("KKLHTightGTVL_stat", KKLHTightGTVL_stat, &b_KKLHTightGTVL_stat);
   fChain->SetBranchAddress("KLund", KLund, &b_KLund);
   fChain->SetBranchAddress("KMCIdx", KMCIdx, &b_KMCIdx);
   fChain->SetBranchAddress("KVtxStatus", KVtxStatus, &b_KVtxStatus);
   fChain->SetBranchAddress("KnDof", KnDof, &b_KnDof);
   fChain->SetBranchAddress("KTrkIdx", KTrkIdx, &b_KTrkIdx);
   fChain->SetBranchAddress("nPi", &nPi, &b_nPi);
   fChain->SetBranchAddress("PiChi2", PiChi2, &b_PiChi2);
   fChain->SetBranchAddress("PiMass", PiMass, &b_PiMass);
   fChain->SetBranchAddress("PiMassErr", PiMassErr, &b_PiMassErr);
   fChain->SetBranchAddress("PiVtxx", PiVtxx, &b_PiVtxx);
   fChain->SetBranchAddress("PiVtxy", PiVtxy, &b_PiVtxy);
   fChain->SetBranchAddress("PiVtxz", PiVtxz, &b_PiVtxz);
   fChain->SetBranchAddress("Picosth", Picosth, &b_Picosth);
   fChain->SetBranchAddress("PicosthCM", PicosthCM, &b_PicosthCM);
   fChain->SetBranchAddress("Pienergy", Pienergy, &b_Pienergy);
   fChain->SetBranchAddress("PienergyCM", PienergyCM, &b_PienergyCM);
   fChain->SetBranchAddress("Pip3", Pip3, &b_Pip3);
   fChain->SetBranchAddress("Pip3CM", Pip3CM, &b_Pip3CM);
   fChain->SetBranchAddress("Piphi", Piphi, &b_Piphi);
   fChain->SetBranchAddress("PiphiCM", PiphiCM, &b_PiphiCM);
   fChain->SetBranchAddress("PiLund", PiLund, &b_PiLund);
   fChain->SetBranchAddress("PiMCIdx", PiMCIdx, &b_PiMCIdx);
   fChain->SetBranchAddress("PiVtxStatus", PiVtxStatus, &b_PiVtxStatus);
   fChain->SetBranchAddress("PinDof", PinDof, &b_PinDof);
   fChain->SetBranchAddress("PiTrkIdx", PiTrkIdx, &b_PiTrkIdx);
   fChain->SetBranchAddress("nPi0", &nPi0, &b_nPi0);
   fChain->SetBranchAddress("Pi0Chi2", Pi0Chi2, &b_Pi0Chi2);
   fChain->SetBranchAddress("Pi0Mass", Pi0Mass, &b_Pi0Mass);
   fChain->SetBranchAddress("Pi0MassErr", Pi0MassErr, &b_Pi0MassErr);
   fChain->SetBranchAddress("Pi0Vtxx", Pi0Vtxx, &b_Pi0Vtxx);
   fChain->SetBranchAddress("Pi0Vtxy", Pi0Vtxy, &b_Pi0Vtxy);
   fChain->SetBranchAddress("Pi0Vtxz", Pi0Vtxz, &b_Pi0Vtxz);
   fChain->SetBranchAddress("Pi0costh", Pi0costh, &b_Pi0costh);
   fChain->SetBranchAddress("Pi0costhCM", Pi0costhCM, &b_Pi0costhCM);
   fChain->SetBranchAddress("Pi0energy", Pi0energy, &b_Pi0energy);
   fChain->SetBranchAddress("Pi0energyCM", Pi0energyCM, &b_Pi0energyCM);
   fChain->SetBranchAddress("Pi0p3", Pi0p3, &b_Pi0p3);
   fChain->SetBranchAddress("Pi0p3CM", Pi0p3CM, &b_Pi0p3CM);
   fChain->SetBranchAddress("Pi0phi", Pi0phi, &b_Pi0phi);
   fChain->SetBranchAddress("Pi0phiCM", Pi0phiCM, &b_Pi0phiCM);
   fChain->SetBranchAddress("Pi0Lund", Pi0Lund, &b_Pi0Lund);
   fChain->SetBranchAddress("Pi0MCIdx", Pi0MCIdx, &b_Pi0MCIdx);
   fChain->SetBranchAddress("Pi0VtxStatus", Pi0VtxStatus, &b_Pi0VtxStatus);
   fChain->SetBranchAddress("Pi0nDof", Pi0nDof, &b_Pi0nDof);
   fChain->SetBranchAddress("Pi0d1Lund", Pi0d1Lund, &b_Pi0d1Lund);
   fChain->SetBranchAddress("Pi0d1Idx", Pi0d1Idx, &b_Pi0d1Idx);
   fChain->SetBranchAddress("Pi0d2Lund", Pi0d2Lund, &b_Pi0d2Lund);
   fChain->SetBranchAddress("Pi0d2Idx", Pi0d2Idx, &b_Pi0d2Idx);
   fChain->SetBranchAddress("ngamma", &ngamma, &b_ngamma);
   fChain->SetBranchAddress("gammaChi2", gammaChi2, &b_gammaChi2);
   fChain->SetBranchAddress("gammaVtxx", gammaVtxx, &b_gammaVtxx);
   fChain->SetBranchAddress("gammaVtxy", gammaVtxy, &b_gammaVtxy);
   fChain->SetBranchAddress("gammaVtxz", gammaVtxz, &b_gammaVtxz);
   fChain->SetBranchAddress("gammacosth", gammacosth, &b_gammacosth);
   fChain->SetBranchAddress("gammacosthCM", gammacosthCM, &b_gammacosthCM);
   fChain->SetBranchAddress("gammaenergy", gammaenergy, &b_gammaenergy);
   fChain->SetBranchAddress("gammaenergyCM", gammaenergyCM, &b_gammaenergyCM);
   fChain->SetBranchAddress("gammap3", gammap3, &b_gammap3);
   fChain->SetBranchAddress("gammap3CM", gammap3CM, &b_gammap3CM);
   fChain->SetBranchAddress("gammaphi", gammaphi, &b_gammaphi);
   fChain->SetBranchAddress("gammaphiCM", gammaphiCM, &b_gammaphiCM);
   fChain->SetBranchAddress("gammaLund", gammaLund, &b_gammaLund);
   fChain->SetBranchAddress("gammaMCIdx", gammaMCIdx, &b_gammaMCIdx);
   fChain->SetBranchAddress("gammaVtxStatus", gammaVtxStatus, &b_gammaVtxStatus);
   fChain->SetBranchAddress("gammanDof", gammanDof, &b_gammanDof);
   fChain->SetBranchAddress("nTRK", &nTRK, &b_nTRK);
   fChain->SetBranchAddress("TRKDoca", TRKDoca, &b_TRKDoca);
   fChain->SetBranchAddress("TRKDocaErr", TRKDocaErr, &b_TRKDocaErr);
   fChain->SetBranchAddress("TRKDocaXY_xy", TRKDocaXY_xy, &b_TRKDocaXY_xy);
   fChain->SetBranchAddress("TRKDocaXY_xyErr", TRKDocaXY_xyErr, &b_TRKDocaXY_xyErr);
   fChain->SetBranchAddress("TRKDocaXY_z", TRKDocaXY_z, &b_TRKDocaXY_z);
   fChain->SetBranchAddress("TRKDocaXY_zErr", TRKDocaXY_zErr, &b_TRKDocaXY_zErr);
   fChain->SetBranchAddress("TRKDoca_z", TRKDoca_z, &b_TRKDoca_z);
   fChain->SetBranchAddress("TRKDoca_zErr", TRKDoca_zErr, &b_TRKDoca_zErr);
   fChain->SetBranchAddress("TRKcosth", TRKcosth, &b_TRKcosth);
   fChain->SetBranchAddress("TRKcosthCM", TRKcosthCM, &b_TRKcosthCM);
   fChain->SetBranchAddress("TRKenergy", TRKenergy, &b_TRKenergy);
   fChain->SetBranchAddress("TRKenergyCM", TRKenergyCM, &b_TRKenergyCM);
   fChain->SetBranchAddress("TRKp3", TRKp3, &b_TRKp3);
   fChain->SetBranchAddress("TRKp3CM", TRKp3CM, &b_TRKp3CM);
   fChain->SetBranchAddress("TRKphi", TRKphi, &b_TRKphi);
   fChain->SetBranchAddress("TRKphiCM", TRKphiCM, &b_TRKphiCM);
   fChain->SetBranchAddress("TRKLund", TRKLund, &b_TRKLund);
   fChain->SetBranchAddress("TRKMCIdx", TRKMCIdx, &b_TRKMCIdx);
   fChain->SetBranchAddress("TRKnHitXY", TRKnHitXY, &b_TRKnHitXY);
   fChain->SetBranchAddress("TRKnHitZ", TRKnHitZ, &b_TRKnHitZ);
   fChain->SetBranchAddress("TRKnSvtXY", TRKnSvtXY, &b_TRKnSvtXY);
   fChain->SetBranchAddress("TRKnSvtZ", TRKnSvtZ, &b_TRKnSvtZ);
   fChain->SetBranchAddress("TRKsvtViewXY1", TRKsvtViewXY1, &b_TRKsvtViewXY1);
   fChain->SetBranchAddress("TRKsvtViewXY2", TRKsvtViewXY2, &b_TRKsvtViewXY2);
   fChain->SetBranchAddress("TRKsvtViewXY3", TRKsvtViewXY3, &b_TRKsvtViewXY3);
   fChain->SetBranchAddress("TRKsvtViewXY4", TRKsvtViewXY4, &b_TRKsvtViewXY4);
   fChain->SetBranchAddress("TRKsvtViewXY5", TRKsvtViewXY5, &b_TRKsvtViewXY5);
   fChain->SetBranchAddress("TRKsvtViewZ1", TRKsvtViewZ1, &b_TRKsvtViewZ1);
   fChain->SetBranchAddress("TRKsvtViewZ2", TRKsvtViewZ2, &b_TRKsvtViewZ2);
   fChain->SetBranchAddress("TRKsvtViewZ3", TRKsvtViewZ3, &b_TRKsvtViewZ3);
   fChain->SetBranchAddress("TRKsvtViewZ4", TRKsvtViewZ4, &b_TRKsvtViewZ4);
   fChain->SetBranchAddress("TRKsvtViewZ5", TRKsvtViewZ5, &b_TRKsvtViewZ5);
   fChain->SetBranchAddress("TRKnDchXY", TRKnDchXY, &b_TRKnDchXY);
   fChain->SetBranchAddress("TRKnDchZ", TRKnDchZ, &b_TRKnDchZ);
   fChain->SetBranchAddress("TRKdchFirst", TRKdchFirst, &b_TRKdchFirst);
   fChain->SetBranchAddress("TRKdchLast", TRKdchLast, &b_TRKdchLast);
   fChain->SetBranchAddress("TRKEff", TRKEff, &b_TRKEff);
   fChain->SetBranchAddress("TRKEfferr", TRKEfferr, &b_TRKEfferr);
   fChain->SetBranchAddress("pSelectorsMap", pSelectorsMap, &b_pSelectorsMap);
   fChain->SetBranchAddress("KSelectorsMap", KSelectorsMap, &b_KSelectorsMap);
   fChain->SetBranchAddress("piSelectorsMap", piSelectorsMap, &b_piSelectorsMap);
   fChain->SetBranchAddress("TracksMap", TracksMap, &b_TracksMap);
   fChain->SetBranchAddress("gammaLat", gammaLat, &b_gammaLat);
   fChain->SetBranchAddress("gammaA42", gammaA42, &b_gammaA42);
   fChain->SetBranchAddress("gammaECal", gammaECal, &b_gammaECal);
   fChain->SetBranchAddress("gammaErawCal", gammaErawCal, &b_gammaErawCal);
   fChain->SetBranchAddress("gammaCentx", gammaCentx, &b_gammaCentx);
   fChain->SetBranchAddress("gammaCenty", gammaCenty, &b_gammaCenty);
   fChain->SetBranchAddress("gammaCentz", gammaCentz, &b_gammaCentz);
   fChain->SetBranchAddress("gammanCrys", gammanCrys, &b_gammanCrys);
   Notify();
}

Bool_t makeHist::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void makeHist::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t makeHist::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef makeHist_cxx
