#include<stdio.h>
#define MAX_SIZE 100
int main(){
	int arr[MAX_SIZE];
	int n=0;
	int index,value,choice;
	while(1){
	printf("\nMENU\n");
	printf("1.Nhap so phan tu va gia tri cho mang\n");
	printf("2.In ra gia tri cac phan tu trong mang\n");
	printf("3.Dem so luong cac phan tu chan le trong mang\n");
	printf("4.Tim gia tri lon thu hai trong mang");
	printf("5.Them mot phan tu vao dau mang\n");
	printf("6.Xoa phan tu tai mot vi tri cu the\n");
	printf("7.Sap xep mang theo thu tu giam dan\n");
	printf("8.Nguoi dung nhap vao mot phan tu\n");
	printf("9.In ra toan bo so nguyen to trong mang da duoc binh phuong\n");
	printf("10.Sap xep mang theo thu tu giam dan\n");
	printf("11.Thoat\n");
			scanf("%d",&choice);
		switch(choice){
			case 1:
				 printf("Moi ban nhap so luong phan tu: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf(" arr[%d] = ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

			case 2:
				printf("Mang hien tai la ");
				for(int i=0;i<n;i++){
					printf("%d ",arr[i]);
				}
				printf("\n");
				break;
			case 3:
				{
					int count=0,value=0;
			for(int i=0;i<n;i++){
				if(arr[i]%2==0){
					count++;
				}else{
					value++;
				}
			}
			printf("Trong mang co tat ca %d so chan",count);
			printf("Trong mang co tat ca %d so le",value);
			break;
				}
				break;
			case 4:
                break;
			case 5:
			 {
                    int number;
			printf("Moi ban nhap phan tu moi vao dau mang ");
			scanf("%d",&number);
			for(int i = n; i > number; i--){
		         	arr[i] = arr[i - 1];
			}
					arr[0] = number;
                    n++;
			}
			for(int i=0;i<n;i++){
				printf("%d",arr[i]);
			printf("\n");
			break;
		}
			case 6:
				{
				int a,index;
		printf("Moi ban nhap vi tri can xoa : ");
	    scanf("%d",&a);
	    index = a - 1;
	    for(int i=index;i<n;i++){
		arr[i]=arr[i+1];
	}
	   for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
			break;
		}
			case 7:
				{
				int temp,minIndex;
	        for(int i=0;i<n;i++){
		        minIndex=i;
		          for(int j=i+1;j<n;j++){
			        if(arr[j]>arr[minIndex]){
			            temp=arr[minIndex];
		             	arr[minIndex]=arr[j];
		             	arr[j]=temp;
		}
		 for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	}
			break;
		}
		case 8:{
			int start = 0;
			int end = sizeof(arr)/sizeof(int);
			int mid;
			while(start <= end){
				mid=(start + end)/2;
				if(arr[mid]==n){
					printf("Vi tri phan tu can tim o vi tri %d \n",mid);
					return 0;
				}else if(arr[mid]>n){
					end=mid-1;
				}else{
					start=mid+1;
				}
			}
			for(int i=0;i<n;i++){
				printf("%d",arr[i]);
			}
			printf("\n");
			break;
		}
		case 9:{
			int sum_primes = 0;
                    printf("Cac so nguyen to co trong mang la: ");
                    for (int i = 0; i < n; i++) {
                        int is_prime = 1;
                        for (int j = 2; j <= arr[i] / 2; j++) {
                            if (arr[i] % j == 0) {
                                is_prime = 0;
                                break;
                            }
                        }
                        if (is_prime && arr[i] > 1) {
                            printf("%d ", arr[i]);
                            sum_primes = arr[i]*arr[i];
                        }
                    }
                    printf("\n Binh phuong cua cac so nguyen to la: %d\n", sum_primes);
			break;
		}
		case 10:{
			for(int i=0;i<n-1;i++){
				for(int j=0;j<n-i-1;j++){
					if(arr[i]<arr[j]){
						int temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}
			for(int i=0;i<n;i++){
		    printf("%d",arr[i]);
			break;
		}
		case 11:{
			printf("Moi ban thoat chuong trinh\n");
			break;
			default:
				printf("Moi ban nhap lai");
	}
		}
	}
}
	}
	return 0;
}
					
