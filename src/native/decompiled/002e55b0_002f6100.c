#include "002e55b0_002f6100.h"



void fn_002f6100(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *local_18 [2];
  
  local_18[0] = "mastersgp";
  local_18[1] = "challengersgp";
  puVar1 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_008977ec + 0x24),0xd6);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00897044) goto LAB_002f6160;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002f6160:
  fn_0022f750(local_18[*(byte *)(puVar1 + 4)]);
  return;
}



void fn_002f45d8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_006a6d8c();
  *puVar1 = &DAT_0082128c;
  puVar1[0x15] = &DAT_0082135c;
  *(undefined1 *)(puVar1 + 0x8b) = 0;
  return;
}



undefined4 fn_002f28b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_006b6c88();
  if (0 < iVar1) {
    do {
      uVar2 = fn_0014481c(DAT_008977e8);
      iVar1 = fn_006b6b3c(uVar2,iVar3);
      if (*(char *)(iVar1 + 0x74) == '\0') {
        *(int *)(param_1 + 100) = iVar1;
        break;
      }
      iVar3 = iVar3 + 1;
      fn_0014481c(DAT_008977e8);
      iVar1 = fn_006b6c88();
    } while (iVar3 < iVar1);
  }
  if ((*(int *)(param_1 + 100) == 0) ||
     (fn_00232c84(*(int *)(param_1 + 100),param_1 + 0x60), *(int *)(param_1 + 100) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_002f1d58(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  longlong lVar10;
  
  iVar6 = 0;
  iVar4 = 0;
  lVar10 = 0x461c400000000000;
  do {
    iVar3 = param_2 + iVar4 * 0x14;
    iVar1 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
    fVar8 = *(float *)(iVar3 + 0x5c) - *(float *)(iVar1 + 8);
    fVar7 = *(float *)(iVar3 + 0x60) - *(float *)(iVar1 + 0xc);
    fVar9 = *(float *)(iVar3 + 100) - *(float *)(iVar1 + 0x10);
    fVar11 = (float)((ulonglong)lVar10 >> 0x20);
    fVar7 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9);
    lVar10 = CONCAT44(fVar11,fVar7);
    if ((*(char *)(iVar3 + 0x69) != '\0' && fVar7 < fVar11) && (*(char *)(iVar3 + 0x68) == '\0')) {
      iVar5 = 0;
      iVar1 = fn_006f7de8(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4));
      if (0 < iVar1) {
        do {
          iVar1 = fn_006f8418(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4),iVar5);
          if (*(int *)(iVar3 + 0x58) == *(int *)(iVar1 + 0x90)) goto LAB_002f1e38;
          iVar5 = iVar5 + 1;
          iVar1 = fn_006f7de8(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4));
        } while (iVar5 < iVar1);
      }
      lVar10 = lVar10 << 0x20;
      iVar6 = *(int *)(iVar3 + 0x58);
    }
LAB_002f1e38:
    iVar4 = iVar4 + 1;
  } while (iVar4 < 10);
  fn_0014481c(DAT_008977e8);
  iVar4 = fn_006b6e94();
  iVar1 = 0;
  if (0 < iVar4) {
    do {
      uVar2 = fn_0014481c(DAT_008977e8);
      iVar3 = fn_006b6d3c(uVar2,iVar1);
      if (*(int *)(iVar3 + 0x90) == iVar6) {
        *(int *)(param_1 + 100) = iVar3;
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar4);
  }
  if ((*(int *)(param_1 + 100) == 0) ||
     (fn_002cfa94(*(int *)(param_1 + 100),param_1 + 0x60), *(int *)(param_1 + 100) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_002ee530(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  puVar1[0x1e] = 0;
  *puVar1 = &DAT_008211c0;
  puVar1[0x1f] = 0;
  *(undefined1 *)(puVar1 + 0x20) = 0;
  return;
}



void fn_002ee274(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  puVar1[0x1e] = 0;
  *puVar1 = &DAT_00821154;
  *(undefined1 *)(puVar1 + 0x1f) = 0;
  return;
}



void fn_002ee00c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  *puVar1 = &DAT_008210e8;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  *(undefined1 *)(puVar1 + 0x22) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x89) = 0;
  *(undefined1 *)((int)puVar1 + 0x8a) = 0;
  return;
}



void fn_002e5cdc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_006ba220();
  if (iVar1 == 0) {
    iVar1 = fn_006ba284(param_1);
    param_2 = param_2 + iVar1 * 9;
    uVar2 = fn_0016a82c((int)*(short *)(*(int *)(param_1 + 0xf4) + param_2 * 0x10 + 4));
    uVar3 = fn_0022ee7c((int)*(short *)(*(int *)(param_1 + 0xf4) + param_2 * 0x10 + 4));
    fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar2,uVar3);
    fn_00689bd0(param_1,0x49,0);
    return;
  }
  return;
}



