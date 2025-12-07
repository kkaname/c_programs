#include <stdio.h>

/*Exercise 2.5: Write the function any (s1, s2), which returns the first location in the string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. (The standard library function strpbrk does the same job but returns a pointer to the location.)*/

#define MAX_LEN 100

int any (char s1[], char s2[]){
    for (int i = 0; s1[i] != '\0'; i++){
        for (int j = 0; s2[j] != '\0'; j++){
            if (s1[i] == s2[j])
                return i;
        }
    }
    return -1;
}

int main(void){
    char s1[MAX_LEN] = "hello world!", s2[MAX_LEN] = "aieou";

    int res = any(s1, s2);

    if(res != -1)
        printf("%d\n", res);
    else 
        printf("Any occurance not found.\n");
    
    return 0;
}
