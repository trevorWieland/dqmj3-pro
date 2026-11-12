#include "003babe0_003babe0.h"



void fn_003babe0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  short *psVar12;
  undefined4 *puVar13;
  int unaff_r6;
  bool bVar14;
  char cVar15;
  undefined4 uStack_37b18;
  undefined4 uStack_37b14;
  short sStack_37b10;
  short sStack_37b0e;
  short sStack_37b0c;
  undefined1 auStack_37b08 [8];
  char cStack_37b00;
  undefined1 auStack_37aa8 [16];
  undefined1 auStack_37a98 [96];
  undefined1 auStack_37a38 [16];
  short asStack_37a28 [113922];
  
  cVar15 = *(char *)(param_1 + 0x88);
  bVar14 = cVar15 == '\0';
  if (bVar14) {
    cVar15 = *(char *)(param_1 + 0x86);
  }
  if (bVar14 && cVar15 == '\0') {
    uVar5 = fn_001296d0(DAT_00898840);
    bVar14 = uVar5 == 0;
    if (bVar14) {
      uVar5 = (uint)*(byte *)(param_1 + 0x68);
    }
    if (bVar14 && uVar5 == 0) {
      fn_005f6270(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x44));
    }
  }
  if (*(char *)(param_1 + 0xc) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x68)) {
  case 0:
    iVar11 = *(int *)(param_1 + 0x80) + 1;
    *(int *)(param_1 + 0x80) = iVar11;
    if (*(char *)(param_1 + 0x88) == '\0') {
      if (*(char *)(param_1 + 0x87) != '\0') {
        if (*(char *)(param_1 + 0x86) == '\0') {
          iVar11 = fn_0066e3bc(DAT_00897850);
          if ((iVar11 == 2) &&
             (((iVar11 = fn_006ce5b8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x3c) + 4)
                                      ,1), iVar11 == 0 ||
               (iVar11 = fn_0040f628(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x3c)), iVar11 != 1
               )) && (*(int *)(param_1 + 0x80) < 0x12d)))) break;
          if (*(char *)(param_1 + 0x86) == '\0') {
            fn_0066de6c(*(undefined4 *)(param_1 + 0x7c));
            *(undefined1 *)(param_1 + 0x86) = 1;
          }
        }
        fn_005f6270(*(undefined4 *)(param_1 + 0x7c));
        iVar11 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x14))();
        if ((iVar11 == 0) && (*(int *)(*(int *)(param_1 + 0x7c) + 0x44) == 0)) {
          *(undefined1 *)(param_1 + 0x68) = 1;
          *(undefined1 *)(*(int *)(param_1 + 0x78) + 8) = 1;
          fn_0066ec10(DAT_00897850);
        }
        break;
      }
      if (*(char *)(param_1 + 0x86) == '\0') {
        iVar11 = fn_001296d0(DAT_00898840);
        if (((iVar11 == 0) &&
            ((iVar11 = fn_006ce5b8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x3c) + 4),1
                                   ), iVar11 == 0 ||
             (iVar11 = fn_0040f628(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x3c)), iVar11 != 1))
            )) && (*(int *)(param_1 + 0x80) < 0x12d)) break;
        if (*(char *)(param_1 + 0x86) == '\0') {
          *(undefined1 *)(*(int *)(param_1 + 0x78) + 8) = 0;
          fn_001296e8(DAT_00898840);
          *(undefined1 *)(param_1 + 0x86) = 1;
        }
      }
      iVar11 = *(int *)(param_1 + 0x80);
    }
    if (0x1d < iVar11) {
      *(undefined1 *)(param_1 + 0x68) = 1;
    }
    break;
  case 1:
    uVar6 = fn_001c232c(DAT_008977e4);
    fn_00205da0(auStack_37b08,uVar6);
    if (*(char *)(*(int *)(param_1 + 0x74) + 0x4c) == '\x02') {
      fn_00203c84(*(undefined2 *)(DAT_00897830 + 0x158));
      fn_00203bb4();
      fn_0022f750();
      fn_0015b0dc();
    }
    fn_0015b0dc(*(int *)(param_1 + 0x74) + 0x4e);
    if (cStack_37b00 == '\x01') {
      uStack_37b18 = 1;
      uStack_37b14 = 1;
      if (*(char *)(*(int *)(param_1 + 0x74) + 0x4c) == '\x02') {
        fn_003ba4b8(param_1,DAT_00898214,(char *)&DAT_003bb238,0);
      }
      else {
        fn_003ba4b8(param_1,DAT_00898214,(char *)&DAT_003bb220,0);
      }
      iVar11 = *(int *)(param_1 + 0x5c);
      *(undefined4 *)(iVar11 + 0x38) = 0;
      *(undefined1 *)(iVar11 + 0x5f) = 1;
      iVar11 = *(int *)(param_1 + 0x70);
      uVar2 = 0;
LAB_003baf44:
      *(undefined1 *)(iVar11 + 8) = uVar2;
    }
    else {
      if (cStack_37b00 == '\x02' || cStack_37b00 == '\x06') {
        uStack_37b18 = 1;
        uStack_37b14 = 1;
        if (*(char *)(*(int *)(param_1 + 0x74) + 0x4c) == '\x02') {
          fn_003ba4b8(param_1,DAT_00898214,(char *)&DAT_003bb26c,0);
        }
        else {
          fn_003ba4b8(param_1,DAT_00898214,(char *)&DAT_003bb254,0);
        }
        iVar11 = *(int *)(param_1 + 0x70);
        uVar2 = 2;
        goto LAB_003baf44;
      }
      if (cStack_37b00 == '\x03') {
        uStack_37b18 = 1;
        uStack_37b14 = 1;
        if (*(char *)(*(int *)(param_1 + 0x74) + 0x4c) == '\x02') {
          fn_003ba4b8(param_1,DAT_00898214,(char *)&DAT_003bb2a8,0);
        }
        else {
          fn_003ba4b8(param_1,DAT_00898214,(char *)&DAT_003bb288,0);
        }
        *(undefined1 *)(*(int *)(param_1 + 0x70) + 8) = 1;
      }
    }
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
    if ((cStack_37b00 != '\x06') &&
       (iVar11 = fn_00370578(*(undefined4 *)(param_1 + 0x74)), iVar11 != 0)) {
      fn_00664930(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0x6c));
      fn_00370550(*(undefined4 *)(param_1 + 0x74));
    }
    *(undefined1 *)(param_1 + 0x68) = 2;
    switch(*(undefined1 *)(*(int *)(param_1 + 0x74) + 0x4c)) {
    default:
      goto switchD_003baffc_caseD_0;
    case 1:
      uVar6 = fn_006b870c(*(undefined4 *)(DAT_00897804 + 0x30));
      fn_00166824(&uStack_37b18,uVar6);
      iVar11 = fn_00205da0(auStack_37a98,auStack_37b08);
      switch(*(undefined1 *)(iVar11 + 8)) {
      case 1:
        uStack_37b18 = CONCAT22(((unsigned int)(uStack_37b18) >> 16) & 0xffff,(short)uStack_37b18 + 1);
        break;
      case 2:
        uStack_37b18 = CONCAT22(((unsigned int)(uStack_37b18) >> 16) & 0xffff + 1,(short)uStack_37b18);
        break;
      case 3:
        uStack_37b14 = CONCAT22(((unsigned int)(uStack_37b14) >> 16) & 0xffff,(short)uStack_37b14 + 1);
      }
      fn_00120ec8(auStack_37a38);
      sVar4 = (short)((uStack_37b14 >> 0x10 & 0x7fff) << 1);
      if (cStack_37b00 == '\x01') {
        sVar4 = sVar4 + 1;
      }
      uStack_37b14 = CONCAT22(sVar4,(short)uStack_37b14);
      fn_0028b934(*(undefined4 *)(DAT_00897804 + 0x30),&uStack_37b18);
      break;
    case 2:
      uVar6 = fn_006b8724(*(undefined4 *)(DAT_00897804 + 0x30));
      fn_00166824(&sStack_37b10,uVar6);
      iVar11 = fn_00205da0(auStack_37a98,auStack_37b08);
      switch(*(undefined1 *)(iVar11 + 8)) {
      case 1:
        sStack_37b10 = sStack_37b10 + 1;
        break;
      case 2:
        sStack_37b0e = sStack_37b0e + 1;
        break;
      case 3:
        sStack_37b0c = sStack_37b0c + 1;
      }
      fn_00120ec8(auStack_37a38);
      if (cStack_37b00 == '\x01') {
        uVar6 = fn_006b86c4(*(undefined4 *)(DAT_00897804 + 0x30));
        fn_0019bc50(&uStack_37b18,uVar6);
        if (sStack_37b10 < 0) {
          psVar12 = asStack_37a28 + 4;
        }
        else {
          psVar12 = asStack_37a28 + 2;
        }
        if (9999 < *psVar12) {
          psVar12 = asStack_37a28;
        }
        uStack_37b14 = CONCAT22((short)(uStack_37b14 >> 0x10),*psVar12);
        fn_0019bc44(*(undefined4 *)(DAT_00897804 + 0x30),&uStack_37b18);
      }
      fn_0028b954(*(undefined4 *)(DAT_00897804 + 0x30),&sStack_37b10);
      break;
    case 3:
      uVar6 = fn_006b8700(*(undefined4 *)(DAT_00897804 + 0x30));
      fn_00166824(&uStack_37b18,uVar6);
      iVar11 = fn_00205da0(auStack_37a98,auStack_37b08);
      switch(*(undefined1 *)(iVar11 + 8)) {
      case 1:
        uStack_37b18 = CONCAT22(((unsigned int)(uStack_37b18) >> 16) & 0xffff,(short)uStack_37b18 + 1);
        break;
      case 2:
        uStack_37b18 = CONCAT22(((unsigned int)(uStack_37b18) >> 16) & 0xffff + 1,(short)uStack_37b18);
        break;
      case 3:
        uStack_37b14 = CONCAT22(((unsigned int)(uStack_37b14) >> 16) & 0xffff,(short)uStack_37b14 + 1);
      }
      fn_00120ec8(auStack_37a38);
      fn_0028b928(*(undefined4 *)(DAT_00897804 + 0x30),&uStack_37b18);
      break;
    case 4:
      break;
    }
    fn_002e2a18(*(undefined4 *)(DAT_00897804 + 0x58),*(undefined4 *)(DAT_00897830 + 0x948));
