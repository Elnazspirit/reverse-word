#include <stdio.h>

//int main() {
    //printf("Hello, World!\n");
    //return 0;
//}

  int main() {

    char a[]="book";
    int i,j ;
    int c=sizeof(a)-1;
    char b[c];
    printf("size of a: %d\n",c);

      for (i = 0; i<c ; i++){
          b[c-1-i] = a[i];
      }

      printf("reverse: \n");

      for (j = 0; j<c ; j++){
          printf("%c",b[j]);
      }

    return 0;
}
