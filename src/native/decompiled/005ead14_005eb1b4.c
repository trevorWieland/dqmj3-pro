#include "005ead14_005eb1b4.h"



void fn_005eb1b4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5
                 )

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  pbVar1 = (byte *)*param_1;
  uVar4 = (ulonglong)param_5;
  if ((*pbVar1 & 8) == 0) {
    uVar2 = *(uint *)(pbVar1 + 0x50);
    uVar3 = *(uint *)(pbVar1 + 0x54);
    if ((char)param_1[0xe] != '\0' && uVar2 < uVar3) {
      do {
        if (((uint)*(byte *)(param_1[0xc] + (uint)(*(ushort *)(uVar2 + 4) >> 3)) &
            1 << (*(ushort *)(uVar2 + 4) & 7)) != 0) {
          fn_005eb2f8(param_1,param_2,param_3,param_4,(int)uVar4,uVar2);
        }
        uVar2 = uVar2 + 0x38;
      } while (uVar2 < uVar3);
      return;
    }
  }
  else {
    uVar3 = *(uint *)(pbVar1 + 0x5c);
    for (uVar2 = *(uint *)(pbVar1 + 0x50); uVar2 < uVar3; uVar2 = uVar2 + 0x38) {
      if (((uint)*(byte *)(param_1[0xc] + (uint)(*(ushort *)(uVar2 + 4) >> 3)) &
          1 << (*(ushort *)(uVar2 + 4) & 7)) != 0) {
        fn_005eb2f8(param_1,param_2,param_3,param_4,(int)uVar4,uVar2);
      }
    }
    uVar3 = *(uint *)(*param_1 + 100);
    for (uVar2 = *(uint *)(*param_1 + 0x60); uVar2 < uVar3; uVar2 = uVar2 + 0x38) {
      if (((uint)*(byte *)(param_1[0xc] + (uint)(*(ushort *)(uVar2 + 4) >> 3)) &
          1 << (*(ushort *)(uVar2 + 4) & 7)) != 0) {
        fn_005ead14(param_1,param_2,param_3,uVar2,(int)uVar4);
      }
    }
  }
  return;
}



int fn_005eb0c4(int param_1,int *param_2)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  
  piVar2 = *(int **)(param_1 + 0x148);
  iVar7 = 0;
  iVar8 = *(int *)(*piVar2 + 0x44);
  puVar6 = *(ushort **)(*piVar2 + 0x40);
  puVar4 = puVar6;
  if (iVar8 * 0x38 != 0) {
    do {
      iVar5 = 0;
      if (*param_2 == 0) {
LAB_005eb154:
        if (param_2[iVar5] == 0) goto LAB_005eb194;
        uVar1 = puVar4[2];
        *(byte *)(piVar2[0xc] + (uint)(uVar1 >> 3)) =
             *(byte *)(piVar2[0xc] + (uint)(uVar1 >> 3)) | (byte)(1 << (uVar1 & 7));
      }
      else {
        do {
          iVar3 = fn_003035b0(*(undefined4 *)
                                (*(int *)(*(int *)(puVar4 + 0x16) + 0x34) + (uint)*puVar4 * 0x2c +
                                0x28),param_2[iVar5]);
          if (iVar3 == 0) goto LAB_005eb154;
          iVar5 = iVar5 + 1;
        } while (param_2[iVar5] != 0);
LAB_005eb194:
        uVar1 = puVar4[2];
        iVar7 = iVar7 + 1;
        *(byte *)(piVar2[0xc] + (uint)(uVar1 >> 3)) =
             *(byte *)(piVar2[0xc] + (uint)(uVar1 >> 3)) & ~(byte)(1 << (uVar1 & 7));
      }
      puVar4 = puVar4 + 0x1c;
    } while (puVar6 + iVar8 * 0x1c != puVar4);
  }
  return iVar7;
}



