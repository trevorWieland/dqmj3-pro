#include "005f5714_005f60f4.h"



int fn_005f60f4(int param_1,uint param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    do {
      if (param_2 <= *(uint *)(iVar2 + 0x14)) {
        uVar3 = *(uint *)(iVar2 + 0x10);
        if ((uVar3 & param_3 - 1U) == 0) {
          *param_4 = 0;
          return iVar2;
        }
        if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
          fn_00146590();
        }
        iVar1 = fn_00169f1c(uVar3 + param_3 + -1,param_3);
        iVar1 = iVar1 * param_3 - uVar3;
        *param_4 = iVar1;
        if (iVar1 + param_2 <= *(uint *)(iVar2 + 0x14)) {
          return iVar2;
        }
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != 0);
  }
  return 0;
}



int fn_005f605c(int param_1,uint param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 != 0) {
    do {
      if (param_2 <= *(uint *)(iVar3 + 0x14)) {
        uVar4 = *(uint *)(iVar3 + 0x10);
        uVar1 = (*(uint *)(iVar3 + 0x14) + uVar4) - param_2;
        if ((uVar1 & param_3 - 1U) == 0) {
LAB_005f60c8:
          *param_4 = 0;
          return iVar3;
        }
        if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
          fn_00146590();
        }
        iVar2 = fn_00169f1c(uVar1 + param_3 + -1,param_3);
        if (uVar4 <= (uint)(iVar2 * param_3 - param_3)) goto LAB_005f60c8;
      }
      iVar3 = *(int *)(iVar3 + 8);
    } while (iVar3 != 0);
  }
  return 0;
}



undefined4 fn_005f5db0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_48 = *param_1;
  local_44 = param_1[1];
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  iVar1 = fn_00733bfc(&local_48,0x1f,(char *)&DAT_005f5e90,0x38);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      uVar2 = fn_002fecec(param_1[3]);
      param_1[2] = uVar2;
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      param_1[2] = param_2;
    }
    local_3c = param_1[2];
    local_38 = param_1[3];
    fn_007321e0(&local_48,4);
    iVar1 = fn_007321e0(&local_48,4);
    if (iVar1 == 1) {
      fn_00733bac(&local_48);
      return 1;
    }
    if (*(char *)(param_1 + 4) != '\0') {
      fn_0030233c(param_1[2]);
    }
    param_1[2] = 0;
    fn_00733bac(&local_48);
  }
  return 0;
}



