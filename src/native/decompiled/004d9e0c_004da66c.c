#include "004d9e0c_004da66c.h"



bool fn_004da66c(uint *param_1)

{
  return (*param_1 & 0x3fc00) == 0x14800;
}



void fn_004da634(void)

{
  if (DAT_008bf4f8 != '\0') {
    if (DAT_008bf4f9 != '\0') {
      fn_004da55c();
    }
    fn_004ed284(5);
    DAT_008bf4f8 = '\0';
  }
  return;
}



undefined1 * fn_004da55c(void)

{
  undefined1 *puVar1;
  int *piVar2;
  
  if (DAT_008bf4f8 == '\0') {
    puVar1 = &DAT_e0a1482b;
  }
  else {
    if (DAT_008bf4f9 == '\0') {
      return &DAT_e0a14827;
    }
    piVar2 = (int *)fn_004ed2e8();
    (**(code **)(*piVar2 + 0x14))();
    fn_004ed21c();
    puVar1 = (undefined1 *)0x0;
    DAT_008bf4f9 = '\0';
  }
  return puVar1;
}



void fn_004da530(undefined4 *param_1)

{
  *param_1 = &DAT_0085637c;
  fn_004d9f14(param_1);
  fn_004ecfd0(param_1);
  return;
}



void fn_004da490(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0051cf84();
  *puVar1 = &DAT_0085637c;
  *(undefined1 *)(puVar1 + 6) = 0xfd;
  puVar1[5] = 0;
  *(undefined1 *)((int)puVar1 + 0x19) = 0;
  puVar1[0x16d] = 0;
  puVar1[0x16e] = 0;
  puVar1[0x16f] = 0;
  puVar1[0x170] = 0;
  puVar1[0x171] = 0;
  puVar1[0x195] = 0;
  puVar1[0x196] = 0;
  puVar1[0x198] = 1;
  puVar1[0x199] = 0;
  *(undefined1 *)(puVar1 + 0x19d) = 1;
  puVar1[0x1a0] = 0;
  puVar1[0x1a1] = 0;
  puVar1[0x1aa] = 0;
  puVar1[0x1ab] = 0;
  puVar1[0x1ac] = 0;
  *(undefined1 *)(puVar1 + 0x1ad) = 0;
  puVar1[0x1af] = 0;
  puVar1[0x1b0] = 0;
  puVar1[0x1b1] = 0;
  puVar1[0x1b2] = 0;
  puVar1[0x1b8] = 0;
  *(undefined1 *)(puVar1 + 0x1be) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x6f9) = 0;
  *(undefined1 *)((int)puVar1 + 0x6fa) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x6fb) = 0;
  puVar1[0x1bf] = 0;
  *(undefined1 *)((int)puVar1 + 0x709) = 0;
  return;
}



void fn_004d9f14(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5b4);
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    *(undefined4 *)(param_1 + 0x5b4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x5b8);
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    *(undefined4 *)(param_1 + 0x5b8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x5bc);
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    *(undefined4 *)(param_1 + 0x5bc) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x5c0);
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    *(undefined4 *)(param_1 + 0x5c0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x5c4);
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    *(undefined4 *)(param_1 + 0x5c4) = 0;
  }
  if (*(int *)(param_1 + 0x6bc) != 0) {
    fn_004edb54();
    iVar1 = *(int *)(param_1 + 0x6c0);
    if (iVar1 != 0) {
      fn_00656b0c(iVar1);
      fn_00656b7c(iVar1);
      *(undefined4 *)(param_1 + 0x6c0) = 0;
    }
    if (*(int *)(param_1 + 0x6bc) != 0) {
      fn_004ecfd0(*(int *)(param_1 + 0x6bc));
    }
    *(undefined4 *)(param_1 + 0x6bc) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x5b0);
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    *(undefined4 *)(param_1 + 0x5b0) = 0;
  }
  if (*(int *)(param_1 + 0x6c4) != 0) {
    fn_004eefec();
    iVar1 = *(int *)(param_1 + 0x6c8);
    if (iVar1 != 0) {
      fn_00656b0c(iVar1);
      fn_00656b7c(iVar1);
      *(undefined4 *)(param_1 + 0x6c8) = 0;
    }
    if (*(int *)(param_1 + 0x6c4) != 0) {
      fn_004ecfd0(*(int *)(param_1 + 0x6c4));
    }
    *(undefined4 *)(param_1 + 0x6c4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x6e0);
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    *(undefined4 *)(param_1 + 0x6e0) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0xfd;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x67c) = 0;
  *(undefined4 *)(param_1 + 0x658) = 0;
  *(undefined4 *)(param_1 + 0x654) = 0;
  *(undefined4 *)(param_1 + 0x660) = 1;
  *(undefined4 *)(param_1 + 0x664) = 0;
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  *(undefined4 *)(param_1 + 0x6ac) = 0;
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  return;
}



