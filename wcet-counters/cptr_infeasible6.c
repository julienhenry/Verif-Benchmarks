int infeasible6(int x, int y){
 int cptr_infeasible63=0; int cptr_infeasible62=0; int cptr_infeasible61=0;
 cptr_infeasible61++; 
    int s = 0;
    int i;
    
    if(x && y){
 cptr_infeasible62++; 
        s++;
		s++;
		s++;
    }
    
    if(x && !y){
 cptr_infeasible63++; 
        s++;
		s++;
		s++;
    }
    
printf(" THE counters, infeasible6: %d, %d, %d, \n ", cptr_infeasible63, cptr_infeasible62, cptr_infeasible61);
    return s;
}

int main(){
 int cptr_main1=0;
 cptr_main1++; 
printf(" THE counters, main: %d, \n ", cptr_main1);
    return infeasible6(1,1);
}
