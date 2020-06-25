//The code should take all the values from int, long, char, float and doubt but after I enter char value, it stops taking other values and gives the output.This is my problem sir

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    printf("Enter the inputs:");
	scanf("%d%li%c%f%lf",&a,&b,&c,&d,&e);
	printf("\nOutput:\n");
	printf("%d\n%li\n%c\n%f\n%lf\n",a,b,c,d,e);
    return 0;
}