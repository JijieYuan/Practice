#include  <stdio.h>
void dohello () {
    printf("hello, world\n");
}

int main (int argc, char* argv[]) {
    for (int i = 0; argv[i] != NULL; i++) {
	printf("%s\n", argv[i]);
 }
    return 0;
}	
