int interval(int x){
	
	int s;

	if(x >= 20){
		if(x <= 30){
			s = 42;
		}
		else{
			s = 63;
		}
	}

	if(x >= 10 && x <= 25){
		s = 33;
	}

	return s;
}

int main(){
	return interval(42);
}
