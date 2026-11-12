#include "00627c38_00628308.h"



int fn_00628308(undefined4 param_1,int param_2,int param_3)

{
  return param_2 + ((param_3 << 0x10) >> 0x18) * 0x418 + -0x4080;
}



undefined4 fn_0062819c(undefined4 param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *local_28;
  undefined4 *local_24;
  int local_20;
  
  uVar7 = 0;
  cVar1 = *param_2;
  local_28 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_20 = 0;
  fn_00625f70(param_1,param_2,&local_28,4);
  if (((int)cVar1 + 1U & 1) == 0) {
    fn_00625f70(param_1,param_2,&local_28,0xf);
  }
  if (((int)cVar1 + 1U & 0x80000001) == 1) {
    fn_00625f70(param_1,param_2,&local_28,0x10);
  }
  fn_0062a998(param_1,param_2,&local_28);
  uVar6 = 0;
  iVar5 = (int)local_24 - (int)local_28 >> 0x1f;
  puVar2 = local_28;
  puVar3 = local_24;
  if (((int)local_24 - (int)local_28) / 0x34 + iVar5 != iVar5) {
    do {
      if ((*(char *)(local_28 + uVar6 * 0xd + 1) == '\x02') &&
         (iVar5 = fn_00622b2c(param_1,local_28 + uVar6 * 0xd,param_3,1), iVar5 != 0)) {
        uVar7 = 1;
        puVar2 = local_28;
        puVar3 = local_24;
        break;
      }
      uVar6 = uVar6 + 1;
      puVar2 = local_28;
      puVar3 = local_24;
    } while (uVar6 < (uint)(((int)local_24 - (int)local_28) / 0x34));
  }
  for (; puVar4 = local_24, puVar2 != local_24; puVar2 = puVar2 + 0xd) {
    local_24 = puVar3;
    (**(code **)*puVar2)(puVar2);
    puVar3 = local_24;
    local_24 = puVar4;
  }
  local_24 = puVar3;
  fn_001008c4(local_28,(local_20 - (int)local_28) / 0x34,0);
  return uVar7;
}



