#include "0018a34c_0018a84c.h"



int fn_0018a84c(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  
  puVar2 = (undefined4 *)fn_00194db0();
  *puVar2 = &PTR_FUN_00857cb0;
  uVar6 = *(undefined4 *)(param_2 + 0xa8);
  uVar8 = *(undefined4 *)(param_2 + 0xac);
  uVar12 = *(undefined4 *)(param_2 + 0xb0);
  puVar2[0x29] = *(undefined4 *)(param_2 + 0xa4);
  puVar2[0x2a] = uVar6;
  puVar2[0x2b] = uVar8;
  puVar2[0x2c] = uVar12;
  iVar3 = fn_00101a1c(puVar2 + 0x2d,fn_0017d8f8,4);
  iVar3 = fn_001957e0(iVar3 + 0x10);
  *(undefined1 *)(iVar3 + 8) = *(undefined1 *)(param_2 + 0xcc);
  *(undefined1 *)(iVar3 + 9) = *(undefined1 *)(param_2 + 0xcd);
  *(undefined1 *)(iVar3 + 10) = *(undefined1 *)(param_2 + 0xce);
  *(undefined4 *)(iVar3 + -0x10) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(iVar3 + -0xc) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(iVar3 + -8) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(iVar3 + -4) = *(undefined4 *)(param_2 + 0xc0);
  uVar10 = (uint)*(byte *)(param_2 + 0xc5);
  if (uVar10 != 0) {
    fn_0019559c(iVar3,uVar10);
    fn_0019561c(iVar3,uVar10);
    uVar9 = 0;
    if (uVar10 != 0) {
      do {
        fn_00195768(iVar3,uVar9,*(int *)(param_2 + 200) + uVar9 * 0x20);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar10);
    }
  }
  uVar8 = *(undefined4 *)(param_2 + 0xd4);
  iVar4 = fn_00194ee4(0x84,4);
  uVar6 = 0;
  if (iVar4 != 0) {
    uVar6 = fn_0019533c(iVar4,uVar8);
  }
  *(undefined4 *)(iVar3 + 0x10) = uVar6;
  bVar1 = *(byte *)(iVar3 + 9);
  uVar10 = (uint)bVar1;
  *(undefined1 *)(iVar3 + 9) = 0;
  iVar4 = fn_00194ee4(uVar10 << 3,4);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    uVar9 = 0;
    if (uVar10 != 0) {
      do {
        puVar7 = (undefined1 *)(iVar4 + uVar9 * 8);
        uVar9 = uVar9 + 1;
        if (puVar7 != (undefined1 *)0x0) {
          *puVar7 = 0;
          *(undefined4 *)(puVar7 + 4) = 0;
        }
      } while (uVar9 < uVar10);
    }
  }
  *(int *)(iVar3 + 0xc) = iVar4;
  if (iVar4 != 0) {
    *(byte *)(iVar3 + 9) = bVar1;
  }
  iVar4 = 0;
  if (*(char *)(iVar3 + 9) != '\0') {
    do {
      iVar11 = iVar4 * 8 + 4;
      *(undefined1 *)(*(int *)(iVar3 + 0xc) + iVar4 * 8) =
           *(undefined1 *)(*(int *)(param_2 + 0xd0) + iVar4 * 8);
      uVar8 = *(undefined4 *)(*(int *)(param_2 + 0xd0) + iVar11);
      iVar5 = fn_00194ee4(0x84,4);
      uVar6 = 0;
      if (iVar5 != 0) {
        uVar6 = fn_0019533c(iVar5,uVar8);
      }
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xc) + iVar11) = uVar6;
    } while (iVar4 < (int)(uint)*(byte *)(iVar3 + 9));
  }
  return iVar3 + -0xc4;
}



undefined4 * fn_0018a6d4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  uVar1 = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00857b60;
  param_1[5] = param_1 + 5;
  param_1[4] = 0;
  param_1[6] = param_1 + 5;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  fn_00194d10(param_1);
  *(undefined1 *)((int)param_1 + 0x47) = 0;
  fn_00301f50(param_1 + 0x20,0x19);
  *(undefined4 *)((int)param_1 + 0x99) = 0;
  *(undefined4 *)((int)param_1 + 0x9d) = 0;
  *(undefined1 *)((int)param_1 + 0xa1) = 0;
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  param_1[9] = uVar1;
  param_1[10] = uVar1;
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar1;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar1;
  *(undefined1 *)((int)param_1 + 0x45) = 0xff;
  *(undefined1 *)((int)param_1 + 0x46) = 0xff;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xee | 0x11;
  return param_1;
}