undefined4 fn_004d9e0c(int param_1)

{
  char cVar1;
  int extraout_r1;
  int extraout_r1_00;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x18) != -3) {
    fn_004d7420(param_1);
    cVar1 = *(char *)(param_1 + 0x19);
    iVar2 = extraout_r1;
    if ((cVar1 == '\x01' || cVar1 == '\x02') || cVar1 == '\x03') {
      fn_004d8488(param_1);
      fn_004d85d4(param_1);
      iVar2 = extraout_r1_00;
    }
    bVar3 = *(char *)(param_1 + 0x688) != '\0';
    if (bVar3) {
      iVar2 = *(int *)(param_1 + 0x690);
    }
    if (bVar3 && iVar2 != 0) {
      uVar4 = fn_004d7c00(param_1);
      iVar2 = (int)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 == 0) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x688) = 0;
    }
    if ((*(char *)(param_1 + 0x19) == '\x04') && (*(char *)(param_1 + 0x689) != '\0')) {
      iVar2 = 0;
      if (*(int *)(param_1 + 0x694) != 0) {
        uVar4 = fn_004d7c00(param_1,*(int *)(param_1 + 0x694),2);
        iVar2 = (int)((ulonglong)uVar4 >> 0x20);
        if ((int)uVar4 == 0) {
          return 0;
        }
        *(undefined1 *)(param_1 + 0x689) = 0;
      }
    }
    bVar3 = *(char *)(param_1 + 0x68a) != '\0';
    if (bVar3) {
      iVar2 = *(int *)(param_1 + 0x698);
    }
    if (bVar3 && iVar2 != 0) {
      iVar2 = fn_004d7c00(param_1,iVar2,4);
      if (iVar2 == 0) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x68a) = 0;
    }
    cVar1 = *(char *)(param_1 + 0x19);
    if ((cVar1 == '\x01' || cVar1 == '\x02') || cVar1 == '\x03') {
      fn_004da0f8(param_1);
    }
  }
  return 0;
}



