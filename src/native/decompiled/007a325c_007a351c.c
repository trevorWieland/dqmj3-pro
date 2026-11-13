#include "007a325c_007a351c.h"



void fn_007a351c(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int iStack_44;
  int local_40;
  undefined1 auStack_3c [8];
  int local_34;
  int iStack_30;
  int local_2c;
  
  if (param_1 == param_2) {
    return;
  }
  puVar2 = param_1;
  while (puVar1 = puVar2 + 5, puVar1 != param_2) {
    fn_0034194c(&local_50,puVar1);
    iVar3 = (*param_3)(&local_50,param_1);
    if (iVar3 == 0) {
      puVar4 = (undefined4 *)fn_0034194c(auStack_3c,&local_50);
      iVar3 = (*param_3)();
      puVar2 = puVar1;
      while (iVar3 != 0) {
        *puVar2 = puVar2[-5];
        puVar2[1] = puVar2[-4];
        fn_0078e228(puVar2 + 2,puVar2 + -3);
        iVar3 = (*param_3)(puVar4);
        puVar2 = puVar2 + -5;
      }
      *puVar2 = *puVar4;
      puVar2[1] = puVar4[1];
      fn_0078e228(puVar2 + 2,puVar4 + 2);
      for (iVar3 = local_34; iVar3 != iStack_30; iVar3 = iVar3 + 0x20) {
      }
      fn_001008c4(local_34,local_2c - local_34 >> 5,0);
      iVar3 = local_48;
    }
    else {
      puVar2 = puVar2 + 10;
      puVar4 = puVar1;
      while (param_1 != puVar4) {
        puVar2[-5] = puVar4[-5];
        puVar2[-4] = puVar4[-4];
        fn_0078e228(puVar2 + -3,puVar4 + -3);
        puVar2 = puVar2 + -5;
        puVar4 = puVar4 + -5;
      }
      *param_1 = local_50;
      param_1[1] = local_4c;
      fn_0078e228(param_1 + 2,&local_48);
      iVar3 = local_48;
    }
    for (; iVar3 != iStack_44; iVar3 = iVar3 + 0x20) {
    }
    fn_001008c4(local_48,local_40 - local_48 >> 5,0);
    puVar2 = puVar1;
  }
  return;
}



