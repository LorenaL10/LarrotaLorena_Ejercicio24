#include <iostream>
#include <random>
#include <stdlib.h>
#include <cmath>

int main(){
    #lista = [np.random.random()]
	int i;
	int N=100000;
	float delta=1.0;
	
	srand48(8);
    
    float phi = drand48(100000) * 2.0 * 3.14
    float gamma = -log(drand48(n_points))
    float r = 1.0* sqrt(2.0 * gamma)
    float x = r * cos(phi)
    float y = r * sin(phi)
        
    #float gaussian = exp(-x**2/(2.0))/sqrt(2.0*3.14)
        
    for (i=1, i<N, i++){
        float propuesta1  = (drand48()-0.5)*delta
        float propuesta = (drand48()-0.5)*delta
        r = exp(propuesta1**2/(2.0))/sqrt(2.0*3.14)/exp(propuesta**2/(2.0))/sqrt(2.0*3.14)
        alpha = drand48()
        if(alpha<r){
            std::cout << propuesta1 <<
            }
        else{
            std::cout << propuesta <<
        }
    
	}
	
return 0;
}