#include "0074af34_0074bbd0.h"



void fn_0074bbd0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *local_60;
  undefined4 local_5c;
  undefined *local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  undefined1 *local_28;
  
  puVar5 = (undefined4 *)param_2[1];
  puVar9 = (undefined4 *)*param_2;
  puVar4 = puVar9;
  if (puVar9 != puVar5) {
    do {
      (**(code **)*puVar4)(puVar4);
      puVar4 = puVar4 + 10;
    } while (puVar4 != puVar5);
    param_2[1] = param_2[1] + (((int)puVar5 - (int)puVar9) / 0x28) * -0x28;
  }
  iVar1 = fn_0074a528(param_1,&local_2c);
  uVar8 = local_2c;
  if (iVar1 != 0) {
    if (0x6666666 < local_2c) {
      local_60 = (undefined4 *)0x6666666;
      fn_002ff628(8,&DAT_0074bf54,&DAT_0074bf54,local_2c);
    }
    if ((uint)((param_2[2] - *param_2) / 0x28) < uVar8) {
      uVar3 = (param_2[1] - *param_2) / 0x28;
      uVar2 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
      if (uVar2 < uVar3 + 0x20) {
        uVar2 = uVar3 + 0x20;
      }
      local_5c = uVar8;
      if (uVar8 < uVar2) {
        local_5c = uVar2;
      }
      local_60 = (undefined4 *)fn_0015ece0(local_5c * 0x28);
      iVar10 = param_2[1];
      puVar4 = local_60;
      for (iVar1 = *param_2; iVar1 != iVar10; iVar1 = iVar1 + 0x28) {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = &DAT_00855760;
          *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(iVar1 + 4);
          *(undefined1 *)((int)puVar4 + 5) = *(undefined1 *)(iVar1 + 5);
          puVar4[2] = &DAT_00854bec;
          *(undefined1 *)(puVar4 + 3) = *(undefined1 *)(iVar1 + 0xc);
          uVar6 = *(undefined4 *)(iVar1 + 0x14);
          puVar4[4] = *(undefined4 *)(iVar1 + 0x10);
          puVar4[5] = uVar6;
          puVar4[6] = *(undefined4 *)(iVar1 + 0x18);
          uVar6 = *(undefined4 *)(iVar1 + 0x20);
          uVar7 = *(undefined4 *)(iVar1 + 0x24);
          puVar4[2] = &DAT_00853ae8;
          puVar4[8] = uVar6;
          puVar4[9] = uVar7;
          *puVar4 = &DAT_00855160;
        }
        puVar4 = puVar4 + 10;
      }
      puVar5 = (undefined4 *)param_2[1];
      for (puVar4 = (undefined4 *)*param_2; puVar4 != puVar5; puVar4 = puVar4 + 10) {
        (**(code **)*puVar4)(puVar4);
      }
      fn_0014f1bc(*param_2);
      iVar1 = *param_2;
      *param_2 = (int)local_60;
      param_2[1] = (int)(local_60 + ((param_2[1] - iVar1) / 0x28) * 10);
      param_2[2] = (int)(local_60 + local_5c * 10);
    }
    for (uVar8 = 0; uVar8 < local_2c; uVar8 = uVar8 + 1) {
      if (*(char *)(param_1 + 4) != '\0') {
        return;
      }
      local_5c = local_5c & 0xffffff00;
      local_54 = 0;
      local_58 = &DAT_00853ae8;
      local_60 = &DAT_00855160;
      local_34 = (int)*(char *)(param_1 + 0x3b);
      local_38 = 0;
      local_28 = (undefined1 *)&local_60;
      if (((local_34 == 0) &&
          ((local_28 = (undefined1 *)&local_60, fn_0074a4c8(param_1,&local_5c),
           *(char *)(param_1 + 4) != '\0' ||
           (fn_0074a528(param_1,&local_38), *(char *)(param_1 + 4) != '\0')))) ||
         (local_30 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) != '\0')) {
LAB_0074bf9c:
        puVar5 = (undefined4 *)param_2[1];
        puVar9 = (undefined4 *)*param_2;
        puVar4 = puVar9;
        if (puVar9 == puVar5) {
          return;
        }
        do {
          (**(code **)*puVar4)(puVar4);
          puVar4 = puVar4 + 10;
        } while (puVar4 != puVar5);
        param_2[1] = param_2[1] + (((int)puVar5 - (int)puVar9) / 0x28) * -0x28;
        return;
      }
      iVar1 = *(int *)(param_1 + 8);
      if (*(int *)(iVar1 + 0x10) == local_30) {
        *(undefined1 *)(param_1 + 4) = 1;
        local_5c = (local_5c & ~((unsigned int)0xff << 8)) | (((unsigned int)(0) & 0xff) << 8);
      }
      else {
        local_5c = (local_5c & ~((unsigned int)0xff << 8)) | (((unsigned int)(*(undefined1 *)(*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc) + local_30)) & 0xff) << 8);
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      local_5c = CONCAT22(((unsigned int)(local_5c) >> 16) & 0xffff,CONCAT11(((unsigned int)(local_5c) >> 8) & 0xff,(undefined1)local_5c));
      if ((*(char *)(param_1 + 4) != '\0') ||
         (fn_004a1a54(param_1,local_28 + 8), *(char *)(param_1 + 4) != '\0')) goto LAB_0074bf9c;
      if (local_34 == 0) {
        uVar3 = local_30 + local_38;
        if ((uVar3 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar3))
        {
          *(undefined1 *)(param_1 + 4) = 1;
          goto LAB_0074bf9c;
        }
        *(uint *)(param_1 + 0xc) = uVar3;
      }
      puVar4 = (undefined4 *)param_2[1];
      if (puVar4 == (undefined4 *)param_2[2]) {
        fn_007932d4(param_2,puVar4,&local_60);
      }
      else {
        param_2[1] = (int)(puVar4 + 10);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = &DAT_00855760;
          *(undefined1 *)(puVar4 + 1) = (undefined1)local_5c;
          *(undefined1 *)((int)puVar4 + 5) = ((unsigned int)(local_5c) >> 8) & 0xff;
          puVar4[2] = &DAT_00854bec;
          *(undefined1 *)(puVar4 + 3) = local_54;
          puVar4[4] = local_50;
          puVar4[5] = uStack_4c;
          puVar4[6] = local_48;
          puVar4[2] = &DAT_00853ae8;
          puVar4[8] = local_40;
          puVar4[9] = uStack_3c;
          *puVar4 = &DAT_00855160;
        }
      }
    }
  }
  return;
}



