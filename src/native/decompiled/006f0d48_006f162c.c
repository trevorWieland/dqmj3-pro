#include "006f0d48_006f162c.h"



undefined4 fn_006f162c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar2 = 0x20;
  }
  else {
    uVar2 = 0x1c;
  }
  return uVar2;
}



void fn_006f1530(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_r12;
  
  iVar3 = fn_0061be08((int)*(char *)(param_1 + 4));
  uVar4 = fn_00163cbc(param_2);
  switch(uVar4) {
  default:
    cVar2 = '\0';
    goto LAB_006f15dc;
  case 1:
    if (iVar3 != 0) {
LAB_006f15bc:
      cVar2 = fn_006f1e88(param_1,0x10,0x14);
      goto LAB_006f15dc;
    }
    break;
  case 7:
  case 10:
    if (iVar3 == 0) goto LAB_006f15bc;
  }
  cVar2 = fn_006f1e88(param_1,0x14,0x18);
LAB_006f15dc:
  cVar1 = cVar2 + '\x01';
  *(char *)(param_4 + 6) = cVar2;
  iVar3 = (int)cVar2;
  if (iVar3 < cVar1) {
    in_r12 = 1;
  }
  *(char *)(param_4 + 7) = cVar1;
  for (iVar5 = iVar3; iVar5 < cVar1; iVar5 = (int)(char)((char)iVar5 + '\x01')) {
    *(ushort *)(param_4 + 4) =
         *(ushort *)(param_4 + 4) | (ushort)(in_r12 << (iVar5 - iVar3 & 0xffU));
  }
  *(undefined1 *)(param_4 + 8) = 0;
  return;
}



bool fn_006f148c(undefined4 param_1,int param_2,int param_3)

{
  return *(char *)(param_2 + param_3 + 0x5b) < '\0';
}



int fn_006f144c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    iVar1 = 0x21;
  }
  else {
    iVar1 = 0x20;
  }
  iVar2 = *(int *)(param_1 + 8) + iVar1 * 8;
  iVar1 = 0;
  if (iVar2 != -0x4180) {
    iVar1 = (int)*(char *)(iVar2 + 0x4182);
  }
  return iVar1;
}



