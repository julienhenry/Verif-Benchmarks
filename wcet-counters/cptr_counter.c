int detector_signal;
int threshold_signal;

int counter(int x, int threshold, int * signal, int reset ){
 int cptr_counter3=0; int cptr_counter2=0; int cptr_counter1=0;
 cptr_counter1++; 
	static int value;
	
	if(reset){
 cptr_counter2++; 
		value = 0;
	}
	
	if(!reset){
 cptr_counter3++; 
		value += 1;
		*signal = (value >= threshold);	
	}
	
printf(" THE counters, counter: %d, %d, %d, \n ", cptr_counter3, cptr_counter2, cptr_counter1);
	return threshold_signal;
}

int main(){
 int cptr_main1=0;
 cptr_main1++; 
	counter(detector_signal, 100, &threshold_signal, 1);
	
printf(" THE counters, main: %d, \n ", cptr_main1);
	return detector_signal + threshold_signal;
}
