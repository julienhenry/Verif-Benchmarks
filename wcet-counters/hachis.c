int x = 7, y = 10, z = 15 ;

int main () {
	int t[10], i;
	
	for (i=0; i<10; i++) {			/*boucle : 10*/
		t[i] = i - x;
	}
	
	for (i=0; i<10; i++) {			/*boucle : 10*/
		if (i<=5) {			/*chemin : 6*/
			y ++ ;
			x ++ ;
		}
		if (t[i]>=0) {		/*chemin : 3*/
			x ++ ;
		}
		if (x<15) {			/*chemin : 8*/
			z -- ;
		}
	}
	
	if (z<=5) x = 0;
	if (y<20) z = 0;
	
	return x;
}