void fn_007a33a4(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_1 == param_2) {
    return;
  }
  puVar2 = param_1;
  while (puVar2 = puVar2 + 7, puVar2 != param_2) {
    local_60 = *puVar2;
    uStack_5c = puVar2[1];
    uStack_58 = puVar2[2];
    uStack_54 = puVar2[3];
    uStack_50 = puVar2[4];
    uStack_4c = puVar2[5];
    uStack_48 = puVar2[6];
    iVar3 = (*param_3)(&local_60,param_1);
    if (iVar3 == 0) {
      local_44 = local_60;
      uStack_40 = uStack_5c;
      uStack_3c = uStack_58;
      uStack_38 = uStack_54;
      uStack_34 = uStack_50;
      uStack_30 = uStack_4c;
      uStack_2c = uStack_48;
      iVar3 = (*param_3)(&local_44);
      puVar6 = puVar2 + -7;
      puVar4 = puVar2;
      while (puVar1 = puVar6, iVar3 != 0) {
        uVar7 = puVar1[1];
        uVar8 = puVar1[2];
        uVar9 = puVar1[3];
        uVar10 = puVar1[4];
        uVar11 = puVar1[5];
        uVar12 = puVar1[6];
        *puVar4 = *puVar1;
        puVar4[1] = uVar7;
        puVar4[2] = uVar8;
        puVar4[3] = uVar9;
        puVar4[4] = uVar10;
        puVar4[5] = uVar11;
        puVar4[6] = uVar12;
        iVar3 = (*param_3)(&local_44,puVar1 + -7);
        puVar6 = puVar1 + -7;
        puVar4 = puVar1;
      }
      *puVar4 = local_44;
      puVar4[1] = uStack_40;
      puVar4[2] = uStack_3c;
      puVar4[3] = uStack_38;
      puVar4[4] = uStack_34;
      puVar4[5] = uStack_30;
      puVar4[6] = uStack_2c;
    }
    else {
      puVar4 = puVar2 + 7;
      puVar6 = puVar2;
      if (param_1 < puVar2) {
        uVar5 = (int)puVar2 - (int)param_1;
        if (0 < (int)uVar5) {
          iVar3 = (int)((longlong)(int)uVar5 * -0x6db6db6d + ((ulonglong)uVar5 << 0x20) >> 0x20);
          if (((iVar3 >> 4) - (iVar3 >> 0x1f) & 1U) != 0) {
            puVar6 = puVar2 + -7;
            *puVar2 = *puVar6;
            puVar2[1] = puVar2[-6];
            puVar2[2] = puVar2[-5];
            puVar2[3] = puVar2[-4];
            puVar2[4] = puVar2[-3];
            puVar2[5] = puVar2[-2];
            puVar2[6] = puVar2[-1];
            puVar4 = puVar2;
          }
          iVar3 = (int)((longlong)(int)uVar5 * -0x6db6db6d + ((ulonglong)uVar5 << 0x20) >> 0x20);
          for (iVar3 = (iVar3 >> 4) - (iVar3 >> 0x1f) >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
            uVar7 = puVar6[-6];
            uVar8 = puVar6[-5];
            uVar9 = puVar6[-4];
            uVar10 = puVar6[-3];
            uVar11 = puVar6[-2];
            uVar12 = puVar6[-1];
            puVar4[-7] = puVar6[-7];
            puVar4[-6] = uVar7;
            puVar4[-5] = uVar8;
            puVar4[-4] = uVar9;
            puVar4[-3] = uVar10;
            puVar4[-2] = uVar11;
            puVar4[-1] = uVar12;
            uVar7 = puVar6[-0xd];
            uVar8 = puVar6[-0xc];
            uVar9 = puVar6[-0xb];
            uVar10 = puVar6[-10];
            uVar11 = puVar6[-9];
            uVar12 = puVar6[-8];
            puVar4[-0xe] = puVar6[-0xe];
            puVar4[-0xd] = uVar7;
            puVar4[-0xc] = uVar8;
            puVar4[-0xb] = uVar9;
            puVar4[-10] = uVar10;
            puVar4[-9] = uVar11;
            puVar4[-8] = uVar12;
            puVar4 = puVar4 + -0xe;
            puVar6 = puVar6 + -0xe;
          }
        }
      }
      else {
        while (param_1 != puVar6) {
          uVar7 = puVar6[-6];
          uVar8 = puVar6[-5];
          uVar9 = puVar6[-4];
          uVar10 = puVar6[-3];
          uVar11 = puVar6[-2];
          uVar12 = puVar6[-1];
          puVar4[-7] = puVar6[-7];
          puVar4[-6] = uVar7;
          puVar4[-5] = uVar8;
          puVar4[-4] = uVar9;
          puVar4[-3] = uVar10;
          puVar4[-2] = uVar11;
          puVar4[-1] = uVar12;
          puVar4 = puVar4 + -7;
          puVar6 = puVar6 + -7;
        }
      }
      *param_1 = local_60;
      param_1[1] = uStack_5c;
      param_1[2] = uStack_58;
      param_1[3] = uStack_54;
      param_1[4] = uStack_50;
      param_1[5] = uStack_4c;
      param_1[6] = uStack_48;
    }
  }
  return;
}



