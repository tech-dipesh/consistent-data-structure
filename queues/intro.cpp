#include <iostream>
#include <queue>
using namespace std;

class Queues{
  private:
    int size;
    int front;
    int rear;
    int *Q;
    public:
      void Enqueue(int x);
      int Dequeue(int x);
      int isFull (int rear, int size);
      int isEmpty(int front, int rear);

};

void Queues::Enqueue(int )