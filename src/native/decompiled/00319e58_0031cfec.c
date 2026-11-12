#include "00319e58_0031cfec.h"



void fn_0031cfec(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00230a84(param_2,0);
  *(byte *)(*(int *)(param_1 + 0x24) + 0x44) =
       iVar1 != 0 | *(byte *)(*(int *)(param_1 + 0x24) + 0x44) & 0xfe;
  if (iVar1 != 0) {
    fn_00190d50(*(undefined4 *)(param_1 + 0x24));
    return;
  }
  return;
}



void fn_0031c810(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  iVar2 = fn_00689210(uVar1,(char *)&DAT_008634a0);
  piVar11 = *(int **)(iVar2 + 0x14);
  if (piVar11 != (int *)(iVar2 + 0x14)) {
    do {
      piVar3 = piVar11 + -1;
      piVar11 = (int *)*piVar11;
      fn_00688880(piVar3);
    } while (piVar11 != (int *)(iVar2 + 0x14));
  }
  bVar9 = 0;
  if (1 < param_3) {
    iVar4 = fn_00688920(uVar1,(char *)&DAT_00863424);
    iVar5 = fn_00688920(uVar1,(char *)&DAT_008633e8);
    iVar6 = fn_00688920(uVar1,(char *)&DAT_0086343c);
    iVar7 = fn_00688920(uVar1,(char *)&DAT_00863400);
    fVar15 = *(float *)(iVar6 + 0x3c);
    fVar14 = 0.5;
    fVar13 = 0.0;
    fVar16 = *(float *)(iVar4 + 0x3c);
    iVar12 = 0;
    do {
      fVar13 = fVar13 + fVar16 * fVar14;
      if (iVar12 == param_2) {
        iVar8 = iVar4;
      }
      else {
        iVar8 = iVar5;
      }
      iVar8 = fn_006892dc(iVar8);
      *(float *)(iVar8 + 0x1c) = fVar13;
      *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xef | 0x10;
      iVar8 = fn_0018a69c(iVar2,iVar8);
      fVar13 = fVar13 + fVar16 * fVar14;
      if ((iVar12 == param_2) && (1 < param_5)) {
        iVar10 = 0;
        do {
          if (iVar10 == param_4) {
            iVar8 = iVar6;
          }
          fVar13 = fVar13 + fVar15 * fVar14;
          if (iVar10 != param_4) {
            iVar8 = iVar7;
          }
          iVar8 = fn_006892dc(iVar8);
          *(float *)(iVar8 + 0x1c) = fVar13;
          *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xef | 0x10;
          iVar8 = fn_0018a69c(iVar2,iVar8);
          fVar13 = fVar13 + fVar15 * fVar14;
          iVar10 = iVar10 + 1;
        } while (iVar10 < param_5);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_3);
    *(float *)(iVar2 + 0x1c) = fVar13 * -0.5;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
    iVar2 = fn_0068967c(uVar1,(char *)&DAT_0031ca14);
    bVar9 = 1;
    *(float *)(iVar2 + 0x3c) = fVar13 + 52.0;
    *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar2 + 0x40);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  }
  iVar2 = fn_00689210(uVar1,(char *)&DAT_0031ca28);
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | bVar9;
  iVar2 = fn_00689210(uVar1,(char *)&DAT_0031ca34);
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | bVar9;
  return;
}



void fn_0031c758(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_0068897c(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c780);
  uVar2 = fn_0022f5d8();
  fn_00190d50(uVar1,uVar2);
  return;
}