undefined1 *
fn_00627c38(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  short sVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  short local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [52];
  short local_5c;
  char local_59;
  char local_58;
  char local_54 [20];
  int local_40;
  undefined4 local_3c;
  undefined4 local_34;
  int local_30;
  uint uStack_2c;
  int iStack_28;
  
  iVar14 = param_5 + 0x180388;
  iVar6 = iVar14 + param_3 * 0x418;
  iVar16 = iVar6 + -0x4080;
  cVar2 = (char)param_3;
  local_40 = iVar16;
  local_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  if (0 < *(short *)(iVar6 + -0x4064)) {
    iVar6 = param_6 + *(int *)(param_6 + 4) * 0x1a0;
    *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
    *(undefined2 *)(iVar6 + 0x20a0) = 1;
    *(undefined1 *)(iVar6 + 0x208a) = 4;
    *(undefined2 *)(iVar6 + 0x208c) = 3;
    *(undefined1 *)(iVar6 + 0x208e) = 3;
    *(char *)(iVar6 + 0x2088) = cVar2;
    *(char *)(iVar6 + 0x2089) = cVar2;
    fn_00629734(param_1,iVar16,(char *)(iVar6 + 0x2088),param_5);
    fn_00654ecc(iVar16,iVar6 + 0x21a2);
    *(undefined1 *)(iVar6 + 0x2204) = 0;
    puVar7 = (undefined1 *)fn_00624960(param_1,iVar14);
    return puVar7;
  }
  sVar5 = fn_001746c0(param_2);
  iVar6 = (int)sVar5;
  local_5c = sVar5;
  local_59 = cVar2;
  local_58 = (char)param_4;
  fn_006565b8(auStack_90);
  fn_006564f4(auStack_90,&local_5c,0,1,0);
  uVar15 = 0;
  if (local_30 == 0xbf) {
    iVar10 = iVar14 + param_4 * 0x418;
    if (0 < *(short *)(iVar10 + -0x4080)) {
      cVar3 = *(char *)(iVar10 + -0x4019);
      bVar18 = cVar3 == '\0';
      if (bVar18) {
        cVar3 = *(char *)(iVar10 + -0x400a);
      }
      if ((bVar18 && cVar3 == '\0') &&
         (bVar18 = *(char *)(iVar10 + -0x4018) == '\0', uVar15 = (uint)bVar18, bVar18)) {
        local_54[0] = (char)param_4;
      }
    }
  }
  else {
    if (local_30 < 0xc0) {
      if (local_30 != 0xbd) {
        if (local_30 == 0xbe) {
          uVar8 = param_3 - 0x10;
          bVar18 = uVar8 < 4;
          if (!bVar18) {
            uVar8 = param_3 - 0x18;
          }
          if ((bVar18 || uVar8 < 4) || (param_3 == 0x20 || param_3 == 0x22)) {
            uVar8 = 0x10;
          }
          else {
            uVar8 = 0x14;
          }
          iVar10 = fn_0061be08(param_3);
          if (iVar10 == 0) {
            uVar9 = 0x18;
          }
          else {
            uVar9 = 0x14;
          }
          if (uVar8 < uVar9) {
            do {
              if ((uVar8 != param_3) &&
                 (iVar10 = iVar14 + uVar8 * 0x418, 0 < *(short *)(iVar10 + -0x4080))) {
                cVar3 = *(char *)(iVar10 + -0x4019);
                bVar18 = cVar3 == '\0';
                if (bVar18) {
                  cVar3 = *(char *)(iVar10 + -0x400a);
                }
                bVar17 = bVar18 && cVar3 == '\0';
                if (bVar18 && cVar3 == '\0') {
                  bVar17 = *(char *)(iVar10 + -0x4018) == '\0';
                }
                if (bVar17) {
                  local_54[uVar15] = (char)uVar8;
                  uVar15 = (uint)(char)((char)uVar15 + '\x01');
                }
              }
              uVar8 = (uint)(char)((char)uVar8 + '\x01');
              iVar10 = fn_0061be08(param_3);
              if (iVar10 == 0) {
                iVar10 = 0x18;
              }
              else {
                iVar10 = 0x14;
              }
            } while ((int)uVar8 < iVar10);
          }
        }
        goto LAB_00627ea8;
      }
    }
    else {
      iVar10 = local_30;
      if (local_30 != 0x1d8) {
        iVar10 = local_30 + 0x12;
      }
      if (local_30 != 0x1d8 && iVar10 != 0x200) goto LAB_00627ea8;
    }
    cVar3 = fn_00624030(local_34,auStack_90,iVar14,local_54,0x14,0);
    uVar15 = (uint)cVar3;
  }
LAB_00627ea8:
  local_3c = 0;
  cVar3 = '\x03';
  local_a8 = (short)local_30;
  iVar10 = local_30;
  if (local_30 != 0x1d8) {
    iVar10 = local_30 + 0x12;
  }
  if (local_30 == 0x1d8 || iVar10 == 0x200) {
    cVar3 = '\x01';
    local_3c = fn_006f4114(iVar16,iVar6);
    local_a8 = sVar5;
  }
  iVar16 = 0;
  if (0 < (int)uVar15) {
    do {
      iVar12 = param_6 + *(int *)(param_6 + 4) * 0x1a0;
      pcVar13 = (char *)(iVar12 + 0x2088);
      *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
      *(undefined2 *)(iVar12 + 0x20a0) = 1;
      *pcVar13 = cVar2;
      *(char *)(iVar12 + 0x2089) = local_54[iVar16];
      *(char *)(iVar12 + 0x208a) = cVar3;
      *(short *)(iVar12 + 0x208c) = local_a8;
      uVar4 = fn_00691d5c(iVar6);
      *(undefined1 *)(iVar12 + 0x208e) = uVar4;
      uVar4 = fn_00163a00(iVar6);
      *(undefined1 *)(iVar12 + 0x208f) = uVar4;
      fn_00655a48(&local_a0,(int)*(char *)(iVar12 + 0x20a0),0,local_3c);
      iVar10 = iVar14 + *(char *)(iVar12 + 0x2089) * 0x418;
      iVar11 = fn_0069212c(iVar6);
      cVar1 = '\0';
      if (iVar11 != 0) {
        cVar1 = *(char *)(iVar10 + -0x3ff8);
      }
      if (iVar11 != 0 && cVar1 != '\0') {
        *(undefined1 *)(iVar12 + 0x21cf) = 1;
LAB_00627fa0:
        *(undefined1 *)(iVar12 + 0x2216) = 1;
      }
      else {
        iVar11 = fn_00692024(iVar6);
        cVar1 = '\0';
        if (iVar11 != 0) {
          cVar1 = *(char *)(iVar10 + -0x3ff9);
        }
        if (iVar11 != 0 && cVar1 != '\0') goto LAB_00627fa0;
        if (cVar3 == '\x01') {
          fn_00623074(local_34,auStack_90,iVar14,param_5,pcVar13,local_a0,uStack_9c,uStack_98,
                       uStack_94);
        }
        else {
          fn_00616c50(iVar6,1,0,(int)*pcVar13,(int)*(char *)(iVar12 + 0x2089),iVar14,&local_a0,
                       iVar12 + 0x20a4,0);
          fn_00618b44(iVar6,(int)*pcVar13,(int)*(char *)(iVar12 + 0x2089),iVar14,&local_a0,
                       iVar12 + 0x20e0,0);
          uVar4 = fn_00691df0(iVar6);
          *(undefined1 *)(iVar12 + 0x209f) = uVar4;
          fn_0062187c(local_34,pcVar13,iVar14);
          fn_0062454c(local_34,pcVar13,iVar14,1,1);
          if (local_30 != 0xbe) {
            fn_0062abdc(local_34,iVar14,pcVar13,param_5);
          }
          fn_00654bf4(iVar14,*(undefined4 *)(iVar12 + 0x221c));
          fn_00654c30(iVar14,*(undefined4 *)(iVar12 + 0x2220));
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)uVar15);
  }
  if (cVar3 == '\x01') {
    fn_00627194(local_34,auStack_90,param_5,param_6);
  }
  if ((local_40 == 0) || (*(char *)(local_40 + 0x67) < '\x01')) {
    iVar6 = param_6 + *(int *)(param_6 + 4) * 0x1a0;
    *(undefined2 *)(iVar6 + 0x20a0) = 1;
    *(undefined1 *)(iVar6 + 0x208a) = 4;
    *(undefined2 *)(iVar6 + 0x208c) = 3;
    *(undefined1 *)(iVar6 + 0x208e) = 3;
    *(char *)(iVar6 + 0x2088) = cVar2;
    *(char *)(iVar6 + 0x2089) = cVar2;
    *(undefined1 *)(iVar6 + 0x20ec) = 1;
    *(undefined1 *)(iVar6 + 0x214d) = 1;
    fn_0062abdc(local_34,iVar14,(char *)(iVar6 + 0x2088),param_5);
    fn_00654bf4(iVar14,*(undefined4 *)(iVar6 + 0x221c));
    fn_00654c30(iVar14,*(undefined4 *)(iVar6 + 0x2220));
    *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
  }
  return auStack_90;
}


