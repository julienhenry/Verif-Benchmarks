int infeasible7(int x){
 int cptr_infeasible73=0; int cptr_infeasible72=0; int cptr_infeasible71=0;
 cptr_infeasible71++; 
    int s;
    
    if(x < 0){
 cptr_infeasible72++; 
        s = 33;
        s++;
        s++;
        s++;
    }
 
    if(x > 2){
 cptr_infeasible73++; 
        s = 17;
        s++;
        s++;
        s++;
    }
    
printf(" THE counters, infeasible7: %d, %d, %d, \n ", cptr_infeasible73, cptr_infeasible72, cptr_infeasible71);
    return s;
}

int main(){
 int cptr_main1=0;
 cptr_main1++; 

printf(" THE counters, main: %d, \n ", cptr_main1);
    return infeasible7(25);
}
