#include <stdio.h>

int main() {
    int i,l,h,r;
    float area;
    float volume;
   printf("Select the shape:-\n1.Cube\n2.Sphere\n3.Cylinder\n4.Cone\n\nEnter the number:");
   scanf("%d", &i);
   switch(i){
            case 1:  printf("r=");
                     scanf("%d", &r);
               area=6*r*r;
               volume=r*r*r;
            printf("Area of a Cube=%f\n", area);
            printf("Volume of a Cube=%f", volume);
            break;
            case 2:  printf("r=");
                     scanf("%d", &r);
               area=4*3.14*r*r;
               volume=1.33*3.14*r*r*r;
            printf("Area of a Sphere=%f\n", area);
            printf("Volume of a Sphere=%f", volume);
            break;
            case 3:  printf("r=");
                     scanf("%d", &r);
                     printf("h=");
                     scanf("%d", &h);
   
               area=2*3.14*r*(r+h);
               volume=3.14*r*r*h;
            printf("Area of a Cylinder=%f\n", area);
            printf("Volume of a Cylinder=%f", volume);
            break;
            case 4: printf("r=");
                    scanf("%d", &r);
                    printf("h=");
                    scanf("%d", &h);
                    printf("l=");
                    scanf("%d", &l);
               area=3.14*r*(r+l);
               volume=0.33*3.14*r*r*h;
            printf("Area of a Cone=%f\n", area);
            printf("Volume of a Cone=%f", volume);
            break;
            default:
            printf("Invalid selection");
            break;
   }
   return 0;
}
