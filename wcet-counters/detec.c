int main(){
	int t[1000];
	int x=100, i, y=0, j;
	
	for (i=0; i<1000; i++){
		t[i]=0;
	}
	
	for (i=1; i<=100; i++) {
		if (x>10) {
			y++;
			for (j=1; j<y; j++){
				t[j] ++ ;
			}
		}
		else{
			y++;
		}
		
		if (y){
			x--;
		}
	}
	return t[y];
}
