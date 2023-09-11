#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char *s;
    s=malloc(1024*sizeof(char));
    scanf("%[^\n]", s);
    int sum[10]={0,0,0,0,0,0,0,0,0,0};
    
    int i=0;
    while(s[i]!='\0'){
      switch(s[i]){
        case '0':
          sum[0]+=1;
          i++;
          break;
        case '1':
          sum[1]+=1;
          i++;
          break;
        case '2':
          sum[2]+=1;
          i++;
          break;
        case '3':
          sum[3]+=1;
          i++;
          break;
        case '4':
          sum[4]+=1;
          i++;
          break;
        case '5':
          sum[5]+=1;
          i++;
          break;
        case '6':
          sum[6]+=1;
          i++;
          break;
        case '7':
          sum[7]+=1;
          i++;
          break;
        case '8':
          sum[8]+=1;
          i++;
          break;
        case '9':
          sum[9]+=1;
          i++;
          break;
        default:
          i++;
          break;    
      }
    }
    for(int i=0;i<10;i++){
      printf("%d ",sum[i]);
      }
    return 0;
}
