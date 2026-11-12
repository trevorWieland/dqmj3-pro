#include "0062ee60_0062f7f4.h"



int fn_0062f124(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined1 *param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  char cVar7;
  undefined1 **ppuVar8;
  undefined1 *puVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  undefined1 *local_5338;
  uint local_5334;
  undefined1 local_5330 [4];
  undefined1 auStack_532c [20828];
  int local_1d0;
  char local_1cc;
  undefined1 auStack_1c8 [52];
  undefined1 auStack_194 [52];
  undefined1 auStack_160 [296];
  int iStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  ppuVar8 = &local_5338;
  iStack_38 = param_1;
  local_34 = param_2;
  uStack_30 = param_3;
  local_2c = param_4;
  uVar2 = fn_00797194(param_2,param_3);
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar4 = fn_00797194(local_34,uStack_30);
    fn_0063100c(param_1,uVar4,param_5);
  }
  else {
    fn_00655d38(param_1 + 4);
  }
  iVar10 = (int)*(char *)(uVar2 + 5);
  iVar3 = fn_0061be08(iVar10);
  cVar7 = *(char *)(param_1 + 0x1d4);
  puVar9 = param_5 + 0x180388;
  if (cVar7 != '\0') {
    if (cVar7 == '\x01') {
      if (iVar3 == 0) goto LAB_0062f2ac;
    }
    else if ((cVar7 == '\x02') && (iVar3 != 0)) goto LAB_0062f2ac;
  }
  uVar4 = fn_00656538(auStack_194,uVar2);
  uVar4 = fn_00626c48(param_1,puVar9,uVar4);
  iVar3 = fn_006f44fc(uVar4,0xcf);
  if (iVar3 == 0) {
LAB_0062f250:
    bVar11 = false;
  }
  else {
    local_5338 = (undefined1 *)0x0;
    iVar3 = fn_00624edc(param_1,0xcf,iVar10,puVar9);
    if (iVar3 == 0) goto LAB_0062f250;
    bVar11 = true;
  }
  if (bVar11) {
    fn_006565b8(auStack_160);
    fn_006564a8(auStack_160,0xcf,iVar10,0);
    fn_00622b2c(param_1,auStack_160,param_5,0);
  }
