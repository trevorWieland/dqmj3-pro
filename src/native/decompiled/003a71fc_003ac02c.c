#include "003a71fc_003ac02c.h"



undefined4 * fn_003ac02c(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_0082dfdc;
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_003158a0();
  }
  puVar1[0x19] = uVar3;
  puVar1[0x1a] = 0;
  iVar2 = fn_00145b00(0x1c,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_001c4578();
  }
  puVar1[0x1b] = uVar3;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0026e378(iVar2,0x1acb,0,(char *)&DAT_007d0770,0,1);
  }
  puVar1[0x1c] = uVar3;
  puVar1[0x1d] = 0;
  *(undefined1 *)(puVar1 + 0x1e) = 0;
  *(undefined1 *)((int)puVar1 + 0x79) = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(undefined1 *)(puVar1 + 0x21) = 0;
  piVar4 = (int *)fn_006896fc(puVar1,0xdd);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0xc))(piVar4);
    do {
      if (puVar5 == &DAT_00898a00) goto LAB_003ac110;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_003ac110:
  puVar1[0x23] = 0;
  puVar1[0x22] = piVar4;
  puVar1[0x24] = 0;
  *(undefined1 *)(puVar1 + 0x25) = 0;
  *(undefined1 *)((int)puVar1 + 0x95) = 0;
  if (param_2 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*param_2)(param_2);
    do {
      if (puVar5 == &DAT_00898c24) goto LAB_003ac158;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  param_2 = (undefined4 *)0x0;
LAB_003ac158:
  puVar1[0x27] = 0;
  puVar1[0x26] = param_2;
  return puVar1;
}



void fn_003a8034(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
  char cVar14;
  int *piVar15;
  bool bVar16;
  bool bVar17;
  undefined8 uVar18;
  
  iVar3 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar3 + 0x39f) != '\0') {
    fn_003a704c(param_1,0,1,0,0);
    fn_003a704c(param_1,1,0,1,0);
    fn_003a704c(param_1,2,0,1,0);
    fn_003a704c(param_1,4,0,1,0);
    fn_003a704c(param_1,3,0,1,0);
    fn_003a704c(param_1,5,0,1,0);
    fn_003a704c(param_1,6,0,1);
    uVar4 = 0;
    if (*(int *)(param_1 + 0x104) != *(int *)(param_1 + 0x100)) {
      do {
        if (*(char *)(*(int *)(param_1 + 0x100) + uVar4) == '\a') {
          uVar4 = (uint)(char)uVar4;
          goto LAB_003a815c;
        }
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < (uint)(*(int *)(param_1 + 0x104) - *(int *)(param_1 + 0x100)));
    }
    uVar4 = 0xffffffff;
LAB_003a815c:
    uVar4 = uVar4 & 0xff;
    if ((uint)(*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2) <= uVar4) {
      fn_002ff628(9,&DAT_008c7660,&DAT_008c7660,uVar4);
    }
    piVar15 = *(int **)(*(int *)(*(int *)(param_1 + 0x98) + uVar4 * 4) + 0xc);
    if (piVar15 != (int *)0x0) {
      puVar5 = (undefined4 *)(**(code **)(*piVar15 + 8))(piVar15);
      do {
        if (puVar5 == &DAT_0089a930) goto LAB_003a81cc;
        puVar5 = (undefined4 *)*puVar5;
      } while (puVar5 != (undefined4 *)0x0);
    }
    piVar15 = (int *)0x0;
LAB_003a81cc:
    uVar6 = fn_0022f750((char *)&DAT_003a8e80);
    fn_00190d50(piVar15,uVar6);
    fn_003a74ac(param_1,0);
    return;
  }
  iVar3 = fn_00174828(DAT_008977e4);
  if (*(char *)(iVar3 + 0x4283) != '\0') {
    uVar4 = 1;
    do {
      fn_003a704c(param_1,uVar4 & 0xff,0,1);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 7);
    fn_003a74ac(param_1,0);
    if (*(char *)(param_1 + 0xe2) == '\0') {
      return;
    }
    fn_003a86f0(param_1,0);
    return;
  }
  fn_003a8a44(param_1,param_2);
  iVar3 = fn_00163940(param_2);
  if ((iVar3 == 0) || (iVar3 = fn_00660ea8(param_2), iVar3 != 2)) {
    fn_003a704c(param_1,0,1,0,0);
    iVar3 = 0x10;
    if (*(char *)(param_1 + 0x83) != '\0') {
      do {
        iVar7 = fn_00174828(DAT_008977e4);
        iVar7 = iVar7 + (char)iVar3 * 0x418;
        if (((*(char *)(iVar7 + -0x4019) == '\0') && (*(char *)(iVar7 + -0x400d) == '\0')) &&
           (*(char *)(iVar7 + -0x3fca) == '\0')) {
          fn_003a704c(param_1,2,1,0,0);
          goto LAB_003a83c4;
        }
        iVar3 = (int)(char)((char)iVar3 + '\x01');
      } while (iVar3 + -0x10 < (int)(uint)*(byte *)(param_1 + 0x83));
    }
    fn_003a704c(param_1,2,0,1,0);
LAB_003a83c4:
    iVar3 = fn_00174828(DAT_008977e4);
    iVar7 = 0x10;
    if (*(char *)(param_1 + 0x83) != '\0') {
      do {
        iVar8 = fn_00174828(DAT_008977e4);
        uVar18 = fn_006f37f0(iVar8 + (char)iVar7 * 0x418 + -0x4080);
        if ((int)uVar18 != 0) {
          iVar3 = fn_006f4868(iVar3 + 0xe8,(int)((ulonglong)uVar18 >> 0x20),0x80,0);
          if (iVar3 == 0) {
            fn_003a704c(param_1,1,1,0,0);
            goto LAB_003a84c4;
          }
          break;
        }
        iVar7 = (int)(char)((char)iVar7 + '\x01');
      } while (iVar7 + -0x10 < (int)(uint)*(byte *)(param_1 + 0x83));
    }
    fn_003a704c(param_1,1,0,1,0);
LAB_003a84c4:
    iVar3 = fn_00174828(DAT_008977e4);
    uVar6 = *(undefined4 *)(DAT_00897804 + 0x14);
    uVar18 = fn_00174828(DAT_008977e4);
    iVar7 = fn_006f4868(iVar3 + 0xe8,(int)((ulonglong)uVar18 >> 0x20),1,0);
    iVar8 = (int)*(char *)((int)uVar18 + 6);
    iVar3 = fn_006f4868(iVar3 + 0xe8,iVar8,0x40,0);
    if ((iVar3 == 0) && (iVar3 = fn_00229950(uVar6,iVar7 != 0 || iVar8 != 0), iVar3 != 0)) {
      uVar13 = 0;
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
      uVar13 = 1;
    }
    fn_003a704c(param_1,4,uVar6,uVar13,0);
    if (*(char *)(param_1 + 0xe2) != '\0') {
      fn_003a86f0(param_1,param_3);
    }
    uVar18 = fn_00174828(DAT_008977e4);
    iVar3 = (int)uVar18 + 0xe8;
    uVar18 = fn_006f4868(iVar3,(int)((ulonglong)uVar18 >> 0x20),4,0);
    uVar6 = (undefined4)((ulonglong)uVar18 >> 0x20);
    if ((int)uVar18 == 0) {
      uVar18 = fn_006f4868(iVar3,uVar6,0x2000,0);
      uVar6 = (undefined4)((ulonglong)uVar18 >> 0x20);
    }
    fn_006f4868(iVar3,uVar6,0x10,0);
    fn_003a704c(param_1,7);
    if (*(char *)(param_1 + 0xe1) != '\0') {
      iVar3 = fn_00174828(DAT_008977e4);
      uVar18 = fn_00174828(DAT_008977e4);
      iVar7 = fn_006f4868(iVar3 + 0xe8,(int)((ulonglong)uVar18 >> 0x20),0x200,0);
      if ((((iVar7 == 0) && (*(char *)(iVar3 + 0xfa) != '\x01')) &&
          ((*(char *)(iVar3 + 0xfa) != '\x02' || (*(char *)((int)uVar18 + 0x4285) == '\0')))) &&
         ((iVar3 = fn_001c25e4(), iVar3 == 0 &&
          (iVar3 = fn_00174828(DAT_008977e4), *(char *)(iVar3 + 1) != '\r')))) {
        uVar13 = 0;
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
        uVar13 = 1;
      }
      fn_003a704c(param_1,5,uVar6,uVar13);
    }
  }
  else {
    fn_003a704c(param_1,0,0,1,0);
    fn_003a704c(param_1,1,0,1,0);
    fn_003a704c(param_1,2,0,1);
    fn_003a760c(param_1);
  }
  iVar3 = fn_00174828(DAT_008977e4);
  iVar7 = fn_00174828(DAT_008977e4);
  cVar14 = '\x18';
  while( true ) {
    iVar8 = fn_00174828(DAT_008977e4);
    iVar8 = iVar8 + cVar14 * 0x418;
    psVar9 = (short *)(iVar8 + -0x4080);
    bVar16 = psVar9 == (short *)0x0;
    sVar2 = 0;
    if (!bVar16) {
      sVar2 = *psVar9;
    }
    if ((!bVar16 && sVar2 != 0) && sVar2 < 0 == (bVar16 && SBORROW4(iVar8 + 0x3f80,0x8000))) break;
    cVar14 = cVar14 + '\x01';
    if ('\x1b' < cVar14) {
      bVar16 = false;
LAB_003a891c:
      cVar14 = '\x10';
      iVar8 = 0;
      do {
        iVar10 = fn_00174828(DAT_008977e4);
        iVar11 = (int)cVar14;
        cVar14 = cVar14 + '\x01';
        iVar10 = iVar10 + iVar11 * 0x418;
        psVar9 = (short *)(iVar10 + -0x4080);
        bVar17 = psVar9 == (short *)0x0;
        iVar11 = 0;
        if (!bVar17) {
          iVar11 = (int)*psVar9;
        }
        if ((!bVar17 && iVar11 != 0) && iVar11 < 0 == (bVar17 && SBORROW4(iVar10 + 0x3f80,0x8000)))
        {
          iVar8 = iVar8 + 1;
        }
      } while (cVar14 < '\x14');
      if ((bVar16) || (1 < iVar8)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      iVar8 = fn_006f4868(iVar3 + 0xe8,iVar11,0x20,0);
      cVar14 = *(char *)(iVar3 + 0xf9);
      if ((cVar14 == '\x02') && (*(char *)(iVar7 + 0x4286) != '\0')) {
        bVar17 = true;
      }
      else {
        bVar17 = false;
      }
      iVar3 = fn_00174828(DAT_008977e4);
      cVar1 = *(char *)(iVar3 + 0xe4);
      pcVar12 = (char *)fn_00174828(DAT_008977e4);
      if (cVar1 + -1 == (int)*pcVar12 || (((bVar16 || iVar8 != 0) || cVar14 == '\x01') || bVar17)) {
        fn_003a74ac(param_1,0);
        return;
      }
      fn_003a74ac(param_1,1);
      return;
    }
  }
  bVar16 = true;
  goto LAB_003a891c;
}