void fn_0018a69c(int param_1,int param_2)

{
  fn_0017d948(param_1 + 0x10,param_1 + 0x14,param_2 + 4);
  *(int *)(param_2 + 0xc) = param_1;
  *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) & 0xef | 0x10;
  return;
}



void fn_0018a688(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    *(undefined4 *)(param_1 + 0xa0) = param_2;
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  iVar2 = *(int *)(param_1 + 0xa4);
  fn_0017d948(iVar1 + 0x10,iVar1 + 0x14,iVar2 + 4);
  *(int *)(iVar2 + 0xc) = iVar1;
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  return;
}



void fn_0018a644(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  *param_1 = &DAT_00857a68;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  return;
}



void fn_0018a618(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,undefined1 param_5)

{
  undefined1 uStack00000000;
  
  if (param_3 + 1U < param_2) {
    param_2 = param_3 + 1U;
  }
  fn_0010288c(param_1,param_2,param_4,&param_5);
  return;
}



char * fn_0018a34c(char *param_1,undefined1 *param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar5;
  undefined1 uVar4;
  undefined1 uVar3;
  undefined1 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  uint local_28 [4];
  
  cVar2 = *param_1;
  iVar14 = 0;
  piVar7 = (int *)fn_002fea64();
  iVar15 = *piVar7;
LAB_0018a370:
  iVar12 = (int)cVar2;
  if (*(char *)(iVar15 + iVar12) != ' ') {
    return (char *)0x0;
  }
  iVar8 = 10;
  pcVar13 = param_1;
  if (iVar12 == 0x30) {
    pcVar13 = param_1 + 1;
    iVar12 = (int)*pcVar13;
    if ((iVar12 == 0x78) || (iVar12 == 0x58)) {
      pcVar13 = param_1 + 2;
      iVar12 = (int)*pcVar13;
      iVar8 = 0x10;
    }
    else {
      iVar8 = 8;
    }
  }
  uVar9 = 0;
  do {
    bVar1 = *(byte *)(iVar15 + iVar12);
    uVar11 = (uint)bVar1;
    if (uVar11 == 0x20) {
      uVar9 = (uVar9 * iVar8 + iVar12) - 0x30;
    }
    else {
      if ((iVar8 != 0x10) || (((uVar11 ^ uVar11 << 2) & 0x80) == 0)) break;
      if ((bVar1 & 8) == 0) {
        iVar10 = 0x41;
      }
      else {
        iVar10 = 0x61;
      }
      uVar9 = uVar9 * 0x10 + (iVar12 - iVar10) + 10;
    }
    pcVar13 = pcVar13 + 1;
    iVar12 = (int)*pcVar13;
  } while( true );
  local_28[iVar14] = uVar9;
  iVar14 = iVar14 + 1;
  if (iVar12 != 0x2e) {
    if (0x7f < iVar12) {
      return (char *)0x0;
    }
    uVar3 = (undefined1)(uVar9 >> 8);
    uVar4 = (undefined1)(uVar9 >> 0x10);
    uVar5 = (undefined1)uVar9;
    if (iVar14 == 1) {
      *param_2 = (char)(uVar9 >> 0x18);
      param_2[1] = uVar4;
      param_2[2] = uVar3;
    }
    else {
      uVar6 = (undefined1)local_28[0];
      if (iVar14 != 2) {
        if (iVar14 == 3) {
          if (uVar9 < 0x10000) {
            *param_2 = uVar6;
            param_2[2] = uVar3;
            param_2[3] = uVar5;
            param_2[1] = (char)local_28[1];
            return pcVar13;
          }
          return (char *)0x0;
        }
        if (iVar14 != 4) {
          return (char *)0x0;
        }
        if (uVar9 < 0x100) {
          *param_2 = uVar6;
          param_2[1] = (char)local_28[1];
          param_2[3] = uVar5;
          param_2[2] = (char)local_28[2];
          return pcVar13;
        }
        return (char *)0x0;
      }
      if (0xffffff < uVar9) {
        return (char *)0x0;
      }
      param_2[1] = uVar4;
      *param_2 = uVar6;
      param_2[2] = uVar3;
    }
    param_2[3] = uVar5;
    return pcVar13;
  }
  if (3 < iVar14) {
    return (char *)0x0;
  }
  if (0xff < uVar9) {
    return (char *)0x0;
  }
  param_1 = pcVar13 + 1;
  cVar2 = *param_1;
  goto LAB_0018a370;
}