int fn_006f0d48(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_58;
  int local_54;
  undefined1 auStack_50 [28];
  int iStack_34;
  int local_30;
  undefined4 local_2c;
  int iStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  iVar4 = fn_006f14ec(param_1,param_3);
  local_68 = fn_006f14a4(param_1,param_4);
  iVar9 = local_30;
  if (local_68 == 0) {
    return 0;
  }
  local_60 = local_30;
  iVar5 = fn_00691d78(local_30);
  iVar6 = fn_001639e4(iVar9);
  if (iVar6 == 0x18) {
    iVar5 = fn_00691af0(iVar9,0);
  }
  if (iVar5 - 1U < 699) {
    iVar9 = iVar5;
  }
  iVar5 = fn_006f4114(iVar4,local_60);
  if (*(short *)(iVar4 + 0x1e) < iVar5) {
    return 0;
  }
  uVar10 = 0;
  iVar6 = fn_00692448(iVar9);
  if (iVar6 != 0) {
    fn_00655c40(&local_78,*(undefined4 *)(param_1 + 8));
    uVar10 = fn_006f4a8c(&local_78,param_4);
  }
  cVar2 = fn_0061dbbc(iVar9,local_2c,param_4,*(undefined4 *)(param_1 + 8));
  fn_00655a48(&local_88,(int)cVar2,uVar10,iVar5);
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar5 != 0) {
    if ((('\0' < *(char *)(iVar5 + 0x9a)) || ('\0' < *(char *)(iVar5 + 0x9b))) ||
       (iVar5 = fn_006f44fc(iVar5,0x1b5), iVar5 != 0)) {
      uVar3 = fn_00691d94(iVar9);
      local_88 = CONCAT31(((unsigned int)(local_88) >> 8) & 0xffffff,uVar3);
    }
    iVar5 = *(int *)(param_1 + 0xc);
    if ((('\0' < *(char *)(iVar5 + 0x9a)) || ('\0' < *(char *)(iVar5 + 0x9b))) ||
       (iVar5 = fn_006f44fc(iVar5,0x1b6), iVar5 != 0)) {
      uVar3 = fn_00692320(iVar9);
      local_88 = (local_88 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(CONCAT11(uVar3,(undefined1)local_88)) & 0xffff);
    }
  }
  fn_006558e4(&local_88,iVar9,local_2c,param_4,*(int *)(param_1 + 0x10) + 0x20,
               *(undefined4 *)(param_1 + 8),(int)((unsigned int)(local_88) >> 8) & 0xff);
  local_64 = fn_006f2e14(param_1,iVar9,iVar4,local_68);
  iVar4 = 0;
  iVar5 = 0;
  bVar1 = '\0' < ((unsigned int)(local_84) >> 8) & 0xff;
  if (bVar1) {
    do {
      local_58 = 0;
      local_54 = 0;
      fn_00616c50(iVar9,(int)((unsigned int)(local_84) >> 8) & 0xff,iVar5,local_2c,param_4,*(undefined4 *)(param_1 + 8),
                   &local_88,&local_58,param_5);
      iVar6 = fn_001639e4(iVar9);
      if (iVar6 == 0x18) {
        fn_00655638(iVar9,local_2c,0,*(undefined4 *)(param_1 + 8),auStack_50);
        fn_006209c4(&local_88,auStack_50);
        local_58 = fn_0061f72c(param_4,*(undefined4 *)(param_1 + 8),local_88,local_84,local_80,
                                uStack_7c,auStack_50);
      }
      fn_0061a1ec(iVar9,local_2c,param_4,*(undefined4 *)(param_1 + 8),&local_70);
      iVar12 = local_6c;
      iVar6 = local_70;
      fn_0061e910(iVar9,local_2c,param_4,*(undefined4 *)(param_1 + 8),&local_70);
      iVar7 = local_6c - local_70;
      iVar12 = local_6c * iVar12;
      fn_0061fd6c(iVar9,local_2c,param_4,*(undefined4 *)(param_1 + 8),local_88,local_84,local_80,
                   uStack_7c,&local_70);
      iVar6 = fn_00300f74(local_58 * local_70 * iVar7 * iVar6,local_6c * iVar12);
      uVar10 = local_84;
      iVar4 = iVar4 + iVar6;
      iVar5 = iVar5 + 1;
      local_84 = CONCAT31(((unsigned int)(local_84) >> 8) & 0xffffff,(char)local_84 + '\x01');
      uVar13 = local_84;
      local_84 = (local_84 & ~((unsigned int)0xff << 8)) | (((unsigned int)(SUB41(uVar10,1)) & 0xff) << 8);
      iVar6 = (int)((unsigned int)(local_84) >> 8) & 0xff;
      local_84 = uVar13;
    } while (iVar5 < iVar6);
  }
  if (((unsigned int)(uStack_7c) >> 8) & 0xff != '\x06') {
    if ((local_64 != 0) || (((unsigned int)(uStack_7c) >> 8) & 0xff == '\x05' || ((unsigned int)(uStack_7c) >> 8) & 0xff == '\a')) {
      iVar4 = 0;
      goto LAB_006f10ac;
    }
    if (iVar4 < *(short *)(local_68 + 0x1c)) goto LAB_006f10ac;
  }
  iVar4 = iVar4 << 1;
