void runProof(const char* selector = "", int workers = 20){
   char processCommand[strlen(selector) + 1];
   strcpy(processCommand, selector);
   strcat(processCommand, "+");
   char numWorkers[10];
   sprintf(numWorkers, "workers=%d", workers);
   TChain ch("ntp1");
   ch.Add("/net/g20/ph/1/jsn150130/LambdaC-Run1-OffPeak-R24c-v07-1.root");
   TProof *proof = TProof::Open("lite://", numWorkers);
   ch.SetProof(proof);
   ch.Process(processCommand);
}
