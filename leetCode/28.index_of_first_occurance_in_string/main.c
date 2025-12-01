#include <stdio.h>
#include <string.h>

/*Problem 28: Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack. */


#define MAX_STRING_SIZE 100

int strStr(char *haystack, char *needle){
    int n = strlen(haystack), m = strlen(needle);
    
    for(int i = 0; i < n - m - 1; i++){
        char *ptr = haystack + i;
        if (strncmp(ptr, needle, m) == 0)  return i;
    }
    return -1;
}

int main(){
    char string1[MAX_STRING_SIZE], string2[MAX_STRING_SIZE];
    printf("Enter first string:\n");
    scanf("%s", string1);
    printf("Enter second string to find its occurance in first string:\n");
    scanf("%s", string2);
    int index = strStr(string1, string2);
    if (index != -1){
        printf("%d\n", index);
    }
    else printf("occurance not found.\n");
    return 0;
}
/*
 * Example output sample
 * Enter first string:
 * sadbutsad
 * Enter second string to find its occurance in first string:
 * sad
 * 0
*/
