#include "0062a454_0062a95c.h"



void fn_0062a95c(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  
  uVar1 = fn_0062a40c();
  fn_0061a1ec(uVar1,(int)*param_4,(int)param_4[1],param_3,auStack_18);
  fn_00655430(auStack_18);
  return;
}



undefined4
fn_0062a760(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 *local_30;
  undefined4 *local_2c;
  int local_28;
  
  uVar8 = 0;
  local_30 = (undefined4 *)0x0;
  local_2c = (undefined4 *)0x0;
  local_28 = 0;
  iVar5 = fn_00145adc(param_2 + 0xe8);
  if (iVar5 == 0) {
    uVar6 = 0x10;
  }
  else {
    bVar9 = true;
    switch(param_4) {
    case 3:
    case 4:
    case 5:
    case 6:
    case 0xc:
    case 0xd:
    case 0xe:
      cVar1 = *(char *)(param_1 + 0x1d4);
      if (((cVar1 == '\0') || (bVar9 = cVar1 != '\x01', !bVar9)) || (cVar1 != '\x02'))
      goto switchD_0062a7ac_caseD_7;
      break;
    default:
switchD_0062a7ac_caseD_7:
      fn_0062b2ec(param_1,0x10,0x14,param_2,&local_30,param_4);
      if (!bVar9) goto LAB_0062a848;
    }
    uVar6 = 0x14;
  }
  fn_0062b2ec(param_1,uVar6,0x18,param_2,&local_30,param_4);
LAB_0062a848:
  fn_0062a998(param_1,param_2,&local_30);
  uVar7 = 0;
  iVar5 = (int)local_2c - (int)local_30 >> 0x1f;
  puVar2 = local_30;
  puVar3 = local_2c;
  if (((int)local_2c - (int)local_30) / 0x34 + iVar5 != iVar5) {
    do {
      if ((*(char *)(local_30 + uVar7 * 0xd + 1) == '\x02') &&
         (iVar5 = fn_00622b2c(param_1,local_30 + uVar7 * 0xd,param_3,param_5), iVar5 != 0)) {
        uVar8 = 1;
        puVar2 = local_30;
        puVar3 = local_2c;
        break;
      }
      uVar7 = uVar7 + 1;
      puVar2 = local_30;
      puVar3 = local_2c;
    } while (uVar7 < (uint)(((int)local_2c - (int)local_30) / 0x34));
  }
  for (; puVar4 = local_2c, puVar2 != local_2c; puVar2 = puVar2 + 0xd) {
    local_2c = puVar3;
    (**(code **)*puVar2)(puVar2);
    puVar3 = local_2c;
    local_2c = puVar4;
  }
  local_2c = puVar3;
  fn_001008c4(local_30,(local_28 - (int)local_30) / 0x34,0);
  return uVar8;
}



void fn_0062a720(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  fn_0017821c(param_2 + (short)(ushort)*param_2 * 0x266c + 4,param_3,0x266c);
  *param_2 = *param_2 + 1;
  return;
}



