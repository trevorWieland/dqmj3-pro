#include "0014ce94_0014d760.h"



undefined1 *
fn_0014d760(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined4 param_6)

{
  undefined1 *puVar1;
  
  if (param_2 == (undefined4 *)0x0 || param_5 == 0) {
    puVar1 = &DAT_e0e046bc;
  }
  else {
    fn_0017c06c(1);
    puVar1 = (undefined1 *)(**(code **)*param_2)(param_2,param_1,param_3,param_4,param_5,param_6);
  }
  return puVar1;
}



undefined1 *
fn_0014d2ec(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5,uint param_6,
            int param_7)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_80;
  int local_7c;
  undefined1 auStack_78 [4];
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined1 auStack_50 [8];
  int local_48;
  int local_40;
  int local_38;
  int local_30;
  
  puVar1 = (undefined1 *)(**(code **)*param_2)(param_2,&local_7c,0,0,auStack_78,0x28);
  if ((int)puVar1 < 0) {
    return puVar1;
  }
  if (local_7c != 0x28) {
    return (undefined1 *)0xc8a04554;
  }
  iVar2 = 0;
  param_3 = param_3 * 0x20;
  if (param_7 != 0) {
    iVar2 = (**(code **)*param_2)(param_2,&local_80,0,0,auStack_50,0x28);
    uVar3 = 0xffffffff;
    if (((iVar2 < 0) || (local_80 != 0x28)) ||
       (iVar2 = local_38 + local_30 + local_48 + local_40, iVar2 < 0)) goto LAB_0014d3c4;
  }
  uVar3 = param_3 + param_4 * 0x18 + iVar2;
LAB_0014d3c4:
  if (param_6 < uVar3) {
    return &DAT_d8604659;
  }
  if (param_7 == 0) {
    *(undefined4 *)(param_1 + 0x7c) = local_74;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(uint *)(param_1 + 0x74) = local_70;
    *(int *)(param_1 + 0x78) = param_1;
    *(undefined4 *)(param_1 + 0x8c) = local_6c;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(int *)(param_1 + 0x84) = local_68;
    *(int *)(param_1 + 0x88) = param_1;
    *(undefined4 *)(param_1 + 0x9c) = local_64;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(uint *)(param_1 + 0x94) = local_60;
    *(int *)(param_1 + 0x98) = param_1;
    *(undefined4 *)(param_1 + 0xac) = local_5c;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(int *)(param_1 + 0xa4) = local_58;
    *(int *)(param_1 + 0xa8) = param_1;
  }
  else {
    puVar1 = (undefined1 *)(**(code **)*param_2)(param_2,&local_7c,0x28,0,param_5,local_70);
    if ((int)puVar1 < 0) {
      return puVar1;
    }
    local_80 = param_5;
    iVar5 = local_70 + param_5;
    iVar2 = local_7c + 0x28;
    puVar1 = (undefined1 *)
             (**(code **)*param_2)(param_2,&local_7c,iVar2,iVar2 >> 0x1f,iVar5,local_68);
    if ((int)puVar1 < 0) {
      return puVar1;
    }
    iVar4 = local_68 + iVar5;
    iVar2 = iVar2 + local_7c;
    puVar1 = (undefined1 *)
             (**(code **)*param_2)(param_2,&local_7c,iVar2,iVar2 >> 0x1f,iVar4,local_60);
    if ((int)puVar1 < 0) {
      return puVar1;
    }
    iVar6 = local_60 + iVar4;
    puVar1 = (undefined1 *)
             (**(code **)*param_2)
                       (param_2,&local_7c,iVar2 + local_7c,iVar2 + local_7c >> 0x1f,iVar6,local_58);
    if ((int)puVar1 < 0) {
      return puVar1;
    }
    param_5 = local_58 + iVar6;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(int *)(param_1 + 0x70) = local_80;
    *(uint *)(param_1 + 0x74) = local_70;
    *(int *)(param_1 + 0x7c) = param_1;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(int *)(param_1 + 0x84) = local_68;
    *(int *)(param_1 + 0x80) = iVar5;
    *(int *)(param_1 + 0x8c) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(uint *)(param_1 + 0x94) = local_60;
    *(int *)(param_1 + 0x90) = iVar4;
    *(int *)(param_1 + 0x9c) = param_1;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(int *)(param_1 + 0xa4) = local_58;
    *(int *)(param_1 + 0xa0) = iVar6;
    *(int *)(param_1 + 0xac) = param_1;
  }
  *(int *)(param_1 + 0x2c) = param_1 + 0x70;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0x28) = local_70 >> 2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(int *)(param_1 + 0x3c) = param_1 + 0x80;
  *(int *)(param_1 + 0x38) = local_68;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(int *)(param_1 + 0x54) = param_1 + 0x90;
  *(int *)(param_1 + 100) = param_1 + 0xa0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(uint *)(param_1 + 0x50) = local_60 >> 2;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(int *)(param_1 + 0x60) = local_58;
  fn_0015e5e0(param_1 + 0xb8,0x20,param_5,param_3,4,0);
  fn_0013c500(param_1 + 0xe8);
  fn_0015e5e0(param_1 + 0xf4,0x18,param_5 + param_3,param_4 * 0x18,4,0);
  fn_0013c500(param_1 + 0x124);
  *(undefined4 *)(param_1 + 0xb0) = local_54;
  iVar2 = fn_0015cf6c(param_1 + 4);
  if (iVar2 < 0) {
    fn_0015e590(iVar2,0x14d674);
  }
  iVar5 = *(int *)(param_1 + 4);
  iVar2 = iVar5;
  if (iVar5 == 0) {
    iVar2 = 2;
  }
  if (iVar5 < 0) {
    if (iVar2 < -8) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
  }
  else if (0 < iVar5) {
    if (iVar2 < 9) {
      iVar2 = 3;
    }
    else {
      iVar2 = 4;
    }
  }
  *(undefined4 **)(param_1 + iVar2 * 4 + 0xc) = param_2;
  *(undefined4 **)(param_1 + 8) = param_2;
  return (undefined1 *)0x0;
}



