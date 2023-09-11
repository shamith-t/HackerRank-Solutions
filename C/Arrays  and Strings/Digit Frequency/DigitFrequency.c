#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char *s;
    s=malloc(1024*sizeof(char));
    scanf("%[^\n]", s);
    int sum[10]={0};
    
    int i=0;
    while(s[i]!='\0'){
      if(s[i]>='0'&&s[i]<='9'){    
        sum[s[i]-'0']++;
      }
      i++;
    }
    for(int i=0;i<10;i++){
      printf("%d ",sum[i]);
      }
    return 0;
}
