#include <stdio.h>
int main() {
    float km , meters, centimeters , feet , inches;
    printf("Enter distance between 2 cities in km");
    scanf("%f",&km);
    
    meters=km*1000;
    centimeters=meters*100;
    feet=meters*3.28084;
    inches=feet*12;
    
    printf("meters   :%.2f\n",meters);
     printf("meters  :%.2f\n",centimeters);
      printf("meters : %.2f\n",feet);
       printf("meters: %.2f\n",inches);

return 0;
}