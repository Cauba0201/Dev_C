#include<stdio.h>
#include<math.h>

typedef struct toado {
	float x,y;
}

toado nhap(){
	toado A;
	printf("Nhap hd: ");
	scanf("%f",&A.x);
	printf("Nhap hd: ");
	scanf("%f",&A.y);
	return A;
}
toado nhap(){
	toado B;
	printf("Nhap hd: ");
	scanf("%f",&B.x);
	printf("Nhap hd: ");
	scanf("%f",&B.y);
	return B;
}

void in(toado A){
	printf("%1.f,%.2f",A.x,A.y);
}
void in(toado B){
	printf("%1.f,%.2f",B.x,B.y);
}

float kc2d(todoA,toadoB){
	float d;
	d=sqrt(pow(A.x - B.x,2) + pow(A.y - B.y,2));
}
