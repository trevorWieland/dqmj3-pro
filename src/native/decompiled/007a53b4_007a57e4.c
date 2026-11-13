#include "007a53b4_007a57e4.h"



void fn_007a57e4(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar2 = param_1;
  if (param_1 == param_2) {
    return;
  }
  while (puVar2 = puVar2 + 3, puVar2 != param_2) {
    iVar5 = puVar2[2];
    uVar7 = *puVar2;
    uVar8 = puVar2[1];
    if ((int)param_1[2] < iVar5) {
      puVar4 = puVar2 + 3;
      puVar3 = puVar2;
      if (param_1 < puVar2) {
        if (0 < (int)puVar2 - (int)param_1) {
          uVar1 = ((int)puVar2 - (int)param_1) / 0xc;
          if ((uVar1 & 1) != 0) {
            puVar3 = puVar2 + -3;
            *puVar2 = puVar2[-3];
            puVar2[1] = puVar2[-2];
            puVar2[2] = puVar2[-1];
            puVar4 = puVar2;
          }
          for (iVar6 = (int)uVar1 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
            uVar9 = puVar3[-3];
            uVar10 = puVar3[-2];
            puVar4[-1] = puVar3[-1];
            puVar4[-3] = uVar9;
            puVar4[-2] = uVar10;
            uVar9 = puVar3[-5];
            uVar10 = puVar3[-4];
            puVar4[-6] = puVar3[-6];
            puVar4[-5] = uVar9;
            puVar4[-4] = uVar10;
            puVar3 = puVar3 + -6;
            puVar4 = puVar4 + -6;
          }
        }
      }
      else {
        for (; param_1 != puVar3; puVar3 = puVar3 + -3) {
          uVar9 = puVar3[-2];
          uVar10 = puVar3[-1];
          puVar4[-3] = puVar3[-3];
          puVar4[-2] = uVar9;
          puVar4[-1] = uVar10;
          puVar4 = puVar4 + -3;
        }
      }
      *param_1 = uVar7;
      param_1[1] = uVar8;
      param_1[2] = iVar5;
    }
    else {
      puVar4 = puVar2;
      while( true ) {
        if (iVar5 <= (int)puVar4[-1]) break;
        *puVar4 = puVar4[-3];
        puVar4[1] = puVar4[-2];
        puVar4[2] = puVar4[-1];
        puVar4 = puVar4 + -3;
      }
      *puVar4 = uVar7;
      puVar4[1] = uVar8;
      puVar4[2] = iVar5;
    }
  }
  return;
}



void fn_007a56b4(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (param_1 == param_2) {
    return;
  }
  puVar2 = param_1;
  while (puVar1 = puVar2 + 2, puVar1 != param_2) {
    local_30 = *puVar1;
    uStack_2c = puVar2[3];
    iVar3 = (*param_3)(&local_30,param_1);
    if (iVar3 == 0) {
      local_28 = local_30;
      uStack_24 = uStack_2c;
      iVar3 = (*param_3)(&local_28);
      puVar4 = puVar1;
      while (puVar6 = puVar2, iVar3 != 0) {
        uVar5 = puVar6[1];
        *puVar4 = *puVar6;
        puVar4[1] = uVar5;
        iVar3 = (*param_3)(&local_28,puVar6 + -2);
        puVar2 = puVar6 + -2;
        puVar4 = puVar6;
      }
      *puVar4 = local_28;
      puVar4[1] = uStack_24;
      puVar2 = puVar1;
    }
    else {
      puVar4 = puVar2 + 4;
      puVar6 = puVar1;
      if (param_1 < puVar1) {
        iVar3 = (int)puVar1 - (int)param_1;
        if (0 < iVar3) {
          if (iVar3 * 0x10000000 < 0) {
            *puVar1 = *puVar2;
            puVar2[3] = puVar2[1];
            puVar4 = puVar1;
            puVar6 = puVar2;
          }
          for (iVar3 = iVar3 >> 4; iVar3 != 0; iVar3 = iVar3 + -1) {
            uVar5 = puVar6[-1];
            puVar4[-2] = puVar6[-2];
            puVar4[-1] = uVar5;
            uVar5 = puVar6[-3];
            puVar4[-4] = puVar6[-4];
            puVar4[-3] = uVar5;
            puVar4 = puVar4 + -4;
            puVar6 = puVar6 + -4;
          }
        }
      }
      else {
        while (param_1 != puVar6) {
          uVar5 = puVar6[-1];
          puVar4[-2] = puVar6[-2];
          puVar4[-1] = uVar5;
          puVar4 = puVar4 + -2;
          puVar6 = puVar6 + -2;
        }
      }
      *param_1 = local_30;
      param_1[1] = uStack_2c;
      puVar2 = puVar1;
    }
  }
  return;
}



