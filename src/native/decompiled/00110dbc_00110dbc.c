#include "00110dbc_00110dbc.h"



/* WARNING: Removing unreachable block (ram,0x00110ec8) */
/* WARNING: Removing unreachable block (ram,0x00110e68) */
/* WARNING: Removing unreachable block (ram,0x00110e98) */
/* WARNING: Removing unreachable block (ram,0x00110eec) */

void fn_00110dbc(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined *local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined4 local_18;
  
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001286c4();
  }
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 4) = piVar2;
  }
  local_38 = &DAT_008576ac;
  local_20 = 0x20;
  local_1c = 0;
  local_1b = 0;
  local_18 = 0;
  local_34 = param_1 + 8;
  local_1a = 1;
  local_2c = 0x400;
  local_24 = 0x40;
  local_30 = 0x100;
  local_28 = 0x40;
  fn_00143498(*(undefined4 *)(param_1 + 4),&local_38);
  return;
}