void fn_004da0f8(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar10 = *(int *)(param_1 + 0x5b4) + (uint)*(byte *)(param_1 + 0x18) * 0x20;
  if (*(char *)(param_1 + 0x6b5) == '\0') {
    uVar4 = 0x21;
  }
  else {
    uVar4 = 0x22;
  }
  *(undefined1 *)(param_1 + 0x1c) = uVar4;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(ushort *)(param_1 + 0x1e) = *(ushort *)(iVar10 + 2) << 8 | *(ushort *)(iVar10 + 2) >> 8;
  uVar5 = *(uint *)(param_1 + 0x66c);
  *(uint *)(param_1 + 0x20) =
       ((uVar5 >> 0x10) << 0x18 | (uVar5 >> 0x18) << 0x10) >> 0x10 |
       ((uVar5 & 0xff) << 8 | uVar5 >> 8 & 0xff) << 0x10;
  uVar5 = *(uint *)(param_1 + 0x670);
  *(uint *)(param_1 + 0x24) =
       ((uVar5 >> 0x10) << 0x18 | (uVar5 >> 0x18) << 0x10) >> 0x10 |
       ((uVar5 & 0xff) << 8 | uVar5 >> 8 & 0xff) << 0x10;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(char *)(param_1 + 0x6a4) != '\0') && (*(int *)(param_1 + 0x6a0) == 0)) {
    fn_004d83d0(param_1);
  }
  iVar6 = *(int *)(param_1 + 0x69c);
  iVar2 = *(int *)(param_1 + 0x668);
  iVar7 = *(int *)(param_1 + 0x654);
  iVar9 = *(int *)(param_1 + 0x6b0);
  *(undefined1 *)(param_1 + 0x708) = 0;
  *(int *)(param_1 + 0x704) = iVar6 + -1;
  *(int *)(param_1 + 0x700) = *(int *)(param_1 + 0x6dc);
  if (iVar6 - iVar2 <= iVar7 + iVar9) {
    if ((*(int *)(param_1 + 0x6d8) == iVar6) && (iVar2 + iVar7 + iVar9 == *(int *)(param_1 + 0x6dc))
       ) {
      uVar8 = *(int *)(param_1 + 0x6d4) + 1;
      *(uint *)(param_1 + 0x6d4) = uVar8;
      uVar5 = *(uint *)(param_1 + 0x6d0);
      if (uVar8 <= uVar5) {
        *(int *)(param_1 + 0x69c) = iVar2 + *(int *)(param_1 + 0x658) + *(int *)(param_1 + 0x660);
        return;
      }
      if (uVar5 < *(uint *)(param_1 + 0x6cc)) {
        *(uint *)(param_1 + 0x6d0) = uVar5 + 1;
      }
      *(undefined4 *)(param_1 + 0x6d4) = 0;
    }
    else {
      if (*(int *)(param_1 + 0x6cc) == 0) {
        *(undefined4 *)(param_1 + 0x6d0) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x6d0) = 1;
      }
      *(undefined4 *)(param_1 + 0x6d4) = 0;
      *(int *)(param_1 + 0x6d8) = iVar6;
      *(int *)(param_1 + 0x6dc) = iVar7 + iVar2 + iVar9;
    }
  }
  *(int *)(param_1 + 0x6e8) = (iVar2 - *(int *)(param_1 + 0x658)) + -1;
  *(int *)(param_1 + 0x6e4) = iVar2 + *(int *)(param_1 + 0x658) + 1;
  if (iVar6 - iVar2 <= iVar7 + iVar9) {
    do {
      if (((*(char *)(iVar10 + 0x14) != '\0') &&
          (*(int *)(iVar10 + 0x18) - *(int *)(param_1 + 0x69c) < 0)) ||
         (iVar2 = fn_004d6b30(param_1,&local_2c,0), iVar2 == 0)) break;
      local_28 = *(undefined4 *)(param_1 + 0xc);
      iVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x10))
                        (*(int **)(param_1 + 0x10),&local_28,0xff,local_2c,0);
      if (0x3fefffff < iVar2 - 0x100000U) break;
      fn_001694d4(iVar2,param_1 + 0x1c);
      fn_0050a490(*(undefined4 *)(param_1 + 0x10));
    } while (*(int *)(param_1 + 0x69c) - *(int *)(param_1 + 0x668) <=
             *(int *)(param_1 + 0x654) + *(int *)(param_1 + 0x6b0));
  }
  if (*(char *)(param_1 + 0x19) == '\x03') {
    bVar1 = *(byte *)(param_1 + 0x708);
    if (bVar1 <= *(byte *)(param_1 + 0x709)) goto LAB_004da3bc;
    *(byte *)(param_1 + 0x709) = bVar1;
    DAT_008ee0d8 = bVar1;
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    return;
  }
LAB_004da3bc:
  iVar10 = 0;
  if (*(int *)(param_1 + 0x6e8) - *(int *)(param_1 + 0x6e4) < 0) {
    return;
  }
  do {
    iVar2 = *(int *)(param_1 + 0x678) +
            ((*(int *)(param_1 + 0x6e4) + iVar10) - *(int *)(param_1 + 0x668));
    iVar6 = *(int *)(param_1 + 0x65c);
    if (iVar2 < 0) {
      iVar2 = iVar2 + iVar6;
    }
    else if (iVar6 <= iVar2) {
      iVar2 = iVar2 - iVar6;
    }
    iVar10 = iVar10 + 1;
    piVar3 = (int *)(*(int *)(param_1 + 0x6e0) + iVar2 * 4);
    *piVar3 = *piVar3 + 1;
  } while (iVar10 <= *(int *)(param_1 + 0x6e8) - *(int *)(param_1 + 0x6e4));
  return;
}


