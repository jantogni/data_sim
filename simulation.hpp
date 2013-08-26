#ifndef SIM_H
#define SIM_H

#include<iostream>
#include<stdlib.h>
#include<list>
#include<time.h>

#define N			1000	//number of stars
#define DRA			360		//right asension degree
#define DDEC		90		//declination positive degree
#define MAGNITUDE	10		//star magnitude

/* Star structure definition
*/
typedef struct star{
	double ra;
	double dec;
	double magnitude;
} star;

#endif
