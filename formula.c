#include <stdio.h>
#include <math.h>

int main() {
    int i, l, h, r;
    float area;
    float volume;

    printf("Select the shape:-\n1. Cube\n2. Sphere\n3. Cylinder\n4. Cone\n\nEnter the number: ");
    scanf("%d", &i);

    switch(i) {
        case 1:
            printf("Enter side length (r) of the Cube: ");
            scanf("%d", &r);
            area = 6 * r * r;
            volume = r * r * r;
            printf("Surface Area of the Cube = %.2f\n", area);
            printf("Volume of the Cube = %.2f\n", volume);
            break;

        case 2:
            printf("Enter radius (r) of the Sphere: ");
            scanf("%d", &r);
            area = 4 * M_PI * r * r;
            volume = (4.0 / 3.0) * M_PI * r * r * r;
            printf("Surface Area of the Sphere = %.2f\n", area);
            printf("Volume of the Sphere = %.2f\n", volume);
            break;

        case 3:
            printf("Enter radius (r) of the Cylinder: ");
            scanf("%d", &r);
            printf("Enter height (h) of the Cylinder: ");
            scanf("%d", &h);
            area = 2 * M_PI * r * (r + h);
            volume = M_PI * r * r * h;
            printf("Surface Area of the Cylinder = %.2f\n", area);
            printf("Volume of the Cylinder = %.2f\n", volume);
            break;

        case 4: 
            printf("Enter radius (r) of the Cone: ");
            scanf("%d", &r);
            printf("Enter height (h) of the Cone: ");
            scanf("%d", &h);
            printf("Enter slant height (l) of the Cone: ");
            scanf("%d", &l);
            area = M_PI * r * (r + l);
            volume = (1.0 / 3.0) * M_PI * r * r * h;
            printf("Surface Area of the Cone = %.2f\n", area);
            printf("Volume of the Cone = %.2f\n", volume);
            break;

        default:
            printf("Invalid selection.\n");
            break;
    }

    return 0;
}
