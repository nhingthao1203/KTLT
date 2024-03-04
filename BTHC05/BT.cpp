#include <iostream>
#include<string> 
using namespace std;
class a

{

  private:

          int x;

  public:

          int getx() { return x;};

          void set(int m) { x = m; };

};

int main()

{

      a gt;

      gt.set(5);

      cout << gt.getx();

}