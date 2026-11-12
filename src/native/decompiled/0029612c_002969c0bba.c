#include "0029612c_002969c0bba.h"



undefined4 fn_00296630(char param_1,char param_2,char param_3)

{
  if (param_2 == '\0') {
    param_2 = param_3;
    if (param_3 == '\0') {
      return 0;
    }
  }
  else if (param_3 != '\0') {
    if (param_2 == param_3 || param_3 == param_1) {
      return 0;
    }
    return 1;
  }
  if (param_2 == param_1) {
    return 0;
  }
  return 1;
}


