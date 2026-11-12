#include "00268030_00268758.h"



void fn_00268758(void)

{
  fn_00268390();
  return;
}



void fn_00268720(void)

{
  fn_00268390();
  return;
}



void fn_00268300(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  fn_00268390(param_1,param_2,0,0,4,0,0,0,0,0,1);
  fn_00268390(param_1,param_2,0,0,5,param_3,param_4,param_5,0,0,1);
  return;
}



void fn_00268390(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,uint param_11)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint unaff_r5;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint in_r12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  uVar12 = unaff_r5 & 0xffffff00 | param_5 & 0xff;
  uVar5 = in_r12 & 0xffffff00 | param_11 & 0xff;
  puVar10 = (uint *)(param_1 + 8);
  puVar1 = (undefined4 *)*puVar10;
  puVar11 = (uint *)(param_1 + 4);
  if (puVar1 != *(undefined4 **)(param_1 + 0xc)) {
    *puVar10 = (uint)(puVar1 + 10);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = param_2;
      puVar1[1] = param_3;
      puVar1[2] = param_6;
      puVar1[3] = param_4;
      puVar1[4] = uVar12;
      puVar1[7] = param_9;
      puVar1[8] = param_10;
      puVar1[5] = param_7;
      puVar1[6] = param_8;
      puVar1[9] = uVar5;
    }
    return;
  }
  uVar9 = (int)((int)puVar1 - *puVar11) / 0x28;
  if (uVar9 < (uint)((int)((int)*(undefined4 **)(param_1 + 0xc) - *puVar11) / 0x28)) {
    *puVar10 = (uint)(puVar1 + 10);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = puVar1[-10];
      puVar1[1] = puVar1[-9];
      puVar1[2] = puVar1[-8];
      puVar1[3] = puVar1[-7];
      puVar1[4] = puVar1[-6];
      puVar1[5] = puVar1[-5];
      puVar1[6] = puVar1[-4];
      puVar1[7] = puVar1[-3];
      puVar1[8] = puVar1[-2];
      puVar1[9] = puVar1[-1];
    }
    puVar7 = puVar1 + -10;
    puVar8 = puVar1;
    if (puVar1 < puVar7) {
      if (0 < (int)puVar7 - (int)puVar1) {
        uVar9 = ((int)puVar7 - (int)puVar1) / 0x28;
        if ((uVar9 & 1) != 0) {
          puVar7 = puVar1 + -0x14;
          puVar8 = puVar1 + -10;
          *puVar8 = *puVar7;
          puVar1[-9] = puVar1[-0x13];
          puVar1[-8] = puVar1[-0x12];
          puVar1[-7] = puVar1[-0x11];
          puVar1[-6] = puVar1[-0x10];
          puVar1[-5] = puVar1[-0xf];
          puVar1[-4] = puVar1[-0xe];
          puVar1[-3] = puVar1[-0xd];
          puVar1[-2] = puVar1[-0xc];
          puVar1[-1] = puVar1[-0xb];
        }
        for (iVar6 = (int)uVar9 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
          uVar13 = puVar7[-9];
          uVar14 = puVar7[-8];
          uVar15 = puVar7[-7];
          uVar16 = puVar7[-6];
          uVar17 = puVar7[-5];
          uVar18 = puVar7[-4];
          uVar19 = puVar7[-3];
          puVar8[-10] = puVar7[-10];
          puVar8[-9] = uVar13;
          puVar8[-8] = uVar14;
          puVar8[-7] = uVar15;
          puVar8[-6] = uVar16;
          puVar8[-5] = uVar17;
          puVar8[-4] = uVar18;
          puVar8[-3] = uVar19;
          uVar13 = puVar7[-1];
          puVar8[-2] = puVar7[-2];
          puVar8[-1] = uVar13;
          uVar13 = puVar7[-0x13];
          uVar14 = puVar7[-0x12];
          uVar15 = puVar7[-0x11];
          uVar16 = puVar7[-0x10];
          uVar17 = puVar7[-0xf];
          uVar18 = puVar7[-0xe];
          uVar19 = puVar7[-0xd];
          puVar3 = puVar7 + -0xc;
          puVar8[-0x14] = puVar7[-0x14];
          puVar8[-0x13] = uVar13;
          puVar8[-0x12] = uVar14;
          puVar8[-0x11] = uVar15;
          puVar8[-0x10] = uVar16;
          puVar8[-0xf] = uVar17;
          puVar8[-0xe] = uVar18;
          puVar8[-0xd] = uVar19;
          uVar13 = puVar7[-0xb];
          puVar7 = puVar7 + -0x14;
          puVar8[-0xc] = *puVar3;
          puVar8[-0xb] = uVar13;
          puVar8 = puVar8 + -0x14;
        }
      }
    }
    else {
      while (puVar1 != puVar7) {
        uVar13 = puVar7[-9];
        uVar14 = puVar7[-8];
        uVar15 = puVar7[-7];
        uVar16 = puVar7[-6];
        uVar17 = puVar7[-5];
        uVar18 = puVar7[-4];
        uVar19 = puVar7[-3];
        puVar8[-10] = puVar7[-10];
        puVar8[-9] = uVar13;
        puVar8[-8] = uVar14;
        puVar8[-7] = uVar15;
        puVar8[-6] = uVar16;
        puVar8[-5] = uVar17;
        puVar8[-4] = uVar18;
        puVar8[-3] = uVar19;
        uVar13 = puVar7[-1];
        puVar8[-2] = puVar7[-2];
        puVar8[-1] = uVar13;
        puVar8 = puVar8 + -10;
        puVar7 = puVar7 + -10;
      }
    }
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_6;
    puVar1[3] = param_4;
    puVar1[4] = uVar12;
    puVar1[7] = param_9;
    puVar1[8] = param_10;
    puVar1[5] = param_7;
    puVar1[6] = param_8;
    puVar1[9] = uVar5;
    return;
  }
  uVar2 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
  if (uVar2 < uVar9 + 0x20) {
    uVar2 = uVar9 + 0x20;
  }
  puVar3 = (undefined4 *)fn_00100fc6(uVar2 * 0x28,0);
  puVar8 = puVar3;
  for (puVar7 = (undefined4 *)*puVar11; puVar7 != puVar1; puVar7 = puVar7 + 10) {
    if (puVar8 != (undefined4 *)0x0) {
      uVar13 = puVar7[1];
      uVar14 = puVar7[2];
      uVar15 = puVar7[3];
      uVar16 = puVar7[4];
      uVar17 = puVar7[5];
      uVar18 = puVar7[6];
      uVar19 = puVar7[7];
      *puVar8 = *puVar7;
      puVar8[1] = uVar13;
      puVar8[2] = uVar14;
      puVar8[3] = uVar15;
      puVar8[4] = uVar16;
      puVar8[5] = uVar17;
      puVar8[6] = uVar18;
      puVar8[7] = uVar19;
      uVar13 = puVar7[9];
      puVar8[8] = puVar7[8];
      puVar8[9] = uVar13;
    }
    puVar8 = puVar8 + 10;
  }
  puVar7 = puVar3 + ((int)((int)puVar1 - *puVar11) / 0x28) * 10;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = param_2;
    puVar7[1] = param_3;
    puVar7[2] = param_6;
    puVar7[3] = param_4;
    puVar7[4] = uVar12;
    puVar7[7] = param_9;
    puVar7[8] = param_10;
    puVar7[5] = param_7;
    puVar7[6] = param_8;
    puVar7[9] = uVar5;
  }
  puVar8 = (undefined4 *)*puVar10;
  puVar7 = puVar3 + ((int)((int)puVar1 - *puVar11) / 0x28) * 10;
  for (; puVar1 != puVar8; puVar1 = puVar1 + 10) {
    puVar4 = puVar7 + 10;
    if (puVar4 != (undefined4 *)0x0) {
      uVar13 = puVar1[1];
      uVar14 = puVar1[2];
      uVar15 = puVar1[3];
      uVar16 = puVar1[4];
      uVar17 = puVar1[5];
      uVar18 = puVar1[6];
      uVar19 = puVar1[7];
      *puVar4 = *puVar1;
      puVar7[0xb] = uVar13;
      puVar7[0xc] = uVar14;
      puVar7[0xd] = uVar15;
      puVar7[0xe] = uVar16;
      puVar7[0xf] = uVar17;
      puVar7[0x10] = uVar18;
      puVar7[0x11] = uVar19;
      uVar13 = puVar1[9];
      puVar7[0x12] = puVar1[8];
      puVar7[0x13] = uVar13;
    }
    puVar7 = puVar4;
  }
  uVar12 = *puVar11;
  uVar9 = *puVar10;
  uVar5 = uVar12;
  if (uVar9 < uVar12) {
    do {
      uVar5 = uVar5 + 0x28;
    } while (uVar5 != uVar9);
  }
  fn_001008c4(uVar12,(int)(*(int *)(param_1 + 0xc) - uVar12) / 0x28,0);
  *puVar11 = (uint)puVar3;
  *puVar10 = (uint)(puVar3 + ((int)(uVar9 - uVar12) / 0x28) * 10 + 10);
  *(undefined4 **)(param_1 + 0xc) = puVar3 + uVar2 * 10;
  return;
}



