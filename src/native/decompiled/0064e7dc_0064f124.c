#include "0064e7dc_0064f124.h"



void fn_0064f124(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint unaff_r6;
  undefined8 uVar1;
  
  fn_0064f714();
  fn_00782bb8(param_1,param_4);
  uVar1 = fn_0078209c(param_1,param_4,param_1,unaff_r6 & 0xffffff00 | 1);
  if ((int)uVar1 == 0) {
    fn_0078209c(param_1,param_4,param_1,(uint)((ulonglong)uVar1 >> 0x20) & 0xffffff00);
  }
  return;
}



void fn_0064ecf4(int param_1,int param_2,ushort *param_3,int param_4)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar3 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar3 == 0) {
    cVar2 = '\x14';
  }
  else {
    cVar2 = '\x10';
  }
  iVar3 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar3 == 0) {
    uVar7 = 0x18;
  }
  else {
    uVar7 = 0x14;
  }
  uVar4 = (uint)cVar2;
  *(char *)(param_4 + 6) = cVar2;
  *(char *)(param_4 + 7) = (char)uVar7;
  uVar5 = uVar4;
  if (uVar4 < uVar7) {
    do {
      uVar8 = uVar5 - uVar4;
      uVar5 = (uint)(char)((char)uVar5 + '\x01');
      *(ushort *)(param_4 + 4) = *(ushort *)(param_4 + 4) | (ushort)(1 << (uVar8 & 0xff));
    } while ((int)uVar5 < (int)uVar7);
  }
  *(undefined1 *)(param_4 + 8) = 0;
  iVar3 = (int)*(char *)(param_4 + 6);
  uVar1 = *(undefined1 *)(param_4 + 8);
  uVar7 = *(uint *)(param_4 + 4);
  if (iVar3 < *(char *)(param_4 + 7)) {
    do {
      if ((uVar7 & 0xffff & 1 << (iVar3 - ((int)(uVar7 << 8) >> 0x18) & 0xffU)) != 0) {
        iVar6 = fn_006f14ec(param_1,iVar3);
        cVar2 = '\0';
        if (iVar6 != 0) {
          cVar2 = *(char *)(iVar6 + 0x67);
        }
        if (iVar6 == 0 || cVar2 == '\0') {
          uVar7 = uVar7 & 0xffff0000 |
                  uVar7 & 0xffff & ~(1 << (iVar3 - ((int)(uVar7 << 8) >> 0x18) & 0xffU));
        }
      }
      iVar3 = (int)(char)((char)iVar3 + '\x01');
    } while (iVar3 < (int)uVar7 >> 0x18);
  }
  if ((*(char *)(param_4 + 8) == '\0') && ((uVar7 & 0xffff) != 0)) {
    *(short *)(param_4 + 4) = (short)uVar7;
    *(char *)(param_4 + 6) = (char)(uVar7 >> 0x10);
    *(char *)(param_4 + 7) = (char)(uVar7 >> 0x18);
    *(undefined1 *)(param_4 + 8) = uVar1;
  }
  fn_007822f0(param_1,param_4,param_1,(uint)*param_3 | param_2 << 0x10);
  iVar3 = fn_0061ec28(param_2,*(undefined4 *)(param_1 + 8));
  if (iVar3 != 0) {
    if ((*(short *)(param_1 + 0x1a) == *(short *)(param_1 + 0x1c)) ||
       (iVar3 = fn_00655488(), iVar3 == 0)) {
      cVar2 = *(char *)(param_1 + 0x18);
    }
    else {
      cVar2 = *(char *)(param_1 + 0x18) + '\x01';
    }
    if (cVar2 != '\x03') {
      if ((*(short *)(param_1 + 0x1a) == *(short *)(param_1 + 0x1c)) ||
         (iVar3 = fn_00655488(), iVar3 == 0)) {
        cVar2 = *(char *)(param_1 + 0x18);
      }
      else {
        cVar2 = *(char *)(param_1 + 0x18) + '\x01';
      }
      if (cVar2 != '\x04') {
        return;
      }
    }
    if (*(char *)(param_4 + 8) == '\0') {
      iVar3 = (int)*(char *)(param_4 + 6);
      uVar1 = *(undefined1 *)(param_4 + 8);
      uVar7 = *(uint *)(param_4 + 4);
      if (iVar3 < *(char *)(param_4 + 7)) {
        do {
          if (((uVar7 & 0xffff & 1 << (iVar3 - ((int)(uVar7 << 8) >> 0x18) & 0xffU)) != 0) &&
             ((iVar6 = fn_006f14ec(param_1,iVar3), iVar6 == 0 ||
              (iVar6 = fn_006f44fc(iVar6,0xea), iVar6 == 0)))) {
            uVar7 = uVar7 & 0xffff0000 |
                    uVar7 & 0xffff & ~(1 << (iVar3 - ((int)(uVar7 << 8) >> 0x18) & 0xffU));
          }
          iVar3 = (int)(char)((char)iVar3 + '\x01');
        } while (iVar3 < (int)uVar7 >> 0x18);
      }
      if ((*(char *)(param_4 + 8) == '\0') && ((uVar7 & 0xffff) != 0)) {
        *(short *)(param_4 + 4) = (short)uVar7;
        *(char *)(param_4 + 6) = (char)(uVar7 >> 0x10);
        *(char *)(param_4 + 7) = (char)(uVar7 >> 0x18);
        *(undefined1 *)(param_4 + 8) = uVar1;
      }
    }
  }
  return;
}



