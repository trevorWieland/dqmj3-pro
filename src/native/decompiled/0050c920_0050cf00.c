#include "0050c920_0050cf00.h"



undefined4 * fn_0050cf00(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00857068;
  *(undefined1 *)(param_1 + 6) = 0;
  iVar1 = param_1[4];
  while (iVar1 != 0) {
    iVar1 = fn_004f0a20();
    if ((iVar1 != 0) && ((int *)(iVar1 - param_1[5]) != (int *)0x0)) {
      (**(code **)(*(int *)(iVar1 - param_1[5]) + 4))();
    }
    iVar1 = param_1[4];
  }
  return param_1;
}



undefined4 * fn_0050cec4(undefined4 *param_1)

{
  *param_1 = &DAT_00857068;
  param_1[2] = 0;
  param_1[3] = 0;
  fn_004f0c04(param_1 + 1);
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[5] = 4;
  return param_1;
}



void fn_0050ce68(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x18) = 0;
  while (iVar2 != 0) {
    iVar2 = fn_004f0a20();
    if ((iVar2 != 0) && (piVar1 = (int *)(iVar2 - *(int *)(param_1 + 0x14)), piVar1 != (int *)0x0))
    {
      (**(code **)(*piVar1 + 4))();
    }
    iVar2 = *(int *)(param_1 + 0x10);
  }
  return;
}



undefined1 * fn_0050cdf0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    return &DAT_e0a14827;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  piVar3 = (int *)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x14));
  while( true ) {
    if (piVar3 == (int *)((param_1 - iVar2) + 8)) {
      return (undefined1 *)0x0;
    }
    puVar1 = (undefined1 *)(**(code **)(*piVar3 + 0x18))(piVar3);
    if ((int)puVar1 < 0) break;
    piVar3 = (int *)(*(int *)((int)piVar3 + *(int *)(param_1 + 0x14) + 4) - *(int *)(param_1 + 0x14)
                    );
  }
  return puVar1;
}



undefined1 * fn_0050cd64(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (0x3fefffff < param_2 - 0x100000U) {
    return (undefined1 *)0xe0e14826;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    return &DAT_e0a14827;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  for (iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x14); iVar1 != (param_1 - iVar2) + 8;
      iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0x14) + 4) - *(int *)(param_1 + 0x14)) {
    *(int *)(iVar1 + 0x10) = param_2;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return (undefined1 *)0x0;
}



void fn_0050cd0c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  for (iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x14); iVar1 != (param_1 - iVar2) + 8;
      iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0x14) + 4) - *(int *)(param_1 + 0x14)) {
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



undefined1 * fn_0050cc80(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    puVar1 = &DAT_e0a14827;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x14);
    puVar1 = (undefined1 *)0x0;
    for (piVar4 = (int *)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x14));
        piVar4 != (int *)((param_1 - iVar3) + 8);
        piVar4 = (int *)(*(int *)((int)piVar4 + *(int *)(param_1 + 0x14) + 4) -
                        *(int *)(param_1 + 0x14))) {
      puVar2 = (undefined1 *)(**(code **)(*piVar4 + 0x1c))(piVar4,param_2);
      if (((int)puVar2 < 0) && (-1 < (int)puVar1)) {
        puVar1 = puVar2;
      }
    }
  }
  return puVar1;
}



