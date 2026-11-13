#include "00299114_00299e7c.h"



undefined2 fn_00299e7c(int param_1,uint param_2)

{
  return *(undefined2 *)(DAT_008928d4 + param_1 * 0x1a + (param_2 & 0xff) * 4 + 2);
}



undefined4 fn_00299e00(int param_1)

{
  undefined4 uVar1;
  short *psVar2;
  
  uVar1 = 0;
  psVar2 = (short *)(DAT_008928d4 + param_1 * 0x1a);
  if ((((*psVar2 != 0) && (uVar1 = 1, psVar2[2] != 0)) && (uVar1 = 2, psVar2[4] != 0)) &&
     (((uVar1 = 3, psVar2[6] != 0 && (uVar1 = 4, psVar2[8] != 0)) && (uVar1 = 5, psVar2[10] != 0))))
  {
    uVar1 = 6;
  }
  return uVar1;
}



undefined4 fn_00299d70(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_00299df4,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 0x1a;
  iVar2 = 0;
  DAT_008928d8 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar1 != 0 || iVar2 != 0) {
    param_1 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008928d8 = 0;
  }
  DAT_008928d4 = param_1;
  return 1;
}



undefined4 * fn_00299cf8(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0x61) = 0;
  fn_00301f50(param_1 + 1,0x80);
  fn_00301f50(param_1 + 0x21,0x80);
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  return param_1;
}



undefined1 * fn_00299c10(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_18 [8];
  
  fn_0020bbc4(auStack_18);
  fn_0017821c(param_1 + 0x84,param_1 + 4,0x80);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x140);
  fn_002999ac(param_1,param_2);
  uVar2 = 0;
  if (0 < *(short *)(param_1 + 0x184)) {
    do {
      iVar1 = 0;
      do {
        if (*(short *)(param_1 + uVar2 * 2 + 4) == *(short *)(param_1 + iVar1 * 2 + 0x84)) {
          fn_0020b55c(auStack_18,uVar2 & 0xffff,*(undefined1 *)(iVar1 + param_1 + 0x144));
          goto LAB_00299cd4;
        }
        iVar1 = (int)(short)((short)iVar1 + 1);
      } while (iVar1 < 0x40);
      fn_0020b55c(auStack_18,uVar2 & 0xffff,0);
LAB_00299cd4:
      uVar2 = (uint)(short)((short)uVar2 + 1);
    } while ((int)uVar2 < (int)*(short *)(param_1 + 0x184));
  }
  return auStack_18;
}



