#include "00358d4c_003596fc.h"



undefined4 fn_003596fc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = fn_00174828(DAT_008977e4);
  uVar2 = fn_006a7b78(DAT_008977e4);
  iVar3 = fn_00174834(DAT_008977e4);
  fn_00158f6c(uVar2,0x7a);
  fn_0017821c(uVar1,iVar3 + 0x180388,0x5b34);
  return 1;
}



undefined4 fn_00359358(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar1 = fn_00174834(DAT_008977e4);
  if (*(char *)(param_1 + 9) == '\0') {
    fn_001c3bec(iVar1);
    if (*(char *)(iVar1 + 0x185eed) != '\0') {
      fn_001c26fc(iVar1);
    }
    if (*(char *)(iVar1 + 0x185ef1) != '\0') {
      fn_001c374c();
    }
    uVar3 = fn_0017484c(DAT_008977e4);
    iVar1 = fn_00174858(DAT_008977e4);
    fn_003a8818(*(undefined4 *)(iVar1 + 0x48));
    iVar1 = 0x20;
    do {
      local_18 = CONCAT31(((unsigned int)(local_18) >> 8) & 0xffffff,(char)iVar1);
      iVar2 = fn_00175dcc(uVar3,&local_18);
      if (iVar2 != 0) {
        fn_001794f4();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x22);
    iVar1 = 0x22;
    do {
      local_18 = CONCAT31(((unsigned int)(local_18) >> 8) & 0xffffff,(char)iVar1);
      iVar2 = fn_00175d88(uVar3,&local_18);
      if (iVar2 != 0) {
        fn_001794f4();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x24);
    iVar1 = 0x10;
    do {
      local_18 = CONCAT31(((unsigned int)(local_18) >> 8) & 0xffffff,(char)iVar1);
      fn_00313b14(uVar3,&local_18);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x18);
    *(undefined1 *)(param_1 + 9) = 1;
    return 0;
  }
  if (*(char *)(param_1 + 9) != '\x01') {
    return 0;
  }
  fn_00174840(DAT_008977e4);
  iVar2 = fn_001c8384();
  if (iVar2 == 0) {
    return 0;
  }
  fn_001c2e0c(param_1);
  iVar2 = fn_00174858(DAT_008977e4);
  fn_003a767c(*(undefined4 *)(iVar2 + 0x48));
  fn_001c3ca0();
  bVar5 = *(char *)(iVar1 + 0x185eed) == '\0';
  bVar6 = *(char *)(iVar1 + 0x185eef) == '\0';
  if (bVar5 && bVar6) {
    bVar5 = *(char *)(iVar1 + 0x185ef1) == '\0';
    bVar6 = *(char *)(iVar1 + 0x185ef3) == '\0';
    if (bVar5 && bVar6) {
      return 1;
    }
    if (bVar5) {
      uVar3 = fn_00182994(DAT_008977e4);
      uVar4 = 0xd;
    }
    else if (bVar6) {
      uVar3 = fn_00182994(DAT_008977e4);
      uVar4 = 0xb;
    }
    else {
      uVar3 = fn_00182994(DAT_008977e4);
      uVar4 = 0xf;
    }
  }
  else if (bVar5) {
    uVar3 = fn_00182994(DAT_008977e4);
    uVar4 = 7;
  }
  else if (bVar6) {
    uVar3 = fn_00182994(DAT_008977e4);
    uVar4 = 5;
  }
  else {
    uVar3 = fn_00182994(DAT_008977e4);
    uVar4 = 9;
  }
  fn_00207650(uVar3,uVar4);
  return 1;
}



void fn_00359308(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[2] == '\0') {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  else if ((char)param_1[2] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00359334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1);
    return;
  }
  return;
}



undefined4 fn_00358d4c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_76f8 [8384];
  undefined1 auStack_5638 [12504];
  undefined1 auStack_2560 [2];
  char local_255e;
  undefined1 local_255d;
  undefined1 auStack_2558 [2];
  char local_2556;
  undefined1 local_2555;
  undefined1 auStack_2550 [2];
  char local_254e;
  undefined1 local_254d;
  undefined1 auStack_2548 [2];
  char local_2546;
  undefined1 local_2545;
  int local_252c;
  undefined1 auStack_2518 [1048];
  undefined1 auStack_2100 [1048];
  undefined1 auStack_1ce8 [1048];
  undefined1 auStack_18d0 [1048];
  undefined1 auStack_14b8 [1048];
  undefined1 auStack_10a0 [1048];
  undefined1 auStack_c88 [1048];
  undefined1 auStack_870 [1048];
  undefined1 auStack_458 [644];
  short asStack_1d4 [214];
  int local_28;
  
  local_28 = param_1;
  iVar2 = fn_00174828(DAT_008977e4);
  iVar3 = fn_006a7b78(DAT_008977e4);
  iVar4 = fn_00174834(DAT_008977e4);
  cVar1 = *(char *)(iVar3 + 0x72);
  *(char *)(local_28 + 10) = cVar1;
  bVar11 = *(char *)(iVar3 + 0x75) != '\0';
  *(bool *)(local_28 + 10) = bVar11 || cVar1 != '\0';
  fn_00301f50(auStack_14b8,0x1060);
  fn_00301f50(auStack_2518,0x1060);
  if (!bVar11 && cVar1 == '\0') {
    local_252c = iVar4 + 0x185e00;
    if (*(char *)(iVar4 + 0x185eed) == '\0') {
      if (*(char *)(iVar4 + 0x185eef) == '\0') goto LAB_003590e4;
      fn_0017821c(auStack_14b8,iVar2 + 0x100,0x418);
      fn_0017821c(auStack_10a0,iVar2 + 0x518,0x418);
      fn_0017821c(auStack_c88,iVar2 + 0x930,0x418);
      fn_0017821c(auStack_870,iVar2 + 0xd48,0x418);
      fn_00166824(auStack_2560,iVar2 + 0x4280);
      fn_00166824(auStack_2550,iVar2 + 0x4290);
    }
    else {
      iVar10 = 0;
      iVar9 = 0x10;
      do {
        if (*(char *)(iVar3 + 0x70) == iVar9) {
          fn_0017821c(auStack_14b8 + iVar10 * 0x418,iVar4 + 0x185688,0x418);
          iVar10 = iVar10 + 1;
        }
        else if (*(char *)(iVar3 + 0x71) != iVar9) {
          fn_0017821c(auStack_14b8 + iVar10 * 0x418,iVar2 + iVar9 * 0x418 + -0x4080,0x418);
          iVar10 = iVar10 + 1;
        }
        iVar9 = (int)(char)((char)iVar9 + '\x01');
      } while (iVar9 < 0x14);
      cVar1 = *(char *)(iVar3 + 0x70);
      if (*(char *)(iVar3 + 0x71) < cVar1) {
        cVar1 = cVar1 + -1;
      }
      fn_00166824(auStack_2560,iVar4 + 0x184608);
      local_255d = 0;
      local_255e = cVar1;
      fn_00166824(auStack_2550,iVar4 + 0x184618);
      local_254d = 0;
      local_254e = cVar1;
    }
    if (*(char *)(local_252c + 0xef) == '\0') {
      if (*(char *)(local_252c + 0xed) != '\0') {
        fn_0017821c(auStack_2518,iVar2 + 0x1160,0x418);
        fn_0017821c(auStack_2100,iVar2 + 0x1578,0x418);
        fn_0017821c(auStack_1ce8,iVar2 + 0x1990,0x418);
        fn_0017821c(auStack_18d0,iVar2 + 0x1da8,0x418);
        fn_00166824(auStack_2558,iVar2 + 0x4288);
        fn_00166824(auStack_2548,iVar2 + 0x4298);
      }
    }
    else {
      iVar10 = 0;
      iVar9 = 0x14;
      do {
        if (*(char *)(iVar3 + 0x73) == iVar9) {
          fn_0017821c(auStack_2518 + iVar10 * 0x418,iVar4 + 0x185aa0,0x418);
          iVar10 = iVar10 + 1;
        }
        else if (*(char *)(iVar3 + 0x74) != iVar9) {
          fn_0017821c(auStack_2518 + iVar10 * 0x418,iVar2 + iVar9 * 0x418 + -0x4080,0x418);
          iVar10 = iVar10 + 1;
        }
        iVar9 = (int)(char)((char)iVar9 + '\x01');
      } while (iVar9 < 0x18);
      cVar1 = *(char *)(iVar3 + 0x73);
      if (*(char *)(iVar3 + 0x74) < cVar1) {
        cVar1 = cVar1 + -1;
      }
      fn_00166824(auStack_2558,iVar4 + 0x184610);
      local_2555 = 0;
      local_2556 = cVar1;
      fn_00166824(auStack_2548,iVar4 + 0x184620);
      local_2545 = 0;
      local_2546 = cVar1;
    }
  }
LAB_003590e4:
  fn_00158f6c(iVar3,0x7a);
  fn_0017821c(iVar2,iVar4 + 0x180388,0x5b34);
  if (*(char *)(local_28 + 10) == '\0') {
    uVar5 = iVar4 + 0x185e00;
    bVar11 = *(char *)(iVar4 + 0x185eed) == '\0';
    if (bVar11) {
      uVar5 = (uint)*(byte *)(iVar4 + 0x185eef);
    }
    if (!bVar11 || uVar5 != 0) {
      iVar3 = 0x10;
      do {
        puVar7 = auStack_5638 + iVar3 * 0x418;
        while( true ) {
          fn_0017821c(iVar2 + iVar3 * 0x418 + -0x4080,puVar7,0x418);
          iVar3 = (int)(char)((char)iVar3 + '\x01');
          if (0x17 < iVar3) {
            fn_00166824(iVar2 + 0x4280,auStack_2560);
            fn_00166824(iVar2 + 0x4288,auStack_2558);
            fn_00166824(iVar2 + 0x4290,auStack_2550);
            fn_00166824(iVar2 + 0x4298,auStack_2548);
            goto LAB_0035920c;
          }
          uVar5 = iVar3 - 0x10;
          bVar11 = uVar5 < 4;
          if (!bVar11) {
            uVar5 = iVar3 - 0x18;
          }
          if ((bVar11 || uVar5 < 4) || (iVar3 == 0x20 || iVar3 == 0x22)) break;
          puVar7 = auStack_76f8 + iVar3 * 0x418;
        }
      } while( true );
    }
  }
LAB_0035920c:
  iVar3 = fn_00182988(DAT_008977e4);
  if ((*(char *)(iVar3 + 0x3a3) == '\0') && (*(char *)(iVar4 + 0x185eed) != '\0')) {
    psVar8 = (short *)(iVar2 + 0x42a0);
    uVar6 = fn_0022730c((int)*psVar8);
    fn_00289f08(*(undefined4 *)(DAT_00897804 + 0x24),uVar6);
    fn_0017821c(auStack_458,psVar8,0x418);
    fn_0061bb6c(iVar2 + 0x46b8,asStack_1d4);
    fn_0061a5ec((int)*psVar8,asStack_1d4);
    fn_0061a848(psVar8,asStack_1d4);
    iVar2 = 0;
    do {
      if ((int)asStack_1d4[iVar2] - 1U < 0x21f) {
        fn_00289e78(*(undefined4 *)(DAT_00897804 + 0x24));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x4c);
  }
  return 1;
}