undefined1 * fn_007a5540(undefined1 *param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_98 [52];
  undefined1 auStack_64 [52];
  undefined4 local_30;
  undefined4 local_2c [2];
  
  if (param_1 == param_2) {
    return param_1;
  }
  puVar3 = param_1;
  puVar2 = param_1;
  while (puVar2 = puVar2 + 0x34, puVar2 != param_2) {
    local_30 = param_3;
    fn_00656538(auStack_98,puVar2);
    iVar4 = fn_006f0908(&local_30,auStack_98,param_1);
    puVar3 = auStack_98;
    if (iVar4 == 0) {
      uVar5 = fn_00656538(auStack_64,auStack_98);
      local_2c[0] = local_30;
      iVar4 = fn_006f0908(local_2c,uVar5);
      puVar1 = puVar2;
      while (iVar4 != 0) {
        puVar1[4] = puVar1[-0x30];
        puVar1[5] = puVar1[-0x2f];
        puVar1[6] = puVar1[-0x2e];
        *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(puVar1 + -0x2c);
        fn_006f94f4(puVar1 + 0xc,puVar1 + -0x28);
        *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(puVar1 + -0x28);
        *(undefined2 *)(puVar1 + 0xc) = *(undefined2 *)(puVar1 + -0x28);
        *(undefined2 *)(puVar1 + 0xc) = *(undefined2 *)(puVar1 + -0x28);
        *(undefined2 *)(puVar1 + 0xc) = *(undefined2 *)(puVar1 + -0x28);
        puVar1[0x16] = puVar1[-0x1e];
        *(undefined4 *)(puVar1 + 0x18) = *(undefined4 *)(puVar1 + -0x1c);
        *(undefined4 *)(puVar1 + 0x1c) = *(undefined4 *)(puVar1 + -0x18);
        *(undefined4 *)(puVar1 + 0x20) = *(undefined4 *)(puVar1 + -0x14);
        *(undefined4 *)(puVar1 + 0x24) = *(undefined4 *)(puVar1 + -0x10);
        *(undefined4 *)(puVar1 + 0x28) = *(undefined4 *)(puVar1 + -0xc);
        *(undefined4 *)(puVar1 + 0x2c) = *(undefined4 *)(puVar1 + -8);
        *(undefined4 *)(puVar1 + 0x30) = *(undefined4 *)(puVar1 + -4);
        iVar4 = fn_006f0908(local_2c,uVar5);
        puVar1 = puVar1 + -0x34;
      }
      fn_006565e0(puVar1,uVar5);
    }
    else {
      fn_007a1c04(param_1,puVar2,puVar2 + 0x34);
      fn_006565e0(param_1,auStack_98);
    }
  }
  return puVar3;
}



