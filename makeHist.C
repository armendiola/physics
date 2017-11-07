#define makeHist_cxx
#include "makeHist.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <string>

void makeHist::Loop()
{
	//   In a ROOT session, you can do:
	//      root> .L makeHist.C
	//      root> makeHist t
	//      root> t.GetEntry(12); // Fill t data members with entry number 12
	//      root> t.Show();       // Show values of entry 12
	//      root> t.Show(16);     // Read and show values of entry 16
	//      root> t.Loop();       // Loop on all entries
	//

	//     This is the loop skeleton where:
	//    curEntry is the global entry number in the chain
	//    ientry is the entry number in the current Tree
	//  Note that the argument to GetEntry must be:
	//    curEntry for TChain::GetEntry
	//    ientry for TTree::GetEntry and TBranch::GetEntry
	//
	//       To read only selected branches, Insert statements like:
	// METHOD1:
	//    fChain->SetBranchStatus("*",0);  // disable all branches
	//    fChain->SetBranchStatus("branchname",1);  // activate branchname
	// METHOD2: replace line
	//    fChain->GetEntry(curEntry);       //read all branches
	//by  b_branchname->GetEntry(ientry); //read only this branch
	if (fChain == 0) return;

	Int_t nEntries = fChain->GetEntriesFast(); //returns number of entries
	int testCount = 5; //debug code?
	Long64_t nbytes = 0, nb = 0; //counts the number of bytes read. I don't know why.

	//Creating Histograms
	TH1D *lambdaCMass = new TH1D("lambdaCMass", "LambdaC Invariant Mass", 100, 2.2, 2.4);
	lambdaCMass->GetXaxis()->SetTitle("Mass of Lambda-C (GeV)");
	lambdaCMass->GetYaxis()->SetTitle("Number of Events");
	TH1D *protonNumber = new TH1D("protonNumber", "Number of Protons", 5, 0, 5);
	protonNumber->GetXaxis()->SetNdivisions(6);
	protonNumber->GetXaxis()->SetTitle("Number of Protons/Event");
	protonNumber->GetYaxis()->SetTitle("Number of Events");
	TH1D *kNumber = new TH1D("kNumber", "K Number", 5, 0, 5);
	kNumber->GetXaxis()->SetNdivisions(6);
	kNumber->GetXaxis()->SetTitle("Number of Kaons/Event");
	kNumber->GetYaxis()->SetTitle("Number of Events");
	TH1D *piNumber = new TH1D("piNumber", "Pi Number", 5, 0, 5);
	piNumber->GetXaxis()->SetNdivisions(6);
	piNumber->GetXaxis()->SetTitle("Number of Pions/Event");
	piNumber->GetYaxis()->SetTitle("Number of Events");

	//Cycles through every event
	for (Long64_t curEntry = 0; curEntry < nEntries; curEntry++) {
		Long64_t ientry = LoadTree(curEntry); //Returns the position of the entry in the current Tree. Switches trees if necessary.
		if (ientry < 0) break;

		nb = fChain->GetEntry(curEntry);   nbytes += nb; //Counts number of bytes for some reason.
		// if (Cut(ientry) < 0) continue;

		//loopCode
		if (nLambdaC > 0) {
			//Cycles through every LamC in the event
			for (int i = 0; i < nLambdaC; i++){
				lambdaCMass->Fill(LambdaCMass[i]);
			}
		}
		protonNumber->Fill(nP);
		kNumber->Fill(nK);
		piNumber->Fill(nP);
	}
	//WrapUp code
	TCanvas *c1 = new TCanvas("c1", "Proof makeHist canvas", 200, 10, 800, 800);
	c1->Divide(2, 2, .05, .05);
	c1->cd(1);
	if (lambdaCMass) lambdaCMass->Draw();
	c1->cd(2);
	if (protonNumber) protonNumber->Draw();
	c1->cd(3);
	if (kNumber) kNumber->Draw();
	c1->cd(4);
	if (piNumber) piNumber->Draw();
	c1->Update();
}
