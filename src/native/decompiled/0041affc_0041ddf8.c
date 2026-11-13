#include "0041affc_0041ddf8.h"



undefined4 fn_0041ddf8(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  wchar16 *pwStack_170;
  char *pcStack_16c;
  int iStack_168;
  undefined4 local_164;
  undefined1 auStack_154 [12];
  undefined1 auStack_148 [12];
  undefined4 local_13c;
  undefined1 auStack_134 [4];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [240];
  
  puVar5 = (undefined4 *)param_1[6];
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_008968c0) goto LAB_0041de44;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0041de44:
  param_1[0x39] = (int)puVar5;
  iVar2 = fn_006b87ac(*(undefined4 *)(DAT_00897804 + 0x38),puVar5[2]);
  iVar7 = 0;
  iVar6 = 0;
  do {
    iVar3 = fn_00100b58(iVar2 + iVar6 * 0xf0 + 0x158);
    if (iVar3 != 0) {
      iVar7 = iVar7 + 1;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  fn_00397774(&pwStack_170);
  local_164 = 0;
  pwStack_170 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_16c = (char *)&DAT_0041dff4;
  iStack_168 = iVar7;
  uVar4 = fn_0022f750((char *)&DAT_0041e008);
  fn_00147974(auStack_154,uVar4);
  local_13c = 2;
  fn_00147974(auStack_130,iVar2 + 4);
  uVar4 = fn_0022f584((char *)&DAT_0041e018,0);
  fn_00147974(auStack_128,uVar4);
  fn_00397618(param_1,&pwStack_170);
  puVar5 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_008951dc) goto LAB_0041df34;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0041df34:
  param_1[0x3a] = (int)puVar5;
  fn_00689930(param_1,0x2d,0);
  (**(code **)(*param_1 + 0x124))(param_1);
  iVar2 = fn_006b87ac(*(undefined4 *)(DAT_00897804 + 0x38),*(undefined4 *)(param_1[0x39] + 8));
  fn_0017821c(auStack_110,iVar2 + 0x154,0xf0);
  fn_0025f3f4(param_1[0x3a],auStack_110);
  *(undefined1 *)(param_1[0x3a] + 0x45a) = 1;
  fn_00100414(auStack_134,&LAB_0059e0e0,8,4);
  iVar2 = fn_001588d4(auStack_148);
  iVar2 = fn_001588d4(iVar2 + -4);
  iVar2 = fn_001588d4(iVar2 + -4);
  fn_001588d4(iVar2 + -4);
  return 1;
}



undefined4 fn_0041b71c(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [4];
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_4e;
  undefined4 local_4c;
  undefined1 auStack_44 [12];
  undefined1 local_38;
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [8];
  
  puVar5 = (undefined4 *)param_1[6];
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00896b6c) goto LAB_0041b768;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0041b768:
  param_1[0x3e] = (int)puVar5;
  puVar5 = (undefined4 *)fn_001f74ec(param_1,0xd6);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00896b78) goto LAB_0041b7ac;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0041b7ac:
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x79);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894eb0) goto LAB_0041b7ec;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0041b7ec:
  puVar1[0x20] = 0x37;
  fn_005b3308(param_1[0x3e],puVar5,puVar1);
  iVar4 = DAT_00897834;
  if (*(int *)(DAT_00897834 + 0x24) != 0) {
    puVar1[2] = *(int *)(DAT_00897834 + 0x24);
    if (*(char *)(iVar4 + 0x29) == '\0') {
      *(undefined1 *)(puVar5 + 2) = *(undefined1 *)(iVar4 + 0x28);
      *(undefined1 *)((int)puVar5 + 9) = 1;
    }
    fn_002cefbc(iVar4,0);
  }
  fn_00398180(&local_80);
  local_80 = DAT_00896bfc;
  local_7c = DAT_00896c00;
  uVar3 = fn_0022f750((char *)&DAT_0041b9d4);
  fn_00147974(auStack_64,uVar3);
  local_78 = 2;
  local_4c = 1;
  uVar3 = fn_0022f750((char *)&DAT_0041b9e4);
  fn_00147974(auStack_44,uVar3);
  local_54 = 0;
  local_53 = 1;
  uVar3 = fn_0022f750((char *)&DAT_0041b9fc);
  fn_00147974(auStack_58,uVar3);
  local_74 = *(undefined4 *)(param_1[0x3e] + 8);
  local_4e = 1;
  local_38 = 1;
  uVar3 = fn_0022f584((char *)&DAT_0041ba04,0);
  fn_00147974(auStack_34,uVar3);
  uVar3 = fn_0022f584((char *)&DAT_0041ba1c,0);
  fn_00147974(auStack_28,uVar3);
  fn_00397ff4(param_1,&local_80);
  iVar4 = fn_006e8b04(param_1[0x3e]);
  if (iVar4 == 0) {
    fn_002b1f0c(param_1[0x25],1);
  }
  (**(code **)(*param_1 + 0x124))(param_1);
  iVar4 = fn_001588d4(auStack_24);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  fn_00100414(iVar4 + -0x14,&LAB_0059e0e0,8,2);
  iVar4 = fn_001588d4(iVar4 + -0x24);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  fn_001588d4(iVar4 + -4);
  return 1;
}



