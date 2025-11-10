#include "DemoManager.h"

int main()
{
   // Start: 
   cout << "===================================== " << endl;
   cout << "Demo of Liskov Substitution principle " << endl;
   cout << "===================================== " << endl;
   // 1 
   auto service_ptr = make_unique<TestService>();
   auto manager_ptr = make_unique<DemoManager>(*service_ptr);
   
   // 2 
   manager_ptr->demoOfBadRectProcess1();
   manager_ptr->demoOfBadRectProcess2();
   
   // 3 
   manager_ptr->demoOfGoodRectProcess();
   manager_ptr->demoOfGoodSquareProcess();

   // 4
   manager_ptr->demoOfGoodTriangleProcess();
   
   // Finish: 
   cout << "\n\nFinish program.";
    return 0;
}
