int main(){
 int cptr_main7=0; int cptr_main6=0; int cptr_main5=0; int cptr_main4=0; int cptr_main3=0; int cptr_main2=0; int cptr_main1=0;
 cptr_main1++; 
	int t[1000];
	int x=100, i, y=0, j;
	
	for (i=0; i<1000; i++){
 cptr_main2++; 
		t[i]=0;
	}
	
	for (i=1; i<=100; i++) {
 cptr_main3++; 
		if (x>10) {
 cptr_main4++; 
			y++;
			for (j=1; j<y; j++){
 cptr_main5++; 
				t[j] ++ ;
			}
		}
		else{
 cptr_main6++; 
			y++;
		}
		
		if (y){
 cptr_main7++; 
			x--;
		}
	}
printf(" THE counters, main: %d, %d, %d, %d, %d, %d, %d, %d %d\n ", cptr_main7, cptr_main6, cptr_main5, cptr_main4, cptr_main3, cptr_main2, cptr_main1,x,y);
	return 0;
}
