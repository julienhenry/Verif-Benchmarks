int infeasible(int x, int y){
	int param = 9;

	if(x && y){
		param = 18;
	}

	if(x && !y){
		param = 0;
	}

	return param;
}

int main()
{
	infeasible(7,13);
		return 0;
}
