#include "00293acc_00294228.h"



void fn_00294228(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = fn_002cdae0(DAT_00897844);
  iVar2 = fn_006ba794(DAT_00897844,uVar1);
  if (iVar2 != 0) {
    uVar3 = fn_006ba73c(DAT_00897844,uVar1);
    if (((int)param_1 < 0) ||
       ((uint)((*(int *)(DAT_00897844 + 8) - *(int *)(DAT_00897844 + 4)) / 0x34) <= param_1)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(DAT_00897844 + 0x10) + param_1 * 4);
    }
    if (((int)param_1 < 0) ||
       ((uint)((*(int *)(DAT_00897844 + 8) - *(int *)(DAT_00897844 + 4)) / 0x34) <= param_1)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(DAT_00897844 + 4) + param_1 * 0x34;
    }
    fn_00294440(iVar2,uVar4,uVar3,param_2);
    fn_002cdb8c(DAT_00897844);
  }
  iVar2 = fn_006ba794(DAT_00897844,uVar1);
  if (iVar2 == 0) {
    return;
  }
  fn_002cdb8c(DAT_00897844);
  return;
}



void fn_00294160(undefined4 param_1,int param_2)

{
  fn_001faa10(DAT_00897820);
  if (param_2 == 0) {
    fn_0026a494(DAT_00897818,param_1);
    return;
  }
  fn_00269888(DAT_00897818,param_1,(char *)&DAT_00294204,(char *)&DAT_002941ec,
               "MenuMessagePassingFirstSaveEnd",1);
  return;
}



undefined4 fn_0029411c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  if ((param_4 == 0) || (iVar2 = fn_0069ef00(), uVar3 = 0, iVar2 != 0)) {
    fn_0018d060(uVar1,param_2,param_3);
    uVar3 = 1;
  }
  return uVar3;
}



