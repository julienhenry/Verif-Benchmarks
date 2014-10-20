int main(){
 int cptr_main10=0; int cptr_main9=0; int cptr_main8=0; int cptr_main7=0; int cptr_main6=0; int cptr_main5=0; int cptr_main4=0; int cptr_main3=0; int cptr_main2=0; int cptr_main1=0;
 cptr_main1++; 
	int i=0;
	
	if (i>0){	
 cptr_main2++; 
			i++;
	}
	
	if (i<0) {
 cptr_main3++; 
			i--;
	}
	
	if (i==0) {
 cptr_main4++; 
		i++;
		i*2;
		i--;
	}
	
	if (1) {
 cptr_main5++; 
		i++;
		i++;
		i++;
	}
	
	if (0 || 2>>1) {
 cptr_main6++; 
		if (i>0) {
 cptr_main7++; 
				i=i*i;
		}
		i--;
		i--;
		i--;
		if (1) {
 cptr_main8++; 
			if (0 || 4 >>2) {
 cptr_main9++; 
				if (1&&0) {
 cptr_main10++; 
					i++;
					i++;
					i++;
					i++;
					i++;
					i++;
					i++;
					i++;
				}
				else if (i>0!=i<0) {
						i=0;
				}
			}
		}
	}
	
printf(" THE counters, main: %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, \n ", cptr_main10, cptr_main9, cptr_main8, cptr_main7, cptr_main6, cptr_main5, cptr_main4, cptr_main3, cptr_main2, cptr_main1);
	return i;
}
