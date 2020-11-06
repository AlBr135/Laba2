#include <stdio.h>
//Enter a string, replace the spacing between words with two spaces.
int main () {
	int x = 0, i = 0;
    printf("Entered string: ");
	while ((x = getchar()) != '\n') {
  	if (x == ' ' || x == '\t' ) {
    	i++;
    	} else {
          	if (i != 0){
              putchar(' ');
              putchar(' ');
          }
        putchar(x);
        i = 0;
      }
	}  
  return 0;
}

