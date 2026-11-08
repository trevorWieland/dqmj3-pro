#include "dispatch_types6.h"

void state_dispatch6(StateWord055 location,const void *input,StateWord055 components,
                     StateWord055 count,StateWord055 transpose,StateWord055 matrix) {
    if (location == 0xffffffffu || count == 0)
        return;
    if (location&0x40000u)
        (void)state_dispatch_property_component6(location,input,components,count,transpose,matrix);
    else
        state_dispatch_uniform6(location,input,components,count,transpose,matrix);
}
