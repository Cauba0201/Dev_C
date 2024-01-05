#include<stdio.h>
#include<math.h>

int main(){
	float *x,*y;
	int n,i;
	FILE *p;
	p=fopen("day-diem.txt","rt");
	if(p=NULL){
		puts("not found!");
		return 0;
		
	}
	fscanf(p,"%d\n",&n);
	x=new float[n+1];
	y=new float [n+1];
	for(i=0;i<n;i++){
		fscanf(p,"%f%f\n",&x[i],&y[i]);		
		printf("(%.2f,%.1f)",x[i],y[i])
	}
	
	fclose(p);
	int d1=0;
	for(i=0;i<n;i++){
		if(x[i]>0 && y[i]>0)
		d1++;
	}
	int d2=0;
	for(i=0;i<n;i++){
		if(x[i]<0 && y[i]>0)
		d2++;
	}
	int d3=0;
	for(i=0;i<n;i++){
		if(x[i]>0 && y[i]<0)
		d3++;
	}
	int d4=0;
	for(i=0;i<n;i++){
		if(x[i]<0 && y[i]<0)
		d4++;
	}
	char tentep[60];
	printf("nhap ten tep chua kq: ");
	fflush(stdin);
	gets(tentep);
	p=fopen(tentep,"w");
	for(i=0;i<n;i++) fprintf(p,"(%.2f,%.1f)")
}