uint fn_005f5c50(uint param_1,byte *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_3);
  if (param_3 == 0) {
    uVar3 = fn_002febd8(param_2);
  }
  puVar1 = (undefined *)((ulonglong)uVar3 >> 0x20);
  iVar2 = (int)uVar3;
  if (param_2 != (byte *)0x0 && iVar2 != 0) {
    puVar1 = &DAT_00899ec8;
  }
  param_1 = ~param_1;
  if (param_2 != (byte *)0x0 && iVar2 != 0) {
    do {
      iVar2 = iVar2 + -1;
      param_1 = *(uint *)(puVar1 + ((*param_2 ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
      param_2 = param_2 + 1;
    } while (iVar2 != 0);
  }
  return ~param_1;
}



undefined4 * fn_005f5c14(int param_1)

{
  undefined4 *puVar1;
  
  if (*(undefined4 **)(param_1 + 0xc) == (undefined4 *)0x0) {
    puVar1 = &DAT_005f5c44;
  }
  else {
    fn_00102908(&DAT_008d28ac,0x10,&DAT_005f5c48,**(undefined4 **)(param_1 + 0xc));
    puVar1 = (undefined4 *)&DAT_008d28ac;
  }
  return puVar1;
}



void fn_005f59c4(uint *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  
  iVar13 = 0;
  iVar7 = *param_2;
  piVar4 = param_2;
  while (iVar7 != 0) {
    piVar4 = piVar4 + 6;
    iVar13 = iVar13 + 1;
    iVar7 = *piVar4;
  }
  puVar9 = (undefined4 *)param_1[1];
  if (puVar9 != (undefined4 *)param_1[2]) {
    param_1[1] = (uint)(puVar9 + 4);
    if (puVar9 != (undefined4 *)0x0) {
      puVar9[3] = iVar13;
      *puVar9 = param_3;
      puVar9[1] = param_3;
      puVar9[2] = param_2;
    }
    return;
  }
  uVar1 = (int)((int)puVar9 - *param_1) >> 4;
  if ((uint)((int)((int)param_1[2] - *param_1) >> 4) <= uVar1) {
    uVar14 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
    if (uVar14 < uVar1 + 0x20) {
      uVar14 = uVar1 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar14 << 4,0);
    puVar8 = puVar2;
    for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar9; puVar5 = puVar5 + 4) {
      if (puVar8 != (undefined4 *)0x0) {
        uVar11 = puVar5[1];
        uVar12 = puVar5[2];
        uVar15 = puVar5[3];
        *puVar8 = *puVar5;
        puVar8[1] = uVar11;
        puVar8[2] = uVar12;
        puVar8[3] = uVar15;
      }
      puVar8 = puVar8 + 4;
    }
    puVar5 = (undefined4 *)(((int)puVar9 - *param_1 & 0xfffffff0) + (int)puVar2);
    if (puVar5 != (undefined4 *)0x0) {
      puVar5[3] = iVar13;
      *puVar5 = param_3;
      puVar5[1] = param_3;
      puVar5[2] = param_2;
    }
    puVar8 = (undefined4 *)param_1[1];
    puVar5 = (undefined4 *)(((int)puVar9 - *param_1 & 0xfffffff0) + (int)puVar2);
    for (; puVar9 != puVar8; puVar9 = puVar9 + 4) {
      puVar3 = puVar5 + 4;
      if (puVar3 != (undefined4 *)0x0) {
        uVar11 = puVar9[1];
        uVar12 = puVar9[2];
        uVar15 = puVar9[3];
        *puVar3 = *puVar9;
        puVar5[5] = uVar11;
        puVar5[6] = uVar12;
        puVar5[7] = uVar15;
      }
      puVar5 = puVar3;
    }
    uVar6 = param_1[1];
    uVar10 = *param_1;
    uVar1 = uVar10;
    if (uVar6 <= uVar10) {
      for (; uVar1 != uVar6; uVar1 = uVar1 + 0x10) {
      }
    }
    fn_001008c4(uVar10,(int)(param_1[2] - uVar10) >> 4,0);
    param_1[2] = (uint)(puVar2 + uVar14 * 4);
    param_1[1] = (uint)(puVar2 + ((int)(uVar6 - uVar10) >> 4) * 4 + 4);
    *param_1 = (uint)puVar2;
    return;
  }
  param_1[1] = (uint)(puVar9 + 4);
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = puVar9[-4];
    puVar9[1] = puVar9[-3];
    puVar9[2] = puVar9[-2];
    puVar9[3] = puVar9[-1];
  }
  puVar5 = puVar9 + -4;
  puVar8 = puVar9;
  if (puVar9 < puVar5) {
    iVar7 = (int)puVar5 - (int)puVar9;
    if (0 < iVar7) {
      if (iVar7 * 0x8000000 < 0) {
        puVar5 = puVar9 + -8;
        puVar8 = puVar9 + -4;
        *puVar8 = *puVar5;
        puVar9[-3] = puVar9[-7];
        puVar9[-2] = puVar9[-6];
        puVar9[-1] = puVar9[-5];
      }
      for (iVar7 = iVar7 >> 5; iVar7 != 0; iVar7 = iVar7 + -1) {
        uVar11 = puVar5[-3];
        uVar12 = puVar5[-2];
        uVar15 = puVar5[-1];
        puVar8[-4] = puVar5[-4];
        puVar8[-3] = uVar11;
        puVar8[-2] = uVar12;
        puVar8[-1] = uVar15;
        uVar11 = puVar5[-7];
        uVar12 = puVar5[-6];
        uVar15 = puVar5[-5];
        puVar8[-8] = puVar5[-8];
        puVar8[-7] = uVar11;
        puVar8[-6] = uVar12;
        puVar8[-5] = uVar15;
        puVar5 = puVar5 + -8;
        puVar8 = puVar8 + -8;
      }
    }
  }
  else {
    while (puVar9 != puVar5) {
      uVar11 = puVar5[-3];
      uVar12 = puVar5[-2];
      uVar15 = puVar5[-1];
      puVar8[-4] = puVar5[-4];
      puVar8[-3] = uVar11;
      puVar8[-2] = uVar12;
      puVar8[-1] = uVar15;
      puVar8 = puVar8 + -4;
      puVar5 = puVar5 + -4;
    }
  }
  puVar9[3] = iVar13;
  *puVar9 = param_3;
  puVar9[1] = param_3;
  puVar9[2] = param_2;
  return;
}



void fn_005f5714(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &DAT_00858f5c;
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    fn_00143b48(*(undefined4 *)(iVar1 + 0x65c));
    *(undefined4 *)(iVar1 + 0x65c) = 0;
    fn_0010c3d0(iVar1 + 0x48);
    fn_00143a58(*(undefined4 *)(iVar1 + 0x658));
    *(undefined4 *)(iVar1 + 0x658) = 0;
    iVar2 = fn_0011705c(iVar1);
    if (iVar2 != 0) {
      fn_00143a58();
    }
    fn_002feca8(*(undefined4 *)(iVar1 + 0x664));
    if (*(int *)(iVar1 + 0x660) != 0) {
      fn_00152880();
      fn_002feef8();
    }
    iVar1 = fn_0010c3ec(iVar1 + 0x48);
    fn_0010c414(iVar1 + -0x48);
    fn_002feef8();
  }
  fn_002feef8(param_1);
  return;
}


