#include <stdio.h>
#include <stdlib.h>

int longc(char *cad){
	int n = 0;
	while (cad[n]!='\0'){
		n++;
	}
	printf("%d\n",n);
	return n;
}
char copiar(char *o,char *q){
	int n= longc(o);
	q=(char*) malloc (n+1);
	for (int i=0;i<n;i++){
		q[i]=o[i];
		q[i+1]='\0';
	}
	printf("%s\n",q);
	return *q;
}
int copiarN(char *s,char *p,int m){
	p=(char*)malloc(m+1);
	for(int i=0;i<m;i++){
		p[i]=s[i];
		p[i+1]='\0';
	}
	printf("%s\n",p);
}
int copiarSub(char *w,char *y,int l,int k){
	y=(char*)malloc(k);
	int c=0;
	for(int i=l;i<=k;i++){
		y[c]=w[i];
		y[c+1]='\0';
		c++;
	}
	printf("%s\n",y);
}
int compararCad(char *u,char*p){
	int g=longc(u);
	int r=longc(p);
	int a1=0;
	int a2=0;
	int temp=0;
	for (int i=0;i<g;i++){
		temp=u[i];
		a1=a1 + temp;
	}
	for (int i=0;i<r;i++){
		temp=p[i];
		a2=a2+ temp;
	}	
	if (a1==a2){
		printf("= 0");
	}
	else if (a1<a2){
		printf("< 0");
	}
	else if(a1>a2){
		printf("> 0");
	}
}
int concCad(char *e,char *r){
	int q= longc(e);
	int f= longc(r);
	char *h=e;
	e=(char *)malloc(q+f+1);
	for (int i=0;i<q;i++){
		e[i]=h[i];
	}
	for (int i=0;i<f;i++){
		e[i+q]=r[i];
		e[i+q+1]='\0';
	}
	printf("%s\n",e);
}

int asignarC(char *cad1, char car){
	int lcad1=longc(cad1);
	char *lista=cad1;
	cad1=(char *)malloc(lcad1+1);
	for (int i=0;i<lcad1;i++){
		cad1[i]=car;
	}
	printf("%s",cad1);
}
int haciaMayusculas(char *cad){
	int lcad=longc(cad);
	char temp='a';
	char *lista=cad;
	cad=(char*)malloc(lcad+1);
	for (int i=0;i<lcad;i++){
		temp=lista[i];
		if(temp>=97&&temp<=122){
			temp=temp-32;
			cad[i]=temp;
		}
		else{
			cad[i]=lista[i];
		}
	}
	cad[lcad]='\0';
	printf("%s\n",cad);
}
int existeCaracter(char* cad, char car){
	int lc=longc(cad);
	for (int i=0;i<lc;i++){
		if(car==cad[i]){
			printf("%d\n",1);
			return 1;
		}
		if (i==(lc-1)){
			printf("%d\n",0 );
			return 0;
		}
	}
}
int existeInicio(char* cad, char car){
	int lc=longc(cad);
	for (int i=0;i<lc;i++){
		if(car==cad[i]){
			printf("%d\n",i);
			return i;
		}
		if (i==(lc-1)){
			printf("%d\n",-1 );
			return -1;
		}
	}
}
int existeFinal(char* cad, char car){
	int lc=longc(cad);
	int c=0;
	for (int i=lc-1;i>0;i--){
		if(car==cad[i]){
			printf("%d\n",c);
			return c;
		}
		if (i==(0)){
			printf("%d\n",-1 );
			return -1;
		}
		c++;
	}
}
int main(int arc, char *argv[]){
	char *cad1 =argv[1];
	longc(cad1);
	/*char *d1="holapohbre$";
	char *t="ab";
	char car='h';
	longc(d1);
	copiar(d1,t);
	copiarN(d1,t,3);
	copiarSub(d1,t,1,3);
	compararCad(d1,t);
	concCad(d1,t);
	asignarC(d1,car);
	haciaMayusculas(d1);
	existeCaracter(d1,car);
	existeInicio(d1,car);
	existeFinal(d1,car);
	int a = atoi("ha");
	printf("%d\n",a );*/
}
