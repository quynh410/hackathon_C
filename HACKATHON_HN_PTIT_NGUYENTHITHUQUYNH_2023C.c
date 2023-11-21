#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int numbers[100],currentIndex,n;
	int sum,sumNumbers;
	int max,min,m,k,l;
	do {
		printf("**************************MENU**************************\n");
		printf("1. Nhap gia tri n phan tu cua mang ( n nhap tu ban phim)\n");
		printf("2. In gia tri cac phan tu trong mang\n");
		printf("3. Tinh tong cac phan tu chia het cho 2 va 3\n");
		printf("4. In ra gia tri phan tu lon nhat v nho nhat trong mang\n ");
		printf("5. Su dung thuat toan sap xep chen sap xep mang tang dan\n ");
		printf("6. Tinh tong cac phan tu la so nguyen to trong mang\n");
		printf("7. Sap xep cac phan tu le chia het cho 5 o dau mang theo thu tu giam dan , cac phan tu chan chia het cho 5 o cuoi mang theo thu tu tang dan cac phan tu con lai  giua mang theo thu tu giam dan\n");
		printf ("8. Nhap gia tri m tu ban phim , chen gia tri m vao mang ( sap xep tang dan) dung vi tri\n");
		printf("9. Thoat\n");
		printf("Lua chon cua ban:\n");
		int choice;
		scanf("%d", &choice);
		switch (choice){
			case 1:
			printf("Nhap so phan tu cua mang: ");
				scanf("%d",&n);
				for(int i = 0;i<n;i++){
					printf("num[%d]= ",currentIndex);
					scanf("%d",&numbers[currentIndex]);
					currentIndex++;
				}
				break;			
			case 2:
				printf("Gia tri cac phan tu trong mang la:\n");
				for(int i=0;i<currentIndex;i++){
					printf("%d\t",numbers[i]);
				}
				printf("\n");
				break;
			case 3:
				sum=0;
				printf("Cac phan tu co gia tri chia het cho 2 va 3 trong mang: \n");
				for(int i=0;i<currentIndex;i++){
					if(numbers[i]%2==0 && numbers[i]%3==0){
						printf("%d\n",numbers[i]);
					    sum+=numbers[i];
					}
				}
				break;
			case 4:
				min=numbers[0];
				max=numbers[0];
				for(int i = 1; i<currentIndex; i++){
					if(min>numbers[i]){
						min=numbers[i];
					}
					if(max<numbers[i]){
						max=numbers[i];
					}
				}
				printf("Phan tu lon nhat :%d\n Phan tu nho nhat :%d\n",max,min);
				break;
			case 5:
					for(int i = 1; i<currentIndex; i++){
                    int key = numbers[i];
                    int j = i-1;
                    while(j>=0 && key<numbers[j]){ 
                        numbers[j+1] = numbers[j]; 
                        j -= 1;
                    }
                    numbers[j+1] = key;
                }
                printf("Mang sau khi sap xep la:\n");
	                for(int i=0;i<currentIndex;i++){
		                printf("%d\n",numbers[i]);
                }
				break;
			case 6:
  				sumNumbers = 0;
					printf("Phan tu cac so nguyen to trong mang: ");
						for(int i=0;i<currentIndex;i++){
						int isPrime = 0;
						if(numbers[i] >= 2){
							for(int j = 2; j<=sqrt(numbers[i]); j++){
								if(numbers[i] %j==0){
								isPrime = 1;
								break;
							}
						}
					}else{
						isPrime = 1;
					}
					if(isPrime == 0){
						//numbers[i] la so nguyen to
						printf("%d\n", numbers[i]);
						sumNumbers += numbers[i];
					}
				}
				printf("\nTong cac so nguyen to la: %d\n",sumNumbers);
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				exit(0);
			default:
				printf("Nhap so tu 1-9 ");
		}
		} while (1==1);
	}


