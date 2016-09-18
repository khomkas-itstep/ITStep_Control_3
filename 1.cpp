#include <cstdio> 
#include <math.h> 

float sqrt(float A, float B, float C);
  
int main(int argc, char** argv) {  	
  float A ;
  float B ;
  float C ;
  printf("Enter a b c\n"); 
  scanf("%f\n%f\n%f", &A, &B, &C);   
  sqrt( A,  B,  C);	 
  return 0;		  	
}
  
float sqrt(float A, float B, float C) {  
  if (B * B - 4 * A * C < 0) {
    printf("NO ROOTS");
  }    			
  if (B * B - 4 * A * C >= 0) { 
    printf("ROOT1 = %0.2f\tROOT2 = %0.2f", (((-B) + sqrt(B * B - 4 * A * C)) / (2 * A)), (((-B) - sqrt(B * B - 4 * A * C) )/( 2 * A))); 			
  }   
}
  
