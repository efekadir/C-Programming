#include <stdio.h>
#define BMI_CALCULATE(weight, height) (weight) / (((height) * (height)))


int main(){
    float weight;
    float height;
    printf("Enter your weight in kilograms: \n");
    scanf("%f", &weight);

    printf("Enter your height in centimeters: \n");
    scanf("%f", &height);
    
    float BMIvalue = BMI_CALCULATE(weight, (height / 100.0));

    printf("Your BMI value is %.2f and you are ", BMIvalue);

    if (BMIvalue < 18.5) {
        printf("underweight.");
    }
    else if (18.5 <= BMIvalue && BMIvalue < 25) {
        printf("normal.");
    }
    else if (25 <= BMIvalue && BMIvalue < 30) {
        printf("overweight.");
    }
    else {
        printf("obese.");
    }

    printf("\n");

    return 0;
}
