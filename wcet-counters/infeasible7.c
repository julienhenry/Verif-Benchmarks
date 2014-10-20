int infeasible7(int x){
    int s;
    
    if(x < 0){
        s = 33;
        s++;
        s++;
        s++;
    }
 
    if(x > 2){
        s = 17;
        s++;
        s++;
        s++;
    }
    
    return s;
}

int main(){

    return infeasible7(25);
}
