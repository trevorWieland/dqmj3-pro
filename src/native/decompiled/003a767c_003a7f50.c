#include "003a767c_003a7f50.h"



void fn_003a7e9c(int param_1,int param_2)

{
  if (param_2 == 0) {
    fn_00353c20(*(undefined4 *)(param_1 + 0x70));
    if (*(char *)(param_1 + 0x80) == '\x04') {
      fn_0030b8f8(*(undefined4 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x7d),1);
      fn_0025e31c(*(undefined4 *)(param_1 + 0xcc),1);
      goto LAB_003a7f48;
    }
  }
  else if (param_2 != 1) {
    if (param_2 == 2) {
      fn_0025e31c(*(undefined4 *)(param_1 + 0xcc),0);
      fn_0025e31c(*(undefined4 *)(param_1 + 0xd0),0);
      fn_00353c20(*(undefined4 *)(param_1 + 0x70));
    }
    goto LAB_003a7f48;
  }
  fn_0030b8f8(*(undefined4 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x7e),1);
  fn_0025e31c(*(undefined4 *)(param_1 + 0xd0),1);
LAB_003a7f48:
  *(char *)(param_1 + 0x85) = (char)param_2;
  return;
}



void fn_003a7e38(int param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  
  *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) & 0xfe | 1
  ;
  *(byte *)(*(int *)(param_1 + 0xbc) + 0x44) = *(byte *)(*(int *)(param_1 + 0xbc) + 0x44) & 0xfe;
  uVar1 = fn_00353aa4(*(undefined4 *)(param_1 + 0x70));
  *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) & 0xfe;
  bVar2 = *(byte *)(*(int *)(param_1 + 0xbc) + 0x44) & 0xfe;
  if ((uVar1 & param_2) == 0) {
    bVar2 = bVar2 | 1;
  }
  *(byte *)(*(int *)(param_1 + 0xbc) + 0x44) = bVar2;
  return;
}



void fn_003a7964(int param_1,undefined1 param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  *(undefined1 *)(param_1 + 0x7e) = param_2;
  iVar2 = fn_00174828(DAT_008977e4);
  if (*(short *)(iVar2 + *(char *)(param_1 + 0x7e) * 0x418 + -0x4080) < 1) {
    if (param_3 == 0) {
      fn_003a6d3c(param_1,param_1 + 0x7e,0x14,*(undefined1 *)(param_1 + 0x84),0,param_5);
    }
    else {
      fn_003a6d3c(param_1,param_1 + 0x7e,0x10,*(undefined1 *)(param_1 + 0x83),0,param_5);
    }
  }
  if (param_5 != 0) {
    iVar2 = fn_00174828(DAT_008977e4);
    iVar2 = iVar2 + *(char *)(param_1 + 0x7e) * 0x418;
    if (0 < *(short *)(iVar2 + -0x4080)) {
      cVar1 = *(char *)(iVar2 + -0x4019);
      bVar3 = cVar1 == '\0';
      if (bVar3) {
        cVar1 = *(char *)(iVar2 + -0x400a);
      }
      bVar4 = bVar3 && cVar1 == '\0';
      if (bVar3 && cVar1 == '\0') {
        bVar4 = *(char *)(iVar2 + -0x4018) == '\0';
      }
      if (bVar4) goto LAB_003a7a8c;
    }
    if (param_3 == 0) {
      fn_003a6d3c(param_1,param_1 + 0x7e,0x14,*(undefined1 *)(param_1 + 0x84),0,param_5);
    }
    else {
      fn_003a6d3c(param_1,param_1 + 0x7e,0x10,*(undefined1 *)(param_1 + 0x83),0,param_5);
    }
  }
LAB_003a7a8c:
  if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}