switchD_003baffc_caseD_0:
    fn_00689818(param_1,0x7e,0);
    fn_00120ec8(auStack_37aa8);
    break;
  case 2:
    if (*(char *)(*(int *)(param_1 + 0x70) + 9) != '\0') {
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 1;
    }
    break;
  case 3:
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  case 4:
    puVar13 = (undefined4 *)fn_001f74d8(param_1,0x5b);
    if (puVar13 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)(**(code **)*puVar13)(puVar13);
      do {
        if (puVar7 == &DAT_00894aac) goto LAB_003bb41c;
        puVar7 = (undefined4 *)*puVar7;
      } while (puVar7 != (undefined4 *)0x0);
    }
    puVar13 = (undefined4 *)0x0;
LAB_003bb41c:
    uVar5 = fn_006f6a38(param_1);
    if ((uVar5 & 0x400000) != 0) {
      *(undefined1 *)((int)puVar13 + 0xe11) = 1;
    }
    if (*(char *)(puVar13 + 900) != '\0') {
      if (*(char *)(puVar13 + 0x385) != '\0') {
        fn_006898b8(param_1,0x5b,0);
      }
LAB_003bb460:
      *(undefined1 *)(param_1 + 0x68) = 6;
    }
    break;
  case 5:
    iVar11 = fn_006ad868(param_1,1,0);
    if (iVar11 != 0) goto LAB_003bb460;
    break;
  case 6:
    fn_002d6808(*(undefined4 *)(param_1 + 0x74));
    fn_002d686c(*(undefined4 *)(param_1 + 0x74));
    fn_0017821c(&uStack_37b18,*(undefined4 *)(DAT_00897804 + 4),0x37af0);
    if (*(char *)(*(int *)(param_1 + 0x74) + 0x4c) == '\0') {
      fn_001c232c(DAT_008977e4);
    }
    fn_00688634(DAT_00897804,&uStack_37b18);
    fn_001f7810(param_1,1,0);
    if (*(char *)(*(int *)(param_1 + 0x74) + 0x4c) == '\x04') {
      *(undefined1 *)(param_1 + 0x68) = 8;
    }
    else {
      fn_0026a494(DAT_00897818,*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),1);
      uVar2 = 7;
