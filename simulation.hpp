#ifndef SIM_H
#define SIM_H

#include<iostream>
#include<stdlib.h>
#include<list>
#include<time.h>
#include<math.h>

#define N			1000	//number of stars
#define DRA			360		//right asension degree
#define DDEC		90		//declination positive degree
#define MAGNITUDE	10		//star magnitude
#define RES_1		0.5		//resolution of first catalogue
#define RES_2		1		//resolution of second catalogue

using namespace std;

/* Star structure definition
*/
typedef struct star{
	double ra;
	double dec;
	double magnitude;
} star;

typedef struct region{
	double ra_1;
	double dec_1;

	double ra_2;
	double dec_2
} region;

double star_distance(star s1, star s2);

bool is_feasible(list<star> stars, star s);

list<star> slist_c1(int n);

void set_region(region * r, int i, int j);

#endif