undefined1 * fn_002999ac(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int local_60;
  short asStack_58 [14];
  int local_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [8];
  int local_2c;
  undefined4 uStack_28;
  
  local_2c = param_1;
  uStack_28 = param_2;
  fn_0020bbc4(auStack_38);
  iVar3 = fn_006c02d4(auStack_34,asStack_58,7);
  iVar4 = fn_002fecec(0x58);
  iVar5 = fn_002fecec(0x58);
  local_3c = 0;
  fn_00301f50(iVar4,0x58);
  fn_00301f50(iVar5,0x58);
  local_60 = 0;
  if (0 < iVar3) {
    do {
      sVar1 = asStack_58[local_60 * 2];
      iVar6 = fn_0068f708((int)sVar1,asStack_58[local_60 * 2 + 1]);
      iVar14 = 0;
      if (0 < iVar6) {
        do {
          iVar7 = fn_0068f7c4((int)sVar1,iVar14 + 1U & 0xff);
          if (iVar7 != 0) {
            puVar10 = (uint *)(iVar4 + ((int)(iVar7 + ((uint)(iVar7 >> 0x1f) >> 0x1b)) >> 5) * 4);
            iVar13 = 0;
            *puVar10 = *puVar10 | 1 << (iVar7 % 0x20 & 0xffU);
            do {
              iVar8 = fn_00310b08(iVar7,iVar13);
              if (iVar8 != 0) {
                puVar10 = (uint *)(iVar5 + ((int)(iVar8 + ((uint)(iVar8 >> 0x1f) >> 0x1b)) >> 5) * 4
                                  );
                *puVar10 = *puVar10 | 1 << (iVar8 % 0x20 & 0xffU);
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < 4);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar6);
      }
      local_60 = local_60 + 1;
    } while (local_60 < iVar3);
  }
  iVar3 = local_2c;
  puVar10 = (uint *)(iVar4 + -4);
  puVar11 = (uint *)(iVar5 + -4);
  iVar6 = 0xb;
  do {
    puVar9 = puVar10 + 1;
    iVar6 = iVar6 + -1;
    puVar10 = puVar10 + 2;
    *puVar9 = *puVar9 & ~puVar11[1];
    puVar11 = puVar11 + 2;
    *puVar10 = *puVar10 & ~*puVar11;
  } while (iVar6 != 0);
  iVar6 = 0;
  iVar14 = 700;
  do {
    if ((*(uint *)(iVar4 + ((int)(iVar6 + ((uint)(iVar6 >> 0x1f) >> 0x1b)) >> 5) * 4) &
        1 << (iVar6 % 0x20 & 0xffU)) != 0) {
      iVar7 = local_3c * 2;
      local_3c = local_3c + 1;
      *(short *)(local_2c + iVar7 + 4) = (short)iVar6;
    }
    iVar14 = iVar14 + -1;
    iVar6 = iVar6 + 1;
  } while (iVar14 != 0);
  *(short *)(local_2c + 0x184) = (short)local_3c;
  fn_0010301c(local_2c + 4,(int)(short)local_3c,2,&LAB_0029997c);
  uVar12 = 0;
  if (0 < *(short *)(iVar3 + 0x184)) {
    do {
      uVar2 = fn_006aed20(auStack_38,uVar12 & 0xffff);
      iVar6 = local_2c + uVar12;
      uVar12 = uVar12 + 1;
      *(undefined1 *)(iVar6 + 0x104) = uVar2;
    } while ((int)uVar12 < (int)*(short *)(iVar3 + 0x184));
  }
  fn_0030233c(iVar5);
  fn_0030233c(iVar4);
  return auStack_38;
}



void fn_00299890(undefined4 param_1)

{
  DAT_0089779c = param_1;
  return;
}



void fn_00299518(undefined4 *param_1)

{
  (**(code **)*param_1)(param_1);
  fn_0019d680(param_1,0x48);
  return;
}



int fn_0029936c(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0x24);
  if ((param_4 <= uVar2) && (uVar1 = 0, uVar2 != 0)) {
    iVar3 = *(int *)(param_1 + 0x28);
    do {
      if ((*(uint *)(iVar3 + uVar1 * 0x14 + 8) <= param_5) &&
         (param_5 <= *(uint *)(iVar3 + uVar1 * 0x14 + 0xc))) {
        if (param_4 == 0) {
          fn_00173d1c(param_2,*(int *)(param_2 + 0x18) +
                               (*(int *)(iVar3 + uVar1 * 0x14 + 0x10) + param_3) * 8);
          return *(int *)(*(int *)(param_1 + 0x28) + uVar1 * 0x14 + 4) + 0x1c;
        }
        param_4 = param_4 - 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  return 0;
}



void fn_00299114(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = 0;
  if (0 < (int)param_1[0xd]) {
    do {
      puVar1 = (uint *)(param_1[0xe] + iVar7 * 8);
      if ((*puVar1 & 0x8000000) != 0) {
        iVar2 = *(int *)(puVar1[1] + 4) + -1;
        *(int *)(puVar1[1] + 4) = iVar2;
        if (iVar2 == 0) {
          (**(code **)(*(int *)puVar1[1] + 8))();
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)param_1[0xd]);
  }
  iVar7 = 0;
  if (0 < (int)param_1[0xf]) {
    do {
      puVar1 = (uint *)(param_1[0x10] + iVar7 * 8);
      if ((*puVar1 & 0x8000000) != 0) {
        iVar2 = *(int *)(puVar1[1] + 4) + -1;
        *(int *)(puVar1[1] + 4) = iVar2;
        if (iVar2 == 0) {
          (**(code **)(*(int *)puVar1[1] + 8))();
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)param_1[0xf]);
  }
  iVar7 = 0;
  if (0 < (int)param_1[0x11]) {
    do {
      puVar1 = (uint *)(param_1[0x12] + iVar7 * 8);
      if ((*puVar1 & 0x8000000) != 0) {
        iVar2 = *(int *)(puVar1[1] + 4) + -1;
        *(int *)(puVar1[1] + 4) = iVar2;
        if (iVar2 == 0) {
          (**(code **)(*(int *)puVar1[1] + 8))();
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)param_1[0x11]);
  }
  iVar7 = 0;
  if (0 < (int)param_1[0x13]) {
    do {
      iVar2 = param_1[0x14] + iVar7 * 0x14;
      if ((*(uint *)(iVar2 + 0xc) & 0x8000000) != 0) {
        iVar3 = *(int *)(*(int *)(iVar2 + 0x10) + 4) + -1;
        *(int *)(*(int *)(iVar2 + 0x10) + 4) = iVar3;
        if (iVar3 == 0) {
          (**(code **)(**(int **)(iVar2 + 0x10) + 8))();
        }
      }
      if (((*(uint *)(iVar2 + 4) & 0x8000000) != 0) &&
         (iVar3 = *(int *)(*(int *)(iVar2 + 8) + 4) + -1, *(int *)(*(int *)(iVar2 + 8) + 4) = iVar3,
         iVar3 == 0)) {
        (**(code **)(**(int **)(iVar2 + 8) + 8))();
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)param_1[0x13]);
  }
  iVar7 = 0;
  if (0 < (int)param_1[9]) {
    do {
      puVar1 = (uint *)(param_1[10] + iVar7 * 0x14);
      if ((*puVar1 & 0x8000000) != 0) {
        iVar2 = *(int *)(puVar1[1] + 4) + -1;
        *(int *)(puVar1[1] + 4) = iVar2;
        if (iVar2 == 0) {
          (**(code **)(*(int *)puVar1[1] + 8))();
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)param_1[9]);
  }
  iVar7 = param_1[0x17];
  iVar3 = param_1[0xd];
  iVar5 = param_1[0xf];
  iVar8 = param_1[0x11];
  iVar2 = param_1[0x13];
  iVar6 = param_1[9];
  iVar4 = param_1[0xb];
  iVar9 = param_1[0x15];
  (**(code **)*param_1)(param_1);
  fn_0019d680(param_1,(iVar8 + iVar5 + iVar7 + iVar3) * 8 + iVar2 * 0x14 + iVar4 * 8 + iVar6 * 0x14
                       + iVar9 * 4 + 0x60);
  return;
}


