#include<stdio.h>
#include<math.h>

void nhap(char *tentep, int &m,float *hs1,int &n,float *hs2){
	FILE *f;
	f=fopen(tentep,"r");
	fscanf(f,"%d%d\n",&m,&n);
	hs1= new float [m+1];
	hs2= new float [n+1];
	for(int i=0;i<=m;i++){
		fscanf(f,"%f",&hs1[i]);
	}
	fscanf(f,"\n");
	for(int i=0;i<=n;i++){
		fscanf(f,"%f",&hs2[i]);
	}
	fclose(f);
}

float tinhgt(int n,float *hs,float d){
	float s=0;
	for (int i=0;i<=n;i++){
		s+=hs[i]*pow(d,i);
	}
	return s;
}

void indt(int n,float *hs){
	for (int i=0;i<=n;i++) printf("%6.1f",hs[i]);
}
