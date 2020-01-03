#include<iostream>

using namespace std;

//Write function findDistance() here
double findDistance(double u, double a, double t){
  return (u*t)+0.5*a*t*t;
}

int main(){

  //Calling findDistance() using test cases
  cout << "Enter u = "<< u<<"\n";
  cin >> u;

  cout << "Enter a = "<< u<<"\n";
  cin >> a;

  cout << "Enter t = "<< u<<:"\n";
  cin >> t;

  
  double x = findDistance(u,a,t);
  cout<<"Distance = "<< x ;
  return 0;
}
