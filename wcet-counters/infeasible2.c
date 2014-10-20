int infeasible2(int x){
    int s = 0;
    
     s++;
     
	 if(x >= 10 && x <= 20){
        s += 2;
     }
        
     if(x >= 30 && x <= 40){
        s += 3;
     }
    
    return s;
}

int main(){
    return infeasible2(15);
}
