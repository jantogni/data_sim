#include "simulation.hpp"

using namespace std;

//star_distance calculate distance between s1 and s2
double star_distance(star s1, star s2){
	return sqrt( pow(s1.ra - s2.ra,2) + pow(s1.dec - s2.dec, 2) );
}

//is_feasible check if is possible add the star s to the catalogue stars 
bool is_feasible(list<star> stars, star s){
	list<star>::iterator it_star;
	bool feasibility = true;

	for(it_star = stars.begin(); it_star != stars.end(); it_star++){
		if(star_distance(*it_star, s) < RES_1){
			feasibility = false;
			cout << "Star not possible" << endl;
			break;
		}
	}

	return feasibility;
}

//slist_c create the first catalogue with n stars and resolution RES_1
list<star> slist_c1(int n){
	int i;
	star sim_star;
	list<star> stars;

	srand(time(NULL));

	for(i=0; i<n; i++){
		sim_star.ra = (double)rand()/((double)RAND_MAX/DRA);
		sim_star.dec = ((rand() % 2)*2 - 1)*(double)rand()/((double)RAND_MAX/DDEC);
		sim_star.magnitude = (float)rand()/((float)RAND_MAX/MAGNITUDE);


		if( is_feasible(stars, sim_star) ){
			cout << "RA = " << sim_star.ra << "\tDEC = " << sim_star.dec << "\tMag = " << sim_star.magnitude << endl;
			stars.push_back(sim_star);	
		}
	}

	return stars;
}

//TODO: create a region using resolution 2
void set_region(star * r, int i, int j){
	r.ra1	= RES_2 * i;
	r.dec1	= RES_2 * j;
	
	r.ra2	= RES_2 * (i+1); 
	r.dec2	= RES_2 * (j+1);
}

int main(){
	slist_c1(N);
	return 0;
}
