#include "single_00222460.h"
void fn_00222460(int *param_1)
{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  bool bVar12;
  int in_s0;
  float fVar13;
  int local_38;
  float local_34;
  int local_30;
  if (param_1[0x8a] == 0) goto switchD_00222498_default;
  fn_00221a90(param_1);
  fn_00224d7c(param_1);
  switch((char)param_1[0x83]) {
  case '\0':
    iVar9 = fn_006b1f90(param_1);
    if (iVar9 == 0) {
      if (*(char *)((int)param_1 + 0x23f) == '\0') {
        iVar9 = fn_006a99b0(param_1);
        if (iVar9 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = 4;
        }
        (**(code **)(*param_1 + 0x44))(param_1,uVar10,4,0);
        fn_00259728(param_1 + 0x71,1);
      }
      else {
        (**(code **)(*param_1 + 0x44))(param_1,4,4,0);
        if ((((byte)DAT_008c62fc & 1) == 0) && (iVar9 = fn_00303afc(&DAT_008c62fc), iVar9 != 0)) {
          DAT_008f9e2c = 0;
          DAT_008f9e30 = 0;
          DAT_008f9e34 = 0;
        }
        fn_00225150(param_1,&DAT_008f9e2c);
      }
      goto switchD_00222498_default;
    }
    *(undefined1 *)((int)param_1 + 0x20e) = 1;
  case '\x01':
    switch(*(undefined1 *)((int)param_1 + 0x20e)) {
    case 2:
    case 3:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      goto switchD_00222498_default;
    }
    iVar7 = param_1[0x7f];
    iVar9 = param_1[0x80] - iVar7 >> 0x1f;
    if ((param_1[0x80] - iVar7) / 0x44 + iVar9 != iVar9) {
      (**(code **)(*param_1 + 0x10))(param_1,iVar7);
      param_1[0xc] = *(int *)(iVar7 + 0x20);
      param_1[0x8d] = param_1[0x4c];
      uVar2 = fn_006a99b0(param_1);
      *(undefined1 *)((int)param_1 + 0x23e) = uVar2;
      param_1[0x4c] = *(int *)(iVar7 + 0x24);
      *(undefined1 *)((int)param_1 + 0x23f) = *(undefined1 *)(iVar7 + 0x41);
      iVar9 = *(int *)(iVar7 + 0x1c);
      param_1[0x8b] = *(int *)(iVar7 + 0x18);
      param_1[0x8c] = iVar9;
      iVar9 = fn_006a7f8c(param_1 + 0x66);
      if ((iVar9 != 0) && (*(char *)((int)param_1 + 0x23a) == '\0')) {
        uVar5 = (uint)((char)param_1[0x65] != -1);
        bVar12 = uVar5 != (int)*(char *)(iVar7 + 0x40);
        if (bVar12) {
          uVar5 = param_1[100];
        }
        if (bVar12 && uVar5 != 0) {
          uVar5 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
          bVar12 = uVar5 == 1;
          if (bVar12) {
            uVar5 = (uint)*(byte *)((int)param_1 + 0x243);
          }
          if (bVar12 && uVar5 == 0) {
            if (*(char *)(iVar7 + 0x40) == '\0') {
              fn_00225fd8(param_1,1,0);
            }
            else {
              fn_00225b04();
            }
          }
        }
      }
      fVar13 = *(float *)(iVar7 + 0x28);
      iVar9 = fn_006a99b0(param_1);
      if (iVar9 != 0) {
        fn_006b26ac(param_1);
        param_1[0x6d] = in_s0;
        local_38 = param_1[8];
        local_30 = param_1[10];
        local_34 = (float)param_1[9] + (fVar13 - (float)param_1[0x6d]);
        (**(code **)(*param_1 + 0x10))(param_1,&local_38);
      }
      fn_00221918(param_1,iVar7 + 0xc);
      uVar5 = fn_00225150(param_1,iVar7 + 0xc);
      iVar9 = fn_006a9938(param_1);
      if (iVar9 == 0) {
        iVar9 = fn_006a99b0(param_1);
        uVar3 = 0;
        if (iVar9 != 0) goto LAB_002227b0;
      }
      else {
LAB_002227b0:
        uVar3 = 1;
      }
      uVar4 = 0;
      if ((uVar3 & ~uVar5) != 0) {
        uVar4 = fn_00224f68(param_1,iVar7 + 0xc,iVar7 + 0x2c);
        uVar5 = uVar4;
      }
      if (uVar5 != 0) {
        uVar4 = (uint)*(byte *)((int)param_1 + 0x242);
      }
      if (uVar5 == 0 || uVar4 == 0) {
        fn_00259728(param_1 + 0x71,0);
      }
      if (((*(char *)((int)param_1 + 0x23f) == '\0') &&
          (iVar9 = fn_006a99b0(param_1), iVar9 != *(char *)((int)param_1 + 0x23e))) &&
         (iVar9 = fn_006a9938(param_1), iVar9 == 0)) {
        iVar9 = fn_006f7370(DAT_008977e0);
        if (iVar9 == 0) {
          fn_00226784(param_1,0x7534,iVar7 + 0x30);
        }
        else {
          fn_00226784(param_1,0x7564,iVar7 + 0x30);
        }
        fn_00225a6c(param_1,0x10009ca);
      }
      uVar10 = *(undefined4 *)(iVar7 + 0x2c);
      uVar8 = *(undefined4 *)(iVar7 + 0x3c);
      cVar1 = *(char *)(iVar7 + 0x42);
      if ((char)param_1[0x16] != '\0') {
        iVar9 = (**(code **)(*param_1 + 0x50))(param_1);
        if (((iVar9 == 1 || iVar9 == 6) && (*(char *)((int)param_1 + 0x242) != '\0')) &&
           ((iVar9 = fn_006a9938(param_1), iVar9 != 0 &&
            (iVar9 = fn_006a7bf8(param_1,param_1[0x7e]), iVar9 != 0)))) {
          fn_00221654(param_1,uVar8,uVar10);
        }
        if (cVar1 != '\0') {
          iVar9 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
          if ((iVar9 == 1 || iVar9 == 2) || (iVar9 == 3 || iVar9 == 4)) {
            uVar10 = 0x10001f5;
          }
          else {
            uVar10 = 0;
          }
          if ((char)param_1[0x65] != -1) {
            if (param_1[100] == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
              iVar9 = (int)*(short *)(iVar9 + 0x1c);
            }
            iVar9 = fn_00242b4c(iVar9);
            uVar10 = *(undefined4 *)(iVar9 + 4);
          }
          fn_00225a6c(param_1,uVar10);
        }
      }
      uVar5 = param_1[0x7f];
      uVar3 = param_1[0x80];
      if (uVar5 != uVar3) {
        uVar4 = uVar5 + 0x44;
        if (uVar3 != uVar4) {
          if (uVar3 < uVar4) {
            for (; uVar4 != uVar3; uVar4 = uVar4 + 0x44) {
              fn_0017821c(uVar5,uVar4,0x44);
              uVar5 = uVar5 + 0x44;
            }
          }
          else {
            iVar9 = uVar3 - uVar4;
            if (0 < iVar9) {
              uVar3 = uVar5 - 0x44;
              if ((iVar9 / 0x44 & 1U) != 0) {
                fn_0017821c(uVar5,uVar4,0x44);
                uVar3 = uVar5;
                uVar5 = uVar4;
              }
              for (iVar9 = iVar9 / 0x44 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
                fn_0017821c(uVar3 + 0x44,uVar5 + 0x44,0x44);
                uVar3 = uVar3 + 0x88;
                uVar5 = uVar5 + 0x88;
                fn_0017821c(uVar3,uVar5,0x44);
              }
            }
          }
        }
        param_1[0x80] = param_1[0x80] + -0x44;
      }
    }
    iVar9 = param_1[0x80] - param_1[0x7f] >> 0x1f;
    if ((((param_1[0x80] - param_1[0x7f]) / 0x44 + iVar9 != iVar9) &&
        (iVar9 = fn_006b1e5c(param_1), iVar9 != 0)) &&
       ((((char)param_1[0x16] == '\0' ||
         (iVar9 = fn_006a9c40(param_1[0x8a],param_1,1,1), iVar9 == 0)) ||
        ((*(char *)((int)param_1 + 0x23f) == '\0' && (iVar9 = fn_006a9938(param_1), iVar9 == 0)))))
       ) goto switchD_00222498_default;
    uVar2 = 0;
    break;
  case '\x02':
    fn_0022434c(param_1);
    iVar9 = fn_006f75ac(DAT_008977e0);
    iVar9 = fn_001759d0(*(undefined4 *)(iVar9 + 8));
    if (iVar9 != 0) goto switchD_00222498_default;
    iVar9 = fn_006be78c(param_1[0x7d]);
    if (iVar9 == 0) {
      iVar9 = fn_00391dac();
      if (iVar9 != 0) {
        uVar2 = 0xc;
        break;
      }
      fn_00696994(DAT_008977e0,0x60,1);
      fn_00699014(DAT_008977e0,1);
      uVar2 = 3;
    }
    else {
      fn_0021d834(DAT_008977e0,0);
      iVar9 = fn_006be96c(param_1[0x7d]);
      if (iVar9 == 0) {
        iVar9 = fn_006be738(param_1[0x7d]);
        if (iVar9 == 0) goto switchD_00222498_default;
        iVar9 = fn_006be890(param_1[0x7d]);
        if (iVar9 == 0) {
          iVar9 = fn_006f75ac(DAT_008977e0);
          iVar9 = fn_001759d0(*(undefined4 *)(iVar9 + 8));
          if (iVar9 != 0) goto switchD_00222498_default;
          fn_002e1798(param_1[0x7d]);
          uVar2 = 10;
        }
        else {
          iVar9 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc));
          if (iVar9 < 500) {
            fn_00696994(DAT_008977e0,100,1);
            fn_00699014(DAT_008977e0,1);
            fn_002e1784(param_1[0x7d]);
            uVar2 = 10;
            break;
          }
          uVar2 = 0xc;
        }
      }
      else {
        fn_00696994(DAT_008977e0,0x65,1);
        fn_00699014(DAT_008977e0,1);
        uVar2 = 10;
      }
    }
    goto LAB_0022341c;
  case '\x03':
    if ((char)param_1[0x8e] != '\0') {
      uVar5 = fn_00391d84();
      bVar12 = (char)param_1[0x8e] == '\v';
      uVar10 = fn_006f75ac(DAT_008977e0);
      fn_006b2428(param_1,1);
      switch((char)param_1[0x8e]) {
      case '\x03':
      case '\x04':
      case '\x05':
      case '\x06':
      case '\a':
      case '\b':
      case '\t':
      case '\n':
      case '\v':
        fn_00144834(0x310,1);
      }
      if (uVar5 == 0) {
        uVar2 = 0xc;
      }
      else {
        fn_00246484(uVar10,2);
        uVar2 = 4;
      }
      *(undefined1 *)((int)param_1 + 0x20e) = uVar2;
      if (uVar5 != 0 || bVar12) {
        fn_00698fb8(DAT_008977e0,1);
      }
      local_38 = 0;
      fn_0038ff40(uVar10,0,0,uVar5 ^ 1);
      uVar8 = fn_006b20c8(param_1);
      fn_0016b4ec(uVar10,uVar8);
      uVar8 = fn_006b24d0(param_1);
      fn_0038fee8(uVar10,uVar8);
      if (uVar5 == 0) {
        if (!bVar12) {
          fn_003196b0(param_1[0x7d],1);
        }
        fn_00391cf4((char)param_1[0x8e]);
        *(undefined1 *)(param_1 + 0x8e) = 0;
      }
      goto switchD_00222498_default;
    }
    fn_00698fb8(DAT_008977e0,0xffffffff);
    uVar10 = fn_006f7a48(DAT_008977e0);
    fn_00128744(uVar10,0);
    uVar2 = 0;
    goto LAB_0022341c;
  case '\x04':
    fn_0022434c(param_1);
    iVar9 = fn_006f75ac(DAT_008977e0);
    cVar1 = *(char *)(*(int *)(iVar9 + 8) + 0x8f);
    if (cVar1 == '\x01') {
      if ((char)param_1[0x8e] == '\x02') {
        iVar7 = fn_00163d44(0);
        iVar6 = fn_00163d44(9);
        if ((iVar7 == 8) && (iVar6 - 0xcU < 0x2f)) {
          fn_00246484(iVar9,2);
          local_38 = 0;
          fn_0038ff40(iVar9,0,0);
          uVar10 = fn_00230008((char *)&DAT_002231d8);
          fn_0038fee8(iVar9,uVar10);
          uVar2 = 5;
          break;
        }
      }
LAB_00222f18:
      uVar10 = fn_006f7a48(DAT_008977e0);
      fn_00128744(uVar10,0xffffffff);
      local_38 = 1;
      fn_0038ff40(iVar9,0,0,1);
      uVar10 = fn_006b20c8(param_1);
      fn_0016b4ec(iVar9,uVar10);
      uVar10 = fn_00230008((char *)&DAT_002231fc);
      fn_0038fee8(iVar9,uVar10);
      *(undefined1 *)((int)param_1 + 0x20e) = 7;
      fn_00144834(0x310,1);
      goto switchD_00222498_default;
    }
    goto joined_r0x00222f10;
  case '\x05':
    fn_0022434c(param_1);
    iVar9 = fn_006f75ac(DAT_008977e0);
    cVar1 = *(char *)(*(int *)(iVar9 + 8) + 0x8f);
    if (cVar1 == '\x01') goto LAB_00222f18;
