#include "006299f8_0062b2ec.h"



void fn_0062b2ec(undefined4 param_1,uint param_2,int param_3,int param_4,int *param_5,uint param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_78 [60];
  uint local_3c;
  undefined4 uStack_34;
  uint uStack_30;
  int local_2c;
  int local_28;
  
  uVar10 = param_2;
  uStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if ((int)param_2 < param_3) {
    do {
      cVar1 = (char)uVar10;
      iVar4 = (int)cVar1;
      if (*(char *)(local_28 + 0xfb) != '\0') {
        uVar2 = iVar4 - 0x10;
        if (uVar2 >= 8) {
          param_2 = iVar4 - 0x18;
        }
        if (uVar2 < 8 || param_2 < 8) {
          bVar14 = uVar2 < 4;
          if (!bVar14) {
            uVar2 = iVar4 - 0x18;
          }
          if ((bVar14 || uVar2 < 4) || (iVar4 == 0x20 || iVar4 == 0x22)) {
            cVar1 = cVar1 + '\x04';
          }
          else {
            cVar1 = cVar1 + -4;
          }
          iVar4 = (int)cVar1;
        }
        else if (iVar4 - 0x20U < 2) {
          if (iVar4 == 0x20 || iVar4 == 0x22) {
            iVar4 = 0x21;
          }
          else {
            iVar4 = 0x20;
          }
        }
        else if (iVar4 - 0x22U < 2) {
          if (iVar4 == 0x20 || iVar4 == 0x22) {
            iVar4 = 0x23;
          }
          else {
            iVar4 = 0x22;
          }
        }
        else {
          iVar4 = 0;
        }
      }
      param_2 = iVar4 * 0x83;
      iVar9 = local_28 + iVar4 * 0x418;
      if (0 < *(short *)(iVar9 + -0x4080)) {
        cVar1 = *(char *)(iVar9 + -0x4019);
        bVar14 = cVar1 == '\0';
        if (bVar14) {
          cVar1 = *(char *)(iVar9 + -0x400a);
        }
        if ((bVar14 && cVar1 == '\0') && (*(char *)(iVar9 + -0x4018) == '\0')) {
          iVar11 = 0;
          iVar12 = iVar11;
          do {
            iVar5 = (int)((short *)(iVar9 + -0x4080))[iVar11 + 0x142];
            param_2 = iVar5 - 1U;
            if ((iVar5 - 1U < 0x21f) &&
               (uVar2 = fn_00660d20(iVar5), param_2 = param_6, uVar2 == param_6)) {
              fn_006565b8(auStack_78);
              fn_006564a8(auStack_78,iVar5,iVar4,iVar12);
              iVar5 = param_5[1];
              if (iVar5 == param_5[2]) {
                uVar2 = (iVar5 - *param_5) / 0x34;
                if (uVar2 < (uint)((param_5[2] - *param_5) / 0x34)) {
                  param_5[1] = iVar5 + 0x34;
                  iVar13 = iVar5;
                  iVar6 = iVar5;
                  if (iVar5 != 0) {
                    fn_00656538(iVar5,iVar5 + -0x34);
                  }
                  while (iVar5 != iVar6 + -0x34) {
                    *(undefined1 *)(iVar13 + -0x30) = *(undefined1 *)(iVar6 + -100);
                    *(undefined1 *)(iVar13 + -0x2f) = *(undefined1 *)(iVar6 + -99);
                    *(undefined1 *)(iVar13 + -0x2e) = *(undefined1 *)(iVar6 + -0x62);
                    *(undefined4 *)(iVar13 + -0x2c) = *(undefined4 *)(iVar6 + -0x60);
                    fn_006f94f4(iVar13 + -0x28,iVar6 + -0x5c);
                    *(undefined4 *)(iVar13 + -0x28) = *(undefined4 *)(iVar6 + -0x5c);
                    *(undefined2 *)(iVar13 + -0x28) = *(undefined2 *)(iVar6 + -0x5c);
                    *(undefined2 *)(iVar13 + -0x28) = *(undefined2 *)(iVar6 + -0x5c);
                    *(undefined2 *)(iVar13 + -0x28) = *(undefined2 *)(iVar6 + -0x5c);
                    *(undefined1 *)(iVar13 + -0x1e) = *(undefined1 *)(iVar6 + -0x52);
                    uVar15 = *(undefined4 *)(iVar6 + -0x4c);
                    uVar16 = *(undefined4 *)(iVar6 + -0x48);
                    uVar17 = *(undefined4 *)(iVar6 + -0x44);
                    uVar18 = *(undefined4 *)(iVar6 + -0x40);
                    uVar19 = *(undefined4 *)(iVar6 + -0x3c);
                    uVar20 = *(undefined4 *)(iVar6 + -0x38);
                    *(undefined4 *)(iVar13 + -0x1c) = *(undefined4 *)(iVar6 + -0x50);
                    *(undefined4 *)(iVar13 + -0x18) = uVar15;
                    *(undefined4 *)(iVar13 + -0x14) = uVar16;
                    *(undefined4 *)(iVar13 + -0x10) = uVar17;
                    *(undefined4 *)(iVar13 + -0xc) = uVar18;
                    *(undefined4 *)(iVar13 + -8) = uVar19;
                    *(undefined4 *)(iVar13 + -4) = uVar20;
                    iVar13 = iVar13 + -0x34;
                    iVar6 = iVar6 + -0x34;
                  }
                  fn_006565e0(iVar5,auStack_78);
                  param_2 = extraout_r1_00;
                }
                else {
                  local_3c = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
                  if (local_3c < uVar2 + 0x20) {
                    local_3c = uVar2 + 0x20;
                  }
                  iVar3 = fn_00100fc6(local_3c * 0x34,0);
                  iVar6 = iVar3;
                  for (iVar13 = *param_5; iVar13 != iVar5; iVar13 = iVar13 + 0x34) {
                    if (iVar6 != 0) {
                      fn_00656538(iVar6,iVar13);
                    }
                    iVar6 = iVar6 + 0x34;
                  }
                  iVar13 = iVar3 + ((iVar5 - *param_5) / 0x34) * 0x34;
                  if (iVar13 != 0) {
                    fn_00656538(iVar13,auStack_78);
                  }
                  iVar6 = param_5[1];
                  iVar13 = iVar3 + ((iVar5 - *param_5) / 0x34) * 0x34;
                  for (; iVar5 != iVar6; iVar5 = iVar5 + 0x34) {
                    iVar13 = iVar13 + 0x34;
                    if (iVar13 != 0) {
                      fn_00656538(iVar13,iVar5);
                    }
                  }
                  puVar7 = (undefined4 *)*param_5;
                  puVar8 = (undefined4 *)param_5[1];
                  iVar5 = (int)puVar8 - (int)puVar7;
                  for (; puVar7 != puVar8; puVar7 = puVar7 + 0xd) {
                    (**(code **)*puVar7)(puVar7);
                  }
                  fn_001008c4(*param_5,(param_5[2] - *param_5) / 0x34,0);
                  *param_5 = iVar3;
                  param_2 = iVar3 + local_3c * 0x34;
                  param_5[1] = iVar3 + (iVar5 / 0x34) * 0x34 + 0x34;
                  param_5[2] = param_2;
                }
              }
              else {
                param_2 = iVar5 + 0x34;
                param_5[1] = param_2;
                if (iVar5 != 0) {
                  fn_00656538();
                  param_2 = extraout_r1;
                }
              }
              iVar12 = (int)(short)((short)iVar12 + 1);
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < 0x4c);
        }
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < local_2c);
  }
  return;
}



void fn_00629ba8(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_28 [12];
  
  iVar7 = (int)*(char *)(param_2 + 1);
  iVar6 = 0;
  iVar5 = 1;
  do {
    iVar2 = param_2 + iVar5;
    if (*(char *)(iVar2 + 0x11a) == '\0') {
      bVar8 = *(char *)(iVar2 + 0xb9) != '\0';
      cVar1 = '\0';
      if (bVar8) {
        cVar1 = *(char *)(iVar2 + 0x58);
      }
      if ((bVar8 && cVar1 != '\0') && (iVar2 = fn_0068f87c(iVar5), iVar2 == 1)) {
        iVar6 = (int)(char)((char)iVar6 + '\x01');
      }
    }
    do {
      iVar5 = (int)(char)((char)iVar5 + '\x01');
      if (0x60 < iVar5) {
        if (iVar6 == 0) {
          return;
        }
        uVar3 = iVar7 - 0x10;
        bVar8 = uVar3 < 4;
        if (!bVar8) {
          uVar3 = iVar7 - 0x18;
        }
        if ((bVar8 || uVar3 < 4) || (iVar7 == 0x20 || iVar7 == 0x22)) {
          uVar3 = 0x14;
        }
        else {
          uVar3 = 0x10;
        }
        iVar5 = fn_0061be08(iVar7);
        if (iVar5 == 0) {
          uVar4 = 0x14;
        }
        else {
          uVar4 = 0x18;
        }
        if (uVar4 <= uVar3) {
          return;
        }
        goto LAB_00629c6c;
      }
    } while (iVar5 == 0x32);
  } while( true );
LAB_00629c6c:
  iVar5 = param_3 + uVar3 * 0x418;
  if ((*(char *)(iVar5 + -0x407e) == '\x02') && (0 < *(short *)(iVar5 + -0x4080))) {
    cVar1 = *(char *)(iVar5 + -0x4019);
    bVar8 = cVar1 == '\0';
    if (bVar8) {
      cVar1 = *(char *)(iVar5 + -0x400a);
    }
    bVar9 = bVar8 && cVar1 == '\0';
    if (bVar8 && cVar1 == '\0') {
      bVar9 = *(char *)(iVar5 + -0x4018) == '\0';
    }
    if (bVar9) {
      fn_00621304(uVar3,param_3,auStack_28);
      iVar5 = 0;
      if (0 < iVar6) {
        do {
          iVar2 = fn_00655430(auStack_28);
          if (iVar2 != 0) {
            fn_00655e10(param_1 + 4,uVar3);
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar6);
      }
    }
  }
  uVar3 = (uint)(char)((char)uVar3 + '\x01');
  iVar5 = fn_0061be08(iVar7);
  if (iVar5 == 0) {
    iVar5 = 0x14;
  }
  else {
    iVar5 = 0x18;
  }
  if (iVar5 <= (int)uVar3) {
    return;
  }
  goto LAB_00629c6c;
}



undefined1 * fn_006299f8(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 local_5220;
  undefined4 local_521c;
  undefined1 auStack_5218 [8320];
  undefined1 auStack_3198 [12480];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_be;
  undefined1 local_bd;
  undefined1 auStack_bc [156];
  
  iVar2 = fn_0061be08((int)*(char *)(param_2 + 5));
  if (iVar2 == 0) {
    iVar2 = 0x23;
  }
  else {
    iVar2 = 0x22;
  }
  iVar6 = param_3 + 0x180388;
  puVar3 = (undefined1 *)(iVar6 + iVar2 * 8);
  pcVar5 = puVar3 + 0x4180;
  if (pcVar5 != (char *)0x0) {
    puVar3 = (undefined1 *)(int)(char)puVar3[0x4182];
  }
  if (pcVar5 == (char *)0x0 || puVar3 == (undefined1 *)0x0) {
    return puVar3;
  }
  if (puVar3 != (undefined1 *)(int)*(char *)(param_2 + 5)) {
    return puVar3;
  }
  puVar3 = (undefined1 *)fn_0061cd4c((int)*pcVar5,iVar6);
  if (puVar3 != (undefined1 *)0x0) {
    return puVar3;
  }
  iVar4 = fn_0061cfc0((int)*pcVar5,iVar6);
  if (iVar4 == 0) {
    return (undefined1 *)0x0;
  }
  fn_006565b8(auStack_bc);
  fn_0061be08(iVar2);
  fn_00656490(auStack_bc,iVar4,iVar2);
  local_5220 = 0;
  local_521c = 0;
  fn_00301f50(auStack_5218,0x2080);
  fn_00301f50(auStack_3198,0x30c0);
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bf = 0;
  local_be = 0;
  local_bd = 0;
  fn_00621a88(param_1,auStack_bc,param_3,&local_5220);
  iVar2 = fn_00626398(param_1,param_3);
  iVar4 = fn_006f4d64(param_1 + 4,1);
  if (iVar4 == 0) {
    iVar4 = fn_006f4d64(param_1 + 4,0);
    bVar1 = false;
    if (iVar4 == 0) goto LAB_00629b5c;
  }
  bVar1 = true;
LAB_00629b5c:
  if ((!bVar1 && iVar2 == 0) && *(char *)(param_1 + 0x1b) == '\0') {
    fn_006267fc(param_1,iVar6,param_3,&local_5220);
  }
  fn_00622928(param_1,auStack_bc,&local_5220,param_3);
  return auStack_bc;
}


