#include "00299ea4_0029a1cc.h"



void fn_0029a1cc(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  float in_s0;
  float in_s1;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined1 local_3c [4];
  undefined1 local_38 [20];
  
  bVar3 = false;
  bVar5 = false;
  bVar4 = false;
  piVar9 = &local_50;
  uVar15 = 0;
  uVar14 = 1;
  do {
    cVar1 = *(char *)(param_2 + uVar14 + 0x59);
    if (cVar1 != '\0') {
      bVar5 = (bool)(bVar5 | uVar14 == 1);
      if (*(char *)(param_1 + uVar14 + 0xc4) == '\0') {
        if (uVar14 != 1) {
          if (cVar1 < '\x01') {
            uVar8 = fn_00182994(DAT_008977e4);
            iVar12 = uVar14 + 300;
          }
          else {
            uVar8 = fn_00182994(DAT_008977e4);
            iVar12 = uVar14 + 100;
          }
          fn_00164c80(uVar8,iVar12,2);
        }
        *(undefined1 *)(param_1 + uVar14 + 0xc4) = 1;
      }
      iVar12 = fn_001667c8(param_2 + 0x38,uVar14);
      if (iVar12 == 0) {
        bVar3 = true;
      }
      else {
        bVar4 = true;
        if (uVar15 == 0) {
          uVar15 = uVar14 & 0xff;
        }
      }
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x61);
  if (bVar3) {
    cVar1 = *(char *)(param_2 + 5);
    fn_0029b484(param_1,(int)cVar1);
    uVar8 = fn_00182994(DAT_008977e4);
    local_48 = (int)in_s1;
    local_4c = (int)in_s0;
    local_50 = 1;
    fn_001755cc(uVar8,cVar1,7,0);
    piVar9 = (int *)fn_00182994(DAT_008977e4);
    (**(code **)(*piVar9 + 0xc))(piVar9,s_SE_BTL_022_008c510f);
  }
  else if (bVar4) {
    if (bVar5) {
      cVar1 = *(char *)(param_2 + 0x5a);
      cVar2 = *(char *)(param_2 + 5);
      uVar8 = fn_00182994(DAT_008977e4);
      cVar6 = fn_001752ec(uVar8,1,(int)*(char *)(param_2 + 5));
      fn_0029b484(param_1,(int)cVar2);
      if (cVar1 < '\x01') {
        uVar8 = 4;
      }
      else {
        uVar8 = 3;
      }
      local_50 = CONCAT31(((unsigned int)(local_50) >> 8) & 0xffffff,cVar6 + cVar1);
      uVar7 = fn_00182944(1);
      local_4c = CONCAT31(((unsigned int)(local_4c) >> 8) & 0xffffff,uVar7);
      iVar12 = fn_00182924(1);
      local_48 = CONCAT31(((unsigned int)(local_48) >> 8) & 0xffffff,(char)iVar12);
      if (iVar12 < (char)local_4c) {
                    /* WARNING: Subroutine does not return */
        fn_00146590();
      }
      if ((int)(char)local_50 < (int)(char)local_4c) {
        piVar9 = &local_4c;
      }
      if (iVar12 < (char)*piVar9) {
        piVar9 = &local_48;
      }
      iVar12 = *piVar9;
      uVar10 = fn_00182994(DAT_008977e4);
      local_48 = (int)in_s1;
      local_4c = (int)in_s0;
      local_50 = 0;
      fn_001755cc(uVar10,cVar2,uVar8,(int)(char)iVar12);
    }
    uVar14 = 0;
    while ((byte)(&DAT_0085ad94)[uVar14 * 0xc] != uVar15) {
      uVar14 = uVar14 + 1;
      if (3 < uVar14) {
        return;
      }
    }
    if (*(char *)(param_2 + uVar15 + 0x59) < '\x01') {
      uVar10 = *(undefined4 *)(&UNK_0085ad9c + uVar14 * 0xc);
      local_40 = 0;
      local_3c[0] = *(undefined1 *)(param_2 + 5);
      uVar8 = fn_006a7b84(DAT_008977e4);
      iVar12 = fn_00175978(uVar8,uVar10);
      if (iVar12 == -1) {
        return;
      }
      if (local_40 != -1) {
        uVar8 = fn_0017484c(DAT_008977e4);
        iVar11 = fn_00165bb4(uVar8,local_3c);
        if (iVar11 == 0) {
          return;
        }
        if (local_40 != -1) {
          iVar11 = fn_0017fde4(*(undefined4 *)(iVar11 + 4));
          if (iVar11 == 0) {
            local_40 = -1;
          }
          uVar8 = fn_006a7b84(DAT_008977e4);
          uVar14 = fn_00175944(uVar8,uVar10);
          if ((uVar14 & 0x10) == 0) {
            uVar8 = fn_006a7b84(DAT_008977e4);
            local_40 = fn_0016aa48(uVar8,uVar10,iVar11,iVar12);
          }
          else {
            uVar8 = fn_006a7b84(DAT_008977e4);
            local_40 = fn_0016a9b0(uVar8,uVar10,iVar11,iVar12);
          }
          if (local_40 != -1) {
            uVar8 = fn_006a7b84(DAT_008977e4);
            fn_0023e554(uVar8,local_40);
            piVar9 = *(int **)(param_1 + 0x38);
            if (piVar9 == *(int **)(param_1 + 0x3c)) {
              piVar13 = &local_40;
              goto LAB_0029a6b8;
            }
            *(int **)(param_1 + 0x38) = piVar9 + 1;
            local_44 = local_40;
            if (piVar9 != (int *)0x0) goto LAB_0029a564;
          }
        }
      }
    }
    else {
      uVar10 = *(undefined4 *)(&UNK_0085ad98 + uVar14 * 0xc);
      local_44 = 0;
      local_38[0] = *(undefined1 *)(param_2 + 5);
      uVar8 = fn_006a7b84(DAT_008977e4);
      iVar12 = fn_00175978(uVar8,uVar10);
      if (iVar12 == -1) {
        return;
      }
      if (local_44 != -1) {
        uVar8 = fn_0017484c(DAT_008977e4);
        iVar11 = fn_00165bb4(uVar8,local_38);
        if (iVar11 == 0) {
          return;
        }
        if (local_44 != -1) {
          iVar11 = fn_0017fde4(*(undefined4 *)(iVar11 + 4));
          if (iVar11 == 0) {
            local_44 = -1;
          }
          uVar8 = fn_006a7b84(DAT_008977e4);
          uVar14 = fn_00175944(uVar8,uVar10);
          if ((uVar14 & 0x10) == 0) {
            uVar8 = fn_006a7b84(DAT_008977e4);
            local_44 = fn_0016aa48(uVar8,uVar10,iVar11,iVar12);
          }
          else {
            uVar8 = fn_006a7b84(DAT_008977e4);
            local_44 = fn_0016a9b0(uVar8,uVar10,iVar11,iVar12);
          }
          if (local_44 != -1) {
            uVar8 = fn_006a7b84(DAT_008977e4);
            fn_0023e554(uVar8,local_44);
            piVar9 = *(int **)(param_1 + 0x38);
            if (piVar9 == *(int **)(param_1 + 0x3c)) {
              piVar13 = &local_44;
LAB_0029a6b8:
              fn_0079ce44(param_1 + 0x34,piVar9,piVar13);
              return;
            }
            *(int **)(param_1 + 0x38) = piVar9 + 1;
            if (piVar9 != (int *)0x0) {
LAB_0029a564:
              *piVar9 = local_44;
              return;
            }
          }
        }
      }
    }
  }
  return;
}



void fn_00299f18(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  float in_s0;
  float in_s1;
  
  uVar2 = fn_00182994(DAT_008977e4);
  uVar3 = fn_001659c0(uVar2,(int)*(char *)(param_1 + 8),(int)*(char *)(param_1 + 0xc));
  iVar9 = *(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0xc) * 0xc4 + 0x18;
  switch(*(undefined1 *)(iVar9 + 6)) {
  case 0:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    break;
  default:
    iVar4 = fn_001667e0(iVar9 + 10,0x10);
    if (iVar4 != 0) {
      cVar1 = *(char *)(iVar9 + 5);
      fn_0029b484(param_1,(int)cVar1);
      uVar2 = fn_00182994(DAT_008977e4);
      fn_001755cc(uVar2,cVar1,7,0,1,(int)in_s0,(int)in_s1);
      piVar5 = (int *)fn_00182994(DAT_008977e4);
                    /* WARNING: Could not recover jumptable at 0x0029a02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar5 + 0xc))(piVar5,s_SE_BTL_022_008c50ee);
      return;
    }
    iVar4 = fn_001667b8(iVar9 + 0xc,*(undefined4 *)(param_1 + 0x10));
    if (iVar4 == 0) {
      iVar10 = fn_001667b8(iVar9 + 0xd,*(undefined4 *)(param_1 + 0x10));
      if (iVar10 == 0) {
        fn_0029a8a8(param_1,0x3e9,uVar3 & 0xff);
        piVar5 = (int *)fn_00182994(DAT_008977e4);
        pcVar8 = *(code **)(*piVar5 + 0xc);
        pcVar7 = s_SE_BTL_019_008c5104;
      }
      else {
        fn_0029a8a8(param_1,0x3ea,uVar3 & 0xff);
        uVar2 = fn_00182994(DAT_008977e4);
        fn_001553b0(uVar2,6,3,10);
        piVar5 = (int *)fn_00182994(DAT_008977e4);
        pcVar8 = *(code **)(*piVar5 + 0xc);
        pcVar7 = s_SE_BTL_003_008c50f9;
      }
      (*pcVar8)(piVar5,pcVar7);
    }
    else {
      piVar5 = (int *)fn_00182994(DAT_008977e4);
      (**(code **)(*piVar5 + 0xc))(piVar5,s_SE_BTL_022_008c50ee);
    }
    iVar10 = *(int *)(iVar9 + *(int *)(param_1 + 0x10) * 4 + 0x1c);
    if (iVar10 != 0) {
      iVar6 = fn_0061be08(uVar3);
      if (iVar6 == 0) {
        cVar1 = (char)uVar3 + -0x14;
      }
      else {
        cVar1 = (char)uVar3 + -0x10;
      }
      uVar2 = fn_00182994(DAT_008977e4);
      iVar6 = param_1 + cVar1 * 4;
      fn_001483c0(uVar2,*(undefined4 *)(iVar6 + 0xb4));
      uVar2 = fn_00182994(DAT_008977e4);
      fn_00182c40(uVar2,uVar3 & 0xff,7,2);
      uVar2 = fn_00182994(DAT_008977e4);
      uVar2 = fn_0016a6d0(uVar2,uVar3 & 0xff,0);
      *(undefined4 *)(iVar6 + 0xb4) = uVar2;
    }
    iVar10 = (int)(short)iVar10;
    fn_0029ba5c(param_1,uVar3,iVar10,iVar4,*(undefined1 *)(iVar9 + 6));
    fn_0029a9e4(param_1,uVar3,iVar10,*(undefined1 *)(iVar9 + 6));
  }
  return;
}



void fn_00299f00(void)

{
  DAT_008928d4 = 0;
  DAT_008928d8 = 0;
  return;
}



int fn_00299eec(void)

{
  return (int)(short)DAT_008928d8;
}



int fn_00299ecc(int param_1)

{
  return (int)*(short *)(DAT_008928d4 + param_1 * 0x1a + 0x18);
}



int fn_00299ea4(int param_1,uint param_2)

{
  return (int)*(short *)(DAT_008928d4 + param_1 * 0x1a + (param_2 & 0xff) * 4);
}