undefined4 fn_002e55b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint local_88;
  uint local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [5];
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined1 auStack_40 [4];
  int local_3c [7];
  int local_20 [2];
  
  puVar8 = &local_88;
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x6a);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_0089423c) goto LAB_002e5600;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002e5600:
  *(undefined4 **)(param_1 + 0xe4) = puVar1;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x6b);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894248) goto LAB_002e5644;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002e5644:
  *(undefined4 **)(param_1 + 0xe8) = puVar1;
  fn_00397774(&local_7c);
  local_7c = DAT_00894268;
  local_78 = DAT_0089426c;
  local_68 = fn_006c78d8(*(undefined4 *)(param_1 + 0xe4));
  local_74 = 9;
  uVar3 = fn_0022f584((char *)&DAT_002e597c,0);
  fn_00147974(auStack_60,uVar3);
  uVar3 = fn_0022f584((char *)&DAT_002e5994,0);
  fn_00147974(auStack_5c,uVar3);
  local_4e = 1;
  local_4d = 1;
  uVar3 = fn_0022f750(&DAT_002e59ac);
  fn_00147974(auStack_54,uVar3);
  local_4f = 1;
  local_48 = 1;
  local_64 = 0x42c00000;
  local_4c = 0;
  local_4a = 1;
  local_49 = 0;
  iVar4 = fn_00230a84((int)*(char *)(*(int *)(param_1 + 0xe4) + 0x18),0);
  fn_00231210(local_20,*(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x14),0);
  if (iVar4 != 0) {
    fn_00147974(local_3c,iVar4);
  }
  uVar9 = *(uint *)(local_3c[0] + -4);
  iVar4 = *(int *)(local_20[0] + -4);
  if ((*(uint *)(local_3c[0] + -8) < uVar9 + iVar4) || (1 < *(int *)(local_3c[0] + -0xc) + 1U)) {
    local_88 = -iVar4 - 0xf;
    if (local_88 < uVar9) {
      fn_002ff628(8,&DAT_008c760f);
    }
    local_88 = *(uint *)(local_20[0] + -4);
    local_84 = 0;
    local_80 = iVar4;
    fn_00177c88(local_3c,*(undefined4 *)(local_3c[0] + -4),0);
  }
  else {
    fn_00301a9c(local_3c[0] + uVar9 * 2,local_20[0],(iVar4 + 1) * 2);
    *(uint *)(local_3c[0] + -4) = uVar9 + iVar4;
  }
  fn_00397618(param_1,&local_7c);
  fn_00689930(param_1,0x6b,0);
  puVar11 = (uint *)(param_1 + 0xf4);
  local_84 = fn_006c78d8(*(undefined4 *)(param_1 + 0xe4));
  if (0xfffffff < local_84) {
    local_88 = 0xfffffff;
    fn_002ff628(8,&DAT_008c761c,&DAT_008c761c,local_84);
  }
  if ((uint)((int)(*(int *)(param_1 + 0xfc) - *puVar11) >> 4) < local_84) {
    uVar9 = (int)(*(int *)(param_1 + 0xf8) - *puVar11) >> 4;
    local_88 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_88 < uVar9 + 0x20) {
      local_88 = uVar9 + 0x20;
    }
    if (local_88 <= local_84) {
      puVar8 = &local_84;
    }
    uVar9 = *puVar8;
    puVar5 = (undefined4 *)fn_00100fc6(uVar9 << 4,0);
    puVar10 = *(undefined4 **)(param_1 + 0xf8);
    puVar2 = puVar5;
    for (puVar1 = (undefined4 *)*puVar11; puVar1 != puVar10; puVar1 = puVar1 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        uVar3 = puVar1[1];
        uVar12 = puVar1[2];
        uVar13 = puVar1[3];
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar12;
        puVar2[3] = uVar13;
      }
      puVar2 = puVar2 + 4;
    }
    uVar6 = *puVar11;
    uVar7 = uVar6;
    if (*(uint *)(param_1 + 0xf8) < uVar6) {
      do {
        uVar7 = uVar7 + 0x10;
      } while (uVar7 != *(uint *)(param_1 + 0xf8));
    }
    fn_001008c4(uVar6,(int)(*(int *)(param_1 + 0xfc) - uVar6) >> 4,0);
    uVar7 = *puVar11;
    *(undefined4 **)(param_1 + 0xf4) = puVar5;
    *(int *)(param_1 + 0xf8) = (*(int *)(param_1 + 0xf8) - uVar7 & 0xfffffff0) + (int)puVar5;
    *(undefined4 **)(param_1 + 0xfc) = puVar5 + uVar9 * 4;
  }
  fn_002e6334(param_1);
  fn_001588d4(local_20);
  fn_00100414(auStack_40,&LAB_0059e0e0,8,4);
  iVar4 = fn_001588d4(auStack_54);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  fn_001588d4(iVar4 + -4);
  return 1;
}


