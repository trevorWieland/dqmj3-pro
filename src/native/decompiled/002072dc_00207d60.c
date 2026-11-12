#include "002072dc_00207d60.h"



void fn_00207d60(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint local_28;
  
  uVar3 = 0x10;
  iVar5 = 0x14;
  local_28 = param_4;
  if (param_2 == 0) {
    uVar3 = 0x14;
    iVar5 = 0x18;
  }
  do {
    uVar4 = uVar3 & 0xff;
    iVar1 = fn_00164a34(param_1,uVar4);
    if ((((iVar1 != 0) && (local_28 = uVar4, iVar1 = fn_00164a34(param_1,uVar4), iVar1 != 0)) &&
        (iVar1 = fn_0017484c(DAT_008977e4), iVar1 != 0)) &&
       ((piVar2 = (int *)fn_00165bb4(iVar1,&local_28), piVar2 != (int *)0x0 &&
        ((**(code **)(*piVar2 + 0x14))(piVar2,param_3), (int)(char)uVar3 - 0x10U < 8)))) {
      fn_00164b0c(param_1);
    }
    uVar3 = (uint)(char)((char)uVar3 + '\x01');
  } while ((int)uVar3 < iVar5);
  uVar3 = 0x20;
  do {
    iVar5 = 1;
    while( true ) {
      if (param_2 == iVar5) {
        uVar4 = uVar3 & 0xff;
        iVar5 = fn_00164a34(param_1,uVar4);
        if (((iVar5 != 0) && (local_28 = uVar4, iVar5 = fn_00164a34(param_1,uVar4), iVar5 != 0)) &&
           ((iVar5 = fn_0017484c(DAT_008977e4), iVar5 != 0 &&
            ((piVar2 = (int *)fn_00165bb4(iVar5,&local_28), piVar2 != (int *)0x0 &&
             ((**(code **)(*piVar2 + 0x14))(piVar2,param_3), (int)(char)uVar3 - 0x10U < 8)))))) {
          fn_00164b0c(param_1);
        }
      }
      uVar3 = (uint)(char)((char)uVar3 + '\x01');
      if (0x21 < (int)uVar3) {
        uVar3 = 0x22;
        do {
          iVar5 = 1;
          while( true ) {
            if (param_2 == iVar5) {
              uVar4 = uVar3 & 0xff;
              iVar5 = fn_00164a34(param_1,uVar4);
              if ((((iVar5 != 0) &&
                   (local_28 = uVar4, iVar5 = fn_00164a34(param_1,uVar4), iVar5 != 0)) &&
                  (iVar5 = fn_0017484c(DAT_008977e4), iVar5 != 0)) &&
                 ((piVar2 = (int *)fn_00165bb4(iVar5,&local_28), piVar2 != (int *)0x0 &&
                  ((**(code **)(*piVar2 + 0x14))(piVar2,param_3), (int)(char)uVar3 - 0x10U < 8)))) {
                fn_00164b0c(param_1);
              }
            }
            uVar3 = (uint)(char)((char)uVar3 + '\x01');
            if (0x23 < (int)uVar3) {
              return;
            }
            uVar4 = uVar3 - 0x10;
            bVar6 = 3 < uVar4;
            if (bVar6) {
              uVar4 = uVar3 - 0x18;
            }
            if ((!bVar6 || uVar4 < 4) || (uVar3 == 0x20 || uVar3 == 0x22)) break;
            iVar5 = 0;
          }
        } while( true );
      }
      uVar4 = uVar3 - 0x10;
      bVar6 = uVar4 < 4;
      if (!bVar6) {
        uVar4 = uVar3 - 0x18;
      }
      if ((bVar6 || uVar4 < 4) || (uVar3 == 0x20 || uVar3 == 0x22)) break;
      iVar5 = 0;
    }
  } while( true );
}



void fn_00207c98(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  puVar2 = *(undefined4 **)(param_1 + 0xa0);
  uVar8 = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0x42c80000;
  iVar3 = *(int *)(param_1 + 0xa0);
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
    DAT_008f9e2c = uVar8;
    DAT_008f9e30 = uVar8;
    DAT_008f9e34 = uVar8;
  }
  uVar1 = DAT_008f9e34;
  uVar8 = DAT_008f9e30;
  *(undefined4 *)(iVar3 + 0xc) = DAT_008f9e2c;
  *(undefined4 *)(iVar3 + 0x10) = uVar8;
  *(undefined4 *)(iVar3 + 0x14) = uVar1;
  uVar6 = *(uint *)(param_1 + 0xac);
  uVar7 = *(uint *)(param_1 + 0xb0);
  if (uVar6 != uVar7) {
    uVar5 = uVar6;
    if (uVar7 <= uVar6) {
      do {
        uVar5 = uVar5 + 0x10;
      } while (uVar5 != uVar7);
    }
    *(uint *)(param_1 + 0xb0) = uVar7 - (uVar7 - uVar6 & 0xfffffff0);
  }
  return;
}



