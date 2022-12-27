#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

 double hyp(int a, int b){

        return sqrt(a*a+b*b);
}
int main(){
  int a,b;
  cin>> a>>b;
  double c=hyp(a,b);
cout<<setprecision(4)<<c;
  return 0;
}
