`# include <iostream>
using namespace std;
class customer{
   public:
      customer(){
         cout << "constructor called" << endl;
      }
      ~customer(){
         cout << "destructor called" << endl;
      }
};
 int main(){
        customer C1;
        return 0;
 }`
