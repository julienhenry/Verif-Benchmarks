int detector_signal;
int threshold_signal;

int counter(int x, int threshold, int * signal, int reset ){
	static int value;
	
	if(reset){
		value = 0;
	}
	
	if(!reset){
		value += 1;
		*signal = (value >= threshold);	
	}
	
	return threshold_signal;
}

int main(){
	counter(detector_signal, 100, &threshold_signal, 1);
	
	return detector_signal + threshold_signal;
}
