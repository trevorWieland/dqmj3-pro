#include "006d9d3c_006da4e0.h"



undefined4 fn_006da4e0(int param_1,uint param_2,uint param_3,uint *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  
  uVar1 = 0xe0e14826;
  uVar4 = *(uint *)(DAT_008bf4d4 + 0x30);
  if ((param_2 < uVar4 && param_3 < uVar4) && (param_4 + -0x40000 < (uint *)0x3ff00000)) {
    *param_4 = 0;
    if (uVar4 != 0) {
      param_1 = *(int *)(param_1 + 8);
    }
    uVar2 = 1;
    if (uVar4 != 0) {
      pbVar3 = (byte *)(param_2 * uVar4 + param_1);
      do {
        if (*pbVar3 == param_3) {
          *param_4 = *param_4 | uVar2;
        }
        uVar4 = uVar4 - 1;
        uVar2 = uVar2 << 1;
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
    }
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_006da484(int param_1,uint param_2,uint param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0xe0e14826;
  uVar2 = *(uint *)(DAT_008bf4d4 + 0x30);
  if ((param_2 < uVar2 && param_3 < uVar2) && (param_4 + -0x100000 < (undefined1 *)0x3ff00000)) {
    *param_4 = *(undefined1 *)(param_3 + param_2 * uVar2 + *(int *)(param_1 + 8));
    uVar1 = 0;
  }
  return uVar1;
}



void fn_006da3ac(undefined4 param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 auStack_60 [32];
  undefined2 local_40 [17];
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined4 local_18;
  
  fn_00519324(DAT_008c0674,auStack_60);
  if (param_3 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 7;
  }
  param_2[1] = 0;
  *param_2 = uVar1;
  param_2[2] = 5;
  param_2[3] = local_1c;
  fn_00301a9c(param_2 + 4,auStack_60,0x20);
  uVar2 = 0;
  do {
    fn_004ed504(param_2 + uVar2 * 2 + 0x24,local_40[uVar2]);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  param_2[0x44] = local_1e;
  param_2[0x45] = local_1d;
  fn_004ed514(param_2 + 0x46,local_18);
  return;
}



undefined4 fn_006da264(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006d70ac(param_1 + 4,param_2 + 4);
  if ((((((iVar1 == 0) || (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14))) ||
        (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18))) ||
       ((*(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x1c) ||
        (*(char *)(param_1 + 0x25) != *(char *)(param_2 + 0x25))))) ||
      ((*(char *)(param_1 + 0x20) != *(char *)(param_2 + 0x20) ||
       ((*(char *)(param_1 + 0x21) != *(char *)(param_2 + 0x21) ||
        (*(char *)(param_1 + 0x22) != *(char *)(param_2 + 0x22))))))) ||
     ((*(char *)(param_1 + 0x23) != *(char *)(param_2 + 0x23) ||
      ((*(char *)(param_1 + 0x24) != *(char *)(param_2 + 0x24) ||
       (*(char *)(param_1 + 0x26) != *(char *)(param_2 + 0x26))))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



int fn_006da11c(int *param_1,int param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  uint uStack_20;
  
  bVar4 = param_2 - 0x100000U < 0x3ff00000;
  iVar1 = -0x1f1eb7da;
  puVar3 = param_3;
  if (bVar4) {
    puVar3 = param_3 + -0x40000;
  }
  if (bVar4 && puVar3 < (undefined4 *)0x3ff00000) {
    uStack_20 = param_4;
    uVar2 = (**(code **)(*param_1 + 8))(param_1);
    if (param_4 < uVar2) {
      iVar1 = -0x279eb7d4;
    }
    else {
      iVar1 = fn_006d6e58(param_1 + 1,param_2,&uStack_20,8);
      if (-1 < iVar1) {
        fn_004ed514(param_2 + 8,param_1[5]);
        fn_004ed514(param_2 + 0xc,param_1[6]);
        fn_004ed514(param_2 + 0x10,param_1[7]);
        *(char *)(param_2 + 0x14) = (char)param_1[8];
        *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)((int)param_1 + 0x21);
        *(undefined1 *)(param_2 + 0x16) = *(undefined1 *)((int)param_1 + 0x22);
        *(undefined1 *)(param_2 + 0x17) = *(undefined1 *)((int)param_1 + 0x23);
        *(char *)(param_2 + 0x18) = (char)param_1[9];
        *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)((int)param_1 + 0x25);
        *(undefined1 *)(param_2 + 0x1a) = *(undefined1 *)((int)param_1 + 0x26);
        *param_3 = 0x1b;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}



undefined4 fn_006da104(void)

{
  return 0x1b;
}



uint fn_006da08c(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 0x3c);
  while ((int *)(param_1 + *(int *)(param_1 + 0x38) * 4 + 0x3c) != piVar2) {
    iVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    uVar4 = (uint)*(byte *)(iVar3 + 0x14);
    bVar5 = uVar4 == 0xb;
    if (uVar4 < 0xc) {
      bVar5 = *(char *)(iVar3 + 0x20) == '\x05';
    }
    if (bVar5) {
      uVar1 = uVar1 | 1 << uVar4;
    }
  }
  if (((param_2 == 0) && (*(int *)(param_1 + 0xa4) != 0)) &&
     (uVar4 = (uint)*(byte *)(*(int *)(param_1 + 0xa4) + 0x14), uVar4 < 0xc)) {
    uVar1 = uVar1 & ~(1 << uVar4);
  }
  return uVar1;
}



longlong fn_006d9ef0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint extraout_r1;
  int *piVar4;
  
  puVar3 = &DAT_008c0630;
  if (param_2 - 0x100000U < 0x3ff00000) {
    if ((param_3 < (undefined4 *)0xc) || (param_3 == (undefined4 *)0xfe)) {
      if ((param_3 < (undefined4 *)0xc) || (param_3 == (undefined4 *)0xfe)) {
        puVar3 = (undefined4 *)(param_1 + *(int *)(param_1 + 0x38) * 4);
        piVar4 = puVar3 + 0xf;
        for (piVar2 = (int *)(param_1 + 0x3c); piVar4 != piVar2; piVar2 = piVar2 + 1) {
          puVar3 = (undefined4 *)(uint)*(byte *)(*piVar2 + 0x14);
          if (puVar3 == param_3) {
            iVar1 = *piVar2;
            goto LAB_006da034;
          }
        }
      }
      else {
        iVar1 = 0;
LAB_006da034:
        if (iVar1 != 0) {
          fn_004ed810(param_2,iVar1 + 4);
          return (ulonglong)extraout_r1 << 0x20;
        }
      }
      return CONCAT44(puVar3,&DAT_d8814829);
    }
    if (DAT_008c0630 != 0) {
      puVar3 = (undefined4 *)0x8;
    }
  }
  else if (DAT_008c0630 != 0) {
    puVar3 = (undefined4 *)0x8;
  }
  return CONCAT44(puVar3,0xe0e14826);
}



int fn_006d9e9c(int param_1,uint param_2)

{
  int *piVar1;
  
  if ((param_2 < 0xc) || (param_2 == 0xfe)) {
    for (piVar1 = (int *)(param_1 + 0x3c);
        (int *)(param_1 + *(int *)(param_1 + 0x38) * 4 + 0x3c) != piVar1; piVar1 = piVar1 + 1) {
      if (*(byte *)(*piVar1 + 0x14) == param_2) {
        return *piVar1;
      }
    }
  }
  return 0;
}



int fn_006d9e60(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_1 + 8) {
    do {
      if (*(int *)(iVar1 + 0x14) == param_2) {
        return iVar1 + 8;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1 + 8);
  }
  return 0;
}



int fn_006d9e0c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_1 + 8) {
    do {
      iVar2 = iVar1 + 8;
      bVar3 = *(int *)(iVar1 + 8) == param_2;
      if (bVar3) {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      if (bVar3 && iVar2 == param_3) {
        return iVar1 + 8;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1 + 8);
  }
  return 0;
}



int fn_006d9dd0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_1 + 8) {
    do {
      if (*(byte *)(iVar1 + 0x10) == param_2) {
        return iVar1 + 8;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1 + 8);
  }
  return 0;
}



undefined1 * fn_006d9d3c(undefined1 *param_1,undefined4 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  if ((undefined4 *)0x3fefffff < param_2 + -0x40000) {
    param_1 = (undefined1 *)0xe0e14826;
  }
  puVar2 = (undefined4 *)0x0;
  if ((undefined4 *)0x3fefffff >= param_2 + -0x40000) {
    puVar1 = *(undefined1 **)(param_1 + 0xc);
    if (puVar1 != param_1 + 8) {
      do {
        if (*(int *)(puVar1 + 0x14) == param_3) {
          puVar2 = (undefined4 *)(puVar1 + 8);
          break;
        }
        puVar1 = *(undefined1 **)(puVar1 + 4);
      } while (puVar1 != param_1 + 8);
    }
    if (puVar2 == (undefined4 *)0x0) {
      param_1 = &DAT_d8814829;
    }
    else {
      *param_2 = *puVar2;
      param_2[1] = puVar2[1];
      *(undefined1 *)(param_2 + 2) = *(undefined1 *)(puVar2 + 2);
      param_2[3] = puVar2[3];
      param_1 = (undefined1 *)0x0;
    }
  }
  return param_1;
}