void fn_0041affc(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  
  if ((char)param_1[0x2c] != '\0') {
    return;
  }
  iVar1 = fn_006ba220(param_1);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0041b034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x110))(param_1);
    return;
  }
  iVar1 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
  uVar5 = 1;
  if (iVar1 != 0) {
    iVar2 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3ed);
    iVar1 = param_2;
    if ((iVar2 < 1) && (2 < param_2)) {
      iVar1 = param_2 + 1;
    }
    iVar2 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
    iVar3 = -1;
    if (iVar2 == 3) {
      iVar3 = 0;
    }
    else if (iVar2 == 4) {
      iVar3 = 1;
    }
    else if (iVar2 == 5) {
      iVar3 = 2;
    }
    else if (iVar2 == 6) {
      iVar3 = 3;
    }
    if (iVar3 == iVar1) {
      fn_0015b0f8(*(undefined4 *)(param_1[0x2e] + 0x10));
      uVar4 = fn_0022f584((char *)&DAT_0041b2d8,0);
      fn_0068974c(param_1,uVar4,0,1);
    }
    else {
      iVar1 = fn_00113ce4();
      uVar5 = 2;
      if (iVar1 == 0) {
        iVar1 = fn_00113ca8();
        if (iVar1 == 0) {
          return;
        }
        uVar4 = fn_0022f584((char *)&DAT_0041b334,0);
        fn_0068974c(param_1,uVar4,1);
        param_1[0x2d] = param_2;
        *(undefined1 *)(param_1 + 0x2c) = 2;
        return;
      }
      iVar1 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
      uVar4 = 0xffffffff;
      if (iVar1 == 3) {
        uVar4 = 0;
      }
      else if (iVar1 == 4) {
        uVar4 = 1;
      }
      else if (iVar1 == 5) {
        uVar4 = 2;
      }
      else if (iVar1 == 6) {
        uVar4 = 3;
      }
      fn_00391df8(uVar4);
      fn_0022f750();
      fn_0015b0dc();
      iVar2 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3ed);
      iVar1 = param_2;
      if ((iVar2 < 1) && (2 < param_2)) {
        iVar1 = param_2 + 1;
      }
      fn_00391df8(iVar1);
      fn_0022f750();
      fn_0015b0dc();
      uVar4 = fn_0022f584((char *)&DAT_0041b30c,0);
      fn_0068974c(param_1,uVar4,1);
      param_1[0x2d] = param_2;
    }
    *(undefined1 *)(param_1 + 0x2c) = uVar5;
    return;
  }
  param_1[0x2d] = param_2;
  fn_006f72c8(DAT_008977e0);
  iVar1 = fn_006be8f8();
  if (iVar1 != 0) {
    iVar2 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3ed);
    iVar1 = param_2;
    if (iVar2 < 1) {
      if (param_2 < 3) goto LAB_0041b15c;
      iVar1 = param_2 + 1;
    }
    if (iVar1 == 3) {
      uVar4 = fn_0022f584((char *)&DAT_0041aecc,0);
      fn_0068974c(param_1,uVar4,1);
      param_1[0x2d] = param_2;
      *(undefined1 *)(param_1 + 0x2c) = 3;
      return;
    }
  }
LAB_0041b15c:
  fn_0041acc4(param_1,param_1[0x2d]);
  fn_0068ab44(param_1,0x100094b);
  return;
}


