#include<stdio.h>
#include<math.h>
int main(){
    double dot, a, b, cosx; 
    dot = 3.0*2.0 + 2.0*4.0;
    a = sqrt(pow(3.0,2.0) + pow(2.0,2.0));
    b = sqrt(pow(2.0,2.0) + pow(-2.0,2.0) + pow(4.0,2.0));
    cosx = dot / (a*b);
    printf("The cosine of the angle between the vectors is: %.2lf", cosx);
    //cosx inducates how similar are the two vectors, cosine distance = 1-0.79
    //The more the value is, the more similar the vectors are.
return 0;

}