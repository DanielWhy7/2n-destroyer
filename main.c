// 2N-DESTROYER
#include <stdio.h>
#include <math.h>
//#include <random.h>

const char VERSION[]="0.1.0";
const char DLINE[]="_______________________________";

int main(){
  printf("\n2N-DESTROYER | Version: %s\n%s\n",VERSION,DLINE);

  while(1){
    for(unsigned short int i=0;i<11;i++){
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
