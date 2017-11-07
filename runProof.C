#include <stdarg.h>
void runProof(const char* selector = "", int workers = 20, int chainLen = 0, ...){
   char processCommand[strlen(selector) + 1];
   strcpy(processCommand, selector);
   strcat(processCommand, "+");
   char numWorkers[10];
   sprintf(numWorkers, "workers=%d", workers);
   TChain ch("ntp1");
   if(chainLen == 0){
      ch.Add("/net/g20/ph/1/jsn150130/LambdaC-Run1-OffPeak-R24c-v07-1.root");
   }
   else{
      va_list fileList;
      va_start(fileList, chainLen);
      for(int i = 0; i < chainLen; ++i){
         //printf("%s\n", va_arg(fileList, const char*));
         ch.Add(va_arg(fileList, const char*));
      }
   }
   //printf("%lld\n", ch.GetEntries());
   TProof *proof = TProof::Open("lite://", numWorkers);
   ch.SetProof(proof);
   ch.Process(processCommand);
}
