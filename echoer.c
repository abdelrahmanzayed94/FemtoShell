#include <stdio.h>
#include <string.h>

int main()
{
	char femtoShellInput[256];
	char exitWord[] = "exit\n";
	
	while(1)
	{
		printf("Betak w Matra7ak > ");
		fgets(femtoShellInput, 256, stdin);

		if(strcmp(exitWord, femtoShellInput))
		{
			printf("Da kalamak? %s", femtoShellInput);
		}
		else
		{
			printf("Tare2 elsalama enta\n");
			break;
		}
	}

	return 0;
}

