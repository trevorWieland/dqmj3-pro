#include "00425e78_00427eb8a.h"



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_0042674c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 local_28;
  
  uVar3 = 0;
  local_28 = param_4;
  do {
    uVar5 = _DAT_00891cd8;
    fn_00580cb8(param_1,uVar3 & 0xff,&DAT_004254e0);
    local_28 = uVar5;
    iVar1 = fn_003981d4(param_1,uVar3 & 0xff,&local_28);
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 4);
  bVar6 = param_2 == 0;
  if (-1 < param_2) {
    iVar1 = *(int *)(param_1 + 0x100);
    bVar6 = iVar1 == param_2;
  }
  if (!bVar6 && (-1 < param_2 && param_2 <= iVar1)) {
    psVar2 = (short *)fn_006e8d04(*(undefined4 *)(param_1 + 0xf8),param_2);
    uVar3 = fn_0068f6a8((int)*psVar2);
    if (uVar3 == (ushort)psVar2[1]) {
      uVar5 = fn_0022f584((char *)&DAT_00425be0,0);
      uVar4 = _DAT_00891cd8;
      fn_00580cb8(param_1,0,uVar5);
      local_28 = uVar4;
      fn_003981d4(param_1,0,&local_28);
    }
    else {
      fn_00425c04(param_1,*psVar2);
    }
    iVar1 = *(int *)(param_1 + 0x74);
    *(undefined1 *)(iVar1 + 0x81) = 1;
    fn_0031f3f4(iVar1,0);
    return;
  }
  uVar5 = fn_0022f584((char *)&DAT_00425454,0);
  uVar4 = _DAT_00891cd8;
  fn_00580cb8(param_1,0,uVar5);
  local_28 = uVar4;
  fn_003981d4(param_1,0,&local_28);
  *(undefined1 *)(*(int *)(param_1 + 0x74) + 0x81) = 0;
  fn_0031f3f4();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_00425e78(int param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint local_38;
  int local_34;
  int local_30;
  byte abStack_2c [4];
  int local_28;
  
  puVar5 = &local_38;
  puVar10 = &local_38;
  psVar3 = (short *)fn_006e8d04(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x10c));
  uVar12 = *(uint *)(*(int *)(param_1 + 0x104) + 0x3c);
  uVar11 = *(uint *)(*(int *)(param_1 + 0x104) + 0x6c);
  local_28 = param_1 + 0x126;
  switch(*(undefined1 *)(param_1 + 0x110)) {
  case 1:
    fn_0068ab44(param_1,0x1000958);
    iVar6 = local_28;
    uVar7 = *(uint *)(*(int *)(param_1 + 0x104) + 0x3c);
    sVar1 = *(short *)(*(int *)(param_1 + 0x104) + 0x6c);
    *(short *)(*(int *)(param_1 + 0xf8) + 0x4a) =
         *(short *)(*(int *)(param_1 + 0xf8) + 0x4a) - ((short)uVar7 - sVar1);
    fn_00101a50(local_28,4,&DAT_004254dc,(int)*(short *)(*(int *)(param_1 + 0xf8) + 0x4a));
    fn_0059e074(param_1 + 0xb0,0,1,iVar6);
    iVar6 = fn_00426430(param_1,*psVar3,sVar1,uVar7 & 0xffff);
    if (iVar6 == 0) {
      fn_004254e4(param_1,*(undefined4 *)(param_1 + 0x10c),*psVar3,uVar7 & 0xffff);
      *(undefined1 *)(param_1 + 0x108) = 0;
    }
    fn_00327a7c(*(undefined4 *)(param_1 + 0x104));
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
    fn_00689828(param_1,1);
    break;
  case 2:
    fn_0068ab44(param_1,0x100094c);
    fn_00327a7c(*(undefined4 *)(param_1 + 0x104));
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
    fn_00689828(param_1,1);
    iVar6 = local_28;
    *(undefined1 *)(param_1 + 0x108) = 0;
    fn_00101a50(local_28,4,&DAT_004254dc,(int)*(short *)(*(int *)(param_1 + 0xf8) + 0x4a));
    fn_0059e074(param_1 + 0xb0,0,1,iVar6);
    break;
  case 3:
    iVar6 = *(int *)(*(int *)(param_1 + 0x104) + 0x3c) + 1;
    if (*(int *)(*(int *)(param_1 + 0x104) + 0x70) < iVar6) break;
    goto LAB_004260c8;
  case 4:
    iVar6 = *(int *)(*(int *)(param_1 + 0x104) + 0x3c) + -1;
    if (iVar6 < *(int *)(*(int *)(param_1 + 0x104) + 0x6c)) break;
LAB_004260c8:
    fn_0068ab44(param_1,0x1000957);
    iVar2 = local_28;
    *(int *)(*(int *)(param_1 + 0x104) + 0x3c) = iVar6;
    fn_00101a50(local_28,4,&DAT_004254dc,
                 (int)*(short *)(*(int *)(param_1 + 0xf8) + 0x4a) -
                 (int)(short)((short)iVar6 - *(short *)(*(int *)(param_1 + 0x104) + 0x6c)));
    fn_0059e074(param_1 + 0xb0,0,1,iVar2);
    break;
  case 5:
    uVar7 = *(uint *)(*(int *)(param_1 + 0x104) + 0x3c);
    local_34 = *(int *)(*(int *)(param_1 + 0x104) + 0x70);
    if (local_34 <= (int)uVar7) break;
    uVar8 = fn_0068f708((int)*psVar3,uVar7 & 0xffff);
    local_38 = fn_0068f6a8((int)*psVar3);
    uVar4 = fn_0068f654((int)*psVar3);
    if (uVar8 < uVar4) {
      local_38 = fn_0068f85c((int)*psVar3,uVar8 + 1 & 0xff);
    }
    if (local_34 < (int)local_38) {
      puVar5 = (uint *)&local_34;
    }
    iVar6 = *puVar5;
    *(int *)(*(int *)(param_1 + 0x104) + 0x3c) = iVar6;
    if (uVar7 == local_38) break;
    goto LAB_004261b4;
  case 6:
    uVar7 = *(uint *)(*(int *)(param_1 + 0x104) + 0x3c);
    local_34 = *(int *)(*(int *)(param_1 + 0x104) + 0x6c);
    if ((int)uVar7 <= local_34) break;
    uVar8 = fn_0068f708((int)*psVar3,uVar7 & 0xffff);
    if (uVar8 == 0) {
      local_38 = 0;
    }
    else {
      uVar4 = fn_0068f85c((int)*psVar3,uVar8);
      if (uVar4 == uVar7) {
        pbVar9 = abStack_2c;
        if (0 < (int)(uVar8 - 1)) {
          pbVar9 = (byte *)&local_30;
        }
        local_30 = uVar8 - 1;
        abStack_2c[0] = 0;
        abStack_2c[1] = 0;
        abStack_2c[2] = 0;
        abStack_2c[3] = 0;
        uVar8 = (uint)*pbVar9;
      }
      local_38 = 0;
      if (uVar8 != 0) {
        local_38 = fn_0068f85c((int)*psVar3,uVar8);
      }
    }
    if ((int)local_38 < local_34) {
      puVar10 = (uint *)&local_34;
    }
    iVar6 = *puVar10;
    *(int *)(*(int *)(param_1 + 0x104) + 0x3c) = iVar6;
    if (uVar7 == local_38) break;
LAB_004261b4:
    iVar2 = local_28;
    fn_00101a50(local_28,4,&DAT_004254dc,
                 (int)*(short *)(*(int *)(param_1 + 0xf8) + 0x4a) -
                 (int)(short)((short)iVar6 - *(short *)(*(int *)(param_1 + 0x104) + 0x6c)));
    fn_0059e074(param_1 + 0xb0,0,1,iVar2);
    fn_0068ab44(param_1,0x1000957);
    break;
  case 7:
    uVar8 = *(uint *)(*(int *)(param_1 + 0x104) + 0x3c);
    uVar7 = fn_0068f708((int)*psVar3,uVar8 & 0xffff);
    if (uVar7 == 0) {
      uVar7 = 1;
    }
    else if (((ushort)psVar3[1] == uVar8) ||
            (uVar4 = fn_0068f85c((int)*psVar3,uVar7), uVar4 != uVar8)) {
      uVar7 = uVar7 + 1 & 0xff;
    }
    fn_00426ed0(param_1,*psVar3,uVar7,0);
  }
  *(undefined1 *)(param_1 + 0x110) = 0;
  fn_00426894(param_1,*psVar3,uVar11 & 0xffff,uVar12 & 0xffff);
  uVar12 = uVar12 & 0xffff;
  iVar6 = (int)*psVar3;
  uVar7 = fn_0068f708(iVar6,uVar12);
  if (uVar7 != 0) {
    uVar8 = fn_0068f654(iVar6);
    bVar13 = uVar8 <= uVar7;
    if (uVar7 <= uVar8) {
      bVar13 = uVar12 <= (uVar11 & 0xffff);
    }
    if ((!bVar13) && (uVar11 = fn_0068f85c(iVar6,uVar7), uVar11 == uVar12)) {
      local_38 = _DAT_00891cf4;
      fn_00327f98(*(undefined4 *)(param_1 + 0x104),&local_38);
      return;
    }
  }
  local_38 = _DAT_00891cd8;
  fn_00327f98(*(undefined4 *)(param_1 + 0x104),&local_38);
  return;
}


