#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ID
    int ID[100];
    scanf("%s",ID);getchar();
    //Nama
    char nama[100];
    scanf("%[^\n]s",nama);getchar();
    //Email
    char email[100];
    scanf("%s",email);getchar();
    //Gender
    char gender[100];
    scanf("%[^\n]s",gender);getchar();
    //alamat
    char alamat[200];
    scanf("%[^\n]s",alamat);getchar();
    //prodi
    char prodi[20];
    scanf("%[^\n]s",prodi);getchar();
    //IPK
    float ipk;
    scanf("%f",&ipk);getchar();


    printf("ID:%s\n",ID);
    printf("nama:%s\n",nama);
    printf("email:%s\n",email);
    printf("gender:%s\n",gender);
    printf("alamat:%s\n",alamat);
    printf("prodi:%s\n",prodi);
    printf("ipk:%.2f\n",ipk);

    return 0;
}