undefined1 fn_00294100(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (*(char *)(param_1 + 0xa70) != '\x01') {
    if (*(char *)(param_1 + 0xa70) == '\x02') {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



undefined4 fn_002940dc(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = *(int *)(DAT_00897820 + 0x4c);
  *param_3 = 0;
  param_3[1] = 0;
  uVar6 = 0;
  param_3[2] = 0;
  do {
    iVar2 = iVar1 + uVar6 * 6;
    if (((*(short *)(iVar2 + 0x18) == 0) && (*(short *)(iVar2 + 0x1a) == 0)) &&
       (*(short *)(iVar2 + 0x1c) == 0)) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 10);
  if (((int)uVar6 < 1) || (iVar2 = *(int *)(iVar1 + 0x10), param_2 < iVar2)) {
LAB_006b2d08:
    iVar2 = *(int *)(iVar1 + 4);
    iVar1 = (*(int *)(iVar1 + 8) - iVar2) / 0xc;
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return 0;
      }
      iVar3 = *(int *)(iVar2 + iVar1 * 0xc);
    } while ((iVar3 <= param_1) || (param_2 < iVar3));
    piVar5 = (int *)(iVar2 + iVar1 * 0xc);
    *param_3 = *piVar5;
    *(short *)(param_3 + 1) = (short)piVar5[1];
    *(undefined2 *)((int)param_3 + 6) = *(undefined2 *)((int)piVar5 + 6);
    *(short *)(param_3 + 2) = (short)piVar5[2];
    return 1;
  }
  if ((param_1 - iVar2 < 0) && (-1 < param_2 - iVar2)) {
    *param_3 = iVar2;
  }
  else {
    iVar7 = *(int *)(iVar1 + 0x14);
    iVar3 = fn_00300f74(param_1 - iVar2,iVar7);
    iVar4 = fn_00300f74(param_2 - iVar2,iVar7);
    if (iVar3 == iVar4) goto LAB_006b2d08;
    *param_3 = (iVar3 + 1) * iVar7 + iVar2;
  }
  iVar2 = fn_00163868(uVar6);
  iVar1 = iVar1 + iVar2 * 6;
  *(undefined2 *)(param_3 + 1) = *(undefined2 *)(iVar1 + 0x18);
  *(undefined2 *)((int)param_3 + 6) = *(undefined2 *)(iVar1 + 0x1a);
  *(undefined2 *)(param_3 + 2) = *(undefined2 *)(iVar1 + 0x1c);
  return 1;
}



bool fn_002940d0(int param_1)

{
  return param_1 != 0;
}



/* WARNING: Removing unreachable block (ram,0x00293ec4) */

undefined4 fn_00293ce4(int param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  bool bVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = *(ushort *)(param_2 + 0x8e8);
  bVar8 = uVar1 < 0x3e6;
  if (bVar8) {
    uVar1 = *(ushort *)(param_2 + 0x910);
  }
  if (bVar8 && uVar1 < 0x3e6) {
    uVar1 = *(ushort *)(param_2 + 0x938);
    bVar8 = uVar1 < 0x3e6;
    if (bVar8) {
      uVar1 = *(ushort *)(param_2 + 0x960);
    }
    if (bVar8 && uVar1 < 0x3e6) {
      uVar1 = *(ushort *)(param_2 + 0x988);
      bVar8 = uVar1 < 0x3e6;
      if (bVar8) {
        uVar1 = *(ushort *)(param_2 + 0x9b0);
      }
      bVar9 = uVar1 < 0x3e6;
      if (bVar8 && bVar9) {
        uVar1 = *(ushort *)(param_2 + 0x9d8);
      }
      if ((bVar8 && bVar9) && uVar1 < 0x3e6) {
        uVar5 = param_2 + 0x9e0;
        uVar1 = *(ushort *)(param_2 + 0xa00);
        bVar8 = uVar1 < 0x3e6;
        if (bVar8) {
          uVar1 = *(ushort *)(param_2 + 0xa28);
        }
        if (bVar8 && uVar1 < 0x3e6) {
          uVar5 = (uint)*(ushort *)(param_2 + 0xa50);
        }
        if ((bVar8 && uVar1 < 0x3e6) && uVar5 < 0x3e6) {
          local_40 = (local_40 & ~((unsigned int)0xffffffff << 0)) | ((unsigned int)(0) & 0xffffffff);
          local_40 = (local_40 & ~((unsigned long long)0xffffffff << 32)) | (((unsigned long long)(0) & 0xffffffff) << 32);
          local_38 = 0;
          local_34 = 0;
          local_30 = 0;
          local_2c = 0;
          local_28 = 0;
          local_24 = 0;
          local_20 = 0;
          local_1c = 0;
          fn_00114248(&local_50);
          local_58 = local_50;
          uStack_54 = uStack_4c;
          local_40 = fn_00691514(&local_58);
          fn_001003e0(&local_34,param_1 + 4);
          uVar2 = *(undefined2 *)(param_1 + 0x5c);
          iVar3 = 1;
          if ((((((*(int *)(param_2 + 0x90c) != 0 || *(int *)(param_2 + 0x908) != 0) &&
                 (iVar3 = 2, *(int *)(param_2 + 0x934) != 0 || *(int *)(param_2 + 0x930) != 0)) &&
                (iVar3 = 3, *(int *)(param_2 + 0x95c) != 0 || *(int *)(param_2 + 0x958) != 0)) &&
               ((iVar3 = 4, *(int *)(param_2 + 0x980) != 0 || *(int *)(param_2 + 0x984) != 0 &&
                (iVar3 = 5, *(int *)(param_2 + 0x9a8) != 0 || *(int *)(param_2 + 0x9ac) != 0)))) &&
              ((iVar3 = 6, *(int *)(param_2 + 0x9d4) != 0 || *(int *)(param_2 + 0x9d0) != 0 &&
               ((iVar3 = 7, *(int *)(param_2 + 0x9f8) != 0 || *(int *)(param_2 + 0x9fc) != 0 &&
                (iVar3 = 8, *(int *)(param_2 + 0xa24) != 0 || *(int *)(param_2 + 0xa20) != 0))))))
             && (iVar3 = 9, *(int *)(param_2 + 0xa48) != 0 || *(int *)(param_2 + 0xa4c) != 0)) {
            iVar3 = 0;
            iVar6 = 0;
            do {
              iVar6 = iVar6 + 1;
              puVar7 = (undefined4 *)(param_2 + 0x8e0 + (iVar3 + 2) * 0x28);
              iVar3 = iVar3 + 1;
              puVar7[-10] = *puVar7;
              puVar7[-9] = puVar7[1];
              puVar7[-8] = puVar7[2];
              puVar7[-7] = puVar7[3];
              puVar7[-6] = puVar7[4];
              puVar7[-5] = puVar7[5];
              puVar7[-4] = puVar7[6];
              puVar7[-3] = puVar7[7];
              puVar7[-2] = puVar7[8];
              puVar7[-1] = puVar7[9];
            } while (iVar6 < 8);
            iVar3 = 9;
          }
          puVar4 = (undefined8 *)(param_2 + 0x8e0 + iVar3 * 0x28);
          local_38 = CONCAT22(uVar2,*(short *)(puVar4 + -4) + 1);
          *puVar4 = local_40;
          *(undefined4 *)(puVar4 + 1) = local_38;
          *(undefined4 *)((int)puVar4 + 0xc) = local_34;
          *(undefined4 *)(puVar4 + 2) = local_30;
          *(undefined4 *)((int)puVar4 + 0x14) = local_2c;
          *(undefined4 *)(puVar4 + 3) = local_28;
          *(undefined4 *)((int)puVar4 + 0x1c) = local_24;
          *(undefined4 *)(puVar4 + 4) = local_20;
          *(undefined4 *)((int)puVar4 + 0x24) = local_1c;
          return 1;
        }
      }
    }
  }
  return 0;
}



void fn_00293b30(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_2020;
  undefined4 local_201c;
  undefined4 local_2018;
  undefined4 local_2014;
  undefined4 local_2010;
  undefined4 local_200c;
  undefined4 local_2008;
  undefined4 local_2004;
  undefined1 *local_1fec;
  undefined4 local_1fe8;
  undefined4 uStack_1fe4;
  undefined4 local_1fe0;
  undefined4 uStack_1fdc;
  undefined1 auStack_1fd8 [2696];
  undefined1 auStack_1550 [2696];
  undefined1 auStack_ac8 [2272];
  int aiStack_1e8 [2];
  undefined4 auStack_1e0 [104];
  undefined1 auStack_40 [24];
  
  iVar1 = *(int *)(DAT_00897820 + 0x28);
  fn_00664a8c(auStack_40);
  fn_006649e0(auStack_40);
  iVar2 = fn_00662bd0();
  puVar3 = (undefined4 *)(iVar2 + 8);
  fn_00662d30(*puVar3,iVar2 + 0xc,1,0,0,0);
  uVar4 = fn_006f5d90(iVar2 + 0xc,0);
  fn_0017821c(auStack_1fd8,uVar4,0x1510);
  local_1fec = auStack_1550;
  fn_006f5dbc(local_1fec,auStack_ac8);
  iVar5 = 9;
  do {
    if (aiStack_1e8[iVar5 * 10] != 0 || aiStack_1e8[iVar5 * 10 + 1] != 0) {
      local_201c = 0;
      local_2018 = 0;
      local_2014 = 0;
      local_2010 = 0;
      local_200c = 0;
      local_2008 = 0;
      local_2004 = 0;
      fn_00114248(&local_1fe0);
      local_1fe8 = local_1fe0;
      uStack_1fe4 = uStack_1fdc;
      uVar6 = fn_00691514(&local_1fe8);
      fn_001003e0(&local_201c,iVar1 + 0x4c);
      local_2020 = CONCAT22(*(undefined2 *)(iVar1 + 0xa4),*(undefined2 *)(auStack_1e0 + iVar5 * 10))
      ;
      aiStack_1e8[iVar5 * 10] = (int)uVar6;
      aiStack_1e8[iVar5 * 10 + 1] = (int)((ulonglong)uVar6 >> 0x20);
      auStack_1e0[iVar5 * 10] = local_2020;
      auStack_1e0[iVar5 * 10 + 1] = local_201c;
      auStack_1e0[iVar5 * 10 + 2] = local_2018;
      auStack_1e0[iVar5 * 10 + 3] = local_2014;
      auStack_1e0[iVar5 * 10 + 4] = local_2010;
      auStack_1e0[iVar5 * 10 + 5] = local_200c;
      auStack_1e0[iVar5 * 10 + 6] = local_2008;
      auStack_1e0[iVar5 * 10 + 7] = local_2004;
      break;
    }
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  fn_006647e8(local_1fec,auStack_ac8);
  fn_006638f8(*puVar3,iVar2 + 0xc,1);
  fn_00663a04(puVar3,auStack_1fd8);
  fn_006636c8(*puVar3,iVar2 + 0x18,1);
  fn_00664a14(auStack_40);
  fn_00664a98(auStack_40);
  return;
}



void fn_00293acc(void)

{
  undefined1 auStack_aa0 [340];
  undefined1 auStack_94c [2364];
  
  fn_0017821c(auStack_aa0,*(int *)(DAT_00897820 + 0x28) + 0x48,0xa88);
  fn_00290834(auStack_94c);
  fn_002929f4(auStack_aa0);
  fn_0017821c(*(int *)(DAT_00897820 + 0x28) + 0x48,auStack_aa0,0xa88);
  return;
}


