int infeasible8(int x){
	int s = 0;

	if(x >= 10 && x <= 20){
		s++;
		s++;
		s++;
	}
	
	if(x >= 30 && x <= 40){
		s++;
		s++;
		s++;
	}

	return s;
}

int main(){
	return infeasible8(26);
}