void fn_003a786c(int param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  iVar2 = (int)(char)(*param_2 + '\x01');
  *param_2 = *param_2 + '\x01';
  iVar3 = iVar2 + -0x10;
  if (param_4 < iVar3) {
    *param_2 = (char)param_3;
  }
  else {
    if (param_4 + -1 < iVar3) {
      *(undefined1 *)(param_1 + 0xe3) = 1;
      fn_003a7f50(param_1,1);
      fn_003a8858(param_1,1);
      fn_003a6e34(param_1,0);
      goto code_r0x003a7950;
    }
    bVar5 = SBORROW4(param_3,iVar2);
    iVar1 = param_3 - iVar2;
    if (param_3 <= iVar2) {
      bVar5 = SBORROW4(iVar3,param_4);
      iVar1 = iVar3 - param_4;
    }
    if (iVar1 < 0 == bVar5) goto code_r0x003a7950;
  }
  *(undefined1 *)(param_1 + 0xe3) = 0;
  fn_003a7f50(param_1,0);
  uVar4 = *(undefined4 *)(param_1 + 0xcc);
  iVar2 = fn_00353a38(*(undefined4 *)(param_1 + 0x70),*param_2);
  fn_0025e868(uVar4,(int)*(char *)(iVar2 + 0x4c));
  fn_0025e7cc(uVar4,*(int *)(iVar2 + 0xa0) + 0x1c);
  fn_0030b8f8(*(undefined4 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x7d),1);
  fn_003a8858(param_1,0);
  fn_003a6e34(param_1,1);
code_r0x003a7950:
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_003a7700(int param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar2 = (int)(char)(*param_2 + -1);
  iVar4 = iVar2 + -0x10;
  *param_2 = *param_2 + -1;
  if (iVar4 < -1) {
    *(undefined1 *)(param_1 + 0xe3) = 0;
    *param_2 = (char)param_3 + (char)param_4 + -1;
    fn_003a7f50(param_1);
    uVar3 = *(undefined4 *)(param_1 + 0xcc);
    iVar2 = fn_00353a38(*(undefined4 *)(param_1 + 0x70),*param_2);
    fn_0025e868(uVar3,(int)*(char *)(iVar2 + 0x4c));
    fn_0025e7cc(uVar3,*(int *)(iVar2 + 0xa0) + 0x1c);
    fn_0030b8f8(*(undefined4 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x7d),1);
    fn_003a8858(param_1,0);
    fn_003a6e34(param_1,1);
  }
  else if (iVar4 < 0) {
    *(undefined1 *)(param_1 + 0xe3) = 1;
    fn_003a7f50(param_1,1);
    fn_003a8858(param_1,1);
    fn_003a6e34(param_1,0);
  }
  else {
    bVar6 = SBORROW4(iVar2,param_3);
    iVar1 = iVar2 - param_3;
    bVar5 = iVar2 == param_3;
    if (param_3 <= iVar2) {
      bVar6 = SBORROW4(param_4,iVar4);
      iVar1 = param_4 - iVar4;
      bVar5 = param_4 == iVar4;
    }
    if (!bVar5 && iVar1 < 0 == bVar6) {
      *(undefined1 *)(param_1 + 0xe3) = 0;
      fn_003a7f50(param_1,0);
      uVar3 = *(undefined4 *)(param_1 + 0xcc);
      iVar2 = fn_00353a38(*(undefined4 *)(param_1 + 0x70),*param_2);
      fn_0025e868(uVar3,(int)*(char *)(iVar2 + 0x4c));
      fn_0025e7cc(uVar3,*(int *)(iVar2 + 0xa0) + 0x1c);
      fn_0030b8f8(*(undefined4 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x7d),1);
      fn_003a8858(param_1,0);
      fn_003a6e34(param_1,1);
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_003a7f50(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  fn_0025e31c(*(undefined4 *)(param_1 + 0xcc),param_2 ^ 1,param_3,param_4,param_4);
  uVar3 = 0;
  if (*(char *)(param_1 + 0x83) != '\0') {
    do {
      uVar1 = *(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4) >> 2;
      if (uVar1 <= uVar3) {
        fn_002ff628(9,&DAT_008c764d,&DAT_008c764d,uVar3,uVar1);
      }
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0xd4) + uVar3 * 4);
      fn_0025e31c(uVar4,param_2);
      if (param_2 != 0) {
        iVar2 = fn_00353a38(*(undefined4 *)(param_1 + 0x70),uVar3 + 0x10 & 0xff);
        fn_0025e868(uVar4,(int)*(char *)(iVar2 + 0x4c));
        fn_0025e7cc(uVar4,*(int *)(iVar2 + 0xa0) + 0x1c);
      }
      fn_0030b8f8(*(undefined4 *)(param_1 + 0x70),uVar3 + 0x10 & 0xff,param_2);
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < *(byte *)(param_1 + 0x83));
  }
  return;
}



void fn_003a767c(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  fn_00353af4(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 100),
               *(undefined4 *)(param_1 + 0x90),param_1 + 0x83);
  iVar1 = fn_00145b00(0x4c,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005a96b0(iVar1,*(undefined4 *)(param_1 + 0x68));
  }
  piVar3 = *(int **)(param_1 + 0x74);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 0x74) = piVar2;
  }
  fn_003a7ab8(param_1);
  return;
}



