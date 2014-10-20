int alarm(int timer, unsigned int * control, int duration){
	int signal;

	if(timer >= duration){
		signal = 1;
		*control |= 1;
	}
	
	if(timer < duration){
		signal = 0;
	}

	return signal;
}

int main(){
	int timer = 50;
	unsigned int control = 0;
	
	return alarm(timer, &control, 3600);
}
