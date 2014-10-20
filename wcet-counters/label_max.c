int max(int x, int y, int z){
cptr_max1: 
    int m;
    int s = 0;
    
    if(x <= y){
cptr_max2 : 
        if(y <= z){
cptr_max3 : 
            m = z;
        }
        else{
cptr_max4 :
            m = y;
        }
    }
    else {
cptr_max5 : 
        if(x <= z){
cptr_max6 : 
            m = z;
        }
        else{
cptr_max7 : 
            m = x;
        }
    }
    
    if(m < x || m < y || m < z){
cptr_max8 : 
        s++;
        s++;
        s++;
    }
    
    return s;
}

int main(){
cptr_main1 : 
    
    return max(2,3,4);
}
