#include <cstdio>
#include <iostream> 

struct pair{
  int X;
  int Y;
};
   
int main(int argc, char** argv) {	  
  pair pair;
  pair.X = 5;
  pair.Y = 6;   
  char c;
  printf("Operator input: + || - || * || = || > || < \n");
  scanf("%s", &c);
  switch(c) {
    case '+' :
      printf("X + Y = %i\n", pair.X + pair.Y);
      break;
    case '-':
      printf("X - Y = %i\n", pair.X - pair.Y);
      break;
    case '*':
      printf("X * Y = %i\n", pair.X * pair.Y);
      break;    
    case '=':
      if (pair.X == pair.Y){
        printf("X == Y\t%i=%i\n", pair.X, pair.Y);
      }
      if (pair.X != pair.Y){
        printf("X != Y\t%i!=%i\n", pair.X, pair.Y);
      }
      break;
    case '>':
      if (pair.X > pair.Y){
      printf("%i > %i\n", pair.X,pair.Y);
      }     
      if (pair.X < pair.Y){
        std::swap(pair.X, pair.Y);
        printf("%i > %i\n", pair.X,pair.Y);
      }
      break;
        if (pair.X == pair.Y){
          printf("X == Y\t%i=%i\n", pair.X,pair.Y);
        }
        break;
    case '<': 
      if (pair.X < pair.Y){
        printf("%i<%i\n", pair.X, pair.Y);
      }
      if (pair.X > pair.Y){
        std::swap(pair.X, pair.Y);
        printf("%i < %i\n", pair.X, pair.Y);
      }
      break;
      if (pair.X == pair.Y){
        printf("X == Y\t%i=%i\n", pair.X, pair.Y);
      }
      break;
    default:
      printf("Wrong command!\n");
    break;
  }
return 0;
}
