#include "006bba1c_006caaf8.h"



void fn_006caaf8(void)

{
  fn_006b6250(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006caad8(void)

{
  fn_006b6440(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006caa04(void)

{
  fn_006b641c(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006ca9d0(void)

{
  fn_006b638c(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



char * fn_006c9998(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  uVar1 = DAT_00897800;
  iVar2 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 9));
  switch(*(undefined1 *)(iVar2 + 7)) {
  case 0:
    uVar3 = fn_0015b064((int)*(short *)(*(int *)(param_1 + 0x24) +
                                        **(short **)(param_1 + 0x54) * 0x40));
    fn_0016ba84(uVar1,uVar3);
    pcVar4 = (char *)fn_0016ba34(uVar1,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_006c9b1c,0);
    return pcVar4;
  case 1:
    uVar3 = fn_0015b064((int)*(short *)(param_1 + 0x4c));
    fn_0016ba84(uVar1,uVar3);
    iVar2 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 9));
    fn_0016bad4(uVar1,(int)*(short *)(iVar2 + 8));
    pcVar4 = (char *)fn_0016ba34(uVar1,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_006c9b2c,0);
    return pcVar4;
  case 2:
    pcVar4 = (char *)fn_0016ba34(uVar1,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_006c9b38,0);
    return pcVar4;
  case 3:
    iVar2 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 9));
    fn_0016bad4(uVar1,(int)*(short *)(iVar2 + 8));
    pcVar4 = (char *)fn_0016ba34(uVar1,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_006c9b44,0);
    return pcVar4;
  case 4:
    iVar2 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 9));
    fn_0016bad4(uVar1,(int)*(short *)(iVar2 + 8));
    pcVar4 = (char *)fn_0016ba34(uVar1,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_006c9b58,0);
    return pcVar4;
  case 5:
    pcVar4 = (char *)fn_0016ba34(uVar1,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_006c9b68,0);
    return pcVar4;
  case 6:
    pcVar4 = (char *)fn_0016ba34(uVar1,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_006c9b74,0);
    return pcVar4;
  default:
    return "";
  }
}



void fn_006c969c(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  puVar5 = (undefined1 *)fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 8));
  uVar1 = *puVar5;
  puVar5 = (undefined1 *)fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 9));
  uVar2 = *puVar5;
  puVar5 = (undefined1 *)fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 10));
  uVar4 = DAT_00897800;
  uVar3 = *puVar5;
  uVar6 = fn_00230374(uVar1);
  uVar7 = fn_00230374(uVar2);
  uVar8 = fn_00230374(uVar3);
  fn_0015b0dc(uVar6);
  fn_0015b0dc(uVar7);
  fn_0015b0dc(uVar8);
  fn_0016ba34(uVar4,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_006c9738,0);
  return;
}



void fn_006c87cc(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  puVar5 = (undefined1 *)fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 8));
  uVar1 = *puVar5;
  puVar5 = (undefined1 *)fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 9));
  uVar2 = *puVar5;
  puVar5 = (undefined1 *)fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 10));
  uVar4 = DAT_00897800;
  uVar3 = *puVar5;
  uVar6 = fn_00230374(uVar1);
  uVar7 = fn_00230374(uVar2);
  uVar8 = fn_00230374(uVar3);
  fn_0015b0dc(uVar6);
  fn_0015b0dc(uVar7);
  fn_0015b0dc(uVar8);
  fn_0016ba34(uVar4,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_006c8868,0);
  return;
}



