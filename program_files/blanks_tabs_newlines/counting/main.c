#include<stdio.h>

int main(){
	int c, nblank = 0, ntab = 0, nnewline = 0;
	while((c = getchar()) != EOF){
		if(c == ' '){
			++nblank;
		}
		else if(c == '\t'){
			++ntab;
		}
		else if(c == '\n'){
			++nnewline;
		}
	}
	printf("\nIn your input, there are %d number of blanks, %d number of tabs and %d number of newline\n", nblank, ntab, nnewline);
	return 0;
}
