#include "007406bc_007410e0.h"



int fn_00740b6c(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,uint *param_5)

{
  int iVar1;
  undefined4 local_20;
  uint local_1c [2];
  
  local_20 = 0;
  local_1c[0] = 0;
  if (param_3 == 0) {
    iVar1 = fn_001b8438(1,0xfffffe6d,(char *)&DAT_007d5f3d);
    return iVar1;
  }
  iVar1 = fn_00740c1c(param_1,param_2,&local_20,local_1c);
  if (iVar1 == 0) {
    if (param_4 < local_1c[0]) {
      iVar1 = fn_001b8438(1,0xfffffe70,(char *)&DAT_007d5f3d);
    }
    else {
      fn_00301a9c(param_3,local_20);
      if (param_5 != (uint *)0x0) {
        *param_5 = local_1c[0];
      }
    }
  }
  return iVar1;
}



undefined4 fn_00740c1c(uint *param_1,int param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  
  puVar6 = param_1;
  if (param_1 != (uint *)0x0 && param_2 != 0) {
    puVar6 = param_4;
  }
  uVar11 = 0xfffffe6d;
  if ((param_1 == (uint *)0x0 || param_2 == 0) || puVar6 == (uint *)0x0) {
    uVar11 = fn_001b8438(1,0xfffffe6d,(char *)&DAT_007d5f4e);
    return uVar11;
  }
  if ((char)*param_1 != '\x03') {
    uVar11 = fn_001b8438(1,0xfffffe6c,(char *)&DAT_007d5f4e);
    return uVar11;
  }
  iVar2 = fn_00147e6c(param_2,(char *)&DAT_00740eb0,6);
  if (iVar2 == 0) {
    uVar3 = 0;
    iVar5 = 0;
    iVar2 = fn_002febd8(param_2);
    if (iVar2 != 0) {
      uVar9 = param_1[4];
      if (uVar9 == 0) goto LAB_00740e90;
      while( true ) {
        iVar4 = fn_001010c8(uVar9,param_2,iVar2);
        if (iVar4 == 0) {
          if (param_3 != (int *)0x0) {
            *param_3 = uVar9 + iVar2 + 2;
          }
          fn_006dc488(param_1 + 0x1a,param_2,0,0,param_4);
          return 0;
        }
        if (uVar3 == param_1[5] && iVar5 == 0) goto LAB_00740e90;
        if ((uint)(uVar3 <= param_1[5]) <= (uint)-iVar5) break;
        bVar16 = 0xfffffffe < uVar3;
        uVar3 = uVar3 + 1;
        iVar5 = iVar5 + (uint)bVar16;
        uVar9 = uVar9 + 1;
      }
      uVar11 = 0xfffffc7a;
    }
  }
  else {
    uVar9 = 0;
    iVar2 = 0;
    bVar16 = false;
    uVar3 = fn_002febd8(param_2);
    if (uVar3 < 0x100) {
      pbVar12 = (byte *)param_1[6];
      if (pbVar12 == (byte *)0x0) {
LAB_00740e90:
        uVar11 = 0xfffffe6c;
        uVar7 = 4;
        goto LAB_00740e80;
      }
      do {
        pbVar13 = pbVar12 + 1;
        uVar14 = (uint)*pbVar12;
        bVar17 = 0xfffffffe < uVar9;
        uVar10 = uVar9 + 1;
        if ((uVar14 == uVar3) && (iVar5 = fn_001010c8(pbVar13,param_2,uVar3), iVar5 == 0)) {
          bVar16 = true;
        }
        puVar6 = (uint *)(pbVar13 + uVar14);
        uVar8 = uVar10 + uVar14;
        uVar1 = *puVar6;
        uVar15 = uVar8 + 4;
        uVar9 = uVar15 + uVar1;
        iVar2 = iVar2 + (uint)bVar17 + (uint)CARRY4(uVar10,uVar14) + (uint)(0xfffffffb < uVar8) +
                (uint)CARRY4(uVar15,uVar1);
        if (bVar16) {
          if (param_3 != (int *)0x0) {
            *param_3 = (int)(puVar6 + 1);
          }
          *param_4 = uVar1;
          return 0;
        }
        pbVar12 = (byte *)((int)(puVar6 + 1) + uVar1);
        if (uVar9 == param_1[7] && iVar2 == 0) goto LAB_00740e90;
      } while ((uint)-iVar2 < (uint)(uVar9 <= param_1[7]));
      uVar11 = 0xfffffc7a;
    }
  }
  uVar7 = 1;
LAB_00740e80:
  fn_001b8438(uVar7,uVar11,(char *)&DAT_007d5f4e);
  return uVar11;
}



undefined1 * fn_00740a4c(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)fn_00741220(0x78);
  if (puVar1 != (undefined1 *)0x0) {
    fn_00301f50(puVar1,0x78);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 4) = 0xfffffc7b;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0;
  }
  return puVar1;
}