undefined1 * fn_006be218(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_30 [4];
  undefined1 local_2c;
  undefined1 auStack_28 [12];
  
  fn_003c9218(auStack_30,*(undefined1 *)(param_1 + 0x10));
  iVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 8));
  *param_2 = 0;
  param_2[0x25c] = 3;
  uVar5 = fn_006c7fd0(auStack_30);
  *(undefined4 *)(param_2 + 4) = uVar5;
  uVar2 = fn_006c7e54(auStack_30);
  param_2[0x240] = uVar2;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
  iVar6 = fn_0020bbc4(auStack_28,iVar4);
  if (iVar6 != 0) {
    iVar6 = iVar6 + 4;
  }
  uVar3 = fn_006bfda8(iVar6);
  *(undefined2 *)(param_2 + 0xc) = uVar3;
  *(undefined2 *)(param_2 + 0xe) = 0;
  *(undefined2 *)(param_2 + 0x10) = 0;
  *(undefined2 *)(param_2 + 0x12) = 0;
  fn_001003e0(param_2 + 0x1e0,*(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4));
  param_2[0x250] = 0x5a;
  param_2[0x251] = 0xff;
  uVar5 = fn_006c7df8(auStack_30);
  *(undefined4 *)(param_2 + 0x5c) = uVar5;
  param_2[0x24f] = 3;
  param_2[0x256] = local_2c;
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(iVar4 + 0x72);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(iVar4 + 0x76);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(iVar4 + 0x7a);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(iVar4 + 0x7e);
  *(undefined2 *)(param_2 + 0x24) = *(undefined2 *)(iVar4 + 0x82);
  fn_00176fb0(param_2 + 0x60,*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0xc4);
  iVar4 = 0;
  do {
    uVar2 = fn_006c7f68(auStack_30,iVar4);
    param_2[iVar4 * 4 + 0x245] = uVar2;
    uVar2 = fn_006c7f9c(auStack_30,iVar4);
    param_2[iVar4 * 4 + 0x244] = uVar2;
    uVar3 = fn_006c7e20(auStack_30,iVar4);
    *(undefined2 *)(param_2 + iVar4 * 4 + 0x242) = uVar3;
    uVar5 = fn_006c7ec4(auStack_30,iVar4);
    fn_00101144(param_2 + iVar4 * 0x18 + 0x1f8,uVar5,8);
    iVar6 = 0;
    *(undefined2 *)(param_2 + iVar4 * 0x18 + 0x208) = 0;
    do {
      uVar2 = fn_00294610(iVar4 + 1);
      iVar1 = iVar6 + (iVar4 + 1) * 0x60;
      iVar6 = iVar6 + 1;
      param_2[iVar1 + 0x60] = uVar2;
    } while (iVar6 < 5);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  return auStack_30;
}



void fn_006bd500(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    fn_006a9878(*(undefined4 *)(param_1 + 0x14),param_3);
    fn_006a9878(param_2,param_3);
  }
  return;
}



void fn_006bba1c(int param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  short *psVar11;
  uint uVar12;
  int iVar13;
  short local_54 [16];
  int iStack_34;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar12 = 0;
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3 != 0) {
    do {
      local_54[0] = *(short *)(*(int *)(param_1 + 4) + uVar12 * 8);
      iVar3 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
      if (iVar3 == 10) {
        pcVar4 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),
                                      *(undefined4 *)(DAT_008977e0 + 0xa8));
        sVar2 = local_54[0];
        if (*pcVar4 == 'C') {
          iVar3 = -1;
          pcVar4 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),
                                        *(undefined4 *)(DAT_008977e0 + 0xa8));
          pcVar10 = &DAT_00891f38;
          iVar5 = 0;
          iVar6 = 4;
          do {
            pcVar1 = pcVar10 + 0xc;
            pcVar10 = pcVar10 + 0x18;
            if (*pcVar1 == *pcVar4) {
              iVar3 = iVar5;
            }
            if (*pcVar10 == *pcVar4) {
              iVar3 = iVar5 + 1;
            }
            iVar6 = iVar6 + -1;
            iVar5 = iVar5 + 2;
          } while (iVar6 != 0);
          if (iVar3 == -1) {
            if ((sVar2 == 1 || sVar2 == 4) || (sVar2 == 7 || sVar2 == 0xd)) goto LAB_006bbd78;
          }
          else {
            iVar3 = iVar3 * 0xc;
            uVar8 = *(uint *)(iVar3 + 0x891f4c);
            if ((int)uVar8 < 1) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar8 & 1;
              iVar5 = 0;
              if (uVar9 != 0) {
                iVar5 = *(int *)(iVar3 + 0x891f48);
              }
              iVar6 = 0;
              if (uVar9 != 0) {
                do {
                  if (*(short *)(iVar5 + iVar6 * 2) == sVar2) goto LAB_006bbd78;
                  iVar6 = iVar6 + 1;
                } while (iVar6 < (int)uVar9);
              }
            }
            if ((int)uVar9 < (int)uVar8) {
              do {
                if ((*(short *)(*(int *)(iVar3 + 0x891f48) + uVar9 * 2) == sVar2) ||
                   (*(short *)(*(int *)(iVar3 + 0x891f48) + uVar9 * 2 + 2) == sVar2))
                goto LAB_006bbd78;
                uVar9 = uVar9 + 2;
              } while ((int)uVar9 < (int)uVar8);
            }
          }
        }
