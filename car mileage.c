#include <stdio.h>
 struct car {
     float mileage;
     char name[100];
 };
 int main() {
      struct car cars[50];
     int n;
     printf("enter number of cars:- ");
     scanf("%d",&n);
     struct car temp;
       for(int i=0;i<n;i++){
      printf("\n enter car name:- ");
         scanf("%s",&cars[i].name);
         printf("\n enter car mileage :- ");
         scanf("%f",&cars[i].mileage);
     }
   for(int i=0;i<n;i++){
        printf("\nCar name: %s",cars[i].name);
        printf("\nCar mileage: %f",cars[i].mileage);
     }
     for(int i=0;i<n-1;i++){
         for(int j = i+1;j<n;j++){
         if(cars[i].mileage>cars[j].mileage){
              temp=cars[i];
             cars[i]=cars[j];
             cars[j]=temp;
         }
         }
         }
     printf("\n---------car sorted by mileage\n------------");
    for(int i=0;i<n;i++){
        printf("car name ;%s",cars[i].name);
        printf("mileage :%.2f\n",cars[i].mileage);
    }
    return 0;
}
