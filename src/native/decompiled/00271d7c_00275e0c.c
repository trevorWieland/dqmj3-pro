#include "00271d7c_00275e0c.h"



void fn_00275e0c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (param_2 == 0) {
    fn_00271e64(param_1,(char *)&DAT_00275f1c,0);
    return;
  }
  fn_00271e64(param_1,(char *)&DAT_00275f1c,1);
  iVar4 = 0;
  uVar7 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar1 = fn_006b83e4(uVar7);
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = fn_0028b0a0(uVar7,iVar6);
      if (0 < *(short *)(iVar2 + 0x22)) {
        iVar4 = (int)(short)(*(short *)(iVar2 + 0x26) + (short)iVar4);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  iVar1 = fn_00300f74(((int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1e)) >> 2) * param_2,param_3);
  iVar1 = iVar1 * 10;
  if (iVar1 < 0xc9) {
    pcVar5 = "analyze_scout_05";
  }
  else if (iVar1 < 0x12d) {
    pcVar5 = "analyze_scout_04";
  }
  else if (iVar1 < 0x191) {
    pcVar5 = "analyze_scout_03";
  }
  else if (iVar1 < 0x1f5) {
    pcVar5 = "analyze_scout_02";
  }
  else {
    pcVar5 = (char *)&DAT_00275f7c;
  }
  uVar7 = fn_0026fcd0(param_1,(char *)&DAT_00275f90);
  uVar3 = fn_0016ba34(DAT_00897800,DAT_008987a4,pcVar5,0);
  fn_00190d50(uVar7,uVar3);
  return;
}



