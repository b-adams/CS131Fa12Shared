/* Listing 1. A For Loop (problem 3 page 3) */
int aDatum;
int index;
int runningTotal =0;
int timesToRun = 9;
timesToRun = timesToRun -4;

printf("PRELOOP\t"); 
printf("index=%d,␣aDatum=%d,␣timesToRun=%d,␣runningTotal=%d\n",
		index , aDatum , timesToRun , runningTotal ); 

for(index=0; index<timesToRun; index=index+1)
{
	aDatum = nthDigitOfPi(index);
	runningTotal = runningTotal + aDatum;

	printf("INLOOP\t"); 
	printf("index=%d,␣aDatum=%d,␣timesToRun=%d,␣runningTotal=%d\n",
			index , aDatum , timesToRun , runningTotal );
}

printf("POSTLOOP\t"); 
printf("index=%d,␣aDatum=%d,␣timesToRun=%d,␣runningTotal=%d\n",
		index , aDatum , timesToRun , runningTotal ); 

printf("Value␣1:␣%d,␣Value␣2:␣%d\n",
		runningTotal , runningTotal/timesToRun);