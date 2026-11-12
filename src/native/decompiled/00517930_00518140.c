#include "00517930_00518140.h"



int fn_00518140(int param_1,int param_2)

{
  if (param_1 != param_2) {
    fn_0050d090(param_1 + 4,param_2 + 4);
    fn_0050d090(param_1 + 0x2c,param_2 + 0x2c);
  }
  return param_1;
}



int fn_0051811c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00857210;
  iVar1 = fn_0050d178(param_1 + 0xb);
  iVar1 = fn_0050d178(iVar1 + -0x28);
  return iVar1 + -4;
}



int fn_005180d8(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = &DAT_00857210;
  iVar1 = fn_0013d5c4(param_1 + 1);
  iVar1 = fn_0013d5c4(iVar1 + 0x28);
  fn_0050d090(iVar1 + -0x28,param_2 + 4);
  fn_0050d090(iVar1,param_2 + 0x2c);
  return iVar1 + -0x2c;
}



int fn_00518060(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 - 0x100000U < 0x3ff00000) {
    iVar1 = fn_0050cf6c(param_1 + 4);
    iVar2 = fn_006da104(param_1 + 4);
    if (-1 < iVar1) {
      iVar1 = fn_0050cf6c(param_1 + 0x2c,iVar2 + param_2);
      fn_006da104(param_1 + 0x2c);
      if (-1 < iVar1) {
        iVar1 = 0;
      }
    }
  }
  else {
    iVar1 = -0x1f1eb7da;
  }
  return iVar1;
}



undefined4 * fn_00517fa4(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_008571fc;
  iVar1 = param_1[8];
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    param_1[8] = 0;
  }
  param_1[9] = 0;
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    param_1[3] = 0;
  }
  param_1[4] = 0;
  iVar1 = param_1[8];
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    param_1[8] = 0;
  }
  param_1[9] = 0;
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    param_1[3] = 0;
  }
  param_1[4] = 0;
  return param_1;
}



void fn_00517f28(undefined4 *param_1)

{
  *param_1 = &DAT_008571fc;
  param_1[1] = DAT_008c067c;
  *(undefined1 *)(param_1 + 2) = 0xfd;
  *(undefined1 *)((int)param_1 + 9) = 0xfd;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return;
}



undefined1 * fn_00517cf0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 4) == DAT_008c067c) {
    return &DAT_e0a14827;
  }
  if (param_2 - 0x100000U < 0x3ff00000) {
    if (param_3 == 0) goto LAB_00517d5c;
    iVar1 = fn_00169f1c(param_3 - 1,*(undefined4 *)(param_1 + 0x34));
    uVar2 = iVar1 + 1;
  }
  else {
    if (param_3 != 0) {
      return (undefined1 *)0xe0e14826;
    }
LAB_00517d5c:
    uVar2 = 1;
  }
  if ((uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x1c)) < uVar2) {
    return (undefined1 *)0xd861482c;
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    if (param_3 < 0x19000) goto LAB_00517dac;
    uVar4 = *(undefined4 *)(DAT_008bf4d4 + 0xc);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(DAT_008bf4d4 + 8);
    *(undefined4 *)(param_1 + 100) = uVar4;
  }
  *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_3;
LAB_00517dac:
  uVar6 = 0;
  if (uVar2 != 1) {
    do {
      uVar3 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c);
      if (*(uint *)(param_1 + 0x10) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(param_1 + 0x10);
      }
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc) + uVar3 * 0x5a0);
      *(undefined2 *)(puVar5 + 4) = 0x100;
      uVar3 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18);
      puVar5[6] = ((uVar3 >> 0x10) << 0x18 | (uVar3 >> 0x18) << 0x10) >> 0x10 |
                  ((uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff) << 0x10;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      fn_001694e4(puVar5 + 10,param_2,*(undefined4 *)(param_1 + 0x34));
      uVar6 = uVar6 + 1;
      *(ushort *)((int)puVar5 + 0x12) =
           (ushort)(*(int *)(param_1 + 0x34) << 8) |
           (ushort)((uint)*(int *)(param_1 + 0x34) >> 8) & 0xff;
      puVar5[2] = *(int *)(param_1 + 0x34) + 0x18;
      *puVar5 = 0;
      puVar5[1] = 0;
      *(undefined2 *)(puVar5 + 3) = 0;
      param_2 = param_2 + *(int *)(param_1 + 0x34);
      param_3 = param_3 - *(int *)(param_1 + 0x34);
    } while (uVar6 < uVar2 - 1);
  }
  uVar2 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c);
  if (*(uint *)(param_1 + 0x10) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(param_1 + 0x10);
  }
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc) + uVar2 * 0x5a0);
  *(undefined2 *)(puVar5 + 4) = 0x100;
  uVar2 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c);
  puVar5[6] = ((uVar2 >> 0x10) << 0x18 | (uVar2 >> 0x18) << 0x10) >> 0x10 |
              ((uVar2 & 0xff) << 8 | uVar2 >> 8 & 0xff) << 0x10;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (param_3 != 0) {
    fn_001694e4(puVar5 + 10,param_2,param_3);
  }
  *(ushort *)(puVar5 + 4) = *(ushort *)(puVar5 + 4) | 0x200;
  *(ushort *)((int)puVar5 + 0x12) = (ushort)(param_3 << 8) | (ushort)(param_3 >> 8) & 0xff;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = param_3 + 0x18;
  *(undefined2 *)(puVar5 + 3) = 0;
  return (undefined1 *)0x0;
}



