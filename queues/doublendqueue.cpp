#include <iostream>

using namespace std;

class DEQueue{
  private:
  int size;
  int front;
  int rear;
  int *Q;
  public:
  DEQueue():front(0), rear(0), {
    new int[size];
  }
  ~DEQueue(){delete [] *Q};
  
};

int main(){
  DEQueue d;

  return 0;
}