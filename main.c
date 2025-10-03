#include <stdio.h>
#include <math.h>
//#include <random.h>

const char VERSION[]="0.1.0";

char dline[]="_______________________________";

int main(){
  printf("\n2N-DESTROYER | Version: %s\n%s\n",VERSION,dline);

  while(1){
    short int minimal,maximal;
    printf("Enter minimum: ");
    scanf("%d",&minimal);
    printf("Enter maximal: ");
    scanf("%d",&maximal);
    for(unsigned short int i=minimal;i<maximal+1;i++){
      int input;int answer=(int)pow(2,i);
      printf("Enter 2^%d: ",i);

      if(scanf("%d",&input)!=1){
        printf("Invalid input\n");
        return 1;
      }

      if(input==answer) printf("Correct.\n");
      else printf("Wrong. Right answer is %d.\n",answer);
      //printf("%d |\n",(int)pow(2,i));
    }
  }
  return 0;
}