undefined4 fn_0014d1dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00157f58(param_1,0xfffffffd,param_4);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0014ce74,(char *)&DAT_0014ce5c,
                         (char *)&DAT_007bcf47,0x8a4);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157fb0(param_1,0xfffffffe,param_3);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0014d2bc,(char *)&DAT_0014ce5c,
                         (char *)&DAT_007bcf47,0x8a6);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157f00(param_1,0xffffffff,param_2);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0014d2d8,(char *)&DAT_0014ce5c,
                         (char *)&DAT_007bcf47,0x8a8);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  return 0;
}



undefined4 fn_0014ce94(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int unaff_r8;
  uint uVar14;
  undefined4 uVar15;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint *puStack_28;
  
  local_30 = param_1;
  uStack_2c = param_2;
  puStack_28 = param_3;
  iVar1 = fn_00157f00(param_1,0xffffffff,param_2);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0014d1c4,(char *)&DAT_0014d1ac,(char *)&DAT_007bcf13,
                         0x850);
    uVar2 = fn_001581d0(local_30,uVar2);
    return uVar2;
  }
  fn_00173cb8(local_30,1);
  iVar1 = fn_00166e14(local_30,0xffffffff);
  if (0 < iVar1) {
    unaff_r8 = 0x2aaaaaab;
  }
  iVar13 = 0;
  if (0 < iVar1) {
    do {
      fn_001580cc(local_30,iVar13);
      iVar3 = fn_00157df4(local_30,0xfffffffe);
      if (iVar3 < 0) {
        return 0;
      }
      fn_00148924(&local_40,local_30,0xffffffff);
      fn_00173cb8(local_30,1);
      puVar4 = (undefined4 *)param_3[1];
      if (puVar4 == (undefined4 *)param_3[2]) {
        iVar3 = (int)((ulonglong)((longlong)unaff_r8 * (longlong)(int)((int)param_3[2] - *param_3))
                     >> 0x20);
        iVar12 = (int)((ulonglong)((longlong)unaff_r8 * (longlong)(int)((int)puVar4 - *param_3)) >>
                      0x20);
        uVar8 = (iVar12 >> 1) - (iVar12 >> 0x1f);
        if (uVar8 < (uint)((iVar3 >> 1) - (iVar3 >> 0x1f))) {
          param_3[1] = (uint)(puVar4 + 3);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = puVar4[-3];
            puVar4[1] = puVar4[-2];
            puVar4[2] = puVar4[-1];
          }
          puVar9 = puVar4 + -3;
          puVar10 = puVar4;
          if (puVar4 < puVar9) {
            if (0 < (int)puVar9 - (int)puVar4) {
              iVar3 = (int)((ulonglong)((longlong)unaff_r8 * (longlong)((int)puVar9 - (int)puVar4))
                           >> 0x20);
              uVar8 = (iVar3 >> 1) - (iVar3 >> 0x1f);
              if ((uVar8 & 1) != 0) {
                puVar9 = puVar4 + -6;
                puVar10 = puVar4 + -3;
                *puVar10 = *puVar9;
                puVar4[-2] = puVar4[-5];
                puVar4[-1] = puVar4[-4];
              }
              for (iVar3 = (int)uVar8 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
                uVar2 = puVar9[-2];
                uVar15 = puVar9[-1];
                puVar10[-3] = puVar9[-3];
                puVar10[-2] = uVar2;
                puVar10[-1] = uVar15;
                uVar2 = puVar9[-5];
                uVar15 = puVar9[-4];
                puVar10[-6] = puVar9[-6];
                puVar10[-5] = uVar2;
                puVar10[-4] = uVar15;
                puVar10 = puVar10 + -6;
                puVar9 = puVar9 + -6;
              }
            }
          }
          else {
            while (puVar4 != puVar9) {
              uVar2 = puVar9[-2];
              uVar15 = puVar9[-1];
              puVar10[-3] = puVar9[-3];
              puVar10[-2] = uVar2;
              puVar10[-1] = uVar15;
              puVar10 = puVar10 + -3;
              puVar9 = puVar9 + -3;
            }
          }
          *puVar4 = local_40;
          puVar4[1] = uStack_3c;
          puVar4[2] = uStack_38;
        }
        else {
          uVar14 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
          if (uVar14 < uVar8 + 0x20) {
            uVar14 = uVar8 + 0x20;
          }
          puVar5 = (undefined4 *)fn_00100fc6(uVar14 * 0xc,0);
          puVar10 = puVar5;
          for (puVar9 = (undefined4 *)*param_3; puVar9 != puVar4; puVar9 = puVar9 + 3) {
            if (puVar10 != (undefined4 *)0x0) {
              uVar2 = puVar9[1];
              uVar15 = puVar9[2];
              *puVar10 = *puVar9;
              puVar10[1] = uVar2;
              puVar10[2] = uVar15;
            }
            puVar10 = puVar10 + 3;
          }
          iVar3 = (int)((ulonglong)((longlong)unaff_r8 * (longlong)(int)((int)puVar4 - *param_3)) >>
                       0x20);
          puVar9 = puVar5 + ((iVar3 >> 1) - (iVar3 >> 0x1f)) * 3;
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = local_40;
            puVar9[1] = uStack_3c;
            puVar9[2] = uStack_38;
          }
          puVar10 = (undefined4 *)param_3[1];
          iVar3 = (int)((ulonglong)((longlong)unaff_r8 * (longlong)(int)((int)puVar4 - *param_3)) >>
                       0x20);
          puVar9 = puVar5 + ((iVar3 >> 1) - (iVar3 >> 0x1f)) * 3;
          for (; puVar4 != puVar10; puVar4 = puVar4 + 3) {
            puVar6 = puVar9 + 3;
            if (puVar6 != (undefined4 *)0x0) {
              uVar2 = puVar4[1];
              uVar15 = puVar4[2];
              *puVar6 = *puVar4;
              puVar9[4] = uVar2;
              puVar9[5] = uVar15;
            }
            puVar9 = puVar6;
          }
          uVar7 = *param_3;
          uVar11 = param_3[1];
          iVar3 = (int)((ulonglong)((longlong)unaff_r8 * (longlong)(int)(uVar11 - uVar7)) >> 0x20);
          uVar8 = uVar7;
          if (uVar11 < uVar7) {
            do {
              uVar8 = uVar8 + 0xc;
            } while (uVar8 != uVar11);
          }
          iVar12 = (int)((ulonglong)((longlong)unaff_r8 * (longlong)(int)(param_3[2] - uVar7)) >>
                        0x20);
          fn_001008c4(uVar7,(iVar12 >> 1) - (iVar12 >> 0x1f),0);
          *param_3 = (uint)puVar5;
          param_3[1] = (uint)(puVar5 + ((iVar3 >> 1) - (iVar3 >> 0x1f)) * 3 + 3);
          param_3[2] = (uint)(puVar5 + uVar14 * 3);
        }
      }
      else {
        param_3[1] = (uint)(puVar4 + 3);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = local_40;
          puVar4[1] = uStack_3c;
          puVar4[2] = uStack_38;
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar1);
  }
  return 0;
}