void fn_00207650(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_70 [4];
  undefined1 local_6c;
  
  switch(param_2) {
  case 0:
  case 3:
    iVar1 = fn_00174834(DAT_008977e4);
    fn_002d6598(auStack_70,*(undefined1 *)(iVar1 + 0x180389));
    local_6c = 0x13;
    fn_00209634(param_1,auStack_70);
    local_6c = 0x14;
    fn_00209634(param_1,auStack_70);
    break;
  case 1:
    iVar1 = fn_00174834(DAT_008977e4);
    fn_002d6598(auStack_70,*(undefined1 *)(iVar1 + 0x180389));
    local_6c = 0x13;
    fn_00209634(param_1,auStack_70);
    break;
  case 2:
    iVar1 = fn_00174834(DAT_008977e4);
    fn_002d6598(auStack_70,*(undefined1 *)(iVar1 + 0x180389));
    local_6c = 0x14;
    fn_00209634(param_1,auStack_70);
    break;
  case 4:
    iVar1 = fn_00174834(DAT_008977e4);
    fn_002d6598(auStack_70,*(undefined1 *)(iVar1 + 0x180389));
    fn_00208248(param_1,auStack_70,1,1);
    fn_00209634(param_1,auStack_70);
    break;
  case 5:
    iVar1 = fn_00174834(DAT_008977e4);
    fn_002d6598(auStack_70,*(undefined1 *)(iVar1 + 0x180389));
    fn_00208248(param_1,auStack_70,1,0);
    fn_00209634(param_1,auStack_70);
    break;
  case 6:
    iVar1 = fn_00174834(DAT_008977e4);
    fn_002d6598(auStack_70,*(undefined1 *)(iVar1 + 0x180389));
    fn_00208248(param_1,auStack_70,0,1);
    fn_00209634(param_1,auStack_70);
    break;
  case 7:
    iVar1 = fn_00174834(DAT_008977e4);
    fn_002d6598(auStack_70,*(undefined1 *)(iVar1 + 0x180389));
    fn_00208248(param_1,auStack_70,0,0);
    fn_00209634(param_1,auStack_70);
    break;
  case 8:
    iVar1 = fn_00174834(DAT_008977e4);
    fn_002d6598(auStack_70,*(undefined1 *)(iVar1 + 0x180389));
    fn_00208248(param_1,auStack_70,1,1);
    fn_00209634(param_1,auStack_70);
    fn_00208248(param_1,auStack_70,0,1);
    fn_00209634(param_1,auStack_70);
    break;
  case 9:
    iVar1 = fn_00174834(DAT_008977e4);
    fn_002d6598(auStack_70,*(undefined1 *)(iVar1 + 0x180389));
    fn_00208248(param_1,auStack_70,1,0);
    fn_00209634(param_1,auStack_70);
    fn_00208248(param_1,auStack_70,0,0);
    fn_00209634(param_1,auStack_70);
    break;
  case 10:
    iVar1 = fn_00174834(DAT_008977e4);
    fn_002d6598(auStack_70,*(undefined1 *)(iVar1 + 0x180389));
    fn_00208d38(param_1,auStack_70,1,1);
    fn_00209634(param_1,auStack_70);
    break;
  case 0xb:
    iVar1 = fn_00174834(DAT_008977e4);
    fn_002d6598(auStack_70,*(undefined1 *)(iVar1 + 0x180389));
    fn_00208d38(param_1,auStack_70,1,0);
    fn_00209634(param_1,auStack_70);
    break;
  case 0xc:
    iVar1 = fn_00174834(DAT_008977e4);
    fn_002d6598(auStack_70,*(undefined1 *)(iVar1 + 0x180389));
    fn_00208d38(param_1,auStack_70,0,1);
    fn_00209634(param_1,auStack_70);
    break;
  case 0xd:
    iVar1 = fn_00174834(DAT_008977e4);
    fn_002d6598(auStack_70,*(undefined1 *)(iVar1 + 0x180389));
    fn_00208d38(param_1,auStack_70,0,0);
    fn_00209634(param_1,auStack_70);
    break;
  case 0xe:
    iVar1 = fn_00174834(DAT_008977e4);
    fn_002d6598(auStack_70,*(undefined1 *)(iVar1 + 0x180389));
    fn_00208d38(param_1,auStack_70,1,1);
    fn_00209634(param_1,auStack_70);
    fn_00208d38(param_1,auStack_70,0,1);
    fn_00209634(param_1,auStack_70);
    break;
  case 0xf:
    iVar1 = fn_00174834(DAT_008977e4);
    fn_002d6598(auStack_70,*(undefined1 *)(iVar1 + 0x180389));
    fn_00208d38(param_1,auStack_70,1,0);
    fn_00209634(param_1,auStack_70);
    fn_00208d38(param_1,auStack_70,0,0);
    fn_00209634(param_1,auStack_70);
  }
  *(undefined1 *)(param_1 + 0xd0) = 1;
  return;
}



