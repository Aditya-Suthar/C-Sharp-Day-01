// To basically check if atleast three digits of the four digits are ON


#include <stdio.h>
int main (void)

{
    int val = 0xCAFE; //OxCAFE is an integer written in hexadecimal
    int bits = val & 0xF;
    
    if ( bits == 0x7 || bits == 0xE || bits == 0xB || bits == 0xD || bits == 0xF )
    
    {
        printf ("atleast three of last four bits (LSB) are ON");
    }
    else 
        printf ("atleast three of last four bits (LSB) are OFF");
}