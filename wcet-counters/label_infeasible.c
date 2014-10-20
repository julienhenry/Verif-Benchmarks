int infeasible(int x, int y){
cptr_infeasible1:
	int param = 9;

	if(x && y){
cptr_infeasible2:
		param = 18;
	}

	if(x && !y){
cptr_infeasible3: 
		param = 0;
	}

	return param;
}

int main()
{
	infeasible(7,13);
		return 0;
}
