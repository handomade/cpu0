#define DIVHEADER
#include <stdio.h>
#include <stdlib.h>
#include "iotlib.h"

main (argc,argv)
int 	argc;
char*	argv[];
{
	int bl;
	TINY st[32];
	
	if(argc < 2){
		bl = iotgti("msx/me/pm/cpu/percent");
		printf("CPU PERCENT:%u\n",bl);	
		printf("CPU <percent0-255>\n");
		return;
	}
	bl = atoi(argv[1]);
	if(bl<0){
		bl = 0;
	}
	if(bl>255){
		bl = 255;
	}
	iotpti("msx/me/pm/cpu/percent",bl);
	bl = iotgti("msx/me/pm/cpu/percent");
	printf("CPU PERCENT:%u\n",bl);	
}
