## This repository contains a set of scripts and programs written in C that demonstrate different functionalities.

"compile.c": This program compiles a C file without linking it. The name of the C file is stored in the variable $CFILE, and the output file is named the same as the C file, but with the extension .o instead of .c. This program is written using the gcc command as follows:
```
gcc -c $CFILE -o ${CFILE%.*}.o
```

"assembler.c": This program generates the assembly code of a C code and saves it in an output file. The name of the C file is stored in the variable $CFILE, and the output file is named the same as the C file, but with the extension .s instead of .c. This program is written using the gcc command as follows:
```
gcc -S $CFILE -o ${CFILE%.*}.s
```

"name.c": This program compiles a C file and creates an executable named "cisfun". The name of the C file is stored in the variable $CFILE. This program is written using the gcc command as follows:
```
gcc $CFILE -o cisfun
```

"puts.c": This C program prints the string "Programming is like building a multilingual puzzle" followed by a new line. This program uses the function "puts" and ends with the value 0. This program is written as follows:
```
#include <stdio.h>
int main(void) {
puts("Programming is like building a multilingual puzzle\n");
return 0;
}
```

"printf.c": This C program prints the string "with proper grammar, but the outcome is a piece of art," followed by a new line. This program uses the function "printf" and returns 0. This program is written as follows:
```
#include <stdio.h>
int main(void) {
printf("with proper grammar, but the outcome is a piece of art,\n");
return 0;
}
```

"size.c": This C program prints the size of various data types on the computer it is compiled and run on. The program produces the exact same output as the example provided. The program returns 0 and might produce warnings. This program is written as follows:

```
#include <stdio.h>
int main(void) {
int a;
long int b;
long long int c;
char d;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return 0;
}
```

"intel.c": This program generates the assembly code (Intel syntax) of a C code and saves it in an output file. The name of the C file is stored in the variable $CFILE, and the output file is named the same as the C file, but with the extension .s instead of .c. This program is written using the gcc command as follows:

```
gcc -S -masm=intel $CFILE -o ${CFILE%.*}.s
```

"quote.c": This C program prints the string "and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error. This



