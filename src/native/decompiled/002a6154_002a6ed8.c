#include "002a6154_002a6ed8.h"



void fn_002a6ed8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 0xb) = 1;
  return;
}



void fn_002a69bc(void)

{
  fn_00698fb8(DAT_008977e0,1);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_002a68b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_00897800;
  iVar1 = fn_002a5800(param_1);
  if (iVar1 == 0) {
    fn_0015b0f8(*(undefined4 *)(*(int *)(*(int *)(DAT_008977e0 + 0x40) + 8) + 8));
    fn_006c8a2c(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4));
    fn_0015b0f8();
    fn_0016ba34(uVar3,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_002a69a8,0,param_4);
    fn_0015b0dc();
  }
  else {
    fn_00230b64();
  }
  uVar2 = fn_006f75ac(DAT_008977e0);
  fn_0038ff40(uVar2,0,0,1);
  uVar3 = fn_0016ba34(uVar3,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_002a6998,0);
  uVar2 = fn_006f75ac(DAT_008977e0);
  fn_0038fee8(uVar2,uVar3);
  return;
}



void fn_002a682c(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  iVar6 = *(int *)(DAT_008977e0 + 0x40);
  iVar4 = *(int *)(iVar6 + 8);
  if (param_2 < *(int *)(iVar4 + 8)) {
    return;
  }
  fn_00318bf4(iVar4,1);
  iVar6 = fn_006c8a2c(*(undefined4 *)(iVar6 + 4));
  if (iVar6 <= *(int *)(iVar4 + 8)) {
    uVar5 = *(undefined4 *)(DAT_008977e0 + 0xa8);
    uVar1 = fn_006f7508();
    fn_00366f0c(uVar1,uVar5,*(undefined4 *)(param_1 + 0x24),1);
    return;
  }
  fn_006f74f4();
  iVar6 = fn_006f7a70(DAT_008977e0);
  iVar3 = 0;
  iVar4 = *(int *)(iVar6 + 0x1c) - *(int *)(iVar6 + 0x18) >> 2;
  if (0 < iVar4) {
    do {
      piVar2 = *(int **)(*(int *)(iVar6 + 0x18) + iVar3 * 4);
      uVar7 = (uint)*(byte *)(piVar2 + 0x5f);
      bVar8 = uVar7 == 0x25;
      if (bVar8) {
        uVar7 = piVar2[0x67];
      }
      if (bVar8 && uVar7 == param_2 + 1U) {
                    /* WARNING: Could not recover jumptable at 0x00360ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 0x54))(piVar2,1);
        return;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}



bool fn_002a67d0(int param_1,uint param_2)

{
  if (((int)param_2 < 0) || (0x1f < param_2)) {
    return false;
  }
  return (*(uint *)(param_1 + 0x10) & 1 << (param_2 & 0xff)) != 0;
}



void fn_002a676c(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = '\0';
  if (*param_1 != '\0') {
    cVar1 = *(char *)(*(int *)(*(int *)(DAT_008977e0 + 0x40) + 4) + 0x20);
  }
  if (((*param_1 != '\0' && cVar1 != '\x01') && (iVar2 = fn_006c89fc(), iVar2 == 1)) &&
     (iVar2 = fn_006f7a48(DAT_008977e0), iVar2 != 0)) {
    uVar3 = fn_006f7a48(DAT_008977e0);
    fn_00128744(uVar3,0xffffffff);
    return;
  }
  return;
}



undefined4 fn_002a62c4(char *param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  code *pcVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  uint local_34;
  uint local_30;
  int local_2c;
  
  iVar4 = *(int *)(*(int *)(DAT_008977e0 + 0x40) + 4);
  iVar5 = fn_006c89fc();
  iVar16 = *(int *)(*(int *)(DAT_008977e0 + 0x40) + 8);
  param_1[8] = *(char *)(*(int *)(DAT_008977e0 + 0x58) + 8) == '\x02';
  if ((((*(char *)(iVar4 + 0x20) == '\x01') || (iVar5 != 0)) ||
      (iVar6 = fn_002d8370(0xffffffff), iVar6 == 0)) && (param_1[8] != '\0')) {
    param_1[0xb] = '\x01';
  }
  if (*(char *)(iVar4 + 0x20) != '\x01') {
    fn_00318c08(iVar16);
    iVar6 = fn_001c232c(DAT_008977e4);
    fn_00318c18(iVar16,(int)*(short *)(iVar6 + 0x24));
    switch(iVar5) {
    case 0:
      *(int *)(iVar16 + 0x14) = *(int *)(iVar6 + 0x28) + 1;
      break;
    case 1:
      local_34 = 0;
      piVar11 = (int *)fn_006f7508(DAT_008977e0);
      piVar11 = (int *)(**(code **)(*piVar11 + 0x94))();
      iVar5 = (**(code **)(*piVar11 + 0x10))();
      cVar1 = '\0';
      if (*param_1 != '\0') {
        cVar1 = *(char *)(*(int *)(*(int *)(DAT_008977e0 + 0x40) + 4) + 0x20);
      }
      if ((*param_1 != '\0' && cVar1 != '\x01') && (iVar16 = fn_006c89fc(), iVar16 == 1)) {
        piVar11 = (int *)fn_006f72e0(DAT_008977e0);
        iVar16 = (**(code **)(*piVar11 + 0x68))();
        if (iVar16 == 0) {
          uVar7 = fn_006f7a48(DAT_008977e0);
          uVar12 = 0;
        }
        else {
          uVar7 = fn_006f7a48(DAT_008977e0);
          uVar12 = 3;
        }
        fn_00128744(uVar7,uVar12);
      }
      iVar16 = 0;
      if (0 < iVar5) {
        do {
          piVar11 = (int *)fn_006f7508(DAT_008977e0);
          piVar11 = (int *)(**(code **)(*piVar11 + 0x94))();
          pcVar13 = *(code **)(*piVar11 + 0x34);
          psVar8 = (short *)(*pcVar13)(piVar11,iVar16,0);
          if ((char)psVar8[3] == '\x01') {
            *(undefined1 *)(psVar8 + 3) = 0;
            iVar9 = DAT_008977e0;
            sVar2 = *(short *)(iVar4 + 0x4c);
            uVar7 = fn_006f7508();
            iVar9 = fn_006c3414(uVar7,*(undefined4 *)(iVar9 + 0xa8),(int)*psVar8);
            if ((iVar9 == sVar2) &&
               (iVar10 = fn_001c232c(DAT_008977e4), iVar9 = DAT_008977e0,
               *(char *)(iVar10 + 8) == '\x01')) {
              uVar7 = fn_006f7508();
              pcVar13 = (code *)0x0;
              fn_00366f0c(uVar7,*(undefined4 *)(iVar9 + 0xa8),(int)*psVar8);
              local_34 = 1;
            }
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < iVar5);
        iVar5 = 0;
        if (local_34 != 0) {
          uVar15 = (uint)*(char *)(iVar6 + 0x1a);
          if (0 < (int)(uVar15 - 1)) {
            psVar8 = (short *)(iVar6 + 8);
            if ((uVar15 & 1) == 0) {
              pcVar13 = (code *)(int)*(short *)(iVar4 + 0x4c);
              psVar8 = (short *)(iVar6 + 10);
              if ((code *)(int)*psVar8 == pcVar13) {
                iVar5 = 1;
              }
            }
            iVar16 = (int)(uVar15 - 1) >> 1;
            bVar17 = iVar16 != 0;
            sVar2 = psVar8[1];
            if (bVar17) {
              pcVar13 = (code *)(int)*(short *)(iVar4 + 0x4c);
            }
            iVar9 = 0;
            while (bVar17) {
              if (pcVar13 == (code *)(int)sVar2) {
                iVar5 = iVar5 + 1;
              }
              sVar2 = psVar8[3];
              if (pcVar13 == (code *)(int)psVar8[2]) {
                iVar9 = iVar9 + 1;
              }
              iVar16 = iVar16 + -1;
              bVar17 = iVar16 != 0;
              psVar8 = psVar8 + 2;
            }
            iVar5 = iVar5 + iVar9;
          }
          if ((-1 < (int)(uVar15 - 1)) &&
             (*(short *)(iVar6 + (uVar15 - 1) * 2 + 10) == *(short *)(iVar4 + 0x4c))) {
            iVar5 = iVar5 + 1;
          }
          if (0 < iVar5) {
            fn_002a55d4(param_1,iVar5,0);
          }
          local_34 = 0;
          local_30 = 0;
          local_2c = 0;
          uVar14 = 1;
          uVar7 = fn_006f7508(DAT_008977e0);
          fn_00366dbc(uVar7,&local_34,0xffffffff,1);
          uVar15 = 0;
          iVar5 = (int)(local_30 - local_34) >> 0x1f;
          iVar4 = (int)(local_30 - local_34) / 0x34 + iVar5;
          if (iVar4 != iVar5) {
            do {
              if (*(short *)(local_34 + uVar15 * 0x34 + 6) != 0) {
                uVar14 = 0;
                break;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < (uint)(iVar4 - iVar5));
          }
          uVar15 = fn_006b8c88(param_1);
          if ((uVar14 & ~uVar15) != 0) {
            iVar4 = fn_00163868((int)(local_30 - local_34) / 0x34);
            psVar8 = (short *)(local_34 + iVar4 * 0x34);
            sVar2 = psVar8[1];
            sVar3 = *psVar8;
            uVar7 = fn_006f7508(DAT_008977e0);
            fn_00366f0c(uVar7,(int)sVar3,(int)sVar2,1);
          }
          uVar15 = local_34;
          if (local_30 < local_34) {
            do {
              uVar15 = uVar15 + 0x34;
            } while (uVar15 != local_30);
          }
          fn_001008c4(local_34,(int)(local_2c - local_34) / 0x34,0);
        }
      }
      break;
    case 2:
      piVar11 = (int *)fn_006f7508(DAT_008977e0);
      piVar11 = (int *)(**(code **)(*piVar11 + 0x94))();
      iVar4 = (**(code **)(*piVar11 + 0x38))(piVar11,*(undefined4 *)(param_1 + 0x24),0);
      if ((iVar4 != 0) && (*(char *)(iVar4 + 6) == '\x01')) {
        *(undefined1 *)(iVar4 + 6) = 0;
        iVar5 = fn_001c232c(DAT_008977e4);
        cVar1 = *(char *)(iVar5 + 8);
        if (cVar1 != '\x01') {
          if (cVar1 == '\x02') {
            *(undefined1 *)(iVar4 + 4) = 0;
            param_1[0x20] = '\x02';
            return 1;
          }
          if (cVar1 != '\x05') {
            return 1;
          }
        }
        *(undefined1 *)(iVar4 + 4) = 0;
        param_1[0x20] = '\x01';
      }
    }
  }
  return 1;
}



void fn_002a6154(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong local_18;
  
  if (*(char *)(*(int *)(param_1 + 0x14) + 0x14) == '\0') {
    uVar1 = fn_006a826c();
    local_18 = (ulonglong)uVar1 * 1000000000;
    fn_00318be8(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 8),&local_18);
  }
  if (*(int *)(param_1 + 4) == 0) {
    iVar2 = fn_006f7acc(DAT_008977e0,1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 4) = 1;
      fn_00698fb8(DAT_008977e0,0xffffffff);
      uVar1 = fn_006a826c(*(undefined4 *)(param_1 + 0x14));
      fn_0015b0f8(uVar1 / 0x3c,uVar1 * -0x77777777);
      uVar3 = fn_0016ba34(DAT_00897800,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_002a62ac,0);
      uVar4 = fn_006f75ac(DAT_008977e0);
      local_18 = local_18 & 0xffffffff00000000;
      fn_0038ff40(uVar4,0,0,1);
      fn_0038fee8(uVar4,uVar3);
      return;
    }
  }
  else if (*(int *)(param_1 + 4) == 1) {
    iVar2 = fn_006f75ac(DAT_008977e0);
    iVar2 = fn_001759d0(*(undefined4 *)(iVar2 + 8));
    if (iVar2 == 0) {
      *param_1 = 5;
      iVar2 = fn_006f7a84(DAT_008977e0);
      *(undefined1 *)(iVar2 + 0x3e1) = 1;
    }
  }
  return;
}