LAB_0062f2ac:
  local_5338 = param_5;
  local_5334 = uVar2;
  fn_0062d9f8(param_1,uVar2,local_34,local_2c);
  fn_00654cec(puVar9 + *(char *)(uVar2 + 5) * 0x418 + -0x4080);
  fn_006228c8(auStack_532c);
  fn_00630d4c(param_1,uVar2,param_5,auStack_532c);
  local_5338 = auStack_532c;
  fn_0062ddf0(param_1,local_34,uStack_30,param_5);
  fn_006311bc(param_1,uVar2,param_5,auStack_532c);
  uVar4 = fn_00656538(auStack_1c8,uVar2);
  uVar4 = fn_00626c2c(param_1,puVar9,uVar4);
  fn_0017455c(uVar4,-local_1d0);
  fn_00621a88(param_1,uVar2,param_5,auStack_532c);
  fn_0062f7f4(param_1,uVar2,puVar9,auStack_532c);
  fn_0062ee60(param_1,uVar2,param_5,auStack_532c);
  fn_00626660(param_1,auStack_532c,param_5);
  fn_00627194(param_1,uVar2,param_5,auStack_532c);
  uVar4 = fn_00656538(auStack_194,uVar2);
  iVar3 = fn_00626c2c(param_1,puVar9,uVar4);
  if (local_1cc == '\0') {
    fn_0062a40c(param_1,uVar2);
    iVar10 = fn_00691d78();
    *(short *)(iVar3 + 0x280) = (short)iVar10;
    if (iVar10 == 0) {
      *(undefined2 *)(iVar3 + 0x282) = 0;
    }
    else {
      *(short *)(iVar3 + 0x282) = (short)*(char *)(uVar2 + 6);
    }
  }
  else {
    *(undefined2 *)(iVar3 + 0x280) = 0;
    *(undefined2 *)(iVar3 + 0x282) = 0;
  }
  fn_00632020(param_1,uVar2,param_5,auStack_532c);
  if (*(char *)(param_1 + 0x18) == '\0') {
    fn_00634508(param_1,uVar2,param_5,auStack_532c);
  }
  fn_00628e98(param_1,uVar2,param_5,auStack_532c);
  local_5338 = auStack_532c;
  fn_006276cc(param_1,0,puVar9,param_5);
  iVar3 = fn_0062285c(param_1,param_5);
  if (iVar3 == 0) {
    iVar3 = fn_0062a40c(param_1,uVar2);
    if (((iVar3 != 0xea) || (local_1cc != '\0')) &&
       (((int)*(char *)(uVar2 + 0x12) == *(char *)(uVar2 + 0x13) + -1 ||
        (*(char *)(param_1 + 0x1b) != '\0')))) {
      fn_0062f9a4(param_1,uVar2,param_5,auStack_532c);
    }
    iVar3 = fn_0062285c(param_1,param_5);
    if (((iVar3 == 0) && (*(char *)(param_1 + 0x18) == '\0')) && (local_1cc == '\0')) {
      fn_0062fe14(param_1,uVar2,param_5,auStack_532c);
      fn_00630874(param_1,uVar2,param_5,auStack_532c);
      fn_00631cfc(param_1,uVar2,param_5,auStack_532c);
      fn_006305dc(param_1,uVar2,param_5,auStack_532c);
      fn_0062d760(param_1,uVar2,param_5,auStack_532c);
      fn_0062e7e4(param_1,uVar2,param_5,auStack_532c);
      fn_00626660(param_1,auStack_532c,param_5);
      iVar3 = fn_0062285c(param_1,param_5);
      if (iVar3 == 0) {
        fn_006267fc(param_1,puVar9,param_5,auStack_532c);
      }
    }
  }
  local_5338 = auStack_532c;
  fn_006276cc(param_1,1,puVar9,param_5);
  iVar3 = fn_0062285c(param_1,param_5);
  fn_00622928(param_1,uVar2,auStack_532c,param_5);
  if ((int)*(char *)(uVar2 + 0x12) == *(char *)(uVar2 + 0x13) + -1 || iVar3 != 0) {
    cVar7 = *(char *)(uVar2 + 5);
    if (0 < *(short *)(puVar9 + cVar7 * 0x418 + -0x4080)) {
      cVar1 = puVar9[cVar7 * 0x418 + -0x4019];
      bVar11 = cVar1 == '\0';
      if (bVar11) {
        cVar1 = puVar9[cVar7 * 0x418 + -0x400a];
      }
      bVar12 = bVar11 && cVar1 == '\0';
      if (bVar11 && cVar1 == '\0') {
        bVar12 = puVar9[cVar7 * 0x418 + -0x4018] == '\0';
      }
      if (bVar12) {
        fn_00654cc4(puVar9 + cVar7 * 0x418 + -0x3c7a,3,1);
      }
    }
    uVar4 = fn_00797194(local_34,uStack_30);
    fn_0062efc8(param_1,uVar4,param_5);
    fn_00655d8c(param_1 + 4);
  }
  if (local_1cc == '\0') {
    iVar10 = fn_0062a40c(param_1,uVar2);
    uVar4 = fn_00691860();
    uVar5 = fn_0069187c(iVar10);
    fn_00620924(param_1 + 4,uVar4,uVar5);
    if (iVar10 == 0xb2) {
      pcVar6 = param_5 + 0x180392;
      cVar7 = *pcVar6 + '\x01';
      *pcVar6 = cVar7;
      local_5338 = (undefined1 *)CONCAT31(((unsigned int)(local_5338) >> 8) & 0xffffff,cVar7);
      if (cVar7 < '\0') {
        ppuVar8 = (undefined1 **)&local_5334;
      }
      local_5334 = local_5334 & 0xffffff00;
      local_5330[0] = 99;
      if ('c' < (char)*ppuVar8) {
        ppuVar8 = (undefined1 **)local_5330;
      }
      *pcVar6 = (char)*ppuVar8;
    }
  }
  return iVar3;
}



