int main(){
int a=1,b=0,c=1;
int tmpl1=a;

if(tmpl1){
int tmpl2=(a||b);
int tmpl3=(tmpl2||c);
int tmpl4=1;
	
	if(tmpl2){
		a++;
}

tmpl3=((!tmpl2)&&tmpl3);
	
	if(tmpl3)
	{
		a-=10;
	}

tmpl4=((!tmpl2)&&(!tmpl3)&&tmpl4);
	
	if(tmpl4){
		a+=5;
	}
}
return a;
}
		
