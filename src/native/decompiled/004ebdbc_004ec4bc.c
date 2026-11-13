#include "004ebdbc_004ec4bc.h"



longlong fn_004ec4bc(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint extraout_r1;
  
  uVar1 = (uint)DAT_008bf488;
  if (uVar1 == 0) {
    uVar2 = 0;
    if (DAT_008c0630 != 0) {
      uVar2 = 8;
    }
    return CONCAT44(uVar2,&DAT_e0a1482b);
  }
  if (DAT_008bf489 == '\0') {
    fn_004ed204(2);
    DAT_008bf489 = 1;
    fn_004ef014();
    fn_004edfd8();
    return (ulonglong)extraout_r1 << 0x20;
  }
  if (DAT_008c0630 != 0) {
    uVar1 = 8;
  }
  return CONCAT44(uVar1,&DAT_e0a14827);
}



int fn_004ec454(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0xe) = 0;
  iVar1 = fn_0051f2c4(param_1 + 8);
  if (iVar1 < 0) {
    fn_0051f2c4(param_1 + 4);
    return iVar1;
  }
  iVar1 = fn_0051f2c4(param_1 + 4);
  if (-1 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}



int fn_004ec3bc(int param_1,ushort param_2)

{
  int iVar1;
  
  iVar1 = fn_0051f170(param_1 + 4);
  if (-1 < iVar1) {
    iVar1 = fn_0051f170(param_1 + 8);
    if (-1 < iVar1) {
      *(ushort *)(param_1 + 0xc) = param_2;
      iVar1 = fn_0051fecc(param_1 + 8,0xffff,param_2 & 0xff,0x2e30);
      if (iVar1 < 0) {
        fn_0051f2c4(param_1 + 8);
        fn_0051f2c4(param_1 + 4);
        return iVar1;
      }
      *(undefined1 *)(param_1 + 0xe) = 1;
      return 0;
    }
    fn_0051f2c4(param_1 + 4);
  }
  return iVar1;
}



void fn_004ec384(void)

{
  if (DAT_008bf4fa != '\0') {
    if (DAT_008bf4fb != '\0') {
      fn_004ec2ac();
    }
    fn_004ed284(3);
    DAT_008bf4fa = '\0';
  }
  return;
}



undefined1 * fn_004ec2ac(void)

{
  undefined1 *puVar1;
  int *piVar2;
  
  if (DAT_008bf4fa == '\0') {
    puVar1 = &DAT_e0a1482b;
  }
  else {
    if (DAT_008bf4fb == '\0') {
      return &DAT_e0a14827;
    }
    piVar2 = (int *)fn_004ed2e8();
    (**(code **)(*piVar2 + 0x14))();
    fn_004ed21c();
    puVar1 = (undefined1 *)0x0;
    DAT_008bf4fb = '\0';
  }
  return puVar1;
}



undefined1 * fn_004ec1a0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = fn_006d897c();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 8))(param_1,0);
    param_1[0x15] = param_2;
    fn_004ed13c(param_2);
    fn_004ed050(param_1[0x15]);
    iVar1 = param_3[1];
    iVar3 = param_3[2];
    iVar4 = param_3[3];
    iVar5 = param_3[4];
    param_1[0x10] = *param_3;
    param_1[0x11] = iVar1;
    param_1[0x12] = iVar3;
    param_1[0x13] = iVar4;
    param_1[0x14] = iVar5;
    param_1[9] = (int)fn_004ec114;
    param_1[10] = 0;
    param_1[0xb] = (int)"LocalAroundNetworkSearchBackgroundJob::AroundNetworkSearch";
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = &DAT_e0a14827;
  }
  return puVar2;
}



void fn_004ec16c(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x54);
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\x01') {
      fn_004ed098(pcVar1,0xd9214824);
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}



uint fn_004ec114(int *param_1)

{
  int iVar1;
  uint unaff_r5;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 < 0) {
    fn_004ed098(param_1[0x15],iVar1);
  }
  else {
    fn_004ed0e4(param_1[0x15],0);
  }
  param_1[0x15] = 0;
  return unaff_r5 & 0xff00 | 1;
}



void fn_004ec0f0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004ec258();
  *puVar1 = &DAT_00856c1c;
  puVar1[0x16] = &DAT_00856874;
  return;
}



undefined4 * fn_004ec258(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = &DAT_00856c40;
  puVar1[0x10] = 0;
  *(undefined1 *)(puVar1 + 0x11) = 0xff;
  puVar1[0x12] = 200;
  *(undefined2 *)(puVar1 + 0x13) = 0x14;
  puVar1[0x14] = 5000;
  puVar1[0x15] = 0;
  return puVar1;
}