void fn_0031c5b8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  char *apcStack_30 [4];
  char *local_20;
  
  iVar1 = fn_00154ac8(0x3e);
  if (iVar1 == 0) {
    iVar1 = fn_00688920(*(undefined4 *)(param_1 + 8),&DAT_0031c6dc);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    iVar1 = fn_0068897c(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c6e4);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    return;
  }
  iVar1 = fn_001a46f4(param_2);
  bVar6 = iVar1 != 0;
  iVar1 = fn_00688920(*(undefined4 *)(param_1 + 8),&DAT_0031c6dc);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | bVar6;
  iVar1 = fn_0068897c(*(undefined4 *)(param_1 + 8),(char *)&DAT_0031c6e4);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | bVar6;
  if (bVar6) {
    local_20 = (char *)&DAT_00863418;
    apcStack_30[0] = "riku";
    apcStack_30[1] = (char *)&DAT_00863498;
    apcStack_30[2] = (char *)&DAT_00863488;
    apcStack_30[3] = "koukuu";
    if (param_3 == 0 && param_4 == 0) {
      iVar3 = fn_00242b6c(param_2);
      if ((iVar3 == 2) && (iVar4 = fn_00154ac8(0x3f), iVar4 == 0)) {
        pcVar5 = local_20;
      }
      else {
        pcVar5 = apcStack_30[iVar3];
      }
      uVar2 = fn_0022f750(pcVar5);
    }
    else {
      uVar2 = fn_0022f750((char *)&DAT_00863418);
    }
    fn_00190d50(iVar1,uVar2);
  }
  return;
}



void fn_0031bf48(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  param_1 = param_1 + param_2 * 4;
  iVar1 = *(int *)(param_1 + 0x14);
  bVar4 = *(byte *)(iVar1 + 0x44) & 0xfe;
  if (param_3 == 0) {
    *(byte *)(iVar1 + 0x44) = bVar4;
  }
  else {
    *(byte *)(iVar1 + 0x44) = bVar4 | 1;
    fn_00688a74(*(undefined4 *)(param_1 + 0x1c));
    if (param_5 == 0) {
      *(byte *)(*(int *)(param_1 + 0x24) + 0x44) =
           *(byte *)(*(int *)(param_1 + 0x24) + 0x44) & 0xfe | 1;
      uVar2 = fn_00231d50(param_3);
      fn_00190d50(*(undefined4 *)(param_1 + 0x24),uVar2);
      uVar3 = fn_0068f6a8(param_3);
      if (uVar3 <= param_4) {
        uVar2 = fn_00231ca0(0x25,0);
        fn_00190d50(*(undefined4 *)(param_1 + 0x1c),uVar2);
        return;
      }
    }
    else {
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      fn_0022ef60(&local_30,9);
      fn_00190d50(*(undefined4 *)(param_1 + 0x24),&local_30);
    }
  }
  return;
}



void fn_00319e58(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00289500(0xae);
  if (iVar1 == 0) {
    fn_0031a2e4(param_1,0xae,0);
  }
  fn_00319fdc(param_1);
  fn_0031a55c(param_1,0x61,99,fn_006108dc);
  fn_0031a55c(param_1,100,0x66,fn_006106f8);
  fn_0031a55c(param_1,0x67,0x69,fn_006108b4);
  fn_0031a55c(param_1,0xb8,0xba,fn_00610afc);
  fn_0031a55c(param_1,0xbb,0xbd,fn_00610b8c);
  fn_0031a55c(param_1,0x6a,0x6c,fn_0061088c);
  fn_0031a55c(param_1,0x79,0x7b,fn_00610cb4);
  fn_0031a55c(param_1,0x7f,0x84,fn_00610c0c);
  fn_0031a55c(param_1,0x91,0x96,fn_00610eec);
  fn_0031a55c(param_1,0x97,0x9c,fn_00610f64);
  fn_0031a55c(param_1,0x8b,0x8d,fn_00610c64);
  fn_0031a55c(param_1,0x8e,0x90,fn_00610ec4);
  fn_0031a55c(param_1,0x9d,0x9f,fn_00610770);
  fn_0031a55c(param_1,0xd3,0xd5,fn_00610a48);
  return;
}



void fn_0031a55c(int param_1,uint param_2,int param_3,code *param_4)

