#include<stdio.h>
struct SinhVien{
    char name[50];
    int age;
    char phoneNumber[15];
};
int main(void){
    struct SinhVien sv1={"Nguyen Thi Yen", 18, "0987654321"};
    printf("Ten: %s\n", sv1.name);
    printf("Tuoi: %d\n", sv1.age);
    printf("SDT: %s\n", sv1.phoneNumber);
    return 0;
}


