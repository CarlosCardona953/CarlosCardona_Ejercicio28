#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
  int lado = 201;
  double delta = 0.5;
  double u_old[lado];
  double u_new[lado];
  double u_inicial[lado];
  int i, j;
  ofstream outfile;
  double t=0;
  double k=200;
  double c=900;
  double p=2700;
  double g=(k*delta)/(c*p);
    
    
  for(i=0;i<lado;i++){
      u_old[i]=300;
      u_inicial[i]=300;
     if((i>80) && (i<120)){         
         u_old[i]=500;
         u_inicial[i]=500;
      }
  }   
    
while(t<100){



    for(i=1;i<lado-1;i++){       
    u_new[i] = u_old[i] + g*(u_old[i+1]+u_old[i-1] -2*u_old[i]);
     }
    
    
  for(i=1;i<lado-1;i++){      
	u_old[i] = u_new[i];
      
    }   
    
    t=t+delta;
}
    
    
    
  outfile.open("calor.dat");
 
    for(i=0;i<lado;i++){
      outfile << u_inicial[i] << " " << u_old[i] << endl;
    }
  
  outfile.close();
  return 0;

}