void fn_007a53b4(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  puVar1 = param_1;
  if (param_1 == param_2) {
    return;
  }
  do {
    while( true ) {
      puVar1 = puVar1 + 7;
      if (puVar1 == param_2) {
        return;
      }
      uVar5 = *puVar1;
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      uVar10 = puVar1[4];
      uVar11 = puVar1[5];
      uVar12 = puVar1[6];
      if ((uVar5 == 0) || ((*param_1 != 0 && (uVar5 == 0 || *param_1 <= uVar5)))) break;
      puVar3 = puVar1 + 7;
      puVar2 = puVar1;
      if (param_1 < puVar1) {
        uVar13 = (int)puVar1 - (int)param_1;
        if (0 < (int)uVar13) {
          iVar6 = (int)((longlong)(int)uVar13 * -0x6db6db6d + ((ulonglong)uVar13 << 0x20) >> 0x20);
          if (((iVar6 >> 4) - (iVar6 >> 0x1f) & 1U) != 0) {
            puVar2 = puVar1 + -7;
            *puVar1 = *puVar2;
            puVar1[1] = puVar1[-6];
            puVar1[2] = puVar1[-5];
            puVar1[3] = puVar1[-4];
            puVar1[4] = puVar1[-3];
            puVar1[5] = puVar1[-2];
            puVar1[6] = puVar1[-1];
            puVar3 = puVar1;
          }
          iVar6 = (int)((longlong)(int)uVar13 * -0x6db6db6d + ((ulonglong)uVar13 << 0x20) >> 0x20);
          for (iVar6 = (iVar6 >> 4) - (iVar6 >> 0x1f) >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
            uVar13 = puVar2[-6];
            uVar14 = puVar2[-5];
            uVar15 = puVar2[-4];
            uVar16 = puVar2[-3];
            uVar17 = puVar2[-2];
            uVar18 = puVar2[-1];
            puVar3[-7] = puVar2[-7];
            puVar3[-6] = uVar13;
            puVar3[-5] = uVar14;
            puVar3[-4] = uVar15;
            puVar3[-3] = uVar16;
            puVar3[-2] = uVar17;
            puVar3[-1] = uVar18;
            uVar13 = puVar2[-0xd];
            uVar14 = puVar2[-0xc];
            uVar15 = puVar2[-0xb];
            uVar16 = puVar2[-10];
            uVar17 = puVar2[-9];
            uVar18 = puVar2[-8];
            puVar3[-0xe] = puVar2[-0xe];
            puVar3[-0xd] = uVar13;
            puVar3[-0xc] = uVar14;
            puVar3[-0xb] = uVar15;
            puVar3[-10] = uVar16;
            puVar3[-9] = uVar17;
            puVar3[-8] = uVar18;
            puVar2 = puVar2 + -0xe;
            puVar3 = puVar3 + -0xe;
          }
        }
      }
      else {
        while (param_1 != puVar2) {
          uVar13 = puVar2[-6];
          uVar14 = puVar2[-5];
          uVar15 = puVar2[-4];
          uVar16 = puVar2[-3];
          uVar17 = puVar2[-2];
          uVar18 = puVar2[-1];
          puVar3[-7] = puVar2[-7];
          puVar3[-6] = uVar13;
          puVar3[-5] = uVar14;
          puVar3[-4] = uVar15;
          puVar3[-3] = uVar16;
          puVar3[-2] = uVar17;
          puVar3[-1] = uVar18;
          puVar3 = puVar3 + -7;
          puVar2 = puVar2 + -7;
        }
      }
      *param_1 = uVar5;
      param_1[1] = uVar7;
      param_1[2] = uVar8;
      param_1[3] = uVar9;
      param_1[4] = uVar10;
      param_1[5] = uVar11;
      param_1[6] = uVar12;
    }
    puVar3 = puVar1 + -7;
    puVar2 = puVar1;
    if ((uVar5 != 0) && ((puVar4 = puVar1, *puVar3 == 0 || (uVar5 != 0 && uVar5 < *puVar3)))) {
      do {
        puVar2 = puVar3;
        uVar13 = puVar2[1];
        uVar14 = puVar2[2];
        uVar15 = puVar2[3];
        uVar16 = puVar2[4];
        uVar17 = puVar2[5];
        uVar18 = puVar2[6];
        *puVar4 = *puVar2;
        puVar4[1] = uVar13;
        puVar4[2] = uVar14;
        puVar4[3] = uVar15;
        puVar4[4] = uVar16;
        puVar4[5] = uVar17;
        puVar4[6] = uVar18;
        puVar3 = puVar2 + -7;
        if (uVar5 == 0) break;
        puVar4 = puVar2;
      } while ((*puVar3 == 0) || (uVar5 != 0 && uVar5 < *puVar3));
    }
    *puVar2 = uVar5;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar2[4] = uVar10;
    puVar2[5] = uVar11;
    puVar2[6] = uVar12;
  } while( true );
}