LAB_006f10ac:
  iVar6 = 0;
  iVar5 = fn_001639e4(iVar9);
  if ((iVar5 != 0x1a) || (0 < iVar4)) {
    iVar5 = 0;
    do {
      psVar8 = (short *)fn_006925d4(iVar9,(int)(short)iVar5);
      if ((((*psVar8 == 0xc) && (0 < psVar8[1])) && (local_64 == 0)) && (((unsigned int)(uStack_7c) >> 24) & 0xff != '\x05'))
      {
        fn_0061f150(iVar9,local_2c,param_4,*(undefined4 *)(param_1 + 8),&local_88,&local_78);
        iVar12 = fn_00300f74(*(short *)(local_68 + 0x1c) * local_78 * 2,local_74);
        iVar6 = iVar6 + iVar12;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
  }
  iVar4 = iVar4 + iVar6;
  iVar5 = fn_00691d78(local_30);
  if ((iVar5 - 1U < 699) && (local_60 != iVar9)) {
    iVar4 = iVar4 / 2;
  }
  iVar5 = fn_001639e4(iVar9);
  uVar10 = local_2c;
  if (iVar5 == 7) {
    if (local_64 == 0) {
      uVar11 = *(undefined4 *)(param_1 + 8);
      uVar13 = local_88;
      uVar14 = local_84;
      uVar15 = local_80;
      uVar16 = uStack_7c;
      local_78 = param_4;
      local_70 = iVar9;
      fn_0061a1ec(iVar9,local_2c,param_4,uVar11,&local_58);
      iVar6 = local_54;
      iVar5 = local_58;
      fn_0061e910(local_70,uVar10,local_78,uVar11,&local_58);
      iVar12 = local_54 - local_58;
      iVar6 = iVar6 * local_54;
      fn_0061fd6c(local_70,uVar10,local_78,uVar11,uVar13,uVar14,uVar15,uVar16,&local_58);
      iVar12 = iVar12 * iVar5 * local_58;
      iVar6 = iVar6 * local_54;
      iVar5 = fn_00620d3c(iVar4,local_2c,*(undefined4 *)(param_1 + 8),param_5);
      iVar5 = fn_00300f74(iVar12 * iVar5,iVar6);
      if (*(short *)(local_68 + 0x1c) <= iVar5) {
        iVar5 = iVar5 << 1;
      }
      iVar6 = fn_00691af0(iVar9,2);
      uVar10 = fn_00691af0(iVar9,3);
      iVar4 = fn_00300f74(iVar4 * (short)((short)uVar10 - (short)iVar6),uVar10);
      iVar9 = fn_00300f74(iVar5 * iVar6,uVar10);
      iVar4 = iVar4 + iVar9;
    }
  }
  else {
    iVar6 = iVar5;
    if (iVar5 == 0xd) {
      iVar6 = local_64;
    }
    if (iVar5 == 0xd && iVar6 == 0) {
      iVar4 = fn_00620d3c(iVar4,local_2c,*(undefined4 *)(param_1 + 8),param_5);
      uVar10 = local_2c;
      uVar11 = *(undefined4 *)(param_1 + 8);
      local_78 = 1;
      local_74 = 1;
      uVar13 = local_88;
      uVar14 = local_84;
      uVar15 = local_80;
      uVar16 = uStack_7c;
      fn_0061a1ec(iVar9,local_2c,param_4,uVar11,&local_70);
      local_78 = local_78 * local_70;
      local_74 = local_74 * local_6c;
      fn_0061e910(iVar9,uVar10,param_4,uVar11,&local_70);
      local_78 = (local_6c - local_70) * local_78;
      local_74 = local_74 * local_6c;
      fn_0061fd6c(iVar9,uVar10,param_4,uVar11,uVar13,uVar14,uVar15,uVar16,&local_70);
      local_78 = local_78 * local_70;
      local_74 = local_74 * local_6c;
      iVar4 = fn_00300f74(local_78 * iVar4,local_74);
      if (*(short *)(local_68 + 0x1c) <= iVar4) {
        iVar4 = iVar4 << 1;
      }
      fn_006210b4(iVar9,local_2c,*(undefined4 *)(param_1 + 8),&local_78);
      iVar4 = fn_00300f74((local_74 - local_78) * iVar4,local_74);
    }
  }
  return iVar4;
}



short * fn_006f14ec(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  bool bVar5;
  
  iVar2 = *(int *)(param_1 + 8) + param_2 * 0x418;
  psVar3 = (short *)(iVar2 + -0x4080);
  bVar5 = psVar3 == (short *)0x0;
  iVar4 = 0;
  if (!bVar5) {
    iVar4 = (int)*psVar3;
    param_2 = iVar4;
  }
  if ((!bVar5 && param_2 != 0) && iVar4 < 0 == (bVar5 && SBORROW4(iVar2 + 0x3f80,0x8000))) {
    cVar1 = *(char *)(iVar2 + -0x400a);
    bVar5 = cVar1 == '\0';
    if (bVar5) {
      cVar1 = *(char *)(iVar2 + -0x4018);
    }
    if (bVar5 && cVar1 == '\0') {
      return psVar3;
    }
  }
  return (short *)0x0;
}



short * fn_006f14a4(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar2 = *(int *)(param_1 + 8) + param_2 * 0x418;
  psVar3 = (short *)(iVar2 + -0x4080);
  bVar5 = psVar3 == (short *)0x0;
  iVar4 = 0;
  if (!bVar5) {
    iVar4 = (int)*psVar3;
    param_2 = iVar4;
  }
  if ((!bVar5 && param_2 != 0) && iVar4 < 0 == (bVar5 && SBORROW4(iVar2 + 0x3f80,0x8000))) {
    cVar1 = *(char *)(iVar2 + -0x4019);
    bVar5 = cVar1 == '\0';
    if (bVar5) {
      cVar1 = *(char *)(iVar2 + -0x400a);
    }
    bVar6 = bVar5 && cVar1 == '\0';
    if (bVar5 && cVar1 == '\0') {
      bVar6 = *(char *)(iVar2 + -0x4018) == '\0';
    }
    if (bVar6) {
      return psVar3;
    }
  }
  return (short *)0x0;
}