void fn_003a7ab8(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint local_48;
  float local_44;
  uint local_40;
  undefined4 local_3c;
  
  uVar1 = fn_006c2700(*(undefined4 *)(param_1 + 0x70));
  uVar2 = fn_006c2734(*(undefined4 *)(param_1 + 0x70));
  uVar3 = fn_006c2700(*(undefined4 *)(param_1 + 0x70));
  fn_005a8e78(*(undefined4 *)(param_1 + 0x74),uVar3,*(undefined4 *)(param_1 + 100));
  uVar3 = fn_006c2734(*(undefined4 *)(param_1 + 0x70));
  fn_005a9084(*(undefined4 *)(param_1 + 0x74),uVar3,*(undefined4 *)(param_1 + 100));
  iVar4 = fn_002fecec(uVar1 * 0xc);
  iVar5 = fn_002fecec(uVar2 * 0xc);
  local_48 = uVar2;
  fn_003a62bc(param_1,iVar4,uVar1,iVar5);
  uVar9 = 0;
  if (uVar1 != 0) {
    do {
      fn_005a8a44(*(undefined4 *)(param_1 + 0x74),iVar4 + uVar9 * 0xc,uVar9);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar1);
  }
  uVar9 = 0;
  if (uVar2 != 0) {
    uVar13 = 0x447a0000;
    uVar12 = 0x41a0000000000000;
    do {
      if ((((byte)DAT_008c62fc & 1) == 0) && (iVar6 = fn_00303afc(&DAT_008c62fc), iVar6 != 0)) {
        DAT_008f9e2c = (undefined4)uVar12;
        DAT_008f9e30 = DAT_008f9e2c;
        DAT_008f9e34 = DAT_008f9e2c;
      }
      fVar10 = (float)uVar13;
      iVar6 = -1;
      puVar8 = (uint *)(iVar5 + uVar9 * 0xc);
      iVar7 = 0;
      local_44 = (float)((ulonglong)uVar12 >> 0x20);
      if ((int)uVar1 < 1) {
LAB_003a7c78:
        local_48 = *puVar8;
        local_44 = (float)puVar8[1];
        local_40 = puVar8[2];
        iVar6 = -1;
        local_3c = 0;
      }
      else {
        do {
          fVar11 = ABS(*(float *)(iVar4 + iVar7 * 0xc + 4) - ((float)puVar8[1] - local_44));
          if (fVar11 < fVar10) {
            iVar6 = iVar7;
            fVar10 = fVar11;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar1);
        if ((iVar6 < 0) || (0x411fffff < (int)fVar10)) goto LAB_003a7c78;
        local_48 = *puVar8;
        local_40 = puVar8[2];
        local_44 = *(float *)(iVar4 + iVar6 * 0xc + 4) + local_44;
        local_3c = 1;
      }
      fn_005a8a44(*(undefined4 *)(param_1 + 0x74),&local_48,uVar1 + uVar9);
      fn_005a8e3c(*(undefined4 *)(param_1 + 0x74),local_3c,iVar6,uVar9);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
  }
  fn_0030233c(iVar5);
  fn_0030233c(iVar4);
  return;
}


