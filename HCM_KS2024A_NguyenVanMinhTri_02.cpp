#include<stdio.h>
int main(){
	int const Maxsize=100;
	int choice,sochan=0,sole=0,numMaxt1=0;
	int size,array[Maxsize];
	printf("================MENU===============\n");
	printf("1.Nhap so phan tu va gia tri cho mang\n");
	printf("2.In ra gia tri cac phan tu trong mang\n");
	printf("3.Dem so luong cac phan tu chan le trong mang\n");
	printf("4.Tim gia tri lon thu hai trong mang\n");
	printf("5.Them phan tu\n");
	printf("6.Xoa phan tu\n");
	printf("7.Xap xep mang theo thu tu giam dan(Insertion sort)\n");
	printf("8.Tim phan tu trong mang\n");
	printf("9.In so nguyen to trong mang duoc binh phuong\n");
	printf("10.Sap xep mang theo thu tu giam dan(Bubble sort)\n\n\n");
	while(1){
		printf("Moi nhap lua chon: ");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("Moi ban nhap so phan tu cho mang: ");
			scanf("%d",&size);
			array[size];
			printf("Moi ban nhap gia tri tung phan tu:\n");
			for(int i=0;i<size;i++){
				printf("array[%d]= ",i);
				scanf("%d",&array[i]);
			}
			break;
			case 2: printf("Gia tri cac phan tu trong mang la: ");
			for(int i=0;i<size;i++){
				printf(" %d",array[i]);
			}
			printf("\n");
			break;
			case 3:
			for(int i=0;i<size;i++){
				if(array[i]%2==0){
					sochan++;
				}else{sole++;
				}	
			}
			printf("So luong cac phan tu so chan la %d\n",sochan);
			printf("So luong cac phan tu so le la %d\n",sole);
			break;
		    /*case 4:
			for(int i=0;i<size;i++){
				for(int j=1;j<size;j++)
				if(array[i]>array[j]){
					numMaxt1=array[i];
				}else{
					numMaxt1=array[j];
				}
			}
				printf("numMaxt1 la: %d\n",numMaxt1);*/
				
				
			/*case 5: int addarray,vitri;
			printf("Moi ban nhap gia tri muon them: ");
			scanf("%d",&addarray);
			printf("Moi ban nhap vi tri muon them: ");
			scanf("%d",&addarray);
			if(size==Maxsize){
				printf("Mang da day khong the them");
			}else{
				for(int i=size-1;i>=vitri;i--){
					array[i]=array[i-1];
				}
				array[vitri]=addarray;
			}
			printf("Danh sach phan tu sau khi them la: ");
			for(int i=0;i<size;i++){
				printf("%d ",array[i]);
			}
			printf("\n");*/
			case 7: 
			 for (int i = 1; i < size; i++) {
             int key = array[i];
              int j = i - 1;
             while (j >= 0 && array[j] < key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    break;
    case 8: int giatri,vitri;
	printf("Moi nhap gia tri can tim ");
    scanf("%d",giatri);
    for(int i=0;i<size;i++){
    	if(array[i]==giatri){printf("nam o vi tri %d",i);}
    	printf("khong tim thay");
    		
		
	}
				/*case 9: for(int i=0;i<size;i++){
					for(int j=0;j<sqrt(array[i]);j++){
						if(sqrt)
						
						
					}
					break;*/
				
			case 10:  for (int i = 0; i < size - 1; i++) {
                     for (int j = 0; j < size - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
			}
        }
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
					
		}
		printf("\n");
		break;

}
}
	return 0;
}
