#include "006d53e8_006d604c.h"



undefined1 * fn_006d604c(undefined4 param_1,int *param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  bool bVar5;
  
  if (*param_2 < 0) {
    puVar1 = (undefined1 *)*param_2;
    if (puVar1 != (undefined1 *)0xc8a113ea) {
      param_4 = (undefined1 *)0xe0a113f8;
    }
    if (puVar1 == (undefined1 *)0xc8a113ea || puVar1 == param_4) {
      return (undefined1 *)0xd0a14867;
    }
    uVar3 = (uint)puVar1 >> 0x1b;
    if (((uint)puVar1 & 0x80000000) != 0) {
      uVar3 = uVar3 - 0x20;
    }
    if ((uVar3 == 0xfffffffb) && (((uint)puVar1 & 0x3fc00) == 0x6c00)) {
      bVar5 = ((uint)puVar1 & 0x7e00000) == 0xa00000;
      if (bVar5) {
        puVar1 = (undefined1 *)((uint)puVar1 & 0x3ff);
      }
      if (bVar5 && puVar1 == (undefined1 *)0x6) {
        return (undefined1 *)0xd0a14867;
      }
    }
    puVar4 = (undefined1 *)*param_2;
    puVar1 = &DAT_e0a14827;
    if (puVar4 != param_4 && puVar4 != (undefined1 *)0xc8a113ea) {
      if (puVar4 == (undefined1 *)0xc90113fa) {
        puVar1 = (undefined1 *)0xd8814865;
      }
      else {
        puVar2 = (undefined1 *)0xe10113e9;
        puVar1 = (undefined1 *)0xe0e14826;
        if (puVar4 != (undefined1 *)0xe10113e9) {
          puVar2 = &DAT_e10113fd;
        }
        if (puVar4 != (undefined1 *)0xe10113e9 && puVar4 != puVar2) {
          if (puVar4 == (undefined1 *)0xc86113f0) {
            return (undefined1 *)0xd861482c;
          }
          if (puVar4 == (undefined1 *)0xc9411002) {
            return (undefined1 *)0xd8a14825;
          }
          if (puVar4 != (undefined1 *)0xe10113f1) {
            return &DAT_e0a14827;
          }
        }
      }
    }
  }
  else {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



void fn_006d5ff0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  fn_004edc34(param_1 + 0x1204);
  iVar1 = *(int *)(param_1 + 0x1210);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  uVar3 = *(undefined4 *)(iVar1 + 0xc);
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  uVar5 = *(undefined4 *)(iVar1 + 0x14);
  uVar6 = *(undefined4 *)(iVar1 + 0x18);
  uVar7 = *(undefined4 *)(iVar1 + 0x1c);
  uVar8 = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(param_2 + 8) = uVar2;
  *(undefined4 *)(param_2 + 0xc) = uVar3;
  *(undefined4 *)(param_2 + 0x10) = uVar4;
  *(undefined4 *)(param_2 + 0x14) = uVar5;
  *(undefined4 *)(param_2 + 0x18) = uVar6;
  *(undefined4 *)(param_2 + 0x1c) = uVar7;
  *(undefined4 *)(param_2 + 0x20) = uVar8;
  uVar2 = *(undefined4 *)(iVar1 + 0x24);
  uVar3 = *(undefined4 *)(iVar1 + 0x28);
  uVar4 = *(undefined4 *)(iVar1 + 0x2c);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(param_2 + 0x24) = uVar2;
  *(undefined4 *)(param_2 + 0x28) = uVar3;
  *(undefined4 *)(param_2 + 0x2c) = uVar4;
  fn_004edc70(param_1 + 0x1204);
  return;
}



undefined1 * fn_006d5dec(undefined4 param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  if (*param_2 < 0) {
    if (*param_2 == -0x1f5eec08) {
      puVar1 = &DAT_e0a1482b;
    }
    else {
      iVar2 = -0x375eec16;
      iVar3 = *param_2;
      puVar1 = &DAT_e0a14827;
      if (iVar3 != -0x375eec16) {
        iVar2 = -0x377eec06;
      }
      if (iVar3 != -0x375eec16 && iVar3 != iVar2) {
        iVar2 = -0x379eefff;
        if (iVar3 != -0x379eefff) {
          iVar2 = -0x36deec05;
        }
        if (iVar3 != -0x379eefff && iVar3 != iVar2) {
          if (iVar3 == -0x36deec02) {
            puVar1 = (undefined1 *)0xd941482d;
          }
          else if (iVar3 == -0x36beeffe) {
            puVar1 = (undefined1 *)0xd8a14868;
          }
          else {
            puVar4 = &DAT_e10113fd;
            puVar5 = (undefined1 *)*param_2;
            puVar1 = (undefined1 *)0xe0e14826;
            if (puVar5 != &DAT_e10113fd) {
              puVar4 = (undefined1 *)0xc90113fa;
            }
            if (puVar5 != &DAT_e10113fd && puVar5 != puVar4) {
              puVar4 = (undefined1 *)0xe0e113f6;
              if (puVar5 != (undefined1 *)0xe0e113f6) {
                puVar4 = (undefined1 *)0xe10113e9;
              }
              if (((puVar5 != (undefined1 *)0xe0e113f6 && puVar5 != puVar4) &&
                  (puVar1 = (undefined1 *)0xd1614828, puVar5 != (undefined1 *)0xe1211005)) &&
                 (puVar5 != (undefined1 *)0xe1211008)) {
                return &DAT_e0a14827;
              }
            }
          }
        }
      }
    }
  }
  else {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



int fn_006d5d38(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 - 0x100000U < 0x3ff00000) {
    piVar4 = param_1 + 0x485;
    fn_004edc34(piVar4);
    uVar1 = fn_006dc220(param_2 + 4,param_1[0x488],param_1[0x489]);
    uVar2 = (**(code **)(*param_1 + 0x50))(param_1);
    if (uVar2 <= uVar1) {
      iVar5 = param_1[0x488];
      iVar6 = param_1[0x48d];
      uVar3 = (**(code **)(*param_1 + 0x50))(param_1);
      fn_001694e4(iVar6,iVar5,uVar3);
      iVar5 = param_1[0x48d];
      fn_004edc70(piVar4);
      return iVar5;
    }
    fn_004edc70(piVar4);
  }
  return 0;
}



undefined4 fn_006d5c84(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(DAT_008bf504 + 0x14) + 0x1228;
  fn_004edc34(iVar2);
  iVar1 = (**(code **)(**(int **)(DAT_008bf504 + 0x14) + 0x3c))
                    (*(int **)(DAT_008bf504 + 0x14),param_2);
  if (iVar1 == 0) {
    fn_004edc70(iVar2);
    return 0;
  }
  uVar3 = *(undefined4 *)(iVar1 + 4);
  fn_004edc70(iVar2);
  return uVar3;
}



undefined1 * fn_006d59a0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  
  if ((DAT_008bf500 == '\0') ||
     (((iVar1 = fn_006d685c(*(undefined4 *)(param_1 + 0x14)), iVar1 == 0 &&
       ((DAT_008bf500 == '\0' || (iVar1 = fn_006d6880(*(undefined4 *)(param_1 + 0x14)), iVar1 == 0)
        ))) || (iVar1 = fn_006d589c(param_1), iVar1 != 0)))) {
    return &DAT_e0a14827;
  }
  if ((param_2 - 0x100000U < 0x3ff00000) && (param_3 - 0x100000U < 0x3ff00000)) {
                    /* WARNING: Could not recover jumptable at 0x006d5b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined1 *)
             (**(code **)(**(int **)(param_1 + 0x14) + 0x40))
                       (*(int **)(param_1 + 0x14),param_2,param_3,param_4);
    return puVar2;
  }
  return (undefined1 *)0xe0e14826;
}



int fn_006d5980(int param_1)

{
  int iVar1;
  
  if (DAT_008bf500 == '\0') {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(char *)(*(int *)(param_1 + 8) + 5);
  }
  return iVar1;
}



undefined1 fn_006d591c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006d589c();
  if ((iVar1 == 0) &&
     ((DAT_008bf500 == '\0' ||
      ((iVar1 = fn_006d685c(*(undefined4 *)(param_1 + 0x14)), iVar1 == 0 &&
       ((DAT_008bf500 == '\0' || (iVar1 = fn_006d6880(*(undefined4 *)(param_1 + 0x14)), iVar1 == 0)
        ))))))) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x80);
}



int fn_006d58dc(int param_1)

{
  int iVar1;
  
  if (DAT_008bf500 == '\0') {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(char *)(*(int *)(param_1 + 8) + 4);
  }
  return iVar1;
}



undefined1 * fn_006d565c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (((*(char *)(param_1 + 0x81) == '\0') || (iVar1 = fn_006d589c(param_1), iVar1 != 0)) ||
     ((DAT_008bf500 != '\0' &&
      ((iVar1 = fn_006d685c(*(undefined4 *)(param_1 + 0x14)), iVar1 != 0 ||
       ((DAT_008bf500 != '\0' && (iVar1 = fn_006d6880(*(undefined4 *)(param_1 + 0x14)), iVar1 != 0)
        ))))))) {
    return &DAT_e0a14827;
  }
  if (param_2 - 0x100000U < 0x3ff00000) {
    iVar1 = DAT_008bf504 + 0x50;
    fn_004edc34(iVar1);
    puVar2 = (undefined1 *)
             (**(code **)(**(int **)(param_1 + 0x14) + 0x5c))
                       (*(int **)(param_1 + 0x14),param_2,param_3,param_4,
                        *(undefined4 *)(param_1 + 0x48));
    fn_004edc70(iVar1);
    return puVar2;
  }
  return (undefined1 *)0xe0e14826;
}



bool fn_006d589c(int param_1)

{
  if ((DAT_008bf500 == '\0') || (*(char *)(*(int *)(param_1 + 8) + 4) == '\0')) {
    return false;
  }
  return *(char *)(*(int *)(param_1 + 0x18) + 0x10) != '\0';
}



undefined8 fn_006d53e8(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if (DAT_008bf500 == '\0') {
    puVar1 = &DAT_e0a1482b;
    puVar2 = param_2;
  }
  else {
    puVar2 = &DAT_008c0630;
    puVar1 = (undefined1 *)0xe0e14826;
    if (param_2 + -0x40000 < (undefined4 *)0x3ff00000) {
      puVar2 = (undefined4 *)(param_3 + -0x100000);
      if (puVar2 < (undefined4 *)0x3ff00000) {
        puVar2 = (undefined4 *)(param_5 + -0x100000);
        if (puVar2 < (undefined4 *)0x3ff00000) {
          uVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x34))
                            (*(int **)(param_1 + 0x14),param_2,param_3,param_4,param_5);
          return uVar3;
        }
        if (DAT_008c0630 != 0) {
          puVar2 = (undefined4 *)0x8;
        }
      }
      else if (DAT_008c0630 != 0) {
        puVar2 = (undefined4 *)0x8;
      }
    }
    else if (DAT_008c0630 != 0) {
      puVar2 = (undefined4 *)0x8;
    }
  }
  return CONCAT44(puVar2,puVar1);
}


