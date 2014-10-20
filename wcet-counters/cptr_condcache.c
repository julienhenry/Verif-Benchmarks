int main(){
 int cptr_main4=0; int cptr_main3=0; int cptr_main2=0; int cptr_main1=0;
 cptr_main1++; 
int a=1,b=0,c=1;
int tmpl1=a;

if(tmpl1){
 cptr_main2++; 
int tmpl2=(a||b);
int tmpl3=(tmpl2||c);
int tmpl4=1;
	
	if(tmpl2){
 cptr_main3++; 
		a++;
}

tmpl3=((!tmpl2)&&tmpl3);
	
	if(tmpl3)
	{
		a-=10;
	}

tmpl4=((!tmpl2)&&(!tmpl3)&&tmpl4);
	
	if(tmpl4){
 cptr_main4++; 
		a+=5;
	}
}
printf(" THE counters, main: %d, %d, %d, %d, \n ", cptr_main4, cptr_main3, cptr_main2, cptr_main1);
return a;
}
		
