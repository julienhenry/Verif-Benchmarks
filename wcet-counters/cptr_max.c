int max(int x, int y, int z){
 int cptr_max8=0; int cptr_max7=0; int cptr_max6=0; int cptr_max5=0; int cptr_max4=0; int cptr_max3=0; int cptr_max2=0; int cptr_max1=0;
 cptr_max1++; 
    int m;
    int s = 0;
    
    if(x <= y){
 cptr_max2++; 
        if(y <= z){
 cptr_max3++; 
            m = z;
        }
        else{
 cptr_max4++; 
            m = y;
        }
    }
    else {
 cptr_max5++; 
        if(x <= z){
 cptr_max6++; 
            m = z;
        }
        else{
 cptr_max7++; 
            m = x;
        }
    }
    
    if(m < x || m < y || m < z){
 cptr_max8++; 
        s++;
        s++;
        s++;
    }
    
printf(" THE counters, max: %d, %d, %d, %d, %d, %d, %d, %d, \n ", cptr_max8, cptr_max7, cptr_max6, cptr_max5, cptr_max4, cptr_max3, cptr_max2, cptr_max1);
    return s;
}

int main(){
 int cptr_main1=0;
 cptr_main1++; 
    
printf(" THE counters, main: %d, \n ", cptr_main1);
    return max(2,3,4);
}
