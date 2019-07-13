#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "TutorialConfig.h"

int main(int argc, char* argv[])
{
	if(argc < 2)
	{
		fprintf(stdout, "%s Version %d.%d\n", argv[0], TutorialVersionMajor, TutorialVersionMinor);
		fprintf(stdout, "Usage: %s numbers\n",argv[0]);
		return 1;
	}
	double input_value = atof(argv[1]);
	double output_value = sqrt(input_value);
	fprintf(stdout,"The square root of %g is %g\n",input_value,output_value);
	return 0;
}