undefined4 fn_00740840(char *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)0x0;
  iVar4 = 0;
  if (param_1 != (char *)0x0) {
    iVar4 = param_2;
  }
  if ((param_1 == (char *)0x0 || iVar4 == 0) || (param_3 == 0 || param_4 == 0)) {
    uVar2 = fn_001b8438(1,0xfffffe6d,(char *)&DAT_007d5f24);
    return uVar2;
  }
  if (*param_1 != '\0') {
    uVar2 = fn_001b8438(1,0xfffffe6e,(char *)&DAT_007d5f24);
    return uVar2;
  }
  puVar3 = (undefined4 *)fn_00741220(0x10);
  if (puVar3 != (undefined4 *)0x0) {
    if ((param_5 != 0) || (puVar6 = (undefined4 *)fn_00741220(0x10), puVar6 != (undefined4 *)0x0))
    {
      puVar3[3] = 1;
      iVar4 = fn_002febd8(param_2);
      iVar4 = iVar4 + puVar3[3] + 4;
      puVar3[3] = iVar4;
      if (param_5 != 0) {
        puVar3[3] = iVar4 + param_4;
      }
      puVar5 = (undefined1 *)fn_00741220();
      puVar3[1] = puVar5;
      puVar3[2] = 0;
      if (puVar5 != (undefined1 *)0x0) {
        uVar1 = fn_002febd8(param_2);
        *puVar5 = uVar1;
        fn_002fec40(puVar5 + 1,param_2);
        iVar4 = fn_002febd8(param_2);
        puVar5 = puVar5 + 1 + iVar4;
        *puVar5 = (char)param_4;
        puVar5[1] = (char)((uint)param_4 >> 8);
        puVar5[2] = (char)((uint)param_4 >> 0x10);
        puVar5[3] = (char)((uint)param_4 >> 0x18);
        if (param_5 != 0) {
          fn_00301a9c(puVar5 + 4,param_3,param_4);
        }
        *puVar3 = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 **)(param_1 + 0x20) = puVar3;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + puVar3[3];
        if (param_5 == 0) {
          puVar6[3] = param_4;
          puVar6[2] = param_3;
          puVar6[1] = 0;
          *puVar6 = *puVar3;
          *puVar3 = puVar6;
          *(int *)(param_1 + 0x24) = puVar6[3] + *(int *)(param_1 + 0x24);
        }
        return 0;
      }
      fn_007407d4(puVar3);
      puVar3 = puVar6;
    }
    fn_007407d4(puVar3);
  }
  uVar2 = fn_001b8438(1,0xfffffe6f,(char *)&DAT_007d5f24);
  return uVar2;
}



void fn_0074073c(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    param_2 = fn_001b5a30();
  }
  if (param_3 == 0 || param_4 == 0) {
    uVar1 = 0xfffffe6d;
  }
  else {
    uVar1 = fn_001b474c((char *)&DAT_0074072c,fn_00740a94,param_1,param_2,0,param_3,0,param_4,0,param_5,
                         param_6);
  }
  fn_001b8438(1,uVar1,(char *)&DAT_007d6033);
  return;
}



void fn_007406bc(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_2 == 0 || param_3 == 0) {
    uVar1 = 0xfffffe6d;
  }
  else {
    uVar1 = fn_001b474c((char *)&DAT_0074072c,fn_00740a94,param_1,0,0,param_2,0,param_3,0,param_4,param_5)
    ;
  }
  fn_001b8438(1,uVar1,(char *)&DAT_007d5fca);
  return;
}



void fn_00740a94(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)fn_007410e0();
  iVar3 = fn_00740b44(param_1);
  if (iVar3 == 0) {
    iVar3 = fn_001c0e78(param_1);
  }
  (*(code *)*puVar2)(iVar3,puVar2[1],param_1);
  fn_007407d4(puVar2);
  if (param_1 == 0) {
    return;
  }
  piVar1 = (int *)*(int *)(param_1 + 0x20);
  while (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    fn_007407d4(piVar1[1]);
    fn_007407d4(piVar1);
    piVar1 = (int *)iVar3;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  fn_007407d4(*(undefined4 *)(param_1 + 0x18));
  fn_007407d4(*(undefined4 *)(param_1 + 0x10));
  fn_007407d4(param_1);
  return;
}



undefined4 fn_007410e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
  }
  return uVar1;
}



undefined4 fn_00740b44(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = fn_001b8438(1,0xfffffe6d,(char *)&DAT_007d5f08);
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 4);
}



void fn_007407d4(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (-1 < DAT_00899ec4) {
    DAT_00899ec4 = DAT_00899ec4 + -1;
  }
  (*DAT_00899ec0)(param_1);
  return;
}


