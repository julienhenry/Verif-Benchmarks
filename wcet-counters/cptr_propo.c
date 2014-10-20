int main() {
 int cptr_main3=0; int cptr_main2=0; int cptr_main1=0;
 cptr_main1++; 
	int x=0, y=10;
	
	while ((y*1000)>(x*1000)) {
 cptr_main2++; 
		x ++ ; y -- ;
	}
	x = 1;
	y = 10;
	
	while ((y*1000)>(x*1000)) {
 cptr_main3++; 
		x ++ ; y -- ;
	}
	
printf(" THE counters, main: %d, %d, %d, %d,%d\n ", cptr_main3, cptr_main2, cptr_main1,x,y);
	return x;
}
