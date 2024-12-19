#include<stdio.h>
struct SinhVien{
    char name[50];
    int age;
    char phoneNumber[15];
};
typedef struct SinhVien sv;
int main(void){
    sv arrSv[5];
    for(int i=0; i<5; i++){
        printf("Moi ban nhap ten sv thu %d :", i+1);
        fgets(arrSv[i].name, 50, stdin);
        // xoa dau \n
        for(int k=0; k< 50; k++){
            if(arrSv[i].name[k] =='\n'){
                arrSv[i].name[k]='\0';
            }
        }
        
        printf("Moi ban nhap tuoi sv thu %d :", i+1);
        scanf("%d", &arrSv[i].age);
        getchar();
        printf("Moi ban nhap sdt sv thu %d :", i+1);
        fgets(arrSv[i].phoneNumber, 15, stdin);
    }
    for(int i=0;i<5; i++){
        printf("%s \t", arrSv[i].name);
        printf("%d \t", arrSv[i].age);
        printf("%s \t", arrSv[i].phoneNumber);
        printf("\n");
    }
    return 0;
}