void fn_007a325c(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_1 == param_2) {
    return;
  }
  puVar2 = param_1;
  while (puVar1 = puVar2 + 8, puVar1 != param_2) {
    local_68 = *puVar1;
    uStack_64 = puVar2[9];
    uStack_60 = puVar2[10];
    uStack_5c = puVar2[0xb];
    uStack_58 = puVar2[0xc];
    uStack_54 = puVar2[0xd];
    uStack_50 = puVar2[0xe];
    uStack_4c = puVar2[0xf];
    iVar3 = (*param_3)(&local_68,param_1);
    if (iVar3 == 0) {
      local_48 = local_68;
      uStack_44 = uStack_64;
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      uStack_38 = uStack_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      iVar3 = (*param_3)(&local_48);
      puVar2 = puVar1;
      while (iVar3 != 0) {
        *puVar2 = puVar2[-8];
        puVar2[1] = puVar2[-7];
        puVar2[2] = puVar2[-6];
        puVar2[3] = puVar2[-5];
        puVar2[4] = puVar2[-4];
        puVar2[5] = puVar2[-3];
        puVar2[6] = puVar2[-2];
        puVar2[7] = puVar2[-1];
        iVar3 = (*param_3)(&local_48);
        puVar2 = puVar2 + -8;
      }
      *puVar2 = local_48;
      puVar2[1] = uStack_44;
      puVar2[2] = uStack_40;
      puVar2[3] = uStack_3c;
      puVar2[4] = uStack_38;
      puVar2[5] = uStack_34;
      puVar2[6] = uStack_30;
      puVar2[7] = uStack_2c;
      puVar2 = puVar1;
    }
    else {
      puVar4 = puVar2 + 0x10;
      puVar5 = puVar1;
      if (param_1 < puVar1) {
        iVar3 = (int)puVar1 - (int)param_1;
        if (0 < iVar3) {
          if (iVar3 * 0x4000000 < 0) {
            *puVar1 = *puVar2;
            puVar2[9] = puVar2[1];
            puVar2[10] = puVar2[2];
            puVar2[0xb] = puVar2[3];
            puVar2[0xc] = puVar2[4];
            puVar2[0xd] = puVar2[5];
            puVar2[0xe] = puVar2[6];
            puVar2[0xf] = puVar2[7];
            puVar4 = puVar1;
            puVar5 = puVar2;
          }
          for (iVar3 = iVar3 >> 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            uVar6 = puVar5[-7];
            uVar7 = puVar5[-6];
            uVar8 = puVar5[-5];
            uVar9 = puVar5[-4];
            uVar10 = puVar5[-3];
            uVar11 = puVar5[-2];
            uVar12 = puVar5[-1];
            puVar4[-8] = puVar5[-8];
            puVar4[-7] = uVar6;
            puVar4[-6] = uVar7;
            puVar4[-5] = uVar8;
            puVar4[-4] = uVar9;
            puVar4[-3] = uVar10;
            puVar4[-2] = uVar11;
            puVar4[-1] = uVar12;
            uVar6 = puVar5[-0xf];
            uVar7 = puVar5[-0xe];
            uVar8 = puVar5[-0xd];
            uVar9 = puVar5[-0xc];
            uVar10 = puVar5[-0xb];
            uVar11 = puVar5[-10];
            uVar12 = puVar5[-9];
            puVar4[-0x10] = puVar5[-0x10];
            puVar4[-0xf] = uVar6;
            puVar4[-0xe] = uVar7;
            puVar4[-0xd] = uVar8;
            puVar4[-0xc] = uVar9;
            puVar4[-0xb] = uVar10;
            puVar4[-10] = uVar11;
            puVar4[-9] = uVar12;
            puVar4 = puVar4 + -0x10;
            puVar5 = puVar5 + -0x10;
          }
        }
      }
      else {
        while (param_1 != puVar5) {
          uVar6 = puVar5[-7];
          uVar7 = puVar5[-6];
          uVar8 = puVar5[-5];
          uVar9 = puVar5[-4];
          uVar10 = puVar5[-3];
          uVar11 = puVar5[-2];
          uVar12 = puVar5[-1];
          puVar4[-8] = puVar5[-8];
          puVar4[-7] = uVar6;
          puVar4[-6] = uVar7;
          puVar4[-5] = uVar8;
          puVar4[-4] = uVar9;
          puVar4[-3] = uVar10;
          puVar4[-2] = uVar11;
          puVar4[-1] = uVar12;
          puVar4 = puVar4 + -8;
          puVar5 = puVar5 + -8;
        }
      }
      *param_1 = local_68;
      param_1[1] = uStack_64;
      param_1[2] = uStack_60;
      param_1[3] = uStack_5c;
      param_1[4] = uStack_58;
      param_1[5] = uStack_54;
      param_1[6] = uStack_50;
      param_1[7] = uStack_4c;
      puVar2 = puVar1;
    }
  }
  return;
}


