#include "00304e1c_00305424.h"



undefined4 * fn_00305424(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7e18();
  *puVar1 = &DAT_00821908;
  fn_0028e434(puVar1[4],&DAT_007c48fc);
  fn_0028e434(puVar1[5],&DAT_007c49c4);
  fn_0028e434(puVar1[3],&DAT_007c4b68);
  fn_0028e434(puVar1[6],&DAT_007c4ba4);
  return puVar1;
}



void fn_003053fc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7350();
  *puVar1 = &DAT_008218f4;
  return;
}



undefined4 * fn_0030538c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_008218ac;
  uVar2 = param_1[2];
  uVar1 = uVar2;
  if ((uint)param_1[3] <= uVar2) {
    for (; uVar1 != param_1[3]; uVar1 = uVar1 + 0x1c) {
    }
  }
  iVar3 = (int)((longlong)(int)(param_1[4] - uVar2) * -0x6db6db6d +
                ((ulonglong)(param_1[4] - uVar2) << 0x20) >> 0x20);
  fn_001008c4(uVar2,(iVar3 >> 4) - (iVar3 >> 0x1f),0);
  return param_1;
}



undefined4 * fn_00305244(undefined4 *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_FUN_008218ac;
  *(undefined1 *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar4 = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar4;
    DAT_008f9e30 = uVar4;
    DAT_008f9e34 = uVar4;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  param_1[5] = DAT_008f9e2c;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar4;
    DAT_008f9e30 = uVar4;
    DAT_008f9e34 = uVar4;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  param_1[8] = DAT_008f9e2c;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar4;
  param_1[0xc] = 0;
  return param_1;
}



void fn_00305030(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  puVar8 = &local_40;
  param_1[0xc] = param_3;
  puVar10 = (uint *)(param_1 + 2);
  local_3c = param_3;
  if (0x9249249 < param_3) {
    local_40 = 0x9249249;
    fn_002ff628(8,&DAT_008c7627,&DAT_008c7627,param_3);
  }
  uVar1 = param_1[4] - *puVar10;
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if ((uint)((iVar2 >> 4) - (iVar2 >> 0x1f)) < local_3c) {
    uVar1 = param_1[3] - *puVar10;
    iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
    uVar1 = (iVar2 >> 4) - (iVar2 >> 0x1f);
    local_40 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
    if (local_40 < uVar1 + 0x20) {
      local_40 = uVar1 + 0x20;
    }
    if (local_40 <= local_3c) {
      puVar8 = &local_3c;
    }
    uVar1 = *puVar8;
    puVar3 = (undefined4 *)fn_00100fc6(uVar1 * 0x1c,0);
    puVar9 = (undefined4 *)param_1[3];
    puVar4 = puVar3;
    for (puVar7 = (undefined4 *)*puVar10; puVar7 != puVar9; puVar7 = puVar7 + 7) {
      if (puVar4 != (undefined4 *)0x0) {
        uVar11 = puVar7[1];
        uVar12 = puVar7[2];
        uVar13 = puVar7[3];
        uVar14 = puVar7[4];
        uVar15 = puVar7[5];
        uVar16 = puVar7[6];
        *puVar4 = *puVar7;
        puVar4[1] = uVar11;
        puVar4[2] = uVar12;
        puVar4[3] = uVar13;
        puVar4[4] = uVar14;
        puVar4[5] = uVar15;
        puVar4[6] = uVar16;
      }
      puVar4 = puVar4 + 7;
    }
    uVar5 = *puVar10;
    uVar6 = uVar5;
    if ((uint)param_1[3] < uVar5) {
      do {
        uVar6 = uVar6 + 0x1c;
      } while (uVar6 != param_1[3]);
    }
    iVar2 = (int)((longlong)(int)(param_1[4] - uVar5) * -0x6db6db6d +
                  ((ulonglong)(param_1[4] - uVar5) << 0x20) >> 0x20);
    fn_001008c4(uVar5,(iVar2 >> 4) - (iVar2 >> 0x1f));
    uVar6 = *puVar10;
    *puVar10 = (uint)puVar3;
    iVar2 = (int)((longlong)(int)(param_1[3] - uVar6) * -0x6db6db6d +
                  ((ulonglong)(param_1[3] - uVar6) << 0x20) >> 0x20);
    param_1[3] = (int)(puVar3 + ((iVar2 >> 4) - (iVar2 >> 0x1f)) * 7);
    param_1[4] = (int)(puVar3 + uVar1 * 7);
  }
  iVar2 = 0;
  if (0 < (int)param_3) {
    do {
      puVar8 = (uint *)param_1[3];
      if (puVar8 == (uint *)param_1[4]) {
        fn_0078d810(param_1 + 2);
      }
      else {
        param_1[3] = (int)(puVar8 + 7);
        if (puVar8 != (uint *)0x0) {
          *puVar8 = local_40;
          puVar8[1] = local_3c;
          puVar8[2] = uStack_38;
          puVar8[3] = uStack_34;
          puVar8[4] = uStack_30;
          puVar8[5] = uStack_2c;
          puVar8[6] = uStack_28;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00305204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  return;
}



void fn_00304f6c(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_18;
  
  iVar1 = (int)((longlong)(param_1[3] - param_1[2]) * -0x6db6db6d +
                ((ulonglong)(uint)(param_1[3] - param_1[2]) << 0x20) >> 0x20);
  iVar1 = (iVar1 >> 4) - (iVar1 >> 0x1f);
  (**(code **)(*param_1 + 0x38))(param_1,iVar1,param_2);
  local_30 = in_s0;
  uStack_2c = in_s1;
  uStack_28 = in_s2;
  (**(code **)(*param_1 + 0x3c))(param_1,iVar1,param_2);
  puVar2 = (undefined4 *)param_1[3];
  if (puVar2 == (undefined4 *)param_1[4]) {
    fn_0078d810(param_1 + 2,puVar2,&local_30);
  }
  else {
    param_1[3] = (int)(puVar2 + 7);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = local_30;
      puVar2[1] = uStack_2c;
      puVar2[2] = uStack_28;
      puVar2[3] = in_s0;
      puVar2[4] = in_s1;
      puVar2[5] = in_s2;
      puVar2[6] = uStack_18;
    }
  }
  param_1[0xc] = param_1[0xc] + 1;
  fn_00304ec4(param_1);
  return;
}



void fn_00304ec4(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar2 == iVar4) {
    return;
  }
  fVar5 = *(float *)(iVar2 + 8);
  iVar2 = (int)((longlong)(iVar4 - iVar2) * -0x6db6db6d + ((ulonglong)(uint)(iVar4 - iVar2) << 0x20)
               >> 0x20);
  uVar1 = 1;
  fVar6 = fVar5;
  if (1 < (uint)((iVar2 >> 4) - (iVar2 >> 0x1f))) {
    uVar3 = iVar4 - *(int *)(param_1 + 8);
    do {
      fVar7 = *(float *)(*(int *)(param_1 + 8) + uVar1 * 0x1c + 8);
      if (fVar7 < fVar5) {
        fVar5 = fVar7;
      }
      else if (fVar6 < fVar7) {
        fVar6 = fVar7;
      }
      iVar2 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)((iVar2 >> 4) - (iVar2 >> 0x1f)));
  }
  *(float *)(param_1 + 0x2c) = fVar6 - fVar5;
  return;
}



void fn_00304e1c(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 in_s0;
  float fVar6;
  undefined4 in_s1;
  float fVar7;
  undefined4 in_s2;
  float fVar8;
  
  iVar3 = 0;
  if (0 < param_1[0xc]) {
    do {
      if (*(int *)(param_2 + iVar3 * 4) != 0) {
        puVar5 = (undefined4 *)(param_1[2] + iVar3 * 0x1c);
        (**(code **)(*param_1 + 0x38))(param_1,iVar3);
        *puVar5 = in_s0;
        puVar5[1] = in_s1;
        puVar5[2] = in_s2;
        iVar1 = param_1[2] + iVar3 * 0x1c;
        (**(code **)(*param_1 + 0x3c))(param_1,iVar3,*(undefined4 *)(param_2 + iVar3 * 4));
        *(undefined4 *)(iVar1 + 0xc) = in_s0;
        *(undefined4 *)(iVar1 + 0x10) = in_s1;
        *(undefined4 *)(iVar1 + 0x14) = in_s2;
        *(undefined4 *)(param_1[2] + iVar3 * 0x1c + 0x18) =
             *(undefined4 *)(*(int *)(*(int *)(param_2 + iVar3 * 4) + 0x100) + 0xc);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[0xc]);
  }
  iVar3 = param_1[2];
  iVar1 = param_1[3];
  if (iVar3 == iVar1) {
    return;
  }
  fVar6 = *(float *)(iVar3 + 8);
  iVar3 = (int)((longlong)(iVar1 - iVar3) * -0x6db6db6d + ((ulonglong)(uint)(iVar1 - iVar3) << 0x20)
               >> 0x20);
  uVar2 = 1;
  fVar7 = fVar6;
  if (1 < (uint)((iVar3 >> 4) - (iVar3 >> 0x1f))) {
    uVar4 = iVar1 - param_1[2];
    do {
      fVar8 = *(float *)(param_1[2] + uVar2 * 0x1c + 8);
      if (fVar8 < fVar6) {
        fVar6 = fVar8;
      }
      else if (fVar7 < fVar8) {
        fVar7 = fVar8;
      }
      iVar3 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)((iVar3 >> 4) - (iVar3 >> 0x1f)));
  }
  param_1[0xb] = (int)(fVar7 - fVar6);
  return;
}


