int interval(int x){
 int cptr_interval5=0; int cptr_interval4=0; int cptr_interval3=0; int cptr_interval2=0; int cptr_interval1=0;
 cptr_interval1++; 
	
	int s;

	if(x >= 20){
 cptr_interval2++; 
		if(x <= 30){
 cptr_interval3++; 
			s = 42;
		}
		else{
 cptr_interval4++; 
			s = 63;
		}
	}

	if(x >= 10 && x <= 25){
 cptr_interval5++; 
		s = 33;
	}

printf(" THE counters, interval: %d, %d, %d, %d, %d, \n ", cptr_interval5, cptr_interval4, cptr_interval3, cptr_interval2, cptr_interval1);
	return s;
}

int main(){
 int cptr_main1=0;
 cptr_main1++; 
printf(" THE counters, main: %d, \n ", cptr_main1);
	return interval(42);
}
