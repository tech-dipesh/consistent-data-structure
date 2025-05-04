#include <iostream>
using namespace std;
int pascal(int n, int r){
  int nfact, rfact, nrfact;
  nfact=pascal(n);
  rfact=pascal(r);
  nrfact=pascal(n-r);
  return nfact/(rfact*nrfact);
}

int main(){
  int n, r;
  cin>>n>>r;
   int result=pascal(n, r); 
cout<<
return 0;
}