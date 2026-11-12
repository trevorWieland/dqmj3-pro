#include "006e3e70_006e4200.h"



undefined4 fn_006e4200(int param_1,undefined4 param_2,undefined2 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  iVar2 = fn_0016600c(*(undefined4 *)(param_1 + 0x3c));
  uVar4 = 0;
  if (iVar2 != 0) {
    iVar3 = fn_001663f0();
    if (iVar3 == 2) {
      if (*(uint *)(param_1 + 8) < 0x2030100) {
        puVar5 = (undefined2 *)fn_006e3968(iVar2);
        *param_3 = *puVar5;
        param_3[1] = puVar5[1];
        uVar1 = fn_006e38e4(puVar5);
        *(undefined1 *)((int)param_3 + 0x3f) = uVar1;
        *(undefined4 *)(param_3 + 0x1c) = 0x3f800000;
        *(undefined1 *)(param_3 + 0x1e) = 0x7f;
        *(undefined1 *)((int)param_3 + 0x3d) = 0;
        *(undefined1 *)(param_3 + 0x1f) = 0;
        *(undefined4 *)(param_3 + 0x20) = 0xffffffff;
        puVar7 = (uint *)fn_006e390c(puVar5);
      }
      else {
        puVar5 = (undefined2 *)fn_006e395c();
        *param_3 = *puVar5;
        param_3[1] = puVar5[1];
        puVar6 = (undefined4 *)fn_006e3850(puVar5);
        if (puVar6 == (undefined4 *)0x0) {
          uVar1 = 1;
        }
        else {
          uVar1 = (undefined1)*puVar6;
        }
        *(undefined1 *)((int)param_3 + 0x3f) = uVar1;
        *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(puVar5 + 6);
        puVar6 = (undefined4 *)fn_006e3828(puVar5);
        uVar4 = *puVar6;
        *(char *)(param_3 + 0x1e) = (char)uVar4;
        *(char *)((int)param_3 + 0x3d) = (char)((uint)uVar4 >> 8);
        *(char *)(param_3 + 0x1f) = (char)((uint)uVar4 >> 0x10);
        if (*(uint *)(param_1 + 8) < 0x2030200) {
          *(undefined4 *)(param_3 + 0x20) = 0xffffffff;
        }
        else {
          *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(puVar5 + 0x10);
        }
        puVar7 = (uint *)fn_006e3834(puVar5);
      }
      if (puVar7 != (uint *)0x0) {
        uVar13 = *puVar7;
        uVar12 = 0;
        do {
          if (uVar13 <= uVar12) break;
          puVar9 = (undefined1 *)((int)param_3 + uVar12 * 0xd + 4);
          if ((uVar12 < *puVar7) && ((short)puVar7[uVar12 * 2 + 1] == 0x220e)) {
            puVar8 = (undefined1 *)(puVar7[uVar12 * 2 + 2] + (int)puVar7);
          }
          else {
            puVar8 = (undefined1 *)0x0;
          }
          *puVar9 = *puVar8;
          *(undefined1 *)((int)param_3 + uVar12 * 0xd + 5) = puVar8[1];
          *(undefined1 *)((int)param_3 + uVar12 * 0xd + 6) = puVar8[2];
          *(undefined1 *)((int)param_3 + uVar12 * 0xd + 7) = puVar8[3];
          *(char *)((int)param_3 + uVar12 * 0xd + 0xe) =
               (char)*(undefined4 *)(puVar8 + *(int *)(puVar8 + 8));
          if (*(uint *)(param_1 + 8) < 0x2030100) {
            *(undefined1 *)((int)param_3 + uVar12 * 0xd + 8) = 0x7f;
            *(undefined1 *)((int)param_3 + uVar12 * 0xd + 9) = 0;
            *(undefined1 *)((int)param_3 + uVar12 * 0xd + 10) = 0;
          }
          else {
            *(undefined1 *)((int)param_3 + uVar12 * 0xd + 8) = puVar8[*(int *)(puVar8 + 0x10)];
            uVar14 = 0;
            do {
              uVar10 = uVar14 + 1;
              puVar9[uVar14 + 5] = puVar8[uVar14 + *(int *)(puVar8 + 0x10) + 1];
              uVar14 = uVar10;
            } while (uVar10 < 2);
          }
          if (*(uint *)(param_1 + 8) < 0x2030100) {
            *(undefined1 *)((int)param_3 + uVar12 * 0xd + 0xb) = 0x40;
            *(undefined1 *)((int)param_3 + uVar12 * 0xd + 0xc) = 0;
            *(undefined1 *)((int)param_3 + uVar12 * 0xd + 0xd) = 0;
          }
          else {
            *(undefined1 *)((int)param_3 + uVar12 * 0xd + 0xb) = puVar8[0x14];
            *(undefined1 *)((int)param_3 + uVar12 * 0xd + 0xc) = puVar8[0x15];
            *(undefined1 *)((int)param_3 + uVar12 * 0xd + 0xd) = puVar8[0x16];
          }
          uVar14 = (uint)*(byte *)((int)param_3 + uVar12 * 0xd + 0xe);
          if (uVar14 < 3) {
            uVar10 = 0;
            if (uVar14 != 0) goto LAB_006e4448;
          }
          else {
            uVar14 = 2;
            uVar10 = 0;
LAB_006e4448:
            do {
              uVar11 = uVar10 + 1;
              puVar9[uVar10 + 0xb] = puVar8[uVar10 + *(int *)(puVar8 + 8) + 4];
              uVar10 = uVar11;
            } while (uVar11 < uVar14);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < 4);
      }
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



undefined4 fn_006e41e4(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_006e381c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
  return *puVar1;
}



undefined4 fn_006e4158(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)fn_006e35a0(*(undefined4 *)(param_1 + 0x3c));
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
    uVar5 = 0xffffffff;
    *param_3 = uVar2;
    iVar3 = fn_00176b18(*(undefined4 *)(param_1 + 0x3c),uVar2);
    if (iVar3 == 0) {
      return 0;
    }
    iVar4 = fn_00176bd8();
    if (iVar4 == 0) {
      iVar3 = fn_00176bfc(iVar3);
      uVar5 = *(undefined4 *)(iVar3 + 8);
    }
    else if (iVar4 == 1) {
      fn_00176bac(iVar3);
    }
    else if (iVar4 == 2) {
      return 0;
    }
    uVar2 = 1;
    param_3[1] = uVar5;
  }
  return uVar2;
}



bool fn_006e40cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_001a2168(*(undefined4 *)(param_1 + 4));
  fn_001a49c8(uVar1,param_4);
  iVar2 = fn_001a49b0();
  if (iVar2 != 0) {
    fn_00301a9c(param_2,iVar2,0x26);
    fn_0019bc50(param_3,iVar2 + 0x26);
  }
  return iVar2 != 0;
}



bool fn_006e40ac(int *param_1)

{
  return *(uint *)(*param_1 + 8) < 0x2010001;
}



undefined4 fn_006e4008(int param_1,undefined1 *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  piVar1 = (int *)fn_006e34d4(*(undefined4 *)(param_1 + 4));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (param_3 < *piVar1) {
      puVar3 = (undefined1 *)fn_006e34f0(piVar1,param_3);
      *param_2 = *puVar3;
      param_2[1] = puVar3[1];
      param_2[2] = puVar3[2];
      param_2[3] = puVar3[3];
      uVar6 = *(uint *)(puVar3 + *(int *)(puVar3 + 8)) & 0xff;
      bVar7 = uVar6 == 2;
      param_2[4] = (char)*(uint *)(puVar3 + *(int *)(puVar3 + 8));
      if (uVar6 < 3) {
        bVar7 = uVar6 == 0;
      }
      else {
        uVar6 = 2;
      }
      uVar4 = 0;
      if (!bVar7) {
        do {
          uVar5 = uVar4 + 1;
          param_2[uVar4 + 5] = puVar3[uVar4 + *(int *)(puVar3 + 8) + 4];
          uVar4 = uVar5;
        } while (uVar5 < uVar6);
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



undefined4 fn_006e3f20(int *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  
  puVar1 = (undefined1 *)fn_001a2150(param_1[1]);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  param_2[3] = puVar1[3];
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar1 + 4);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(puVar1 + 8);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(puVar1 + 0xc);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(puVar1 + 0x10);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(puVar1 + 0x14);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(puVar1 + 0x18);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(puVar1 + 0x1c);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(puVar1 + 0x20);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(puVar1 + 0x24);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(puVar1 + 0x28);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(puVar1 + 0x2c);
  uVar2 = *(undefined4 *)(puVar1 + 0x34);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(puVar1 + 0x30);
  *(undefined4 *)(param_2 + 0x34) = uVar2;
  *(undefined2 *)(param_2 + 0x38) = *(undefined2 *)(puVar1 + 0x38);
  uVar2 = *(undefined4 *)(puVar1 + 0x40);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(puVar1 + 0x3c);
  *(undefined4 *)(param_2 + 0x40) = uVar2;
  bVar3 = 0x202ffff < *(uint *)(*param_1 + 8);
  if (bVar3) {
    uVar2 = *(undefined4 *)(puVar1 + 0x44);
  }
  else {
    uVar2 = *(undefined4 *)(puVar1 + 8);
  }
  *(undefined4 *)(param_2 + 0x44) = uVar2;
  if (bVar3) {
    uVar2 = *(undefined4 *)(puVar1 + 0x48);
  }
  else {
    uVar2 = *(undefined4 *)(puVar1 + 0xc);
  }
  *(undefined4 *)(param_2 + 0x48) = uVar2;
  return 1;
}



undefined4 fn_006e3ee8(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*param_2 == 0x4d545343) {
    uVar1 = 0;
    if (param_2[2] + 0xfe000000U < 0x30101) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



bool fn_006e3e70(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_120 [272];
  
  (**(code **)(*(int *)*param_1 + 0x40))
            ((int *)*param_1,(uint)*(ushort *)(param_1 + 3) * param_3 + param_1[2],0);
  iVar1 = (**(code **)(*(int *)*param_1 + 0x24))((int *)*param_1,auStack_120,0x100);
  if (iVar1 == 0x100) {
    fn_0017821c(param_2,auStack_120,0x100);
  }
  return iVar1 == 0x100;
}


