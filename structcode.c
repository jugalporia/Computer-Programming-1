#include <stdio.h>
#include <string.h>
struct book{
    char author[30];
    char bname[30];
    char isbn[40];
    int edition;
    float price;
    char publisher[40];
}b1,b2,b3;

void display(struct book b){
    printf("%s\n",b.author);
    printf("%s\n",b.bname);
    printf("%s\n",b.isbn);
    printf("%d\n",b.edition);
    printf("%.2f\n",b.price);
    printf("%s\n",b.publisher);
}

void main(){
    struct book b1={"Roald Dahl", "Poem collection", "978-2-231-346",4,475.00,"Penguin.co"};
    b2=b1;
    printf("Enter author:\n");
    scanf("%s",&b3.author);
    printf("Enter book name:\n");
    scanf("%s",&b3.bname);
    printf("Enter ISBN:\n");
    scanf("%s",&b3.isbn);
    printf("Enter publisher:\n");
    scanf("%s",&b3.publisher);
    printf("Enter edition:\n");
    scanf("%d",&b3.edition);
    printf("Enter price:\n");
    scanf("%f",&b3.price);

    printf("This the book 1:\n");
    display(b1);
}