undefined1 * fn_004ebdbc(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int local_60;
  int local_5c;
  undefined *local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  int local_44;
  undefined1 auStack_38 [20];
  
  local_5c = DAT_008bf504 + 0x50;
  fn_004edc34();
  iVar3 = DAT_008bf504;
  iVar2 = fn_006d5cf0(DAT_008bf504);
  if (((iVar2 == 0) && (iVar3 = fn_006d5d14(iVar3), iVar3 == 0)) ||
     (iVar3 = fn_006d589c(DAT_008bf504), iVar3 != 0)) {
    fn_004edc70(local_5c);
    return &DAT_e0a14827;
  }
  local_60 = fn_0051f438(*(undefined4 *)(DAT_008bf504 + 0x48),*(undefined4 *)(DAT_008bf504 + 0x4c),
                          *(undefined1 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x40),0,
                          *(undefined2 *)(param_1 + 0x4c));
  if (local_60 < 0) {
    puVar4 = (undefined1 *)fn_006d5dec(*(undefined4 *)(DAT_008bf504 + 0x14),&local_60);
    fn_004edc70(local_5c);
    return puVar4;
  }
  local_54 = *(undefined4 *)(DAT_008bf504 + 0x48);
  local_58 = &DAT_00857370;
  uStack_50 = 0;
  uVar5 = fn_006dc1e8(&local_58);
  local_44 = *(int *)(DAT_008bf504 + 0x1c) + 0x174;
  fn_004edc34();
  if (*(char *)(*(int *)(DAT_008bf504 + 0x1c) + 0x24) == '\0') {
    fn_004edc70(local_44);
    fn_004edc70(local_5c);
    return &DAT_e0a14827;
  }
  uVar12 = 0;
  if (uVar5 != 0) {
    do {
      fn_0051f45c(auStack_38,&local_58);
      local_60 = fn_0051f868(auStack_38,param_1 + 0x5c);
      if (-1 < local_60) {
        iVar3 = fn_006d5c84(DAT_008bf504,param_1 + 0x58);
        iVar2 = fn_006d53d8(DAT_008bf504);
        if (iVar2 != iVar3) {
          uVar9 = 0xffffffff;
          uVar8 = 0;
          do {
            if (uVar8 < 0x10) {
              iVar2 = *(int *)(DAT_008bf504 + 0x1c) + uVar8 * 0x14 + 0x34;
            }
            else {
              iVar2 = 0;
            }
            if (*(int *)(iVar2 + 0xc) == 0) {
              if (uVar9 == 0xffffffff) {
                uVar9 = uVar8;
              }
            }
            else if (*(int *)(iVar2 + 0x10) == iVar3) {
              if (uVar8 != 0xffffffff) goto LAB_004ebf90;
              break;
            }
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < 0x10);
          uVar8 = uVar9;
          if (uVar8 != 0xffffffff) {
LAB_004ebf90:
            local_60 = fn_0051f8b4(auStack_38,param_1 + 0x164);
            if (-1 < local_60) {
              if (uVar8 < 0x10) {
                piVar6 = (int *)(*(int *)(DAT_008bf504 + 0x1c) + uVar8 * 0x14 + 0x34);
              }
              else {
                piVar6 = (int *)0x0;
              }
              iVar11 = *piVar6;
              fn_0017821c(iVar11 + 8,param_1 + 0x5c,0x108);
              iVar2 = 0;
              do {
                iVar7 = param_1 + iVar2 * 0x28;
                iVar10 = iVar11 + iVar2 * 0x28;
                *(undefined4 *)(iVar10 + 0x112) = *(undefined4 *)(iVar7 + 0x164);
                *(undefined4 *)(iVar10 + 0x116) = *(undefined4 *)(iVar7 + 0x168);
                *(undefined4 *)(iVar10 + 0x11a) = *(undefined4 *)(iVar7 + 0x16c);
                uVar13 = *(undefined4 *)(iVar7 + 0x174);
                uVar14 = *(undefined4 *)(iVar7 + 0x178);
                uVar15 = *(undefined4 *)(iVar7 + 0x17c);
                uVar16 = *(undefined4 *)(iVar7 + 0x180);
                uVar17 = *(undefined4 *)(iVar7 + 0x184);
                *(undefined4 *)(iVar10 + 0x120) = *(undefined4 *)(iVar7 + 0x170);
                *(undefined4 *)(iVar10 + 0x124) = uVar13;
                *(undefined4 *)(iVar10 + 0x128) = uVar14;
                *(undefined4 *)(iVar10 + 300) = uVar15;
                *(undefined4 *)(iVar10 + 0x130) = uVar16;
                *(undefined4 *)(iVar10 + 0x134) = uVar17;
                uVar1 = fn_006d6594(*(undefined4 *)(DAT_008bf504 + 0x14),
                                     *(undefined2 *)(iVar7 + 0x188));
                iVar2 = iVar2 + 1;
                *(undefined1 *)(iVar10 + 0x110) = uVar1;
              } while (iVar2 < 0xc);
              piVar6[3] = *(int *)(param_1 + 0x50);
              iVar2 = fn_006d6c48(*(undefined4 *)(DAT_008bf504 + 0x1c));
              piVar6[2] = iVar2;
              iVar2 = *(int *)(*(int *)(DAT_008bf504 + 0x1c) + 0x180) + 1;
              *(int *)(*(int *)(DAT_008bf504 + 0x1c) + 0x180) = iVar2;
              piVar6[1] = iVar2;
              piVar6[4] = iVar3;
            }
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar5);
  }
  fn_004edc70(local_44);
  fn_004edc70(local_5c);
  return (undefined1 *)0x0;
}