uint fn_0050c920(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  fn_0051cf38(param_2,param_3 & 0xffff);
  uVar2 = param_3 >> 0x10;
  iVar3 = uVar2 - 0x1810;
  for (iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x14);
      iVar1 != (param_1 - *(int *)(param_1 + 0x14)) + 8;
      iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0x14) + 4) - *(int *)(param_1 + 0x14)) {
    if (param_3 == *(uint *)(iVar1 + 0xc)) {
      return DAT_008c067c;
    }
    if (param_3 < *(uint *)(iVar1 + 0xc)) {
      fn_004f0b78(param_1 + 4,*(int *)(param_1 + 0x14) + iVar1,
                   *(int *)(param_1 + 0x14) + (int)param_2);
      iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
      if (iVar1 == 0) {
        fn_0051c4bc(DAT_008c0680,uVar2);
      }
      if (uVar2 == 0x1810) {
        uVar2 = 0x40;
        goto LAB_0050cae4;
      }
      if (uVar2 < 0x1811) {
        if (uVar2 == 0x410) {
          uVar2 = 0x800;
          goto LAB_0050cae4;
        }
        if (uVar2 < 0x411) {
          if (uVar2 == 0x200) {
            uVar2 = 4;
            goto LAB_0050cae4;
          }
          if (uVar2 < 0x201) {
            if (uVar2 == 0x80) {
              uVar2 = 1;
              goto LAB_0050cae4;
            }
            if (uVar2 == 0x100) {
              uVar2 = 2;
              goto LAB_0050cae4;
            }
          }
          else {
            if (uVar2 == 0x210) {
              uVar2 = 8;
              goto LAB_0050cae4;
            }
            if (uVar2 == 0x400) {
              uVar2 = 0x10;
              goto LAB_0050cae4;
            }
          }
        }
        else {
          if (uVar2 == 0x420) {
            uVar2 = 0x20000;
            goto LAB_0050cae4;
          }
          if (uVar2 == 0x500) {
            uVar2 = 0x40000;
            goto LAB_0050cae4;
          }
          if (uVar2 == 0x600) {
            uVar2 = 0x20;
            goto LAB_0050cae4;
          }
          if (uVar2 == 0x1800) {
            uVar2 = 0x2000;
            goto LAB_0050cae4;
          }
        }
      }
      else {
        if (iVar3 == 0x17f0) {
          uVar2 = 0x100;
          goto LAB_0050cae4;
        }
        if (iVar3 < 0x17f1) {
          if (iVar3 == 0x7f0) {
            uVar2 = 0x80;
            goto LAB_0050cae4;
          }
          if (iVar3 == 0x8f0) {
            uVar2 = 0x1000;
            goto LAB_0050cae4;
          }
          if (iVar3 == 0xbf0) {
            uVar2 = 0x4000;
            goto LAB_0050cae4;
          }
          if (iVar3 == 0xff0) {
            uVar2 = 0x8000;
            goto LAB_0050cae4;
          }
        }
        else {
          if (uVar2 == 0x7000) {
            uVar2 = 0x200;
            goto LAB_0050cae4;
          }
          if (uVar2 == 0x7200) {
            uVar2 = 0x10000;
            goto LAB_0050cae4;
          }
          if (uVar2 == 0x8000) {
            uVar2 = 0x400;
            goto LAB_0050cae4;
          }
        }
      }
      uVar2 = 0;
LAB_0050cae4:
      DAT_008ed8e8 = DAT_008ed8e8 & ~uVar2;
      return param_3;
    }
  }
  fn_004f0b78(param_1 + 4,param_1 + 8,*(int *)(param_1 + 0x14) + (int)param_2);
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  if (iVar1 == 0) {
    fn_0051c4bc(DAT_008c0680,uVar2);
  }
  if (uVar2 == 0x1810) {
    uVar2 = 0x40;
    goto LAB_0050cc58;
  }
  if (uVar2 < 0x1811) {
    if (uVar2 == 0x410) {
      uVar2 = 0x800;
      goto LAB_0050cc58;
    }
    if (uVar2 < 0x411) {
      if (uVar2 == 0x200) {
        uVar2 = 4;
        goto LAB_0050cc58;
      }
      if (uVar2 < 0x201) {
        if (uVar2 == 0x80) {
          uVar2 = 1;
          goto LAB_0050cc58;
        }
        if (uVar2 == 0x100) {
          uVar2 = 2;
          goto LAB_0050cc58;
        }
      }
      else {
        if (uVar2 == 0x210) {
          uVar2 = 8;
          goto LAB_0050cc58;
        }
        if (uVar2 == 0x400) {
          uVar2 = 0x10;
          goto LAB_0050cc58;
        }
      }
    }
    else {
      if (uVar2 == 0x420) {
        uVar2 = 0x20000;
        goto LAB_0050cc58;
      }
      if (uVar2 == 0x500) {
        uVar2 = 0x40000;
        goto LAB_0050cc58;
      }
      if (uVar2 == 0x600) {
        uVar2 = 0x20;
        goto LAB_0050cc58;
      }
      if (uVar2 == 0x1800) {
        uVar2 = 0x2000;
        goto LAB_0050cc58;
      }
    }
  }
  else {
    if (iVar3 == 0x17f0) {
      uVar2 = 0x100;
      goto LAB_0050cc58;
    }
    if (iVar3 < 0x17f1) {
      if (iVar3 == 0x7f0) {
        uVar2 = 0x80;
        goto LAB_0050cc58;
      }
      if (iVar3 == 0x8f0) {
        uVar2 = 0x1000;
        goto LAB_0050cc58;
      }
      if (iVar3 == 0xbf0) {
        uVar2 = 0x4000;
        goto LAB_0050cc58;
      }
      if (iVar3 == 0xff0) {
        uVar2 = 0x8000;
        goto LAB_0050cc58;
      }
    }
    else {
      if (iVar3 == 0x57f0) {
        uVar2 = 0x200;
        goto LAB_0050cc58;
      }
      if (iVar3 == 0x59f0) {
        uVar2 = 0x10000;
        goto LAB_0050cc58;
      }
      if (iVar3 == 0x67f0) {
        uVar2 = 0x400;
        goto LAB_0050cc58;
      }
    }
  }
  uVar2 = 0;
LAB_0050cc58:
  DAT_008ed8e8 = DAT_008ed8e8 & ~uVar2;
  return param_3;
}