joined_r0x00222f10:
    if (cVar1 != '\x02') goto switchD_00222498_default;
    fn_0016b40c(iVar9);
    uVar2 = 6;
    *(undefined1 *)(param_1 + 0x8e) = 0;
    break;
  case '\x06':
    iVar9 = fn_006f75ac(DAT_008977e0);
    iVar9 = fn_001759d0(*(undefined4 *)(iVar9 + 8));
    if (iVar9 != 0) goto switchD_00222498_default;
    fn_00696994(DAT_008977e0,99,1);
    fn_00699014(DAT_008977e0,1);
    uVar2 = 3;
    goto LAB_0022341c;
  case '\a':
    fn_0022434c(param_1);
    iVar9 = (**(code **)(**(int **)(DAT_008977e0 + 0x28) + 0x2c))();
    if (iVar9 != 0) goto switchD_00222498_default;
    iVar9 = fn_006f75ac(DAT_008977e0);
    iVar9 = fn_001759d0(*(undefined4 *)(iVar9 + 8));
    if (iVar9 != 0) goto switchD_00222498_default;
    uVar10 = 0x11;
    if ((char)param_1[0x8e] == '\x02') {
      uVar10 = 0x12;
    }
    fn_001f0fb4(*(undefined4 *)(DAT_008977e0 + 0x30),uVar10,0);
    uVar2 = 8;
    *(undefined1 *)(param_1 + 0x8e) = 0;
    break;
  case '\b':
    uVar10 = *(undefined4 *)(DAT_008977e0 + 0x30);
    iVar9 = fn_006ac0d8(uVar10,0x11);
    if (iVar9 != 0) goto switchD_00222498_default;
    iVar9 = fn_006ac0d8(uVar10,0x12);
    uVar2 = 0;
    if (iVar9 != 0) goto switchD_00222498_default;