LAB_006bbb90:
        iVar3 = fn_006f7a0c(DAT_008977e0);
        iVar3 = fn_006c3a84(*(undefined4 *)(iVar3 + 0x30));
        if (*(char *)(*(int *)(param_1 + 4) + uVar12 * 8 + iVar3 + 4) != '\0') {
          iVar3 = fn_006f7a0c(DAT_008977e0);
          iVar3 = fn_006c3a70(*(undefined4 *)(iVar3 + 0x30));
          if ((*(char *)(iVar3 + *(int *)(param_1 + 4) + uVar12 * 8 + 6) != '\0') &&
             (iVar6 = fn_00163d44(0x1f), iVar5 = local_28, iVar3 = local_2c,
             *(short *)(*(int *)(param_1 + 4) + uVar12 * 8 + 2) <= iVar6)) {
            iVar13 = (int)local_54[0];
            uVar7 = fn_002ea524(iVar13);
            iVar6 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
            if (iVar6 != 3) {
              if (iVar6 == 4) {
                if (iVar5 == 0) {
                  uVar8 = fn_00661714(uVar7);
                  uVar9 = fn_006bbda8(param_1);
                  if (uVar8 < uVar9) goto LAB_006bbd44;
                }
                else {
                  uVar8 = fn_00661714(uVar7);
                  uVar9 = fn_006bbda8(param_1);
                  if (uVar9 <= uVar8) goto LAB_006bbd44;
                }
                goto LAB_006bbd78;
              }
              if (iVar6 == 5) {
                if (iVar5 == 0) {
                  uVar8 = fn_00661714(uVar7);
                  uVar9 = fn_006bbda8(param_1);
                  if (uVar9 <= uVar8) goto LAB_006bbd44;
                }
                else {
                  uVar8 = fn_00661714(uVar7);
                  uVar9 = fn_006bbda8(param_1);
                  if (uVar8 < uVar9) goto LAB_006bbd44;
                }
                goto LAB_006bbd78;
              }
              if (iVar6 == 6 && iVar3 == 0) {
                fn_002ea524(iVar13);
                uVar7 = fn_00237090();
                iVar3 = fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24),uVar7);
                if (iVar3 == 1) goto LAB_006bbd78;
              }
            }
LAB_006bbd44:
            psVar11 = *(short **)(local_30 + 4);
            if (psVar11 == *(short **)(local_30 + 8)) {
              fn_0079e460(local_30,psVar11,local_54);
            }
            else {
              *(short **)(local_30 + 4) = psVar11 + 1;
              if (psVar11 != (short *)0x0) {
                *psVar11 = local_54[0];
              }
            }
          }
        }
      }
      else {
        fn_002ea524((int)local_54[0]);
        iVar3 = fn_00661094();
        if (iVar3 != 8) goto LAB_006bbb90;
      }
LAB_006bbd78:
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3));
  }
  return;
}


