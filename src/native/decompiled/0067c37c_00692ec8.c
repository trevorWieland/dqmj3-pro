#include "0067c37c_00692ec8.h"



bool fn_00692ec8(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_00890f38 + 0x10);
  iVar3 = iVar2;
  iVar1 = *(int *)(iVar2 + 4);
  while (iVar1 != 0) {
    if (*(uint *)(iVar1 + 0x10) < param_1) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar3 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  if ((iVar3 == iVar2) || (param_1 < *(uint *)(iVar3 + 0x10))) {
    iVar3 = iVar2;
  }
  iVar1 = fn_00145ac0(DAT_00890f34);
  return *(int *)(iVar1 + 4) <= *(int *)(iVar3 + 0x14);
}



void fn_0068ab44(int param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  fn_0069e8c8(*(undefined4 *)(param_1 + 0x40));
  return;
}



void fn_00689efc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = fn_0028eac0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  if (iVar1 == 0) {
    fn_001f7438(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),param_2,param_3,param_4);
    return;
  }
  return;
}



void fn_00689c3c(int param_1)

{
  fn_0028eadc(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  return;
}



void fn_00685dfc(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined4 uStack_8c;
  byte abStack_88 [8];
  undefined *puStack_80;
  undefined4 uStack_7c;
  undefined *local_78;
  undefined *puStack_74;
  undefined4 uStack_70;
  undefined *local_6c;
  undefined1 *local_68;
  undefined4 local_64;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined2 uStack_5e;
  undefined2 auStack_5c [28];
  
  puStack_80 = &DAT_007c0e30;
  uStack_7c = 5;
  local_78 = &DAT_008615f4;
  puStack_74 = &DAT_007c0e35;
  uStack_70 = 2;
  local_6c = &DAT_008615fc;
  local_68 = &DAT_007c0e37;
  local_64 = 1;
  if (*(int *)(param_1 + 0x1cc) == -1) {
    puVar14 = &DAT_00891e48;
  }
  else {
    puVar14 = (undefined *)(DAT_008c92cc + *(int *)(param_1 + 0x1cc) * 0x60);
  }
  iVar1 = fn_006ac270(*(undefined4 *)(DAT_008977e0 + 0x30),puVar14);
  if (iVar1 == 0) {
    return;
  }
  fn_00301a9c(&uStack_60,&DAT_007ba154,0x1e);
  fn_0029432c(*(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4),&uStack_60);
  iVar12 = -1;
  iVar1 = fn_003035b0(puVar14,&DAT_0086160c);
  if (iVar1 == 0) {
    iVar12 = 0;
  }
  else {
    iVar1 = fn_003035b0(puVar14,local_78);
    if (iVar1 == 0) {
      iVar12 = 1;
    }
    else {
      iVar1 = fn_003035b0(puVar14,local_6c);
      if (iVar1 == 0) {
        iVar12 = 2;
      }
    }
  }
  iVar1 = fn_006f7a9c(DAT_008977e0);
  uVar2 = fn_00277500(iVar1,puVar14);
  iVar3 = fn_00279bbc(iVar1,uVar2);
  if (iVar3 != 0) {
    uVar4 = fn_006b7664(iVar1,uVar2);
    if (((int)param_2 < 0) ||
       ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= param_2)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar1 + 4) + param_2 * 0x34;
    }
    if (((int)param_2 < 0) ||
       ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= param_2)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + param_2 * 4);
    }
    uVar15 = (uint)abStack_88[iVar12 * 0xc + 0xc];
    puVar13 = *(undefined1 **)(abStack_88 + iVar12 * 0xc + 8);
    puVar5 = (undefined1 *)fn_002fecec(uVar15 * 6);
    uVar17 = 0;
    if (uVar15 != 0) {
      puVar6 = (undefined2 *)(puVar5 + 4);
      puVar8 = auStack_5c;
      puVar9 = (undefined2 *)(puVar5 + 2);
      puVar10 = &uStack_5e;
      puVar11 = puVar5;
      puVar16 = &uStack_5f;
      uVar17 = uVar15;
      puVar18 = puVar5 + 1;
      do {
        uVar17 = uVar17 - 1;
        *puVar11 = *puVar13;
        *puVar18 = *puVar16;
        *puVar9 = *puVar10;
        *puVar6 = *puVar8;
        puVar6 = puVar6 + 3;
        puVar8 = puVar8 + 3;
        puVar9 = puVar9 + 3;
        puVar10 = puVar10 + 3;
        puVar11 = puVar11 + 6;
        puVar13 = puVar13 + 1;
        puVar16 = puVar16 + 6;
        puVar18 = puVar18 + 6;
      } while (uVar17 != 0);
      uVar17 = uVar15;
    }
    fn_003119e0(iVar3,uVar7,uVar4,puVar5,uVar17);
    fn_0030233c(puVar5);
    fn_00279ae4(iVar1,uVar2);
  }
  iVar12 = fn_002798a0(iVar1,uVar2);
  if (iVar12 != 0) {
    fn_00279ae4(iVar1,uVar2);
  }
  return;
}