LAB_0022341c:
    *(undefined1 *)((int)param_1 + 0x20e) = uVar2;
    goto switchD_00222498_default;
  case '\t':
    fn_0022434c(param_1);
    iVar9 = fn_006ac0d8(*(undefined4 *)(DAT_008977e0 + 0x30),0x13);
    if (iVar9 != 0) goto switchD_00222498_default;
    iVar9 = fn_00163d44(0);
    iVar7 = fn_00163d44(0x32);
    uVar10 = *(undefined4 *)(DAT_008977e0 + 0xa8);
    if (((iVar9 != 0x32 || iVar7 != 0x10) ||
        (iVar9 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c)), iVar9 == 1)) ||
       (iVar9 = fn_00212310(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar10), iVar9 == 0))
    goto switchD_00222498_default;
    fn_006b2180(param_1);
    uVar2 = 2;
    break;
  case '\n':
    uVar10 = fn_006f75ac(DAT_008977e0);
    local_38 = 0;
    fn_0038ff40(uVar10,0,0);
    uVar8 = fn_006b20c8(param_1);
    fn_0016b4ec(uVar10,uVar8);
    fn_00391e0c();
    fn_0022f750();
    fn_0015b0dc();
    iVar9 = fn_00113ce4();
    if (iVar9 == 0) {
      pcVar11 = (char *)&DAT_00223238;
    }
    else {
      pcVar11 = (char *)&DAT_0022321c;
    }
    uVar8 = fn_006b2354(param_1,pcVar11);
    fn_0038fee8(uVar10,uVar8);
    uVar2 = 0xb;
    break;
  case '\v':
    fn_0022434c(param_1);
    iVar9 = fn_006f75ac(DAT_008977e0);
    cVar1 = *(char *)(*(int *)(iVar9 + 8) + 0x8f);
    if (cVar1 == '\x01') {
      local_38 = 0;
      fn_0038ff40(iVar9,0,0,1);
      uVar10 = fn_006b20c8(param_1);
      fn_0016b4ec(iVar9,uVar10);
      uVar10 = fn_006b2354(param_1,(char *)&DAT_002234a4);
      fn_0038fee8(iVar9,uVar10);
      fn_003196b0(param_1[0x7d],0);
      fn_006b2428(param_1,0);
      uVar2 = 0xc;
    }
    else {
      if (cVar1 != '\x02') goto switchD_00222498_default;
      local_38 = 0;
      fn_0038ff40(iVar9,0,0,1);
      uVar10 = fn_006b20c8(param_1);
      fn_0016b4ec(iVar9,uVar10);
      uVar10 = fn_006b2354(param_1,(char *)&DAT_002234a4);
      fn_0038fee8(iVar9,uVar10);
      fn_003196b0(param_1[0x7d],1);
      fn_0024276c(*(undefined4 *)(DAT_00897804 + 0x1c),0);
      fn_006b2428(param_1,0);
      uVar2 = 0xc;
    }
    break;
  case '\f':
    fn_0022434c(param_1);
    iVar9 = (**(code **)(**(int **)(DAT_008977e0 + 0x28) + 0x2c))();
    if (iVar9 != 0) goto switchD_00222498_default;
    iVar9 = fn_006f75ac(DAT_008977e0);
    iVar9 = fn_001759d0(*(undefined4 *)(iVar9 + 8));
    if (iVar9 != 0) goto switchD_00222498_default;
    if (*(char *)((int)param_1 + 0x239) == '\0') {
      fn_00698fb8(DAT_008977e0,0xffffffff);
      uVar10 = fn_006f7a48(DAT_008977e0);
      fn_00128744(uVar10,0);
      uVar2 = 0;
      goto LAB_0022341c;
    }
    uVar10 = fn_006f7a84(DAT_008977e0);
    fn_001e8064(uVar10,*(undefined1 *)((int)param_1 + 0x239));
    uVar2 = 0xd;
    *(undefined1 *)((int)param_1 + 0x239) = 0;
    break;
  default:
    goto switchD_00222498_default;
  }
  *(undefined1 *)((int)param_1 + 0x20e) = uVar2;
switchD_00222498_default:
  *(char *)((int)param_1 + 0x20d) = (char)param_1[0x83];
  param_1[0x84] = param_1[0x84] + 1;
  *(char *)(param_1 + 0x83) = *(char *)((int)param_1 + 0x20e);
  if (*(char *)((int)param_1 + 0x20d) == *(char *)((int)param_1 + 0x20e)) {
    param_1[0x85] = param_1[0x85] + 1;
  }
  else {
    param_1[0x85] = 0;
  }
  *(char *)((int)param_1 + 0x21d) = (char)param_1[0x87];
  param_1[0x88] = param_1[0x88] + 1;
  *(char *)(param_1 + 0x87) = *(char *)((int)param_1 + 0x21e);
  if (*(char *)((int)param_1 + 0x21d) == *(char *)((int)param_1 + 0x21e)) {
    param_1[0x89] = param_1[0x89] + 1;
  }
  else {
    param_1[0x89] = 0;
  }
  return;
}
