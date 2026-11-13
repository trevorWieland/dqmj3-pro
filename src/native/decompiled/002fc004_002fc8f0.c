#include "002fc004_002fc8f0.h"



void fn_002fc8f0(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [12];
  
  uVar6 = *(undefined4 *)(DAT_008977e0 + 0xa8);
  fn_002fd648(param_1,(int)(short)uVar6);
  pcVar1 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar6);
  uVar2 = fn_006f7a9c(DAT_008977e0);
  uVar2 = fn_00278600(uVar2,(int)*pcVar1);
  uVar3 = fn_006f7a9c(DAT_008977e0);
  iVar4 = fn_00279bbc(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = fn_00145b00(8,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar4 != 0) {
      piVar5 = (int *)fn_00692eac();
    }
    uVar3 = fn_006f7a9c(DAT_008977e0);
    uVar3 = fn_006b7664(uVar3,uVar2);
    fn_00118624(auStack_28,uVar3);
    fn_00102908(auStack_38,0x10,(char *)&DAT_002fca28,pcVar1);
    iVar4 = fn_00176d74(auStack_28,auStack_38);
    if (iVar4 != 0) {
      piVar5[1] = iVar4;
      fn_00183718(&local_54,piVar5,&DAT_002fca38);
      local_70 = local_54;
      uStack_6c = uStack_50;
      uStack_68 = uStack_4c;
      uStack_64 = uStack_48;
      uStack_60 = uStack_44;
      uStack_5c = uStack_40;
      uStack_58 = uStack_3c;
      fn_0060e218(param_1 + 0x28,&local_70,uVar6);
    }
    uVar3 = fn_006f7a9c(DAT_008977e0);
    fn_00279ae4(uVar3,uVar2);
    fn_005f5d3c(auStack_28);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
  }
  return;
}



void fn_002fc664(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  
  uVar3 = fn_006f7a70(DAT_008977e0);
  uVar4 = fn_006f7a9c(DAT_008977e0);
  iVar10 = 0;
  iVar2 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28)) / 0x24;
  if (0 < iVar2) {
    do {
      psVar9 = (short *)(*(int *)(param_1 + 0x28) + iVar10 * 0x24);
      if (psVar9[4] == param_2) {
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0x44)) {
          do {
            iVar8 = *(int *)(param_1 + 0x40) + iVar5 * 0x1c;
            if (*(short *)(iVar8 + 0x10) == psVar9[5]) {
              psVar9[1] = *(short *)(iVar8 + 0x14);
              *(undefined4 *)(psVar9 + 2) = *(undefined4 *)(iVar8 + 0x18);
              *psVar9 = *(short *)(iVar8 + 0x12);
              break;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_1 + 0x44));
        }
        if (*psVar9 != -1) {
          iVar5 = fn_006b523c(*(undefined4 *)(DAT_00897804 + 0x1c),psVar9[5]);
          if (iVar5 != 0) {
            if ((psVar9[1] == 0x3e9) ||
               ((sVar1 = *psVar9, sVar1 != 6 && sVar1 != 7 &&
                ((sVar1 != 8 && sVar1 != 9) && sVar1 != 0xc)))) goto LAB_002fc844;
            psVar9[1] = 0;
            psVar9[2] = 0;
            psVar9[3] = 0;
          }
          iVar5 = (int)*psVar9;
          if (iVar5 == 10) {
            piVar6 = (int *)fn_001b57b8(10);
          }
          else {
            iVar8 = fn_00145b00(0x174,&DAT_00812c8c);
            piVar6 = (int *)0x0;
            if (iVar8 != 0) {
              piVar6 = (int *)fn_00693f00(iVar8,iVar5);
            }
          }
          uVar7 = fn_006b770c(uVar4,iVar5);
          (**(code **)(*piVar6 + 0xa0))(piVar6,uVar7);
          (**(code **)(*piVar6 + 0xd0))(piVar6,psVar9 + 6);
          (**(code **)(*piVar6 + 0x14))(piVar6,psVar9 + 0xc);
          (**(code **)(*piVar6 + 0x124))(piVar6,(int)psVar9[1],(int)psVar9[2]);
          (**(code **)(*piVar6 + 300))(piVar6,psVar9[5]);
          *(undefined2 *)(piVar6 + 0x5c) = 1;
          fn_0030208c(uVar3,piVar6);
        }
      }
LAB_002fc844:
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar2);
  }
  return;
}



int fn_002fc4b4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = fn_006f6fc4(*(undefined4 *)(DAT_008977e0 + 0x40));
  if (((iVar1 != 0) && (*(char *)(*(int *)(*(int *)(DAT_008977e0 + 0x40) + 4) + 0x20) != '\x01')) &&
     (iVar1 = fn_006c89fc(), iVar1 == 3)) {
    iVar4 = 0x38e38e39;
    iVar1 = (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) / 0x24;
    if (0 < iVar1) {
      iVar4 = *(int *)(param_1 + 0x34);
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = iVar4 + iVar2 * 0x24;
        bVar5 = *(short *)(iVar3 + 0x18) == *(short *)(DAT_008977e0 + 0xa8);
        if (bVar5) {
          iVar3 = *(int *)(iVar3 + 0x1c);
        }
        if (bVar5 && iVar3 == param_2) {
          return iVar2;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
  }
  return -1;
}



void fn_002fc3c4(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = fn_006f6fc4(*(undefined4 *)(DAT_008977e0 + 0x40));
  if (((iVar2 != 0) && (*(char *)(*(int *)(*(int *)(DAT_008977e0 + 0x40) + 4) + 0x20) != '\x01')) &&
     (iVar2 = fn_006c89fc(), iVar2 == 3)) {
    sVar1 = *(short *)(DAT_008977e0 + 0xa8);
    iVar2 = (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) / 0x24;
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar4 = iVar3 + 1;
        iVar5 = *(int *)(param_1 + 0x34) + iVar3 * 0x24;
        iVar3 = (int)*(short *)(iVar5 + 0x18);
        bVar6 = iVar3 == sVar1;
        if (bVar6) {
          iVar3 = *(int *)(iVar5 + 0x1c);
        }
        if (bVar6 && iVar3 == param_2) {
          *(undefined1 *)(iVar5 + 0x20) = 1;
        }
        iVar3 = iVar4;
      } while (iVar4 < iVar2);
    }
  }
  return;
}



undefined4 * fn_002fc040(undefined4 *param_1)

{
  fn_002feef8(*param_1);
  return param_1;
}



undefined4 * fn_002fc004(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
  }
  *param_1 = puVar1;
  return param_1;
}