int fn_0064ecb4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 1;
  do {
    iVar1 = fn_0068fea8((int)(short)iVar2,(int)*(char *)(param_2 + iVar2 + 0x5b));
    if (iVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x61);
  return iVar3;
}



void fn_0064e7dc(int param_1,undefined4 param_2,undefined2 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *local_80;
  int *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_6c;
  int local_68;
  int local_58 [2];
  undefined1 auStack_50 [4];
  char local_4c;
  char local_4b;
  int local_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined2 *local_28;
  
  iVar5 = *(int *)(param_1 + 0xc);
  iStack_30 = param_1;
  uStack_2c = param_2;
  local_28 = param_3;
  local_6c = fn_00660ab8(iVar5);
  if (*(char *)(*(int *)(param_1 + 0x10) + 0x14) != '\0') {
LAB_0064e9d8:
    *local_28 = (short)local_6c;
    return;
  }
  if (*(char *)(iVar5 + 0x5a) == '\x05') {
    *local_28 = 7;
    return;
  }
  iVar5 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar5 == 0) {
    uVar6 = 0x10;
  }
  else {
    uVar6 = 0x14;
  }
  iVar5 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar5 == 0) {
    uVar2 = 0x14;
  }
  else {
    uVar2 = 0x18;
  }
  if (uVar6 < uVar2) {
    do {
      local_38 = fn_006f14a4(param_1,uVar6);
      if (local_38 != 0) {
        local_74 = local_6c;
        local_68 = (int)*(char *)(param_1 + 4);
        iVar5 = fn_006f14ec(param_1,local_68);
        iVar3 = fn_006f14a4(param_1,uVar6);
        if ((iVar3 == 0) || (iVar3 = fn_006f4114(iVar5,local_74), *(short *)(iVar5 + 0x1e) < iVar3)
           ) {
          iVar5 = 0;
        }
        else {
          iVar5 = 0;
          uVar8 = 0;
          iVar7 = fn_00692448(local_74);
          if (iVar7 != 0) {
            fn_00655c40(&local_80,*(undefined4 *)(param_1 + 8));
            uVar8 = fn_006f4a8c(&local_80,uVar6);
          }
          cVar1 = fn_0061dbbc(local_74,local_68,uVar6,*(undefined4 *)(param_1 + 8));
          fn_00655a48(auStack_50,(int)cVar1,uVar8,iVar3);
          local_80 = (undefined1 *)0x0;
          fn_006558e4(auStack_50,local_74,local_68,uVar6,*(int *)(param_1 + 0x10) + 0x20,
                       *(undefined4 *)(param_1 + 8));
          iVar3 = 0;
          if ('\0' < local_4b) {
            do {
              local_58[0] = 0;
              local_58[1] = 0;
              local_78 = 1;
              local_80 = auStack_50;
              local_7c = local_58;
              fn_00616c50(local_74,(int)local_4b,iVar3,local_68,uVar6,*(undefined4 *)(param_1 + 8))
              ;
              iVar3 = iVar3 + 1;
              local_4c = local_4c + '\x01';
              iVar5 = iVar5 + local_58[0];
            } while (iVar3 < local_4b);
          }
        }
        if (*(short *)(local_38 + 0x1c) <= iVar5) goto LAB_0064e9d8;
      }
      uVar6 = (uint)(char)((char)uVar6 + '\x01');
      iVar5 = fn_0061be08((int)*(char *)(param_1 + 4));
      if (iVar5 == 0) {
        iVar5 = 0x14;
      }
      else {
        iVar5 = 0x18;
      }
    } while ((int)uVar6 < iVar5);
  }
  iVar5 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar5 == 0) {
    uVar6 = 0x10;
  }
  else {
    uVar6 = 0x14;
  }
  iVar5 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar5 == 0) {
    uVar2 = 0x14;
  }
  else {
    uVar2 = 0x18;
  }
  if (uVar6 < uVar2) {
    do {
      iVar5 = fn_006f14a4(param_1,uVar6);
      if (iVar5 != 0) {
        local_74 = fn_00660ab8();
        iVar7 = (int)*(char *)(param_1 + 4);
        iVar5 = fn_006f14ec(param_1,uVar6);
        iVar3 = fn_006f14a4(param_1,iVar7);
        if ((iVar3 == 0) || (iVar3 = fn_006f4114(iVar5,local_74), *(short *)(iVar5 + 0x1e) < iVar3)
           ) {
          iVar5 = 0;
        }
        else {
          iVar5 = 0;
          uVar8 = 0;
          iVar4 = fn_00692448(local_74);
          if (iVar4 != 0) {
            fn_00655c40(&local_80,*(undefined4 *)(param_1 + 8));
            uVar8 = fn_006f4a8c(&local_80,iVar7);
          }
          cVar1 = fn_0061dbbc(local_74,uVar6,iVar7,*(undefined4 *)(param_1 + 8));
          fn_00655a48(auStack_50,(int)cVar1,uVar8,iVar3);
          local_80 = (undefined1 *)0x0;
          fn_006558e4(auStack_50,local_74,uVar6,iVar7,*(int *)(param_1 + 0x10) + 0x20,
                       *(undefined4 *)(param_1 + 8));
          iVar3 = 0;
          if ('\0' < local_4b) {
            do {
              local_58[0] = 0;
              local_58[1] = 0;
              local_7c = local_58;
              local_78 = 1;
              local_80 = auStack_50;
              fn_00616c50(local_74,(int)local_4b,iVar3,uVar6,iVar7,*(undefined4 *)(param_1 + 8));
              iVar3 = iVar3 + 1;
              local_4c = local_4c + '\x01';
              iVar5 = iVar5 + local_58[0];
            } while (iVar3 < local_4b);
          }
        }
        if (*(short *)(*(int *)(param_1 + 0xc) + 0x1c) <= iVar5) {
          iVar5 = fn_00655488(1,4);
          if (iVar5 != 0) goto LAB_0064ec38;
          break;
        }
      }
      uVar6 = (uint)(char)((char)uVar6 + '\x01');
      iVar5 = fn_0061be08((int)*(char *)(param_1 + 4));
      if (iVar5 == 0) {
        iVar5 = 0x14;
      }
      else {
        iVar5 = 0x18;
      }
    } while ((int)uVar6 < iVar5);
  }
  *local_28 = (short)local_6c;
  iVar5 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar5 == 0) {
    uVar6 = 0x10;
  }
  else {
    uVar6 = 0x14;
  }
  iVar5 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar5 == 0) {
    uVar2 = 0x14;
  }
  else {
    uVar2 = 0x18;
  }
  if (uVar6 < uVar2) {
    do {
      iVar5 = fn_006f14a4(param_1,uVar6);
      if ((iVar5 != 0) && (*(char *)(iVar5 + 0x87) < '\x01')) {
        if (*(char *)(iVar5 + 0x79) < '\x01') {
          return;
        }
        if ('\0' < *(char *)(*(int *)(param_1 + 0xc) + 0x5c)) {
          return;
        }
      }
      uVar6 = (uint)(char)((char)uVar6 + '\x01');
      iVar5 = fn_0061be08((int)*(char *)(param_1 + 4));
      if (iVar5 == 0) {
        iVar5 = 0x14;
      }
      else {
        iVar5 = 0x18;
      }
    } while ((int)uVar6 < iVar5);
  }
LAB_0064ec38:
  *local_28 = 2;
  return;
}