void fn_00268030(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int local_70 [12];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  fn_005f6270(*param_1);
  iVar3 = (**(code **)(*(int *)*param_1 + 0x14))();
  if (iVar3 == 0) {
    cVar1 = '\0';
    if (param_1[4] != 0) {
      cVar1 = (char)param_1[5];
    }
    if (param_1[4] != 0 && cVar1 != '\0') {
      local_70[0] = *param_1;
      (**(code **)(*(int *)param_1[4] + 8))((int *)param_1[4],local_70);
    }
    if ((*(int *)(*param_1 + 0x44) == 0) &&
       (puVar5 = (undefined4 *)param_1[1], iVar3 = param_1[2] - (int)puVar5 >> 0x1f,
       (param_1[2] - (int)puVar5) / 0x28 + iVar3 != iVar3)) {
      local_70[0] = 0;
      local_70[1] = 0;
      local_70[2] = 0;
      local_70[3] = 0;
      local_70[4] = 0;
      local_70[5] = 0;
      local_70[6] = 0;
      local_70[7] = 0;
      local_70[8] = 0;
      local_70[9] = 0;
      fn_001782b8(local_70,*puVar5,0x20);
      if (*(char *)(puVar5 + 4) == '\x05') {
        uVar4 = fn_006718ec(*param_1);
        if (*(int *)puVar5[2] != 0) {
          (**(code **)(*(int *)puVar5[5] + 0xc))();
        }
        local_70[9] = (**(code **)(*(int *)puVar5[5] + 8))
                                ((int *)puVar5[5],uVar4,*(undefined1 *)(puVar5 + 6));
        *(int *)puVar5[2] = local_70[9];
        local_70[8] = uVar4;
      }
      else {
        local_70[9] = puVar5[1];
        local_70[8] = puVar5[3];
      }
      switch(*(undefined1 *)(puVar5 + 4)) {
      case 0:
        fn_00671860(*param_1,local_70);
        break;
      case 1:
        fn_00671810(*param_1,local_70,(int)*(char *)(puVar5 + 9));
        break;
      case 2:
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        fn_001782b8(&local_40,*puVar5,0x20);
        if (*(char *)(puVar5 + 4) == '\x05') {
          uVar4 = fn_006718ec(*param_1);
          if (*(int *)puVar5[2] != 0) {
            (**(code **)(*(int *)puVar5[5] + 0xc))();
          }
          local_1c = (**(code **)(*(int *)puVar5[5] + 8))
                               ((int *)puVar5[5],uVar4,*(undefined1 *)(puVar5 + 6));
          *(undefined4 *)puVar5[2] = local_1c;
          local_20 = uVar4;
        }
        else {
          local_1c = puVar5[7];
          local_20 = puVar5[8];
        }
        fn_006718b4(*param_1,&local_40,local_70,(int)*(char *)(puVar5 + 9));
        break;
      case 3:
      case 5:
        fn_00671838(*param_1,local_70,(int)*(char *)(puVar5 + 9));
        break;
      case 4:
        fn_006718fc(*param_1,*puVar5);
      }
      if (param_1[1] != param_1[2]) {
        if (param_1[2] != param_1[1] + 0x28) {
          fn_007b858c();
        }
        param_1[2] = param_1[2] + -0x28;
      }
    }
  }
  uVar2 = (**(code **)(*(int *)*param_1 + 0x14))();
  *(undefined1 *)(param_1 + 5) = uVar2;
  return;
}


