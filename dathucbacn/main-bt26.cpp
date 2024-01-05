#include"bt26-10.cpp"

int main(){
	int bacP, bacQ, bacDTHieu;
	float *hsP, *hsQ,d1,d2,tem, *hsDTHieu;
	nhap("bt26.txt",bacP,hsP,bacQ,hsQ);
	printf("\nDa thuc P: \n");
	indt(bacP,hsP);
	printf("\nDa thuc Q: \n");
	indt(bacQ,hsQ);
	printf("nhap d1, d2: ");
	scanf("%f%f",&d1,&d2);
	tem= tinhgt(bacP,hsP,d1) - tinhgt(bacQ,hsQ,d2);
	if(tem>=0){
		printf("\nBieu thuc la: %.3f",sqrt(tem));
	}else {
		printf("\n Khong tinh dc da thuc ");
	}
	
}
