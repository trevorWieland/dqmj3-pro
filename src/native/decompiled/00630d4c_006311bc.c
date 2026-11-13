#include "00630d4c_006311bc.h"



void fn_006311bc(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined1 local_2864 [4];
  undefined2 local_2860;
  undefined2 local_285e;
  undefined2 local_285c;
  undefined1 local_2858;
  undefined2 local_2856;
  char local_2854;
  undefined1 local_2853;
  undefined1 auStack_2794 [9628];
  char local_1f8;
  char local_1f7;
  undefined1 local_1f6;
  undefined2 local_1f4;
  undefined1 local_1f2;
  byte local_1f0;
  undefined2 local_1e0;
  undefined1 local_194;
  byte local_133;
  undefined4 local_58;
  undefined2 local_54 [4];
  int local_4c;
  int local_40;
  
  if (*(char *)(param_4 + 0x5160) == '\0') {
    iVar4 = fn_0062a40c(param_1);
    cVar2 = *(char *)(param_2 + 5);
    iVar8 = (int)cVar2;
    iVar5 = fn_00163cbc();
    if (iVar5 == 0xd || iVar4 == 0x4e) {
      uVar6 = iVar8 - 0x10;
      bVar10 = uVar6 < 4;
      if (!bVar10) {
        uVar6 = iVar8 - 0x18;
      }
      if ((bVar10 || uVar6 < 4) || (iVar8 == 0x20 || iVar8 == 0x22)) {
        uVar6 = 0x14;
      }
      else {
        uVar6 = 0x10;
      }
      iVar5 = fn_0061be08(iVar8);
      if (iVar5 == 0) {
        uVar7 = 0x14;
      }
      else {
        uVar7 = 0x18;
      }
      if (uVar6 < uVar7) {
        local_4c = param_3 + 0x180388;
        do {
          iVar5 = local_4c + uVar6 * 0x418;
          if (0 < *(short *)(iVar5 + -0x4080)) {
            cVar1 = *(char *)(iVar5 + -0x4019);
            bVar10 = cVar1 == '\0';
            if (bVar10) {
              cVar1 = *(char *)(iVar5 + -0x400a);
            }
            bVar9 = bVar10 && cVar1 == '\0';
            if (bVar10 && cVar1 == '\0') {
              bVar9 = *(char *)(iVar5 + -0x4018) == '\0';
            }
            if ((bVar9) && ('\0' < *(char *)(iVar5 + -0x3ffa))) {
              iVar5 = local_4c + iVar8 * 0x418 + -0x4080;
              local_58 = param_1;
              local_40 = param_3;
              bVar3 = fn_006f44fc(iVar5,0x1ea);
              fn_0017455c(iVar5,-*(int *)(param_4 + 0x515c));
              fn_00301f50(&local_1f8,0x1a0);
              local_1f6 = 0x11;
              local_1f4 = 1;
              local_1e0 = 1;
              local_133 = bVar3 ^ 1;
              local_194 = 1;
              local_1f2 = 3;
              local_1f8 = (char)uVar6;
              local_1f7 = cVar2;
              local_1f0 = bVar3;
              fn_0062454c(local_58,&local_1f8,local_4c,0,1);
              fn_0062abdc(local_58,local_4c,&local_1f8,local_40);
              fn_00654c08(local_58,&local_1f8,local_4c);
              fn_0062b720(local_58,local_4c,local_2864);
              local_2864[0] = 0x11;
              local_2860 = (undefined2)iVar4;
              local_2858 = 1;
              local_285e = (undefined2)*(undefined4 *)(param_4 + 0x515c);
              local_285c = 0;
              local_2853 = 0;
              local_2856 = local_2860;
              local_2854 = cVar2;
              fn_0062936c(local_58,&local_1f8,auStack_2794);
              fn_0062a720(local_58,local_40,local_2864);
              *(undefined4 *)(param_4 + 0x515c) = 0;
              fn_0019bc50(local_54,param_2 + 0xc);
              local_54[0] = 7;
              fn_0065646c(param_2,local_54,0);
              return;
            }
          }
          uVar6 = (uint)(char)((char)uVar6 + '\x01');
          iVar5 = fn_0061be08(iVar8);
          if (iVar5 == 0) {
            iVar5 = 0x14;
          }
          else {
            iVar5 = 0x18;
          }
          if (iVar5 <= (int)uVar6) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}



void fn_0063100c(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 local_26a0 [4];
  undefined1 local_269c;
  undefined1 auStack_269b [9851];
  
  fn_0062a40c();
  iVar3 = fn_00691e94();
  if ((iVar3 != 0) && (iVar3 = fn_006f4a98(param_1 + 4), iVar3 == 0)) {
    pcVar4 = (char *)fn_006f4c08(param_1 + 4);
    iVar8 = param_3 + 0x180388;
    iVar3 = fn_006f447c(iVar8 + *pcVar4 * 0x418 + -0x4080);
    if ((iVar3 != 0) && (*(char *)(param_1 + *pcVar4 + -8) == '\0')) {
      cVar1 = '\0';
      if (pcVar4[1] != '\0') {
        cVar1 = pcVar4[2];
      }
      if ((pcVar4[1] != '\0' && cVar1 != '\0') &&
         (pcVar5 = (char *)fn_006f4b80(param_1 + 4), pcVar5 != (char *)0x0)) {
        iVar3 = (int)*pcVar5;
        if (*pcVar4 != '\0' && iVar3 != 0) {
          iVar6 = fn_0061be08();
          if (iVar6 == 0) {
            uVar7 = fn_0061be08(iVar3);
            uVar7 = uVar7 ^ 1;
          }
          else {
            uVar7 = fn_0061be08(iVar3);
          }
          cVar1 = '\0';
          if (uVar7 != 0) {
            cVar1 = pcVar5[1];
          }
          if (((uVar7 != 0 && cVar1 != '\0') &&
              (iVar6 = fn_006f447c(iVar8 + iVar3 * 0x418 + -0x4080), iVar6 != 0)) &&
             (*(char *)(param_1 + iVar3 + -8) == '\0')) {
            fn_00655d48(param_1 + 4);
            uVar2 = fn_0061be08((int)*pcVar4);
            fn_0062b720(param_1,iVar8,local_26a0);
            local_26a0[0] = 0xd;
            local_269c = uVar2;
            fn_006f4ac4(param_1 + 4,auStack_269b);
            fn_0062a720(param_1,param_3,local_26a0);
          }
        }
      }
    }
  }
  return;
}



void fn_00630d4c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_58 [52];
  
  if ((*(char *)(param_2 + 4) == '\x01') && (iVar2 = fn_0062a40c(param_1,param_2), iVar2 == 0x14f))
  {
    cVar1 = *(char *)(param_2 + 5);
    iVar2 = fn_0061be08((int)cVar1);
    if (iVar2 == 0) {
      uVar6 = 0x18;
    }
    else {
      uVar6 = 0x1c;
    }
    iVar2 = fn_0061be08((int)cVar1);
    if (iVar2 == 0) {
      uVar5 = 0x1c;
    }
    else {
      uVar5 = 0x20;
    }
    if (uVar6 < uVar5) {
      do {
        iVar2 = param_3 + 0x180388 + uVar6 * 0x418;
        if (0 < *(short *)(iVar2 + -0x4080)) {
          cVar1 = *(char *)(iVar2 + -0x4019);
          bVar8 = cVar1 == '\0';
          if (bVar8) {
            cVar1 = *(char *)(iVar2 + -0x400a);
          }
          bVar9 = bVar8 && cVar1 == '\0';
          if (bVar8 && cVar1 == '\0') {
            bVar9 = *(char *)(iVar2 + -0x4018) == '\0';
          }
          if (bVar9) goto LAB_00630e18;
        }
        uVar6 = (uint)(char)((char)uVar6 + '\x01');
      } while ((int)uVar6 < (int)uVar5);
    }
    *(undefined1 *)(param_4 + 0x5160) = 5;
  }
LAB_00630e18:
  cVar1 = *(char *)(param_2 + 5);
  iVar7 = param_3 + 0x180388;
  iVar2 = fn_006265b0(param_1,param_2,iVar7);
  if (iVar2 == 0) {
    iVar2 = (int)*(char *)(param_2 + 6);
  }
  if ((iVar2 != 0) && (iVar2 = iVar7 + iVar2 * 0x418, iVar2 != 0x4080)) {
    iVar3 = fn_0062a40c(param_1,param_2);
    bVar8 = iVar3 == 0x7a || iVar3 == 300;
    if (iVar3 != 0x7a && iVar3 != 300) {
      bVar8 = iVar3 == 0x126;
    }
    if (bVar8) {
      iVar3 = fn_001cab7c((int)*(char *)(iVar7 + cVar1 * 0x418 + -0x4027));
      iVar2 = fn_001cab7c((int)*(char *)(iVar2 + -0x4027));
      if (iVar3 != iVar2) {
        *(undefined1 *)(param_4 + 0x5160) = 3;
      }
    }
  }
  uVar4 = fn_0062a40c(param_1,param_2);
  iVar2 = fn_00163cbc();
  if (iVar2 == 5) {
    iVar2 = fn_006265b0(param_1,param_2,iVar7);
    if (iVar2 == 0) {
      iVar2 = (int)*(char *)(param_2 + 6);
    }
    iVar3 = fn_00692024(uVar4);
    cVar1 = '\0';
    if (iVar3 != 0) {
      cVar1 = *(char *)(iVar7 + iVar2 * 0x418 + -0x3ff9);
    }
    if ((iVar3 != 0 && cVar1 != '\0') && -1 < cVar1) {
      *(undefined1 *)(param_4 + 0x5160) = 7;
    }
  }
  fn_0062b26c(param_1,param_2,param_3,param_4);
  fn_00625ef8(param_1,param_2,param_3,param_4);
  uVar4 = fn_00656538(auStack_58,param_2);
  iVar2 = fn_00626c2c(param_1,iVar7,uVar4);
  iVar3 = fn_0062a40c(param_1,param_2);
  if ((iVar3 == 0x175) && (cVar1 = *(char *)(iVar2 + 0x5c), iVar2 = fn_00182924(1), cVar1 != iVar2)
     ) {
    *(undefined1 *)(param_4 + 0x5160) = 6;
  }
  uVar4 = fn_00656538(auStack_58,param_2);
  iVar2 = fn_00626c2c(param_1,iVar7,uVar4);
  uVar4 = fn_0062a40c(param_1,param_2);
  iVar7 = fn_006f4114(iVar2,uVar4);
  if (*(short *)(iVar2 + 0x1e) < iVar7) {
    *(undefined1 *)(param_4 + 0x5160) = 1;
  }
  else {
    *(int *)(param_4 + 0x515c) = iVar7;
  }
  return;
}


