#include <stdio.h>

int main(int argc,char* argv[]) 
{
	int c_count = 0;
	int a_count = 0;
	int g_count = 0;
	int t_count = 0;
	int line = 0;
        int c_line = 0;
	char c = 0;

	FILE *f;

	f = fopen( argv[1], "r" );
	
	while(c != EOF)
	{
		c = fgetc(f);
                c_line++;
		if( c == 65)
			a_count++;
		else if(c == 67)
			c_count++;
		else if(c == 71)
			g_count++;
		else if(c == 84)
			t_count++;
                else if(c == '\n')
		{
			if (c_line == 101)
				c_line = 0;
			else {
                                printf("error %d char present in line %d!\n",c_line-1,line);
                                return 1;
                             }
                        line++;
		}
      		else if (c != 65 && c != 67 && c != 71 && c != 84 && c != EOF){
		         printf("error char not valid at line: %d, pos: %d!\n",line+1,c_line);
                         return 1;
                    }
               
                        
        }
        if (line != 500){
		printf("error %d lines present instead of 500!\n",line);
               	return 1;
	}
	printf("A: %d\n", a_count);
	printf("C: %d\n", c_count);
	printf("G: %d\n", g_count);
	printf("T: %d\n", t_count);
	return 0;
}



