#include <iostream> 

template <typename T> T sr_aR(T* A, int N);
  
int main(int argc, char** argv) {	  
  int N = 3;	
  float a[N];
  std::cout << "Enter float ARRAY" << std::endl;
  for(int i = 0; i < N; ++i) {
    std::cin >> a[i];
  }
  for(int i = 0; i < N; ++i) {
    std::cout << a[i] << ';';
  }
  std::cout << "Srednee arifmeti4eskoe = " << sr_aR(a,N) << std::endl << std::endl;
  
  int b[N];
  std::cout << "Enter int ARRAY" << std::endl;
  for(int i = 0; i < N; ++i) {
    std::cin >> b[i];
  }
  for(int i = 0; i < N; ++i) {
    std::cout << b[i] << ';';
  }
  std::cout << "Srednee arifmeti4eskoe = " << sr_aR(b,N);  	
  return 0;
}
  
template <typename T> T sr_aR(T* A,int N) {
  T sum = 0;
  for(int i=0; i<N; i++){
    sum = sum + A[i];
  }
  std::cout << std::endl;
  return sum/N ;	
}
	


	
		
	