void fn_00517c94(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



undefined1 * fn_00517930(int param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint in_fpscr;
  float fVar10;
  uint uVar11;
  longlong lVar12;
  int local_5c;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  uint uStack_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c [3];
  undefined1 auStack_30 [8];
  undefined4 local_28;
  
  if (*(int *)(param_1 + 4) == DAT_008c067c) {
    puVar1 = &DAT_e0a14827;
  }
  else {
    puVar2 = (undefined4 *)fn_00658e6c(auStack_30);
    uVar5 = *puVar2;
    local_5c = -1;
    *(undefined4 *)(param_1 + 0x3c) = puVar2[1];
    *(undefined4 *)(param_1 + 0x38) = uVar5;
    iVar3 = fn_0050b080(DAT_008bf4cc,*(undefined1 *)(param_1 + 9));
    if (iVar3 - 0x100000U < 0x3ff00000) {
      local_5c = fn_006dbb08(iVar3,DAT_008c0688);
      if (local_5c < 1) {
        lVar12 = *(longlong *)(param_1 + 0x40);
      }
      else {
        fVar10 = (float)VectorSignedToFloat(local_5c,(byte)(in_fpscr >> 0x16) & 3);
        uVar11 = (uint)(fVar10 * DAT_008c0684);
        lVar12 = fn_0011c134((int)((ulonglong)DAT_008c3640 * (ulonglong)uVar11),
                              uVar11 * DAT_008c3644 +
                              ((int)uVar11 >> 0x1f) * DAT_008c3640 +
                              (int)((ulonglong)DAT_008c3640 * (ulonglong)uVar11 >> 0x20),1000,0);
      }
      lVar12 = lVar12 + *(longlong *)(param_1 + 0x38);
    }
    else {
      lVar12 = *(longlong *)(param_1 + 0x40);
    }
    uVar11 = *(uint *)(param_1 + 0x48);
    uVar9 = 0;
    uVar11 = ((uVar11 >> 0x10) << 0x18 | (uVar11 >> 0x18) << 0x10) >> 0x10 |
             ((uVar11 & 0xff) << 8 | uVar11 >> 8 & 0xff) << 0x10;
    uVar7 = (*(uint *)(param_1 + 0x50) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x50) & 0xff00ff) << 8;
    uVar6 = (*(uint *)(param_1 + 0x54) & 0xffff00ff) << 8 |
            (*(uint *)(param_1 + 0x54) & 0xff00ff00) >> 8;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar6 = uVar6 << 0x10 | uVar6 >> 0x10;
    if (*(int *)(param_1 + 0x1c) != 0) {
      do {
        local_44 = (uint)((ulonglong)lVar12 >> 0x20);
        local_40 = (uint)lVar12;
        uVar4 = *(int *)(param_1 + 0x14) + uVar9;
        if (*(uint *)(param_1 + 0x10) <= uVar4) {
          uVar4 = uVar4 - *(uint *)(param_1 + 0x10);
        }
        puVar8 = (uint *)(*(int *)(param_1 + 0xc) + uVar4 * 0x5a0);
        if (puVar8[1] < *(uint *)(param_1 + 0x3c) ||
            *(uint *)(param_1 + 0x3c) - puVar8[1] < (uint)(*puVar8 <= *(uint *)(param_1 + 0x38))) {
          local_28 = *(undefined4 *)(param_1 + 4);
          iVar3 = (**(code **)(*param_2 + 0x10))
                            (param_2,&local_28,*(undefined1 *)(param_1 + 9),puVar8[2],0);
          if (0x3fefffff < iVar3 - 0x100000U) goto LAB_00517c5c;
          puVar8[9] = uVar7;
          puVar8[7] = uVar11;
          puVar8[8] = uVar6;
          fn_001694d4(iVar3,puVar8 + 4);
          fn_0050a490(param_2);
          if (DAT_008c068c == (code *)0x0) {
            puVar8[1] = local_44;
            *puVar8 = local_40;
          }
          else {
            uVar4 = (*DAT_008c068c)(local_5c,(short)puVar8[3]);
            lVar12 = fn_0011c134((int)((ulonglong)DAT_008c3640 * (ulonglong)uVar4),
                                  uVar4 * DAT_008c3644 +
                                  ((int)uVar4 >> 0x1f) * DAT_008c3640 +
                                  (int)((ulonglong)DAT_008c3640 * (ulonglong)uVar4 >> 0x20),1000,0);
            *(longlong *)puVar8 = lVar12 + *(longlong *)(param_1 + 0x38);
          }
          lVar12 = CONCAT44(local_44,local_40);
          *(undefined1 *)(param_1 + 0x58) = 0;
          if ((DAT_008ee100 == 0xffff) || (DAT_008ee100 < (ushort)puVar8[3])) {
            DAT_008ee100 = (ushort)puVar8[3];
          }
          *(short *)(puVar8 + 3) = (short)puVar8[3] + 1;
        }
        if (uVar9 < *(uint *)(param_1 + 0x1c)) {
          uVar9 = uVar9 + 1;
        }
      } while (uVar9 < *(uint *)(param_1 + 0x1c));
    }
    local_44 = (uint)((ulonglong)lVar12 >> 0x20);
    local_40 = (uint)lVar12;
    if (*(char *)(param_1 + 0x58) != '\0') {
      local_3c[0] = *(undefined4 *)(param_1 + 4);
      iVar3 = (**(code **)(*param_2 + 0x10))(param_2,local_3c,*(undefined1 *)(param_1 + 9),0x18,0);
      if (iVar3 - 0x100000U < 0x3ff00000) {
        local_58 = 0;
        local_50 = 0;
        local_56 = 0;
        local_54 = 0;
        local_4c = uVar11;
        uStack_48 = uVar6;
        local_44 = uVar7;
        fn_001694d4(iVar3,&local_58);
        fn_0050a490(param_2);
        *(undefined1 *)(param_1 + 0x58) = 0;
      }
    }
LAB_00517c5c:
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}


