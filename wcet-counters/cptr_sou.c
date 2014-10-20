int main(){
 int cptr_main4=0; int cptr_main3=0; int cptr_main2=0; int cptr_main1=0;
 cptr_main1++; 
	int x=100;
	x -= 2;
	x -= 3;
	x -= 4;
	x -= 5;
	x -= 6;
	x -= 7;
	
	if (x>10) {
 cptr_main2++; 
		x -= 8;
		x -= 9;
		x -= 10;
	}
	
	if (x>0){
 cptr_main3++; 
		x = -19999;
	}
	else{
 cptr_main4++; 
		x--;
	}
	
printf(" THE counters, main: %d, %d, %d, %d, %d\n ", cptr_main4, cptr_main3, cptr_main2, cptr_main1,x);
	return 0;
}
