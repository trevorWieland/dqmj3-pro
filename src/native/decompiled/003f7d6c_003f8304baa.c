#include "003f7d6c_003f8304baa.h"



void fn_003f80d4(int param_1)

{
  if (*(char *)(param_1 + 0x34) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x34) = 0;
  fn_001218d4(DAT_00897800,DAT_0089878c);
  return;
}



void fn_003f809c(int param_1)

{
  if (*(char *)(param_1 + 0x34) == '\0') {
    *(undefined1 *)(param_1 + 0x34) = 1;
    fn_00121838(DAT_00897800,DAT_0089878c,1);
    return;
  }
  return;
}