void fn_0062f7f4(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  char acStack_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [56];
  
  if ((char)param_4[0x1458] == '\0') {
    uVar1 = fn_0062a40c(param_1);
    iVar6 = (int)*(char *)(param_2 + 5);
    uVar2 = fn_00656538(auStack_58,param_2);
    iVar3 = fn_00626c48(param_1,param_3,uVar2);
    if (*(char *)(iVar3 + 0x59) != '\x04') {
      uVar2 = fn_0061be08(iVar6);
      fn_00655ee8(param_1 + 4,uVar1,uVar2);
    }
    iVar3 = fn_0069223c(uVar1);
    if (iVar3 != 0) {
      local_60 = 0;
      local_5c = 0;
      iVar3 = fn_00163cbc(uVar1);
      if (iVar3 == 0xd) {
        uVar4 = iVar6 - 0x10;
        bVar7 = uVar4 < 4;
        if (!bVar7) {
          uVar4 = iVar6 - 0x18;
        }
        if ((bVar7 || uVar4 < 4) || (iVar6 == 0x20 || iVar6 == 0x22)) {
          uVar4 = 0x14;
        }
        else {
          uVar4 = 0x10;
        }
        iVar3 = fn_0061be08(iVar6);
        if (iVar3 == 0) {
          uVar5 = 0x14;
        }
        else {
          uVar5 = 0x18;
        }
        if (uVar4 < uVar5) {
          do {
            fn_00655da8(param_1 + 4,uVar4,uVar1);
            uVar4 = (uint)(char)((char)uVar4 + '\x01');
            iVar3 = fn_0061be08(iVar6);
            if (iVar3 == 0) {
              iVar3 = 0x14;
            }
            else {
              iVar3 = 0x18;
            }
          } while ((int)uVar4 < iVar3);
        }
      }
      else {
        iVar3 = 0;
        if (0 < *param_4) {
          do {
            iVar6 = (int)*(char *)((int)param_4 + iVar3 * 0x1a0 + 9);
            if (acStack_70[iVar6] == '\0') {
              acStack_70[iVar6] = '\x01';
              fn_00655da8(param_1 + 4,iVar6,uVar1);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < *param_4);
          return;
        }
      }
    }
  }
  return;
}



void fn_0062efc8(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_26a0 [9856];
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    iVar2 = fn_006f4a98(param_1 + 4);
    if (iVar2 == 0) {
      pcVar3 = (char *)fn_006f4c08(param_1 + 4);
      pcVar4 = (char *)fn_006f4b80(param_1 + 4);
      iVar2 = (int)*pcVar4;
      cVar1 = '\0';
      if (pcVar4[1] != '\0') {
        cVar1 = *pcVar3;
      }
      if ((pcVar4[1] != '\0' && cVar1 != '\0') && iVar2 != 0) {
        iVar5 = fn_0061be08();
        if (iVar5 == 0) {
          uVar6 = fn_0061be08(iVar2);
          uVar6 = uVar6 ^ 1;
        }
        else {
          uVar6 = fn_0061be08(iVar2);
        }
        if ((((uVar6 != 0) &&
             (iVar5 = fn_006f447c(param_3 + 0x180388 + iVar2 * 0x418 + -0x4080), iVar5 != 0)) &&
            (*(char *)(param_1 + iVar2 + -8) == '\0')) && (*(char *)(param_1 + 0x1b) == '\0')) {
          return;
        }
      }
    }
    fn_00656270(param_1 + 4);
    fn_0062b720(param_1,param_3 + 0x180388,local_26a0);
    local_26a0[0] = 0xe;
    fn_0062a720(param_1,param_3,local_26a0);
  }
  return;
}



void fn_0062ee60(undefined4 param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined1 local_1f6;
  undefined2 local_1f4;
  undefined2 local_1e0;
  undefined1 local_dd;
  undefined1 local_c1;
  undefined1 local_99;
  undefined1 auStack_58 [56];
  
  bVar1 = false;
  iVar2 = fn_0062a40c();
  uVar3 = fn_00656538(auStack_58,param_2);
  iVar4 = fn_00626c2c(param_1,param_3 + 0x180388,uVar3);
  fn_00301f50(&local_1f8,0x1a0);
  local_1e0 = 1;
  local_1f8 = *(undefined1 *)(param_2 + 5);
  local_1f6 = 4;
  local_1f4 = 4;
  local_1f7 = local_1f8;
  if (*(char *)(param_4 + 0x5160) == '\0') {
    iVar5 = fn_00692050(iVar2);
    if (((iVar5 != 0) || (iVar2 == 0x175)) && (*(char *)(iVar4 + 0x5c) != '\0')) {
      *(undefined1 *)(iVar4 + 0x5c) = 0;
      *(undefined1 *)(iVar4 + 0xbd) = 0;
      bVar1 = true;
      local_dd = 1;
    }
    iVar5 = fn_00163a00(iVar2);
    if (((iVar5 == 4) && (iVar5 = fn_00163c80(iVar2), iVar5 == 1)) &&
       (*(char *)(iVar4 + 0x78) != '\0')) {
      *(undefined1 *)(iVar4 + 0x78) = 0;
      *(undefined1 *)(iVar4 + 0xd9) = 0;
      bVar1 = true;
      local_c1 = 1;
    }
  }
  if ((iVar2 == 0x162) && (*(char *)(iVar4 + 0xa0) != '\0')) {
    *(undefined1 *)(iVar4 + 0xa0) = 0;
    *(undefined1 *)(iVar4 + 0x101) = 0;
    local_99 = 1;
  }
  else if (!bVar1) {
    return;
  }
  uVar3 = fn_006228ac(param_4);
  *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
  fn_0017821c(uVar3,&local_1f8,0x1a0);
  return;
}


