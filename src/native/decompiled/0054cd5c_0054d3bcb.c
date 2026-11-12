#include "0054cd5c_0054d3bcb.h"



int fn_0054d3bc(int *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = (**(code **)(*param_1 + 0x24))(param_1);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = (**(code **)(*param_1 + 0x28))(param_1,uVar5);
      if (iVar3 != 0) {
        iVar4 = 0;
        while (cVar1 = *(char *)(*(int *)(iVar3 + 0x80) + iVar4),
              cVar1 == *(char *)(param_2 + iVar4)) {
          if ((cVar1 == '\0') || (iVar4 = iVar4 + 1, 0x1b < iVar4)) {
            return iVar3;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return 0;
}



undefined4 * fn_0054d308(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = &DAT_00857bbc;
  puVar1 = (undefined4 *)param_1[4];
  if ((undefined4 *)param_1[4] != param_1 + 4) {
    do {
      puVar2 = (undefined4 *)*puVar1;
      fn_00150c1c(param_1 + 3,puVar1);
      if (puVar1 != (undefined4 *)0x0) {
        fn_0019fb94(puVar1);
      }
      puVar1 = puVar2;
    } while (puVar2 != param_1 + 4);
  }
  return param_1;
}



undefined4 * fn_0054d240(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = &DAT_00857bbc;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = param_1 + 4;
  param_1[3] = 0;
  param_1[6] = param_2 + 8;
  param_1[5] = param_1 + 4;
  *(undefined1 *)(param_1 + 7) = 0;
  iVar3 = 0;
  if (*(short *)(param_2 + 0x2a) != 0) {
    do {
      iVar1 = (**(code **)(*param_3 + 0x2c))(param_3,param_2 + 0x2c + iVar3 * 0x18,1);
      if ((iVar1 != 0) && (puVar2 = (undefined4 *)fn_00194ee4(0xc,4), puVar2 != (undefined4 *)0x0))
      {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = iVar1;
        fn_0017d948(param_1 + 3,param_1 + 4,puVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(ushort *)(param_2 + 0x2a));
  }
  return param_1;
}



undefined4 * fn_0054d158(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  
  *param_1 = &PTR_FUN_00857b60;
  puVar2 = (undefined4 *)param_1[5];
  if ((undefined4 *)param_1[5] != param_1 + 5) {
    do {
      puVar3 = (undefined4 *)*puVar2;
      fn_00150c1c(param_1 + 4,puVar2);
      if ((*(byte *)(puVar2 + 0x10) & 8) == 0) {
        piVar4 = puVar2 + -1;
        if (piVar4 != (int *)0x0) {
          puVar1 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
          do {
            if (puVar1 == &DAT_0089a928) {
              piVar5 = (int *)0x0;
              if (piVar4 != (int *)0x0) {
                piVar5 = (int *)puVar2[0x2a];
              }
              if (piVar4 != (int *)0x0 && piVar5 != (int *)0x0) {
                (**(code **)(*piVar5 + 4))(piVar5);
                goto LAB_0054d20c;
              }
              break;
            }
            puVar1 = (undefined4 *)*puVar1;
          } while (puVar1 != (undefined4 *)0x0);
        }
        piVar5 = puVar2 + -1;
        if (piVar5 != (int *)0x0) {
          (**(code **)*piVar5)(piVar5);
LAB_0054d20c:
          fn_0019fb94(piVar5);
        }
      }
      puVar2 = puVar3;
    } while (puVar3 != param_1 + 5);
  }
  return param_1;
}