void fn_0074b4b8(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  uint local_2c [2];
  
  iVar2 = param_2[1];
  if (*param_2 != iVar2) {
    param_2[1] = iVar2 - (iVar2 - *param_2 & 0xfffffffcU);
  }
  iVar2 = fn_0074a528(param_1,local_2c);
  uVar14 = local_2c[0];
  if (iVar2 != 0) {
    if (0x3fffffff < local_2c[0]) {
      fn_002ff628(8,&DAT_0074b7d4,&DAT_0074b7d4,local_2c[0],0x3fffffff);
    }
    if ((uint)(param_2[2] - *param_2 >> 2) < uVar14) {
      uVar15 = param_2[1] - *param_2 >> 2;
      uVar8 = uVar15 + (uVar15 >> 1) + (uVar15 >> 3);
      if (uVar8 < uVar15 + 0x20) {
        uVar8 = uVar15 + 0x20;
      }
      if (uVar14 < uVar8) {
        uVar14 = uVar8;
      }
      puVar3 = (undefined4 *)fn_0015ece0(uVar14 << 2);
      puVar13 = (undefined4 *)param_2[1];
      puVar4 = puVar3;
      for (puVar9 = (undefined4 *)*param_2; puVar9 != puVar13; puVar9 = puVar9 + 1) {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *puVar9;
        }
        puVar4 = puVar4 + 1;
      }
      fn_0014f1bc(*param_2);
      iVar2 = *param_2;
      *param_2 = (int)puVar3;
      param_2[1] = (param_2[1] - iVar2 & 0xfffffffcU) + (int)puVar3;
      param_2[2] = (int)(puVar3 + uVar14);
    }
    for (uVar14 = 0; uVar14 < local_2c[0]; uVar14 = uVar14 + 1) {
      if (*(char *)(param_1 + 4) != '\0') {
        return;
      }
      iVar2 = *(int *)(param_1 + 8);
      iVar10 = *(int *)(param_1 + 0xc);
      if ((uint)(*(int *)(iVar2 + 0x10) - iVar10) < 4) {
        uVar15 = 0;
        *(undefined1 *)(param_1 + 4) = 1;
      }
      else {
        puVar5 = (uint *)(*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0xc) + iVar10);
        uVar15 = *puVar5;
        bVar1 = *(byte *)((int)puVar5 + 3);
        *(int *)(param_1 + 0xc) = iVar10 + 4;
        uVar15 = uVar15 & 0xffffff | (uint)bVar1 << 0x18;
      }
      if (*(char *)(param_1 + 4) != '\0') {
        iVar2 = param_2[1];
        if (*param_2 == iVar2) {
          return;
        }
        param_2[1] = iVar2 - (iVar2 - *param_2 & 0xfffffffcU);
        return;
      }
      puVar5 = (uint *)param_2[1];
      if (puVar5 == (uint *)param_2[2]) {
        uVar8 = (int)puVar5 - *param_2 >> 2;
        if (uVar8 < (uint)(param_2[2] - *param_2 >> 2)) {
          param_2[1] = (int)(puVar5 + 1);
          if (puVar5 != (uint *)0x0) {
            *puVar5 = puVar5[-1];
          }
          puVar11 = puVar5 + -1;
          iVar2 = (int)puVar11 - (int)puVar5;
          if (0 < iVar2 >> 2) {
            puVar12 = puVar5;
            if (iVar2 * 0x20000000 < 0) {
              puVar11 = puVar5 + -2;
              puVar12 = puVar5 + -1;
              *puVar12 = *puVar11;
            }
            for (iVar2 = iVar2 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
              puVar12[-1] = puVar11[-1];
              puVar11 = puVar11 + -2;
              puVar12 = puVar12 + -2;
              *puVar12 = *puVar11;
            }
          }
          *puVar5 = uVar15;
        }
        else {
          uVar6 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
          if (uVar6 < uVar8 + 0x20) {
            uVar6 = uVar8 + 0x20;
          }
          puVar7 = (uint *)fn_0015ece0(uVar6 << 2);
          puVar12 = puVar7;
          for (puVar11 = (uint *)*param_2; puVar11 != puVar5; puVar11 = puVar11 + 1) {
            if (puVar12 != (uint *)0x0) {
              *puVar12 = *puVar11;
            }
            puVar12 = puVar12 + 1;
          }
          puVar11 = (uint *)(((int)puVar5 - *param_2 & 0xfffffffcU) + (int)puVar7);
          if (puVar11 != (uint *)0x0) {
            *puVar11 = uVar15;
          }
          puVar12 = (uint *)param_2[1];
          puVar11 = (uint *)(((int)puVar5 - *param_2 & 0xfffffffcU) + (int)puVar7);
          for (; puVar5 != puVar12; puVar5 = puVar5 + 1) {
            puVar11 = puVar11 + 1;
            if (puVar11 != (uint *)0x0) {
              *puVar11 = *puVar5;
            }
          }
          iVar2 = *param_2;
          iVar10 = param_2[1];
          fn_0014f1bc();
          param_2[2] = (int)(puVar7 + uVar6);
          param_2[1] = (int)(puVar7 + (iVar10 - iVar2 >> 2) + 1);
          *param_2 = (int)puVar7;
        }
      }
      else {
        param_2[1] = (int)(puVar5 + 1);
        if (puVar5 != (uint *)0x0) {
          *puVar5 = uVar15;
        }
      }
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0074af84) */
/* WARNING: Removing unreachable block (ram,0x0074af8c) */

