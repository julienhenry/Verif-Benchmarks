int x = 7, y = 10, z = 15 ;

int main () {
	int cptr_main1 = 0, cptr_main2 = 0, cptr_main3 = 0, cptr_main4 = 0, cptr_main5 = 0;
	int t[10], i;
	
	for (i=0; i<10; i++) {			/*boucle : 10*/
 cptr_main1++; 
		t[i] = i - x;
	}
	
	for (i=0; i<10; i++) {			/*boucle : 10*/
 cptr_main2++; 
		if (i<=5) {			/*chemin : 6*/
 cptr_main3++; 
			y ++ ;
			x ++ ;
		}
		if (t[i]>=0) {		/*chemin : 3*/
 cptr_main4++; 
			x ++ ;
		}
		if (x<15) {			/*chemin : 8*/
 cptr_main5++; 
			z -- ;
		}
	}
	
	if (z<=5) x = 0;
	if (y<20) z = 0;
	
printf(" THE counters, : %d, %d, %d, %d, %d, \n ", cptr_main5, cptr_main4, cptr_main3, cptr_main2, cptr_main1);
	return x;
}