void fn_003a71fc(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,char *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  wchar16 *pwVar6;
  int iVar7;
  int iVar8;
  wchar16 *pwVar9;
  undefined1 auStack_e8 [128];
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  
  if (param_5 == 0) {
    uVar4 = 0x17;
  }
  else {
    uVar4 = 0x18;
  }
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  local_40 = fn_00192cb4(DAT_00897800,uVar4,0);
  iVar8 = 0;
  if (param_5 == 0) {
    iVar7 = *(int *)(local_2c + 0x4c4);
  }
  else {
    iVar7 = *(int *)(local_2c + 0x4c8);
  }
  if (0 < iVar7) {
    uVar4 = 0;
    do {
      fn_00301f50(auStack_e8,0x80);
      local_58 = uVar4;
      local_54 = uVar4;
      local_50 = uVar4;
      local_4c = uVar4;
      local_48 = uVar4;
      local_44 = uVar4;
      if (param_5 == 0) {
        iVar1 = fn_006ce2f0(local_2c,iVar8);
      }
      else {
        iVar1 = fn_006ce2b0();
      }
      local_3c = (uint)*(byte *)(iVar1 + 1);
      local_68 = fn_00231db4();
      iVar2 = fn_0036fc5c(local_3c);
      if (iVar2 != 0) {
        iVar2 = *(int *)(iVar1 + 4);
        cVar5 = '\0';
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if ('\0' < (char)iVar2) {
          do {
            fn_0010313a(&local_58,local_40);
            cVar5 = cVar5 + '\x01';
          } while (cVar5 < (char)iVar2);
        }
      }
      if (*param_6 == '\t') {
        pwVar9 = L"%ls%ls(%d)";
        pwVar6 = L"%ls%ls(%d)";
      }
      else {
        pwVar9 = L"%ls%ls(%d)\n";
        pwVar6 = L"%ls%ls\n";
      }
      iVar3 = fn_0036fcb8(local_3c);
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = *(int *)(iVar1 + 8);
      }
      if ((iVar3 == 0 || iVar2 == 0) || iVar2 < 0) {
        fn_00101a50(auStack_e8,0x40,pwVar6,local_68,&local_58);
      }
      else {
        fn_00101a50(auStack_e8,0x40,pwVar9,local_68,&local_58,iVar2);
      }
      fn_0010313a(local_28,auStack_e8);
      cVar5 = *param_6;
      *param_6 = cVar5 + '\x01';
      if ((char)(cVar5 + '\x01') == '\n') {
        fn_0042e5b0(*(undefined4 *)(local_34 + 0x6c),local_30 + 4,local_28);
        fn_00158f6c(local_28,0x200);
        *param_6 = '\0';
      }
      iVar8 = (int)(char)((char)iVar8 + '\x01');
    } while (iVar8 < iVar7);
  }
  return;
}