void fn_00685a10(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x184) < 0) {
      return;
    }
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    uVar3 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x184) != -1) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x1cc);
    local_20 = 0.0;
    if (iVar1 == -1) {
      puVar2 = &DAT_00891e48;
      puVar4 = &DAT_00891e48;
    }
    else {
      puVar4 = (undefined *)(DAT_008c92cc + iVar1 * 0x60);
      puVar2 = (undefined *)(DAT_008c92cc + iVar1 * 0x60);
    }
    if ((puVar2[10] == '\x01') || (*(float *)(puVar4 + 0x58) != 0.0)) {
      local_20 = *(float *)(puVar4 + 0x58) * *(float *)(param_1 + 0x3c) - 3.89;
    }
    local_24 = 0;
    local_1c = 0;
    uVar3 = fn_0017fde4(*(undefined4 *)(param_1 + 0xe4));
    uVar3 = fn_00179bfc(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7545,uVar3,1,&local_24);
  }
  *(undefined4 *)(param_1 + 0x184) = uVar3;
  return;
}



void fn_0067c37c(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  uint local_28;
  
  local_28 = param_4;
  if (param_1 == 0) {
    uVar1 = fn_006dbecc(DAT_008bf4d4,&local_28,param_2,param_3);
    if ((uVar1 & 0x80000000) != 0) {
      local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,0xfd);
    }
    uVar1 = local_28 & 0xff;
    (&DAT_008cfee8)[uVar1 * 3] = param_2;
    (&DAT_008cfeec)[uVar1 * 3] = param_3;
    iVar3 = DAT_00898864 + 1;
    (&DAT_008cfef0)[uVar1 * 3] = DAT_00898864;
    DAT_00898864 = iVar3;
    if (DAT_00898868 != (code *)0x0) {
      (*DAT_00898868)();
    }
    iVar3 = fn_0066eb80(DAT_00898840,10);
    iVar4 = fn_001296d0(DAT_00898840);
    if ((iVar4 == 0) && (*(char *)(iVar3 + 0xc0) != '\0')) {
      uVar1 = (uint)*(char *)(iVar3 + 0xc1);
      bVar7 = uVar1 == 0;
      if (bVar7) {
        uVar1 = (uint)DAT_0089885c;
      }
      if (bVar7 && uVar1 == 0) {
        fn_00670d7c(iVar3);
        return;
      }
    }
  }
  else if (param_1 == 1) {
    uVar1 = fn_006dbecc(DAT_008bf4d4,&local_28,param_2,param_3);
    if ((uVar1 & 0x80000000) != 0) {
      local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,0xfd);
    }
    uVar1 = local_28 & 0xff;
    puVar2 = (undefined4 *)fn_0013d4ec();
    (&DAT_008cfee8)[uVar1 * 3] = *puVar2;
    (&DAT_008cfeec)[uVar1 * 3] = puVar2[1];
    (&DAT_008cfef0)[uVar1 * 3] = 0xffffffff;
    if (DAT_00898868 != (code *)0x0) {
      (*DAT_00898868)();
    }
    iVar3 = fn_0066eb80(DAT_00898840,10);
    iVar4 = fn_001296d0(DAT_00898840);
    if ((iVar4 == 0) && (*(char *)(iVar3 + 0xc0) != '\0')) {
      uVar1 = (uint)*(char *)(iVar3 + 0xc1);
      bVar7 = uVar1 == 0;
      if (bVar7) {
        uVar1 = (uint)DAT_0089885c;
      }
      if (bVar7 && uVar1 == 0) {
        fn_00670d7c(iVar3);
      }
    }
    if (0 < DAT_00898860) {
      DAT_00898860 = DAT_00898860 + -1;
    }
    iVar3 = fn_0066eb80(DAT_00898840,10);
    iVar4 = fn_0066eb80(DAT_00898840,0xb);
    if (*(char *)(iVar3 + 0xc1) == '\0') {
      if (DAT_0089885c != 0) {
        iVar5 = 0;
        iVar3 = iVar5;
        do {
          piVar6 = (int *)fn_0013d4ec();
          if (((&DAT_008cfee8)[iVar5 * 3] != *piVar6) || ((&DAT_008cfeec)[iVar5 * 3] != piVar6[1]))
          {
            iVar3 = iVar3 + 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 8);
        if (iVar3 != DAT_0089886c) {
          *(undefined1 *)(iVar4 + 0x78) = 1;
        }
        return;
      }
    }
    else if (((*(char *)(DAT_00898840 + 0x50) == '\0' || param_2 == 0 && param_3 == 0) ||
             (*(char *)(iVar4 + 0x78) != '\0')) ||
            (iVar5 = fn_0066e530(), iVar5 == param_2 && param_3 == 0)) {
      *(undefined1 *)(iVar4 + 0x78) = 1;
      *(undefined1 *)(DAT_00898840 + 0x50) = 0;
    }
    else {
      iVar4 = fn_001296d0(DAT_00898840);
      if (iVar4 == 0) {
        fn_00670f38(iVar3);
        return;
      }
    }
  }
  return;
}


