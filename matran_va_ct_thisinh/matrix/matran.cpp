// gia xu co tep matran.txt luu tru thong tin ve ma tran thuc co m hang va n cot. Tep co cau truc nhu sau: dong dau chua 2 so nguyen 
// bieu dien so hang m, so cot n cua ma tran tu dong thu 2 tro di moi dòng gôm n so thuc bieu dien 1 hang cua ma tran 
//	1. hay nhap du lieu cho chuong trinh tu tep tren 
//	2. tim gia tri lon nhat cua matran
//	3. in ket qua (bao gom matran da doc duoc)vao tep outputmt.txt

// 21/9/2023

#include"stdio.h"
#include"math.h"

int main(){
	int m,n,i,j;
	float **a; //a[10][12]
	FILE *fr,*fw;
	// nhap ma tran a tu tep fr
	fr=fopen("matran.txt","rt");
	if(fr==NULL){
		puts("Invalid matran.txt");
		return 0;
	}
	fscanf(fr,"%d%d",&m,&n);
	a = (float**) new float[m*n];
	for(i=0;i<m;i++){
		a[i]=new float[n];
		for(j=0;j<n;j++){
			fscanf(fr,"%f",&a[i][j]);
			
		}
		fscanf(fr,"\n");
	}
	// tim gia tri lon nhat cua ma tran 
	float max;
	max=a[0][0];
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		if(a[i][j]>max) max= a[i][j];
	
	// in ma tran tim dc len ma tran 
	
	printf("\n gia trin lon nhat cua ma tran %.2f\n",max);
	puts("ma tran ban dau la");
	for (i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%7.1f",a[i][j]);
		printf("\n");
	}
	
	return 0;
}








