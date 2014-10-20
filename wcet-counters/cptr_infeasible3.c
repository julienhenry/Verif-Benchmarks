int infeasible3(int x){
 int cptr_infeasible33=0; int cptr_infeasible32=0; int cptr_infeasible31=0;
 cptr_infeasible31++; 
    int s;
    
    if(x >= 10 && x <= 20){
 cptr_infeasible32++; 
        s = 2;
    }
    
    if(x >= 30 && x <= 40){
 cptr_infeasible33++; 
        s = 3;
    }
    
printf(" THE counters, infeasible3: %d, %d, %d, \n ", cptr_infeasible33, cptr_infeasible32, cptr_infeasible31);
    return s;
}

int main(){
 int cptr_main1=0;
 cptr_main1++; 
printf(" THE counters, main: %d, \n ", cptr_main1);
    return infeasible(15);
}
