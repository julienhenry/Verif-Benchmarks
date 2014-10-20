int infeasible(int x, int y){
 int cptr_infeasible3=0; int cptr_infeasible2=0; int cptr_infeasible1=0;
 cptr_infeasible1++; 
	int param = 9;

	if(x && y){
 cptr_infeasible2++; 
		param = 18;
	}

	if(x && !y){
 cptr_infeasible3++; 
		param = 0;
	}

printf(" THE counters, infeasible: %d, %d, %d, \n ", cptr_infeasible3, cptr_infeasible2, cptr_infeasible1);
	return param;
}

int main()
{
	infeasible(7,13);
		return 0;
}
