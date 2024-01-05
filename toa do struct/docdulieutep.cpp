#include<stdio.h>

int main(){
	float *a;//a[100]
	int n,i;
	FILE *f;
	f=fopen("D:\\dev c\\doc_tai_lieu\\12.txt","r");
	fscanf(f,"%d\n",&n);
	a =new float [n+1];// cap nhat bo nho cho a
	for (i=0;i<n;i++) fscanf(f,"%f",&a[i]);
	
	fclose(f);
	char tentep[100];
	printf("hay nhap ten file chua ket qua: ");
	fflush(stdin);
	gets(tentep);
	f=fopen("tentep","w");
	float s=0;
	for(i=0;i<n;i++)
		s+= a[i];
	
	fprintf(f,"tbc la: %.2f",s/n);
	fputs("day so doc dc tep la\n",f);
	for(i=0;i<n;i++) fprintf(f,"%5.1f",a[i]);
	
	fclose(f);
	puts("hoan thanh");
	
}
