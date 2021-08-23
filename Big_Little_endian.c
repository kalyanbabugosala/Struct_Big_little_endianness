/*
if little endian *c =1 
else *c = 0 for big endian
*/

#include <stdio.h>

void endian(){
    unsigned int i = 1;
   char *c = (char*)&i;
   if (*c)    
       printf("Little endian");
   else
       printf("Big endian");
}

int main() 
{
   endian();
   return 0;
}
