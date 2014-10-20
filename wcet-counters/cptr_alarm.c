int alarm(int timer, unsigned int * control, int duration){
 int cptr_alarm3=0; int cptr_alarm2=0; int cptr_alarm1=0;
 cptr_alarm1++; 
	int signal;

	if(timer >= duration){
 cptr_alarm2++; 
		signal = 1;
		*control |= 1;
	}
	
	if(timer < duration){
 cptr_alarm3++; 
		signal = 0;
	}

printf(" THE counters, alarm: %d, %d, %d, \n ", cptr_alarm3, cptr_alarm2, cptr_alarm1);
	return signal;
}

int main(){
 int cptr_main1=0;
 cptr_main1++; 
	int timer = 50;
	unsigned int control = 0;
	
printf(" THE counters, main: %d, \n ", cptr_main1);
	return alarm(timer, &control, 3600);
}
