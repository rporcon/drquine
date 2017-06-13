#include <stdio.h>
#define HELLO WORLD
#define WORLD HELLO
#define FT(x) int main(){char *a = "#include <stdio.h>%c#define HELLO WORLD%c#define WORLD HELLO%c#define FT(x) int main(){char *a = %c%s%c;printf(a,10,10,10,34,a,34,10,10);/* code */}%cFT(x);%c";printf(a,10,10,10,34,a,34,10,10);/* code */}
FT(x);