LAB_003bb580:
      *(undefined1 *)(param_1 + 0x68) = uVar2;
    }
    break;
  case 7:
    iVar11 = fn_00269b38(DAT_00897818);
    if (iVar11 == 2) {
      fn_002d68ac(*(undefined4 *)(param_1 + 0x74));
      *(undefined1 *)(param_1 + 0x68) = 8;
    }
    else {
      iVar11 = fn_00269864(DAT_00897818);
      if (iVar11 != 0) {
        fn_002d68ac(*(undefined4 *)(param_1 + 0x74));
        uVar2 = 9;
        goto LAB_003bb580;
      }
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\0') {
    return;
  }
  puVar13 = (undefined4 *)0x0;
  switch(*(undefined1 *)(param_1 + 0x68)) {
  default:
    goto switchD_003bb5ec_caseD_0;
  case 2:
    if (*(char *)(*(int *)(param_1 + 0x74) + 0x4c) != '\x02') {
      fn_003ba9cc(param_1);
      goto switchD_003bb5ec_caseD_0;
    }
    cVar15 = '\x02';
    if (*(int *)(param_1 + 0x70) != 0) {
      cVar15 = *(char *)(*(int *)(param_1 + 0x70) + 8);
      if (cVar15 == '\0') {
        unaff_r6 = 1;
      }
      else if (cVar15 == '\x02') {
        unaff_r6 = 0;
      }
      else if (cVar15 == '\x01') {
        cVar15 = '\0';
        unaff_r6 = 0;
        goto LAB_003bb6ec;
      }
      bVar3 = fn_00203cb4();
      *(byte *)(param_1 + 0x85) = bVar3;
      uVar5 = fn_00203cfc();
      uVar6 = fn_00203c84(*(undefined2 *)(DAT_00897830 + 0x158));
      unaff_r6 = fn_00203a18(uVar6,unaff_r6);
      uVar8 = fn_00203cb4();
      uVar9 = fn_00203cfc();
      cVar15 = *(byte *)(param_1 + 0x85) != uVar8;
      if (uVar5 < uVar9) {
        *(undefined1 *)(param_1 + 0x84) = (char)uVar9;
      }
      else {
        *(undefined1 *)(param_1 + 0x84) = 0;
      }
    }
LAB_003bb6ec:
    cVar1 = *(char *)(*(int *)(param_1 + 0x70) + 8);
    if (unaff_r6 == 0 || cVar1 == '\x01') {
      fn_003ba4b8(param_1,DAT_00898214,(char *)&DAT_003bb968,0);
    }
    else if (cVar1 == '\0') {
      if (cVar15 != '\0') {
        fn_003ba914(param_1,0x17);
        iVar11 = *(int *)(param_1 + 0x5c);
        *(undefined4 *)(iVar11 + 0x38) = 0;
        *(undefined1 *)(iVar11 + 0x5f) = 1;
        *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      fn_003ba914(param_1,0x1f);
    }
    else if (cVar1 == '\x02') {
      if (cVar15 != '\0') {
        fn_003ba914(param_1,0x18);
        iVar11 = *(int *)(param_1 + 0x5c);
        *(undefined4 *)(iVar11 + 0x38) = 0;
        *(undefined1 *)(iVar11 + 0x5f) = 1;
        *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      fn_003ba914(param_1,0x20);
    }
    uVar2 = 3;
    break;
  case 3:
    iVar11 = fn_003ba9cc(param_1);
    if (iVar11 != 0) goto switchD_003bb5ec_caseD_0;
    fn_006898b8(param_1,0x7e,1,0);
    uVar2 = 5;
    break;
  case 8:
    switch(*(undefined1 *)(*(int *)(param_1 + 0x74) + 0x4c)) {
    case 0:
    case 1:
      fn_006899f4(param_1,0xdb,1);
      break;
    case 2:
      fn_006899f4(param_1,0xdc,1);
      break;
    case 3:
      puVar7 = (undefined4 *)fn_001f74ec(param_1,0xd4);
      if (puVar7 != (undefined4 *)0x0) {
        puVar10 = (undefined4 *)(**(code **)*puVar7)(puVar7);
        do {
          if (puVar10 == &DAT_008965d0) {
            puVar13 = puVar7;
            break;
          }
          puVar10 = (undefined4 *)*puVar10;
        } while (puVar10 != (undefined4 *)0x0);
      }
      fn_00178290(puVar13,(char *)&DAT_003bb994);
      puVar13[2] = 0xda;
      puVar13[0x14] = 0xde;
      puVar13[0x15] = 0xde;
      fn_005b3260(puVar13,(char *)&DAT_003bb9a4);
      fn_005b3224(puVar13,(char *)&DAT_003bb9b4);
      puVar13[0x26] = 3;
      fn_006899f4(param_1,0xd4,1);
      break;
    case 4:
      fn_006899f4(param_1,0xfc,0);
    }
    goto switchD_003bb5ec_caseD_0;
  }
  *(undefined1 *)(param_1 + 0x68) = uVar2;
switchD_003bb5ec_caseD_0:
  iVar11 = fn_006896fc(param_1,0x5b);
  if (iVar11 == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
  }
  return;
}


