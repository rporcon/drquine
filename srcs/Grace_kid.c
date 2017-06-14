#include <stdio.h>
#include <fcntl.h>
#define HELLO WORLD
#define WORLD HELLO
#define FT(x) int main(){char *a = "#include <stdio.h>%c#include <fcntl.h>%c#define HELLO WORLD%c#define WORLD HELLO%c#define FT(x) int main(){char *a = %c%s%c;fprintf(fopen(%c./srcs/Grace_kid.c%c, %cw+%c),a,10,10,10,10,34,a,34,34,34,34,34,10,10);/* code */}%cFT(x);%c";fprintf(fopen("./srcs/Grace_kid.c", "w+"),a,10,10,10,10,34,a,34,34,34,34,34,10,10);/* code */}
FT(x);
