int infeasible2(int x){
 int cptr_infeasible23=0; int cptr_infeasible22=0; int cptr_infeasible21=0;
 cptr_infeasible21++; 
    int s = 0;
    
     s++;
     
	 if(x >= 10 && x <= 20){
 cptr_infeasible22++; 
        s += 2;
     }
        
     if(x >= 30 && x <= 40){
 cptr_infeasible23++; 
        s += 3;
     }
    
printf(" THE counters, infeasible2: %d, %d, %d, \n ", cptr_infeasible23, cptr_infeasible22, cptr_infeasible21);
    return s;
}

int main(){
 int cptr_main1=0;
 cptr_main1++; 
printf(" THE counters, main: %d, \n ", cptr_main1);
    return infeasible2(15);
}
