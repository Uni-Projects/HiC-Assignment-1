#include <stdio.h>
#include <stdint.h>

int main ()
{
	FILE *f;
        f = fopen ("/dev/urandom" , "r");
        char c[2];
        uint16_t c2 = 0 ;
        
        while (c2 != 42)
        {
		c[0] = getc(f);
		c[1] = getc(f);
		uint8_t hi = c[0] - '0';
		uint8_t low = c[1] - '0';
   
		c2 = hi;
                c2 = (c2 << 8) + low;

		if (hi == 0)
               	    printf("00%x\n", c2);
                else if (hi < 16)
		    printf("0%x\n", c2);
		     else 
			printf("%x\n", c2);	
                
	}
	return 0;
}