{
  int iVar1;
  uint uVar2;
  
  for (; (int)param_2 <= param_3; param_2 = param_2 + 1) {
    uVar2 = param_2 & 0xff;
    iVar1 = fn_006a7b08(uVar2);
    if (((iVar1 != 0) && (iVar1 = fn_00289500(uVar2), iVar1 == 0)) &&
       (iVar1 = (*param_4)(uVar2,param_1,*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
      fn_0031a2e4(param_1,uVar2,1);
    }
  }
  return;
}



void fn_00319fdc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined4 local_28;
  
  local_28 = param_4;
  iVar2 = fn_00289500(1);
  if (iVar2 == 0) {
    iVar2 = fn_006a7ab8(1);
    iVar3 = fn_006cafbc(*(undefined4 *)(param_1 + 8),1);
    if (iVar2 <= iVar3) {
      fn_0031a2e4(param_1,1);
    }
  }
  uVar5 = 0;
  local_28 = 0x5040302;
  do {
    iVar2 = fn_00289500(*(undefined1 *)((int)&local_28 + uVar5));
    if (iVar2 == 0) {
      iVar2 = fn_006cafe4(*(undefined4 *)(param_1 + 8));
      iVar3 = fn_006a7ab8(*(undefined1 *)((int)&local_28 + uVar5));
      if (iVar3 <= iVar2) {
        fn_0031a2e4(param_1,*(undefined1 *)((int)&local_28 + uVar5),1);
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  iVar2 = fn_00289500(6);
  if (iVar2 == 0) {
    iVar2 = fn_006cb030(*(undefined4 *)(param_1 + 8),1);
    iVar3 = fn_006cafbc(*(undefined4 *)(param_1 + 8),1);
    if (iVar2 <= iVar3) {
      fn_0031a2e4(param_1,6,1);
    }
  }
  uVar5 = 0;
  do {
    uVar1 = (&DAT_007c32c8)[uVar5];
    iVar2 = fn_00289500(uVar1);
    if (iVar2 == 0) {
      iVar3 = (int)((longlong)(int)uVar5 * -0x6db6db6d + ((ulonglong)uVar5 << 0x20) >> 0x20);
      iVar2 = iVar3 >> 2;
      bVar7 = (iVar2 - (iVar3 >> 0x1f)) * -7 + uVar5 != 0;
      if (bVar7) {
        iVar2 = 0;
      }
      iVar3 = (int)((longlong)(int)uVar5 * -0x6db6db6d + ((ulonglong)uVar5 << 0x20) >> 0x20);
      if (!bVar7) {
        iVar2 = 1;
      }
      iVar4 = (int)((longlong)(int)uVar5 * -0x6db6db6d + ((ulonglong)uVar5 << 0x20) >> 0x20);
      uVar6 = ((iVar4 >> 2) - (iVar4 >> 0x1f)) + 1U & 0xff;
      if (((iVar3 >> 2) - (iVar3 >> 0x1f)) * -7 + uVar5 == 6) {
        iVar2 = fn_006cafd0(*(undefined4 *)(param_1 + 8),uVar6,1);
        iVar3 = fn_006caee4(*(undefined4 *)(param_1 + 8),uVar6,1);
        if (iVar2 <= iVar3) goto LAB_0031a1b0;
      }
      else if (iVar2 == 0) {
        iVar2 = fn_006a7ab8(uVar1);
        iVar3 = fn_006caf20(*(undefined4 *)(param_1 + 8),uVar6);
        if (iVar2 <= iVar3) goto LAB_0031a1b0;
      }
      else {
        iVar2 = fn_006a7ab8(uVar1);
        iVar3 = fn_006caee4(*(undefined4 *)(param_1 + 8),uVar6,1);
        if (iVar2 <= iVar3) {
LAB_0031a1b0:
          fn_0031a2e4(param_1,uVar1,1);
        }
      }
    }
    uVar5 = uVar5 + 1;
    if (0x3e < (int)uVar5) {
      return;
    }
  } while( true );
}