void fn_0074af34(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 local_20 [4];
  uint local_1c;
  
  if (*param_2 != param_2[1]) {
    param_2[1] = *param_2;
  }
  iVar1 = fn_0074a528(param_1,&local_1c);
  if (iVar1 != 0) {
    if ((uint)(param_2[2] - *param_2) < local_1c) {
      uVar2 = param_2[1] - *param_2;
      uVar5 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
      if (uVar5 < uVar2 + 0x20) {
        uVar5 = uVar2 + 0x20;
      }
      uVar2 = local_1c;
      if (local_1c < uVar5) {
        uVar2 = uVar5;
      }
      puVar3 = (undefined1 *)fn_0015ece0(uVar2);
      puVar8 = (undefined1 *)param_2[1];
      puVar4 = puVar3;
      for (puVar6 = (undefined1 *)*param_2; puVar6 != puVar8; puVar6 = puVar6 + 1) {
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = *puVar6;
        }
        puVar4 = puVar4 + 1;
      }
      fn_0014f1bc(*param_2);
      iVar1 = *param_2;
      *param_2 = (int)puVar3;
      param_2[1] = (int)(puVar3 + (param_2[1] - iVar1));
      param_2[2] = (int)(puVar3 + uVar2);
    }
    for (uVar5 = 0; uVar5 < local_1c; uVar5 = uVar5 + 1) {
      if (*(char *)(param_1 + 4) != '\0') {
        return;
      }
      iVar1 = *(int *)(param_1 + 8);
      iVar7 = *(int *)(param_1 + 0xc);
      if (*(int *)(iVar1 + 0x10) == iVar7) {
        *(undefined1 *)(param_1 + 4) = 1;
        local_20[0] = 0;
      }
      else {
        local_20[0] = *(undefined1 *)(*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc) + iVar7);
        *(int *)(param_1 + 0xc) = iVar7 + 1;
      }
      if (*(char *)(param_1 + 4) != '\0') {
        if (*param_2 == param_2[1]) {
          return;
        }
        param_2[1] = *param_2;
        return;
      }
      puVar6 = (undefined1 *)param_2[1];
      if (puVar6 == (undefined1 *)param_2[2]) {
        fn_0079b730(param_2,puVar6,local_20);
      }
      else {
        param_2[1] = (int)(puVar6 + 1);
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = local_20[0];
        }
      }
    }
  }
  return;
}


