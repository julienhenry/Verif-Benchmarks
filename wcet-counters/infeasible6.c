int infeasible6(int x, int y){
    int s = 0;
    int i;
    
    if(x && y){
        s++;
		s++;
		s++;
    }
    
    if(x && !y){
        s++;
		s++;
		s++;
    }
    
    return s;
}

int main(){
    return infeasible6(1,1);
}