void fn_00273ff0(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  do {
    iVar2 = fn_0026fcd0(param_1,(char *)&DAT_002741b0,iVar6);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    iVar2 = fn_0026fcd0(param_1,(char *)&DAT_002741c0,iVar6);
    iVar6 = iVar6 + 1;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  } while (iVar6 < 3);
  sVar1 = fn_002aae80(param_2);
  iVar6 = fn_00661094((int)sVar1);
  if ((iVar6 == 8) || (**(int **)(DAT_008977e0 + 0x40) != 0)) {
    iVar6 = fn_0026fcd0(param_1,(char *)&DAT_002741e0);
    *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe | 1;
    iVar6 = fn_0026fcd0(param_1,(char *)&DAT_002741f0);
    *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe | 1;
    uVar3 = fn_0016ba34(DAT_00897800,DAT_008987a4,(char *)&DAT_00274204,0);
    fn_00190d50(iVar6,uVar3);
    return;
  }
  iVar6 = fn_002aaa20(param_2);
  iVar2 = 0;
  if (0 < iVar6) {
    do {
      iVar4 = fn_002aa814(param_2,iVar2);
      if (iVar4 != 0) {
        iVar5 = fn_0026fcd0(param_1,(char *)&DAT_002741b0,iVar2);
        *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
        iVar5 = fn_0026fcd0(param_1,(char *)&DAT_002741c0,iVar2);
        *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
        iVar4 = fn_00231d50((int)(short)iVar4);
        uVar3 = DAT_00897800;
        if (param_3 != 0) {
          fn_0015b0dc();
        }
        if (iVar4 != 0) {
          fn_0015b0dc(iVar4);
        }
        uVar3 = fn_0016ba34(uVar3,DAT_008987a4,(char *)&DAT_0027421c,0);
        fn_00190d50(iVar5,uVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar6);
  }
  return;
}



undefined1 * fn_00273da8(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  short local_58 [16];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined4 local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar7 = 0;
  local_30 = param_1;
  iStack_2c = param_2;
  iStack_28 = param_3;
  do {
    iVar2 = fn_0026fcd0(local_30,(char *)&DAT_00273f78,iVar7);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    iVar2 = fn_0026fcd0(local_30,(char *)&DAT_00273f88,iVar7);
    iVar7 = iVar7 + 1;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  } while (iVar7 < 3);
  iVar7 = fn_00661094((int)*(short *)(param_2 + 0x1c));
  if (iVar7 == 8) {
    iVar7 = fn_0026fcd0(local_30,(char *)&DAT_00273fb4);
    *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xfe | 1;
    iVar7 = fn_0026fcd0(local_30,(char *)&DAT_00273fc4);
    *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xfe | 1;
    uVar5 = fn_0016ba34(DAT_00897800,DAT_008987a4,(char *)&DAT_00273fd8,0);
    puVar6 = (undefined1 *)fn_00190d50(iVar7,uVar5);
    return puVar6;
  }
  fn_0020bbc4(auStack_38,param_2);
  fn_006c02d4(auStack_34,local_58,7);
  iVar7 = fn_006bf148(auStack_34);
  iVar2 = 0;
  if (0 < iVar7) {
    do {
      sVar1 = local_58[iVar2 * 2];
      if (sVar1 != 0) {
        iVar3 = fn_0026fcd0(local_30,(char *)&DAT_00273f78,iVar2);
        *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
        iVar3 = fn_0026fcd0(local_30,(char *)&DAT_00273f88,iVar2);
        *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
        iVar4 = fn_00231d50((int)sVar1);
        uVar5 = DAT_00897800;
        if (param_3 != 0) {
          fn_0015b0dc();
        }
        if (iVar4 != 0) {
          fn_0015b0dc(iVar4);
        }
        uVar5 = fn_0016ba34(uVar5,DAT_008987a4,(char *)&DAT_00273fa4,0);
        fn_00190d50(iVar3,uVar5);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar7);
  }
  return auStack_38;
}



void fn_00273898(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float in_s0;
  float fVar5;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x7c))();
  (**(code **)(*piVar1 + 0x24))();
  fVar5 = 0.0;
  iVar2 = 0;
  if (in_s0 <= 0.0) {
LAB_00273904:
    iVar4 = 0;
  }
  else if ((int)in_s0 < 0x42c80000) {
    iVar4 = 2;
  }
  else {
    if (0x4395ffff < (int)in_s0) goto LAB_00273904;
    iVar4 = 1;
  }
  fn_002707b0(param_1 + 0x50,iVar4);
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x7c))();
  (**(code **)(*piVar1 + 0x28))();
  if (fVar5 < in_s0) {
    if ((int)in_s0 < 0x42480000) {
      iVar3 = 2;
      goto LAB_00273968;
    }
    if ((int)in_s0 < 0x42f00000) {
      iVar3 = 1;
      goto LAB_00273968;
    }
  }
  iVar3 = 0;
LAB_00273968:
  fn_002707b0(param_1 + 0x5c,iVar3);
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x7c))();
  (**(code **)(*piVar1 + 0x2c))();
  if (fVar5 < in_s0) {
    if ((int)in_s0 < 0x42480000) {
      iVar2 = 2;
    }
    else if ((int)in_s0 < 0x42f00000) {
      iVar2 = 1;
    }
  }
  fn_002707b0(param_1 + 0x68,iVar2);
  if ((iVar4 != 2 && iVar3 != 2) && iVar2 != 2) {
    if (*(int *)(param_1 + 0x4c) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    }
    return;
  }
  if (*(int *)(param_1 + 0x4c) == -1) {
    iVar2 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                         (char *)&DAT_00273a4c,*(undefined4 *)(param_1 + 0x14));
    *(int *)(param_1 + 0x4c) = iVar2;
    if (iVar2 == -1) {
      return;
    }
  }
  fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x4c));
  fn_00154a6c();
  return;
}



