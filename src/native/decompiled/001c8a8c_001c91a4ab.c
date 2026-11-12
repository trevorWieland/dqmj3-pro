#include "001c8a8c_001c91a4ab.h"



undefined4 fn_001c8d94(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = fn_00167500(param_1,*(undefined4 *)(param_1 + 8),param_1 + 8,param_2);
  piVar3 = *(int **)(iVar1 + 0x14);
  while( true ) {
    if (piVar3 == (int *)(iVar1 + 0x14)) {
      return 1;
    }
    iVar2 = fn_0012ead8(*(undefined4 *)(param_1 + 100),piVar3[-5]);
    if (iVar2 == 0) break;
    piVar3 = (int *)*piVar3;
  }
  return 0;
}



undefined4 fn_001c8c60(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 auStack_40 [8];
  uint local_38;
  uint local_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  piVar6 = *(int **)(param_1 + 0x5c);
  iStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  piVar1 = (int *)fn_002fed80(auStack_40,param_3,&local_38);
  piVar1[1] = param_2;
  do {
    if (piVar6 == (int *)(param_1 + 0x5c)) {
      puVar7 = (undefined4 *)0x0;
LAB_001c8d30:
      fn_002fedf4(auStack_40);
      if (puVar7 == (undefined4 *)0x0) {
        iVar2 = fn_00167500(param_1,*(undefined4 *)(param_1 + 8),param_1 + 8,param_2);
        uVar3 = fn_001c8b90(param_1,*(undefined4 *)(iVar2 + 0xc),local_28,param_2);
        return uVar3;
      }
      puVar7[3] = puVar7[3] + 1;
      return *puVar7;
    }
    uVar4 = *(uint *)(piVar6[-4] + -4);
    if (uVar4 == *(uint *)(*piVar1 + -4)) {
      local_38 = uVar4;
      puVar5 = &local_34;
      if (uVar4 <= *(uint *)(*piVar1 + -4)) {
        puVar5 = &local_38;
      }
      local_34 = *(uint *)(*piVar1 + -4);
      iVar2 = fn_001010c8(piVar6[-4],*piVar1,*puVar5);
      if (((iVar2 == 0) && (*(int *)(piVar6[-4] + -4) == *(int *)(*piVar1 + -4))) &&
         (piVar6[-5] == piVar1[1])) {
        puVar7 = piVar6 + -6;
        goto LAB_001c8d30;
      }
    }
    piVar6 = (int *)*piVar6;
  } while( true );
}



int fn_001c8b90(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = (**(code **)(*param_2 + 0x14))(param_2,param_3);
  if (iVar1 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    piVar3 = *(int **)(param_1 + 0x5c);
    while (piVar3 != (int *)(param_1 + 0x5c)) {
      if (piVar3[-6] == iVar2) {
        iVar2 = iVar2 + 1;
        piVar3 = *(int **)(param_1 + 0x5c);
      }
      else {
        piVar3 = (int *)*piVar3;
      }
    }
    piVar3 = (int *)fn_00145b00(0x20,&DAT_00812c8c);
    if (piVar3 != (int *)0x0) {
      piVar3[2] = (int)&DAT_008f9d04;
      piVar3[6] = 0;
      piVar3[7] = 0;
    }
    *piVar3 = iVar2;
    piVar3[1] = param_4;
    fn_001008cc(piVar3 + 2,param_3);
    piVar3[3] = 1;
    piVar3[4] = (int)param_2;
    piVar3[5] = iVar1;
    fn_0017d948(param_1 + 0x58,param_1 + 0x5c,piVar3 + 6);
  }
  return iVar2;
}