undefined4 fn_0062a6e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006f4d64(param_1 + 4,1);
  if ((iVar1 != 0) || (iVar1 = fn_006f4d64(param_1 + 4,0), uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_0062a454(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  undefined4 local_1d0;
  int local_1cc [103];
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  local_30 = param_1;
  iStack_2c = param_2;
  iStack_28 = param_3;
  fn_0017821c(&local_1d0,param_2,0x1a0);
  iVar10 = 0;
  iVar9 = 0;
  iVar4 = param_3 + ((unsigned int)(local_1d0) >> 8) & 0xff * 0x418;
  iVar11 = (int)*(short *)(iVar4 + -0x4064);
  if (0 < *(short *)(param_2 + 0x18)) {
    do {
      piVar8 = (int *)(param_2 + iVar9 * 8 + 0x1c);
      iVar5 = *piVar8;
      if (iVar5 < 0) {
        if (*(char *)(iVar4 + -0x3fe3) < '\x01') {
          local_1cc[0] = fn_00176dc0(iVar4 + -0x4080);
          local_1cc[0] = iVar11 - local_1cc[0];
          local_1d0 = *piVar8;
          local_1cc[1] = 0;
          if (0 < local_1cc[0]) {
                    /* WARNING: Subroutine does not return */
            fn_00146590();
          }
          if (*piVar8 < local_1cc[0]) {
            piVar6 = local_1cc;
          }
          else {
            piVar6 = &local_1d0;
          }
          if (0 < *piVar6) {
            piVar6 = local_1cc + 1;
          }
          iVar5 = *piVar6;
        }
        else {
          iVar5 = 0;
        }
        *piVar8 = iVar5;
      }
      iVar10 = iVar10 + iVar5;
      iVar11 = iVar11 - iVar5;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(short *)(param_2 + 0x18));
  }
  iVar10 = *(int *)(param_2 + 0x54) + iVar10;
  if (*(char *)(iVar4 + -0x3fe3) == '\0') {
    fn_00180278(iVar4 + -0x4080,-iVar10);
  }
  iVar4 = local_30;
  if (iVar10 < 1) {
    if (iVar10 < 0) {
      iVar10 = (int)*(char *)(param_2 + 1);
      uVar2 = iVar10 - 0x10;
      bVar12 = 3 < uVar2;
      if (bVar12) {
        uVar2 = iVar10 - 0x18;
      }
      if ((bVar12 && 3 < uVar2) && (iVar10 != 0x20 && iVar10 != 0x22)) {
        uVar2 = 0x10;
      }
      else {
        uVar2 = 0x14;
      }
      iVar9 = fn_0061be08(iVar10);
      if (iVar9 == 0) {
        uVar3 = 0x14;
      }
      else {
        uVar3 = 0x18;
      }
      if (uVar2 < uVar3) {
        do {
          iVar9 = param_3 + uVar2 * 0x418;
          if ((*(char *)(iVar9 + -0x407e) == '\x04') && (0 < *(short *)(iVar9 + -0x4080))) {
            cVar1 = *(char *)(iVar9 + -0x4019);
            bVar12 = cVar1 == '\0';
            if (bVar12) {
              cVar1 = *(char *)(iVar9 + -0x400a);
            }
            bVar13 = bVar12 && cVar1 == '\0';
            if (bVar12 && cVar1 == '\0') {
              bVar13 = *(char *)(iVar9 + -0x4018) == '\0';
            }
            if (bVar13) {
              fn_00621304(uVar2,param_3,local_1cc + 0x6b);
              iVar9 = fn_00655430(local_1cc + 0x6b);
              if (iVar9 != 0) {
                fn_00655e10(iVar4 + 4,uVar2);
              }
            }
          }
          uVar2 = (uint)(char)((char)uVar2 + '\x01');
          iVar9 = fn_0061be08(iVar10);
          if (iVar9 == 0) {
            iVar9 = 0x14;
          }
          else {
            iVar9 = 0x18;
          }
        } while ((int)uVar2 < iVar9);
      }
      return;
    }
  }
  else {
    iVar4 = local_30 + 4;
    if (*(char *)(param_2 + 7) == '\x01') {
      iVar9 = (int)*(char *)(param_2 + 1);
      iVar10 = param_3 + iVar9 * 0x418;
      if ((*(char *)(iVar10 + -0x407e) == '\x03') && (0 < *(short *)(iVar10 + -0x4080))) {
        cVar1 = *(char *)(iVar10 + -0x4019);
        bVar12 = cVar1 == '\0';
        if (bVar12) {
          cVar1 = *(char *)(iVar10 + -0x400a);
        }
        bVar13 = bVar12 && cVar1 == '\0';
        if (bVar12 && cVar1 == '\0') {
          bVar13 = *(char *)(iVar10 + -0x4018) == '\0';
        }
        if (bVar13) {
          fn_00621304(iVar9,param_3,&local_1d0);
          iVar10 = fn_00655430(&local_1d0);
          if (iVar10 != 0) {
            fn_00655e10(iVar4,iVar9);
          }
        }
      }
    }
    if (*(char *)(param_2 + 7) == '\x02') {
      iVar9 = (int)*(char *)(param_2 + 1);
      iVar10 = param_3 + iVar9 * 0x418;
      if ((*(char *)(iVar10 + -0x407e) == '\x05') && (0 < *(short *)(iVar10 + -0x4080))) {
        cVar1 = *(char *)(iVar10 + -0x4019);
        bVar12 = cVar1 == '\0';
        if (bVar12) {
          cVar1 = *(char *)(iVar10 + -0x400a);
        }
        bVar13 = bVar12 && cVar1 == '\0';
        if (bVar12 && cVar1 == '\0') {
          bVar13 = *(char *)(iVar10 + -0x4018) == '\0';
        }
        if (bVar13) {
          fn_00621304(iVar9,param_3,&local_1d0);
          iVar10 = fn_00655430(&local_1d0);
          if (iVar10 != 0) {
            fn_00655e10(iVar4,iVar9);
          }
        }
      }
    }
    if (*(char *)(param_2 + 0x17) != '\0') {
      uVar7 = fn_0061fc60((int)*(char *)(param_2 + 1),param_3);
      fn_00628b98(local_30,param_3,param_2,uVar7);
      uVar7 = fn_0061fc60((int)*(char *)(param_2 + 1),param_3);
      fn_00628970(local_30,param_3,param_2,uVar7);
      return;
    }
  }
  return;
}


