#include<stdio.h>

void nhap(int n, toado D){
	int i;
	for(i=0;i<n;i++){
		printf("nhap toa do thu %d: ",i+1);
		D[i] = nhap();
	}
}
