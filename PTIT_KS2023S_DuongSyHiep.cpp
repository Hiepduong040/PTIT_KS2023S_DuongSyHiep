#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct SinhVien
{
	int id;
	char name[50];
	char birthday[50];
	char address[50];
	int status;
};
int currentSize = 2;
void displaySinhVien(struct SinhVien arr[], int size){
	for (int i= 0 ; i < currentSize; i++){
				printf("ID: %d\t", arr[i].id);
				printf("Ten sinh vien: %s\t", arr[i].name);
				printf("Ngay Sinh: %s\t", arr[i].birthday);
				printf("Dia chi: %s\t", arr[i].address);
				printf("Status: %d\n", arr[i].status);
				printf("-------------------\n");
			}
	currentSize++;	
}

int main()
{
	struct SinhVien sv1 = {1,"Thai Nguyen Gia Bao", "sinh ngay 21 thang 08", "Phung Hung Ha Dong Ha Noi", 1};
	struct SinhVien sv2 = {2,"Duong Sy Hiep", "sinh ngay 04 thang 09", "Tan Trieu Thanh Tri Ha Noi", 0};
	
	struct SinhVien studentList[100] = {sv1, sv2};
	int currentSize = 2;
	
	int choice;
	do{
	
		printf("**************************************MENU***************************************\n");
		printf("1. In toan bo danh sach sinh vien co o trong mang studentList ra man hinh:\n");
		printf("2. Them moi sinh vien vao vi tri cuoi cung cua studentList, nhap thong tin sinh vien \n");
		printf("3. Cap nhat thong tin sinh vien\n");
		printf("4. Xoa mot sinh vien.\n");
		printf("5. Thuc hien chuc nang xep xep va in ra danh sach studentList da duoc sap xep\n");
		printf("6. Thuc hien chuc nang tim kiem (Tim kiem nhi phan) va in ra thong tin cua sinh vien (Tim kiem theo ten)\n");
		printf("7. Thuc hien chuc nang tim kiem va in ra toan bo thong tin sinh vien theo status\n");
		printf("8. Thoat\n");
	
		scanf("%d", &choice);
	
		switch (choice)
		{
			case 1:
				displaySinhVien(studentList, currentSize);
				break;
			case 2:
				struct SinhVien newSv;
				printf("Nhap vao id cua sinh vien:\n");
				scanf("%d", &newSv.name);
				fflush(stdin);
			
				printf("Nhap vao ten cua sinh vien:\n");
				gets(newSv.name);
				
				printf("Nhap vao ngay thang sinh cua sinh vien:\n");
				gets(newSv.birthday);
				
				printf("Nhap vao dia chi cua sinh vien:\n");
				gets(newSv.address);
				
				printf("Nhap vao status cua sinh vien:\n");
				scanf("%d", &newSv.status);
				fflush(stdin);
				
				studentList[currentSize] = newSv;
				currentSize++;
				
				displaySinhVien(studentList, currentSize);
			break;
		case 3:
				char answer[100];
				printf("Nhap vao sinh vien ban muon chinh sua:\n");
				gets(answer);
				
				int updateIndex = -1;
				for(int i = 0; i<currentSize; i++){
					if(strcmp(studentList[i].name, answer) == 0)
					{
						updateIndex = i;
					}
					
				}
				if(updateIndex != -1){
						printf("Nhap vao ten cua sinh vien:\n");
						gets(studentList[updateIndex].name);
				
						printf("Nhap vao ngay thang sinh cua sinh vien:\n");
						gets(studentList[updateIndex].birthday);
				
						printf("Nhap vao dia chi cua sinh vien:\n");
						gets(studentList[updateIndex].address);
						displaySinhVien(studentList, currentSize);
				}
				
			break;
	
	
	}
}while(1==1);
	return 0;
}
