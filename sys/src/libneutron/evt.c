#include <neutron.h> 

void InitializeEventSystem(void* theEnv) {
   InitializeDrawSystem(theEnv);
   InitializeInputSystem(theEnv);
}
