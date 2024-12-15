#include <stdio.h>
void updte(int arr[],int newvla,int positin){
	if (positin <0||positin >=5){
		printf("vi tri khong hop le");
		return;
	}
	arr[positin]=newvla;
}
int main() {
	int arr[5]={1,5,6,9,8,7};
	printf("mang truoc khi cap nhap: ");
		for(int i =0 ; i<5;i++){
			printf("%d",arr[i]);
		}
	int newvla=99;
	int positin=2;
	updte(arr,newvla,positin);
		printf("\n mang sau khi cap nhap: ");
		for(int i =0 ; i<5;i++){
			printf("%d",arr[i]);
		}
    return 0;
}


