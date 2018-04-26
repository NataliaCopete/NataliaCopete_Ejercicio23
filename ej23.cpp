#include <iostream>
#include<math.h>


using std::cout;
using std::endl;


int main(){

double c2=0.1*0.1; 
double dx=0.0025;
double dt=0.0025;
double *u;
double *u1;

double *uant;
double xmin=0.0;
double xmax=1.0;
int N=(xmax-xmin)/dx;
double Y=(c2*dt*dt)/(dx*dx);
double pi=acos(-1);



u=new double[N];
u1=new double[N];

uant=new double[N];

for(int i=0;i<N;i++){
     double x=(2*pi)*(i*dx);
     u1[i]=sin(x);
    
     uant[i]=sin(x);
    
 }

 u[0]=0;
 u[N-1]=0;


for(int i=1;i<N-2;i++){

u[i]=u1[i]+(Y/2)*(u1[i+1]-2*u1[i]+u1[i-1]);
}

for(int i=0;i<N;i++){
u1[i]=u[i];

}

for (int k=0;k<6000;k++){

for(int i=1;i<N-1;i++){
 
  u[i]= Y*(u1[i+1]+u1[i-1]-2*u1[i])+2*u1[i]-uant[i];
  
}


if(k==0){
for(int i=0;i<N;i++)
{
  
  cout<<uant[i]<<" ";
  cout<<endl;
}

}
for (int i=0;i<N;i++)
{
uant[i]=u1[i];
u1[i]=u[i];
}

if(k==650){
for(int i=0;i<N;i++){

  cout<<u[i]<<" ";
  cout<<endl;
}

}
}

return 0;
}

