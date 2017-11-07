#define LambdaCSelector_cxx
// The class definition in LambdaCSelector.h has been generated automatically
// by the ROOT utility TTree::MakeSelector(). This class is derived
// from the ROOT class TSelector. For more information on the TSelector
// framework see $ROOTSYS/README/README.SELECTOR or the ROOT User Manual.


// The following methods are defined in this file:
//    Begin():        called every time a loop on the tree starts,
//                    a convenient place to create your histograms.
//    SlaveBegin():   called after Begin(), when on PROOF called only on the
//                    slave servers.
//    Process():      called for each event, in this function you decide what
//                    to read and fill your histograms.
//    SlaveTerminate: called at the end of the loop on the tree, when on PROOF
//                    called only on the slave servers.
//    Terminate():    called at the end of the loop on the tree,
//                    a convenient place to draw/fit your histograms.
//
// To use this file, try the following session on your Tree T:
//
// root> T->Process("LambdaCSelector.C")
// root> T->Process("LambdaCSelector.C","some options")
// root> T->Process("LambdaCSelector.C+")
//


#include "LambdaCSelector.h"
#include <TStyle.h>
#include <TH2.h>
#include <TCanvas.h>

void LambdaCSelector::Begin(TTree * /*tree*/)
{
	// The Begin() function is called at the start of the query.
	// When running with PROOF Begin() is only called on the client.
	// The tree argument is deprecated (on PROOF 0 is passed).

	TString option = GetOption();
}

void LambdaCSelector::SlaveBegin(TTree * /*tree*/)
{
	// The SlaveBegin() function is called after the Begin() function.
	// When running with PROOF SlaveBegin() is called on each slave server.
	// The tree argument is deprecated (on PROOF 0 is passed).
	massLCHist = new TH1F("massLC", "LambdaC Mass Distribution", 100, 2.2, 2.4);
	massLCHist->GetXaxis()->SetNdivisions(503);
	massLCHist->GetXaxis()->SetTitle("Mass of Lambda-C (GeV)");
	massLCHist->GetYaxis()->SetTitle("Number of Events");
	fOutput->Add(massLCHist);
	numPHist = new TH1D("numP", "Number of Protons/Event", 10, 0, 10);
	numPHist->GetXaxis()->SetNdivisions(11);
	numPHist->GetXaxis()->SetTitle("Number of Protons/Event");
	numPHist->GetYaxis()->SetTitle("Number of Events");
	fOutput->Add(numPHist);
	numKHist = new TH1D("numK", "Number of Kaons/Event", 10, 0, 10);
	numKHist->GetXaxis()->SetNdivisions(11);
	numKHist->GetXaxis()->SetTitle("Number of Kaons/Event");
	numKHist->GetYaxis()->SetTitle("Number of Events");
	fOutput->Add(numKHist);
	numPiHist = new TH1D("numPi", "Number of Pions/Event", 10, 0, 10);
	numPiHist->GetXaxis()->SetNdivisions(11);
	numPiHist->GetXaxis()->SetTitle("Number of Pions/Event");
	numPiHist->GetYaxis()->SetTitle("Number of Events");
	fOutput->Add(numPiHist);
	TString option = GetOption();

}

Bool_t LambdaCSelector::Process(Long64_t entry)
{
	// The Process() function is called for each entry in the tree (or possibly
	// keyed object in the case of PROOF) to be processed. The entry argument
	// specifies which entry in the currently loaded tree is to be processed.
	// When processing keyed objects with PROOF, the object is already loaded
	// and is available via the fObject pointer.
	//
	// This function should contain the \"body\" of the analysis. It can contain
	// simple or elaborate selection criteria, run algorithms on the data
	// of the event and typically fill histograms.
	//
	// The processing can be stopped by calling Abort().
	//
	// Use fStatus to set the return value of TTree::Process().
	//
	// The return value is currently not used.
	fChain->GetEntry(entry);
	for (int i = 0; i < nLambdaC; i++){
			massLCHist->Fill(LambdaCMass[i]);
	}
	numPHist->Fill(nP);
	numKHist->Fill(nK);
	numPiHist->Fill(nPi);
	return kTRUE;
}

void LambdaCSelector::SlaveTerminate()
{
	// The SlaveTerminate() function is called after all entries or objects
	// have been processed. When running with PROOF SlaveTerminate() is called
	// on each slave server.

}

void LambdaCSelector::Terminate()
{
	// The Terminate() function is the last function to be called during
	// a query. It always runs on the client, it can be used to present
	// the results graphically or save the results to file.
	TCanvas *c1 = new TCanvas("c1", "Proof analyze canvas", 200, 10, 800, 800);
	c1->Divide(2, 2, .05, .05);
	c1->cd(1);
	numPHist = dynamic_cast<TH1D*>(fOutput->FindObject("numP"));
	if (numPHist) numPHist->Draw();
	c1->cd(2);
	numKHist = dynamic_cast<TH1D*>(fOutput->FindObject("numK"));
	if (numKHist) numKHist->Draw();
	c1->cd(3);
	numPiHist = dynamic_cast<TH1D*>(fOutput->FindObject("numPi"));
	if (numPiHist) numPiHist->Draw();
	c1->cd(4);
	massLCHist = dynamic_cast<TH1F*>(fOutput->FindObject("massLC"));
	if (massLCHist) massLCHist->Draw();
	c1->Update();

}