undefined4 fn_00207438(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  undefined1 auStack_d8 [88];
  uint local_80;
  char *local_7c;
  undefined1 auStack_78 [96];
  undefined4 local_18;
  
  iVar3 = param_2 + param_3 * 0x266c;
  pcVar4 = (char *)(iVar3 + 4);
  cVar1 = *pcVar4;
  if (cVar1 == '\a') {
    fn_002d6598(&local_e8,*(undefined1 *)(iVar3 + 5));
    fn_002d6580(&local_e8,pcVar4,0xd);
    fn_00209634(param_1,&local_e8);
  }
  else if (cVar1 == '\b') {
    uVar2 = 0;
    local_80 = 0;
    if (0 < param_3 + 1) {
      do {
        if (*(char *)(param_2 + uVar2 * 0x266c + 4) == '\b') {
          local_80 = (uint)(byte)((char)local_80 + 1);
        }
        uVar2 = uVar2 + 1 & 0xff;
      } while ((int)uVar2 < param_3 + 1);
    }
    local_7c = pcVar4;
    fn_002d6598(&local_e8,*(undefined1 *)(iVar3 + 5));
    fn_002d6428(&local_e8,&local_80);
    fn_00209634(param_1,&local_e8);
  }
  else if (cVar1 == '\t') {
    fn_002d6598(&local_e8,*(undefined1 *)(iVar3 + 5));
    fn_002d6580(&local_e8,pcVar4,0xf);
    fn_00209634(param_1,&local_e8);
  }
  else {
    if (cVar1 != '\n') {
      return 0;
    }
    local_18 = (uint)*(ushort *)(iVar3 + 8);
    fn_002d6598(auStack_d8,*(undefined1 *)(iVar3 + 5));
    fn_002d63b0(auStack_d8,&local_18);
    fn_00209634(param_1,auStack_d8);
    if (((unsigned int)(local_18) >> 8) & 0xff == '\0') {
      local_e8 = 0;
      local_e4 = 0;
      local_e0 = 0;
      local_dc = 0;
      local_ec = (uint)*(byte *)(iVar3 + 10);
      if (*(char *)(iVar3 + 10) != '\0') {
        local_e8 = iVar3 + 0xc;
        local_e4 = iVar3 + 0xd0;
        local_e0 = iVar3 + 0x194;
        local_dc = iVar3 + 600;
      }
      fn_002d6598(auStack_78,*(undefined1 *)(iVar3 + 5));
      fn_002d6398(auStack_78,&local_ec);
      fn_00209634(param_1,auStack_78);
    }
  }
  return 1;
}



int fn_002072dc(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  uint extraout_r1;
  uint uVar2;
  int iVar3;
  char local_c8;
  char local_c7;
  char local_c6;
  char local_c5;
  char local_c4;
  uint local_c0;
  int aiStack_bc [17];
  undefined1 auStack_78 [104];
  
  fn_00301f50(&local_c8,0x4c);
  iVar3 = param_2 + param_3 * 0x266c;
  if (*(char *)(iVar3 + 4) == '\r') {
    local_c8 = *(char *)(iVar3 + 9);
    param_3 = param_3 + 1;
    cVar1 = local_c4;
    if (local_c8 != '\0') {
      local_c7 = *(char *)(iVar3 + 10);
      cVar1 = local_c4 + '\x01';
      if (local_c7 != '\0') {
        local_c6 = *(char *)(iVar3 + 0xb);
        cVar1 = local_c4 + '\x02';
        if (local_c6 != '\0') {
          local_c5 = *(char *)(iVar3 + 0xc);
          cVar1 = local_c4 + '\x03';
          if (local_c5 != '\0') {
            cVar1 = local_c4 + '\x04';
          }
        }
      }
    }
    local_c4 = cVar1;
    uVar2 = extraout_r1;
    if (*(char *)(param_2 + param_3 * 0x266c + 4) != '\x0e') {
      do {
        iVar3 = param_2 + param_3 * 0x266c;
        if (0xf < local_c0) break;
        param_3 = param_3 + 1;
        aiStack_bc[local_c0] = iVar3 + 8;
        local_c0 = local_c0 + 1;
        uVar2 = (uint)*(byte *)(iVar3 + 5);
      } while (*(char *)(param_2 + param_3 * 0x266c + 4) != '\x0e');
    }
    fn_002d6598(auStack_78,uVar2);
    fn_002d656c(auStack_78,&local_c8);
    fn_00209634(param_1,auStack_78);
    iVar3 = local_c0 + 2;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}


