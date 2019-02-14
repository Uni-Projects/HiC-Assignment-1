#include <stdio.h>

int main ()
{
	FILE *f;
        f = fopen ("/dev/urandom" , "r");
        char c;
        int c2 = 0 ;
        
        while (c2 != 42)
        {
		c = getc(f);
                c2 = c - '0';
                printf("%d %u %x\n", c2, c2, c2);
	}
	return 0;
}
