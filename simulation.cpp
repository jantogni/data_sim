#include "simulation.hpp"

using namespace std;

void slist_c(int n, float p){
	int i;
	star sim_star;
	list<star> stars;

	srand(time(NULL));

	for(i=0; i<n; i++){
		sim_star.ra = (double)rand()/((double)RAND_MAX/360);
		sim_star.dec = ((rand() % 2)*2 - 1)*(double)rand()/((double)RAND_MAX/90);
		sim_star.magnitude = (float)rand()/((float)RAND_MAX/10);

		cout << "RA = " << sim_star.ra << "\tDEC = " << sim_star.dec << "\tMag = " << sim_star.magnitude << endl;
		stars.push_back(sim_star);	
	}
}

int main(){
	slist_c(10, 10);
	return 0;
}
