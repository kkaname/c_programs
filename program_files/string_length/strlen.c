#include <stdio.h>

/*Program to implement the strlen() funtion from the string.h library*/

#define MAXLEN 100

int str_len(char *s){
    int i = 0;
    
    while (s[i] != '\0')
        ++i;

    return i;
} 

/* Another method using pointer arithmatic
 * int str_len(char *s) {
 *  int n;
 *  for (n = 0; *s != 0; s++) {
 *      ++n;
 *  }
 *}
 */

/* Another method using pointer arithmatic of address
 * int str_len(char *s) {
 *  int *p = s;
 *  while (*p !=  '\0'){
 *      p++;
 *  }
 *  return p - s;
 *}
 */

int main(void){
    char s[MAXLEN];
    printf("Enter a string to determine its length: ");
    scanf("%[^\n]%*c", s);
    printf("Length of string: %d\n", str_len(s));

    return 0;
}
