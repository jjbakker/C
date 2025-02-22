#include <stdio.h>
#include <stdlib.h> // for exit 

int main(int argc, char *argv[]) 
{
    // declaratie van filepointer
    // typedef ui stdio.h
    int ch;
    FILE *fpin, *fpout;
    if(argc != 3) {
        printf("Usage ammeraal_10_copy <filein> <fileout>\n");
        exit(1);
    }
    // open files
    fpin = fopen(argv[1], "r");
    fpout = fopen(argv[2], "w");
    // verifh
    if(fpin == NULL || fpout == NULL) {
        printf("Error opening file\n");
        exit(1);
    }
    // reading and writing
    while ((ch = getc(fpin)) != EOF) putc(ch, fpout);
    fclose(fpin);
    fclose(fpout);
    return (0);
 
}