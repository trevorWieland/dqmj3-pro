#include "004f6764_004f7060a.h"



undefined4 fn_004f6ad8(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  if (*(int *)(DAT_008bf4cc + 0xa4) != 0) {
    bVar1 = *(byte *)(DAT_008bf4e0 + 99);
    if (((0xb < bVar1) || (*(byte *)(*(int *)(DAT_008bf4cc + 0xa4) + 0x14) != bVar1)) ||
       (puVar2 = (undefined4 *)fn_0050b080(DAT_008bf4cc), puVar2 == (undefined4 *)0x0)) {
      return 0;
    }
    uStack_1c = *(undefined4 *)(param_1 + 0xc);
    iVar3 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                      (*(int **)(param_1 + 0x10),&uStack_1c,puVar2 + 1,2,0);
    if (iVar3 - 0x100000U < 0x3ff00000) {
      **(undefined1 **)(param_1 + 0x4c) = 0x48;
      *(byte *)(*(int *)(param_1 + 0x4c) + 1) = bVar1;
      fn_001694d4(iVar3,*(undefined4 *)(param_1 + 0x4c));
      iVar3 = fn_0050a490(*(undefined4 *)(param_1 + 0x10));
      if (-1 < iVar3) {
        local_18 = *(undefined4 *)(param_1 + 0xc);
        iVar3 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                          (*(int **)(param_1 + 0x10),&local_18,puVar2 + 1,2,1);
        if (iVar3 - 0x100000U < 0x3ff00000) {
          fn_001694d4(iVar3,*(undefined4 *)(param_1 + 0x4c));
          fn_0050a490(*(undefined4 *)(param_1 + 0x10));
        }
      }
      return 1;
    }
    (**(code **)*puVar2)(puVar2,*(code **)*puVar2,0,4);
  }
  return 0;
}



int fn_004f69d8(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (*(int *)(DAT_008bf4cc + 0xa4) != 0) {
    bVar1 = *(byte *)(DAT_008bf4e0 + 99);
    uVar3 = (uint)bVar1;
    if (((uVar3 < 0xc) && (*(byte *)(*(int *)(DAT_008bf4cc + 0xa4) + 0x14) == uVar3)) &&
       (iVar2 = fn_0050b080(DAT_008bf4cc,param_2), iVar2 != 0)) {
      if (uVar3 <= param_2) {
        param_2 = param_2 - 1;
      }
      iVar5 = *(int *)(param_1 + 0x40) + param_2 * 0x68;
      iVar2 = fn_006db038(iVar5);
      if (iVar2 != 0) {
        **(undefined1 **)(param_1 + 0x4c) = 0x42;
        *(byte *)(*(int *)(param_1 + 0x4c) + 1) = bVar1;
        iVar2 = fn_00517cf0(iVar5,*(undefined4 *)(param_1 + 0x4c),2);
        if ((-1 < iVar2) && (DAT_008bf4a0 != 0)) {
          uVar4 = *(undefined4 *)(iVar5 + 0x1c);
          uVar6 = fn_004eea84(DAT_008bf4a0,7);
          fn_004f15b4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar4,0);
        }
        return (iVar2 >> 0x1f) + 1;
      }
    }
  }
  return 0;
}



int fn_004f6764(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  uint local_44;
  
  iVar12 = *(int *)(DAT_008bf4cc + 0xa4);
  if (iVar12 != 0) {
    bVar1 = *(byte *)(DAT_008bf4e0 + 99);
    uVar8 = (uint)bVar1;
    if (((uVar8 < 0xc) && (*(byte *)(iVar12 + 0x14) == uVar8)) &&
       (iVar4 = fn_0050b080(DAT_008bf4cc,param_2), iVar4 != 0)) {
      if (uVar8 <= param_2) {
        param_2 = param_2 - 1;
      }
      uVar2 = *(undefined1 *)(DAT_008bf4e0 + 0x62);
      iVar4 = *(int *)(param_1 + 0x40) + param_2 * 0x68;
      iVar5 = fn_006db038();
      if (iVar5 != 0) {
        puVar10 = *(undefined1 **)(param_1 + 0x4c);
        *puVar10 = 0x80;
        puVar10[1] = uVar2;
        puVar10[2] = bVar1;
        fn_004ed514(puVar10 + 4,param_3);
        fn_004ed514(puVar10 + 8,param_4);
        puVar10[0xc] = 0x32;
        puVar10[0xf] = 0;
        puVar10[0xe] = 0;
        puVar10[0xd] = 0;
        bVar3 = false;
        local_44 = 0;
        cVar7 = '\0';
        iVar5 = 0x10;
        uVar8 = 0;
        if (*(short *)(DAT_008bf4e0 + 0x5e) == 0) {
          puVar10[3] = 0;
        }
        else {
          do {
            uVar11 = 0;
            iVar6 = fn_0050b080(DAT_008bf4cc,uVar8 & 0xff);
            if ((iVar6 != 0 && iVar6 != iVar12) && (*(char *)(iVar6 + 0x20) == '\x05')) {
              uVar11 = fn_0050fca4(DAT_008c0678,iVar6 + 4);
              uVar11 = uVar11 & 0xffff;
              if (uVar11 == 0) {
                iVar6 = fn_006dbad0(iVar6);
                if (iVar6 == 0) {
                  bVar3 = true;
                  local_44 = local_44 | 1 << (uVar8 & 0xff);
                }
              }
              else {
                iVar6 = fn_006dbaec();
                if (iVar6 == 0) {
                  uVar11 = 0;
                }
                else {
                  cVar7 = cVar7 + '\x01';
                  if (uVar11 >> 2 == 0) {
                    uVar11 = 4;
                  }
                }
              }
            }
            uVar11 = uVar11 >> 2;
            if (0xfe < uVar11) {
              uVar11 = 0xff;
            }
            puVar10[iVar5] = (char)uVar11;
            uVar8 = uVar8 + 1;
            iVar5 = iVar5 + 1;
          } while ((int)uVar8 < (int)(uint)*(ushort *)(DAT_008bf4e0 + 0x5e));
          puVar10[3] = cVar7;
          if (bVar3) {
            *param_5 = local_44;
            return 0;
          }
        }
        iVar12 = fn_00517cf0(iVar4,*(undefined4 *)(param_1 + 0x4c),iVar5);
        if ((-1 < iVar12) && (DAT_008bf4a0 != 0)) {
          uVar9 = *(undefined4 *)(iVar4 + 0x1c);
          uVar13 = fn_004eea84(DAT_008bf4a0,7);
          fn_004f15b4((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),uVar9,0);
        }
        return (iVar12 >> 0x1f) + 1;
      }
    }
  }
  return 0;
}