void fn_005ead14(int param_1,undefined4 param_2,int *param_3,ushort *param_4,undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int extraout_r1;
  int iVar9;
  int iVar10;
  uint *puVar11;
  bool bVar12;
  float fVar13;
  int local_4c;
  undefined4 *local_48;
  int local_44;
  int local_40;
  int iStack_34;
  undefined4 local_30;
  int *piStack_2c;
  ushort *puStack_28;
  
  if ((*(byte *)(param_1 + 0x98) & 4) == 0) {
    return;
  }
  iVar10 = *(int *)(*(int *)(param_4 + 0x16) + 0x34) + (uint)*param_4 * 0x2c;
  iVar2 = *(int *)(param_1 + 4) + (uint)*param_4 * 0x158;
  iStack_34 = param_1;
  local_30 = param_2;
  piStack_2c = param_3;
  puStack_28 = param_4;
  fn_006eb278(param_2);
  iVar3 = fn_006e9fcc();
  local_48 = (undefined4 *)fn_006eb290(local_30);
  fn_006eb278(local_30);
  iVar4 = fn_005e19c8();
  pfVar5 = (float *)fn_006eb2b4(local_30);
  iVar9 = *(int *)(iVar3 + 0xcc);
  fn_006e0218(*(undefined4 *)(iVar10 + 0x18),param_3,local_48,iVar9,param_4);
  local_44 = *(int *)(iVar10 + 0x10);
  local_40 = *(int *)(iVar10 + 0x14) << 2;
  iVar6 = *param_3;
  iVar7 = extraout_r1;
  if (iVar6 != 0) {
    iVar7 = local_44;
  }
  if (iVar6 != 0 && iVar7 != 0) {
    iVar7 = fn_0044ef7c(iVar6,(iVar6 - param_3[2] & 0xfffffffcU) + 0x18);
    *param_3 = iVar7;
    iVar7 = fn_0044efc8(iVar7,&local_4c,local_44,local_40);
    *param_3 = iVar7;
    if ((uint *)param_3[3] != (uint *)0x0) {
      *(uint *)param_3[3] = (uint)(iVar7 - param_3[2]) >> 3;
    }
    param_3[2] = *param_3;
    param_3[3] = local_4c;
    if (param_3[4] == 0) {
      param_3[4] = *param_3 - param_3[1] & 0xfffffffc;
    }
  }
  fn_006e02e0(*(undefined4 *)(iVar10 + 0x18),param_3,
               *(int *)(param_1 + 0x4c) +
               (uint)*(ushort *)(*(int *)(param_1 + 0x54) + (uint)*param_4 * 8) * 0x18,iVar3);
  fn_005e59bc(local_30,param_3,iVar10,iVar2);
  iVar7 = *(int *)(*(int *)(param_1 + 0x8c) + (uint)*param_4 * 4);
  if (iVar7 != 0) {
    fn_005e7c88(iVar7,param_3);
  }
  puVar11 = (uint *)*param_3;
  if ((**(byte **)(param_4 + 0x16) & 2) == 0) {
    uVar8 = fn_00171688();
    *puVar11 = *(byte *)(iVar9 + 0x16) | 0x80000000;
    puVar11[1] = 0xf02c0;
    fn_001ad578(puVar11 + 2,uVar8,0xbf02c1);
    *param_3 = (int)(puVar11 + 0x10);
    puVar11[0x10] = *(byte *)(iVar9 + 0x26) | 0x80000000;
    puVar11[0x11] = 0xf02c0;
    fn_001ad578(puVar11 + 0x12,param_5,0xbf02c1);
    *param_3 = (int)(puVar11 + 0x20);
    puVar11[0x20] = *(byte *)(iVar9 + 0x1e) | 0x80000000;
    puVar11[0x21] = 0xf02c0;
    fn_001ad578(puVar11 + 0x22,param_5,0xbf02c1);
    *param_3 = (int)(puVar11 + 0x30);
    fn_006e0b54(param_4,param_3);
  }
  else {
    uVar8 = fn_00171688();
    *puVar11 = *(byte *)(iVar9 + 0x16) | 0x80000000;
    puVar11[1] = 0xf02c0;
    fn_001ad578(puVar11 + 2,uVar8,0xbf02c1);
    *param_3 = (int)(puVar11 + 0x10);
    iVar7 = fn_005e5a34(local_30);
    puVar11 = (uint *)*param_3;
    *puVar11 = *(byte *)(iVar9 + 0x1e) | 0x80000000;
    puVar11[1] = 0xf02c0;
    fn_001ad578(puVar11 + 2,iVar7 + 0x148,0xbf02c1);
    *param_3 = (int)(puVar11 + 0x10);
    fVar13 = *pfVar5;
    bVar1 = fVar13 == 0.0;
    if (bVar1) {
      fVar13 = pfVar5[1];
    }
    bVar12 = false;
    if (bVar1 && (bVar1 && fVar13 == 0.0)) {
      bVar12 = pfVar5[2] == 0.0;
    }
    if (bVar12) {
      fn_006e1328(param_4,param_3,param_1 + 0xc,iVar9 + 0x24);
    }
    else {
      fn_006e16f0(param_4,param_3,param_1 + 0xc,iVar9 + 0x24,pfVar5);
    }
  }
  iVar7 = fn_005e6060(local_30);
  if (iVar7 != 0) {
    fn_00549f40(param_3,iVar2,*(undefined4 *)(iVar3 + 0xd0));
  }
  *(undefined4 *)(iVar4 + 4) = 0;
  *(int *)(iVar4 + 8) = iVar2;
  *(undefined4 *)(iVar4 + 0x10) = 0;
  *local_48 = 0;
  *(undefined2 *)(local_48 + 1) = 0xffff;
  *(undefined2 *)((int)local_48 + 6) = 0xffff;
  fn_005e6958(local_30,*(undefined4 *)
                         (*(int *)(*(int *)(*(int *)(param_4 + 0x16) + 0x34) +
                                  (uint)*(ushort *)
                                         (*(int *)(param_1 + 0x54) + (uint)*param_4 * 8 + 4) * 0x2c)
                         + 8));
  fn_005e58f8(local_30,param_3);
  return;
}


