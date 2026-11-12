#include "00425e78_00427eb8b.h"



void fn_00427eb8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003d8360(param_1,param_2,6);
  *puVar1 = &DAT_0083b440;
  return;
}



void fn_00427df4(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x12);
  *puVar1 = &DAT_0083b418;
  *(undefined1 *)(puVar1 + 0x1b) = 0;
  puVar1[0x1c] = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x16) = *param_3;
  uVar2 = *(undefined4 *)(param_3 + 4);
  puVar1[0x19] = 0xffffffff;
  puVar1[0x17] = uVar2;
  uVar2 = *(undefined4 *)(param_3 + 8);
  puVar1[0x1a] = 0xffffffff;
  puVar1[0x18] = uVar2;
  return;
}



void fn_00426ed0(int param_1,short param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *local_54 [3];
  undefined4 *local_48;
  undefined1 auStack_44 [48];
  
  local_54[0] = &DAT_008f9cf4;
  local_48 = &DAT_008f9cf4;
  if (param_4 == 0) {
    iVar4 = fn_0068f7c4((int)param_2,param_3);
    if (iVar4 == 0) {
      uVar1 = fn_0068f7f8((int)param_2,param_3);
      uVar3 = fn_0016a7c4();
      fn_00147974(local_54,uVar3);
      uVar1 = fn_0022ee10(uVar1);
      fn_00147974(&local_48,uVar1);
    }
    else {
      fn_0022f818(auStack_44,0x15,iVar4,0);
      fn_00147974(local_54,auStack_44);
      uVar1 = fn_0022f2b0(iVar4);
      fn_00147974(&local_48,uVar1);
    }
  }
  else {
    uVar1 = fn_0022f584((char *)&DAT_004270a8,0);
    fn_00147974(local_54,uVar1);
    piVar2 = local_54[0] + -3;
    if (*piVar2 == -1) {
      if (&local_48 != local_54) {
        fn_00177c88(&local_48,0,local_48[-1],local_54[0],local_54[0][-1],0,local_54[0][-1]);
      }
    }
    else {
      if (piVar2 != &DAT_008f9ce8) {
        *piVar2 = *piVar2 + 1;
      }
      if (local_48 != &DAT_008f9cf4) {
        piVar2 = local_48 + -3;
        iVar4 = *piVar2;
        if ((iVar4 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar4 + -1, iVar4 == 0)))) {
          fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
        }
      }
      local_48 = local_54[0];
    }
  }
  fn_00321118(*(undefined4 *)(param_1 + 0x58),local_54[0],local_48);
  fn_00689bd0(param_1,0x49,0);
  *(undefined1 *)(param_1 + 0x108) = 4;
  fn_001588d4(&local_48);
  fn_001588d4(local_54);
  return;
}