void fn_002726ec(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = fn_006f6fc4(*(undefined4 *)(DAT_008977e0 + 0x40));
  if (iVar1 != 0) {
    iVar5 = *(int *)(DAT_008977e0 + 0x40);
    puVar4 = *(undefined4 **)(iVar5 + 8);
    local_20 = *puVar4;
    uStack_1c = puVar4[1];
    uVar2 = fn_00129f6c(&local_20,uStack_1c,0xed75ed55,0x9c5fff26,0x29);
    uVar3 = fn_0026fcd0(param_1,(char *)&DAT_00272880);
    fn_00688c04(uVar3,uVar2,0);
    uVar6 = fn_00129f6c(&local_20,extraout_r1,0x68fd3d1d,0x12533fe,0x1c);
    uVar3 = 0x3c;
    fn_0011c134((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x3c,0);
    uVar2 = fn_0026fcd0(param_1,(char *)&DAT_0027289c);
    fn_00688c04(uVar2,uVar3,2);
    uVar6 = fn_00129f6c(&local_20,extraout_r1_00,0x26d694b3,0x112e0be8,0x1a);
    uVar3 = 0x3c;
    fn_0011c134((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x3c,0);
    uVar2 = fn_0026fcd0(param_1,(char *)&DAT_002728b8);
    fn_00688c04(uVar2,uVar3,2);
    iVar1 = fn_006c89fc(*(undefined4 *)(iVar5 + 4));
    if (iVar1 == 0) {
      uVar2 = fn_0026fcd0(param_1,(char *)&DAT_002728cc);
      fn_00190d50(uVar2,&LAB_002728f4);
      uVar2 = fn_0026fcd0(param_1,(char *)&DAT_002728e0);
      fn_00190d50(uVar2,&LAB_002728f4);
      return;
    }
    uVar3 = puVar4[2];
    uVar2 = fn_0026fcd0(param_1,(char *)&DAT_002728cc);
    fn_00688c04(uVar2,uVar3,2);
    uVar2 = fn_006c8a2c(*(undefined4 *)(iVar5 + 4));
    uVar3 = fn_0026fcd0(param_1,(char *)&DAT_002728e0);
    fn_00688c04(uVar3,uVar2,2);
  }
  return;
}



void fn_00272664(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_50 [68];
  
  fn_0017d96c(auStack_50,0x40,0x3f,(char *)&DAT_002726c4,param_2);
  uVar1 = fn_0016ba34(DAT_00897800,DAT_00898784,auStack_50,0);
  uVar2 = fn_0026fcd0(param_1,(char *)&DAT_002726e0);
  fn_00190d50(uVar2,uVar1);
  return;
}



void fn_00272408(int param_1,short param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = fn_0026fcd0(param_1,(char *)&DAT_002724e8);
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 0x2c))(*(int **)(iVar2 + 0x10),(char *)&DAT_002724f8,1)
  ;
  if (iVar1 != 0 && iVar2 != 0) {
    iVar3 = fn_00661094();
    if (iVar3 != 8) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
      iVar2 = fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24),(int)param_2);
      if (iVar2 == 0) {
        uVar4 = 0x30;
      }
      else {
        uVar4 = 0x31;
      }
      uVar4 = fn_00192cb4(DAT_00897800,uVar4,0);
      fn_00190d50(iVar1,uVar4);
      return;
    }
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  }
  return;
}



void fn_00271d7c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_4 == 0) {
    uVar1 = fn_0026fcd0(param_1,(char *)&DAT_00271e4c);
    fn_00190d50(uVar1,param_2);
    uVar1 = fn_0026fcd0(param_1,(char *)&DAT_00271e58);
    fn_00190d50(uVar1,param_3);
    piVar2 = (int *)fn_006f72e0(DAT_008977e0);
                    /* WARNING: Could not recover jumptable at 0x00271e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 0x8c))(piVar2,*(char *)(param_1 + 0x108) != '\0',0);
    return;
  }
  uVar1 = fn_0026fcd0(param_1,(char *)&DAT_00271e38);
  fn_00190d50(uVar1,param_2);
  piVar2 = (int *)fn_006f72e0(DAT_008977e0);
                    /* WARNING: Could not recover jumptable at 0x00271dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x8c))(piVar2,*(char *)(param_1 + 0x108) != param_4,1,0);
  return;
}


