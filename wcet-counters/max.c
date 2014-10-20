int max(int x, int y, int z){
    int m;
    int s = 0;
    
    if(x <= y){
        if(y <= z){
            m = z;   // x <= y <= z
        }
        else{
            m = y;   // x <= y and z < y
        }
    }
    else {
        if(x <= z){
            m = z;   // y < x <= z
        }
        else{
            m = x;   // y < x and z < x
        }
    }
    
    if(m < x || m < y || m < z){ 
        s++;
        s++;
        s++;
    }
    
    return s;
}

int main(){
    
    return max(2,3,4);
}