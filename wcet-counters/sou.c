int main(){
	int x=100;
	x -= 2;
	x -= 3;
	x -= 4;
	x -= 5;
	x -= 6;
	x -= 7;
	
	if (x>10) {
		x -= 8;
		x -= 9;
		x -= 10;
	}
	
	if (x>0){
		x = -19999;
	}
	else{
		x--;
	}
	
	return 0;
}
