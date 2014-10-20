int infeasible8(int x){
 int cptr_infeasible83=0; int cptr_infeasible82=0; int cptr_infeasible81=0;
 cptr_infeasible81++; 
	int s = 0;

	if(x >= 10 && x <= 20){
 cptr_infeasible82++; 
		s++;
		s++;
		s++;
	}
	
	if(x >= 30 && x <= 40){
 cptr_infeasible83++; 
		s++;
		s++;
		s++;
	}

printf(" THE counters, infeasible8: %d, %d, %d, \n ", cptr_infeasible83, cptr_infeasible82, cptr_infeasible81);
	return s;
}

int main(){
	return infeasible8(26);
}
