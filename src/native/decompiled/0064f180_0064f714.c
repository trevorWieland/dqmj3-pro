#include "0064f180_0064f714.h"



undefined4 fn_0064f64c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  iVar2 = 0;
  if (*(char *)(param_2 + 0x120) != '\0') {
    do {
      iVar3 = (int)*(short *)((byte *)(param_2 + 0x120) + iVar2 * 2 + 4);
      iVar1 = fn_00691d5c(iVar3);
      if ((iVar1 == 4) && (iVar1 = fn_006924f4(iVar3), iVar1 != 0)) {
        return 1;
      }
      iVar1 = fn_001639e4(iVar3);
      if (iVar1 == 0x12) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_2 + 0x120));
  }
  iVar2 = 0;
  while( true ) {
    iVar1 = (int)*(short *)(param_2 + 0x284 + iVar2 * 2);
    if (0x21e < iVar1 - 1U) {
      return 0;
    }
    bVar4 = iVar1 == 0x93;
    bVar5 = iVar1 == 0xb7;
    if (!bVar4 && !bVar5) {
      iVar1 = iVar1 + 99;
    }
    if ((bVar4 || bVar5) || iVar1 == 0x200) break;
    iVar2 = iVar2 + 1;
    if (0x4b < iVar2) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_0064f530(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(char *)(param_2 + 0x120) != '\0') {
    do {
      iVar3 = (int)*(short *)((byte *)(param_2 + 0x120) + iVar2 * 2 + 4);
      iVar1 = fn_00691d5c(iVar3);
      if (iVar1 == 3) {
        iVar1 = fn_006924f4(iVar3);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = fn_001639e4(iVar3);
        if ((iVar1 == 0x1a) && (iVar1 = fn_00163c80(iVar3), iVar1 == 4)) {
          return 1;
        }
      }
      iVar1 = fn_001639e4(iVar3);
      if (iVar1 == 1) {
        return 1;
      }
      iVar1 = fn_006919b0(iVar3,0x2f);
      if (iVar1 != 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_2 + 0x120));
  }
  iVar2 = 0;
  do {
    iVar1 = (int)*(short *)(param_2 + 0x284 + iVar2 * 2);
    if (0x21e < iVar1 - 1U) {
      return 0;
    }
    if (iVar1 == 0xb6) {
      return 1;
    }
    if (iVar1 < 0xb7) {
      if (iVar1 == 0x57 || iVar1 == 0x92) {
        return 1;
      }
    }
    else if (iVar1 == 0xf2 || iVar1 == 0x19c) {
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x4c);
  return 0;
}



bool fn_0064f50c(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = fn_00163a00(param_2);
  return uVar1 == *param_1;
}



void fn_0064f180(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  undefined1 uVar2;
  ushort uVar3;
  bool bVar4;
  uint3 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  char *local_38;
  char *local_34;
  char *local_30;
  char local_2c [8];
  
  fn_0064f714();
  if (*(char *)(param_4 + 8) == '\0') {
    puVar1 = (uint *)(param_4 + 4);
    uVar3 = *(ushort *)puVar1;
    local_2c[0] = *(char *)(param_4 + 6);
    uVar5 = *(uint3 *)puVar1;
    uVar2 = *(undefined1 *)(param_4 + 8);
    uVar11 = *puVar1;
    bVar4 = true;
    uVar13 = 0;
    local_38 = (char *)0x0;
    local_34 = (char *)0x0;
    local_30 = (char *)0x0;
    iVar12 = (int)uVar11 >> 0x18;
    if (local_2c[0] < *(char *)(param_4 + 7)) {
      do {
        if ((((uint)uVar3 & 1 << ((int)local_2c[0] - ((int)((uint)uVar5 << 8) >> 0x18) & 0xffU)) !=
             0) && (iVar6 = fn_006f14ec(param_1), iVar6 != 0)) {
          iVar7 = fn_006f3220();
          if (iVar7 == 0) {
            iVar7 = fn_006f2fa8(iVar6);
            uVar10 = iVar7 + *(short *)(iVar6 + 0x1c) * 2;
          }
          else {
            uVar10 = *(short *)(iVar6 + 0x1c) * 0x1e;
          }
          if ((bVar4) || ((int)uVar10 < (int)uVar13)) {
            bVar4 = false;
            if (local_38 != local_34) {
              pcVar8 = local_38;
              if (local_34 < local_38) {
                do {
                  pcVar8 = pcVar8 + 1;
                } while (pcVar8 != local_34);
              }
              local_34 = local_38;
            }
            uVar13 = uVar10;
            pcVar8 = local_34;
            if (local_34 != local_30) goto joined_r0x0064f2e0;
LAB_0064f320:
            fn_0079aa0c(&local_38,local_34,local_2c);
          }
          else if (uVar10 == uVar13) {
            pcVar8 = local_34;
            if (local_34 == local_30) goto LAB_0064f320;
joined_r0x0064f2e0:
            local_34 = pcVar8 + 1;
            if (pcVar8 != (char *)0x0) {
              *pcVar8 = local_2c[0];
            }
          }
        }
        local_2c[0] = local_2c[0] + '\x01';
      } while (local_2c[0] < iVar12);
    }
    uVar10 = (int)((uint)uVar5 << 8) >> 0x18;
    for (uVar9 = uVar10; (int)uVar9 < iVar12; uVar9 = (uint)(char)((char)uVar9 + '\x01')) {
      pcVar8 = local_38;
      while( true ) {
        if (pcVar8 != local_34) {
          uVar13 = (uint)*pcVar8;
        }
        if (pcVar8 == local_34 || uVar13 == uVar9) break;
        pcVar8 = pcVar8 + 1;
      }
      if (pcVar8 == local_34) {
        uVar13 = uVar11 & 0xffff;
        uVar11 = uVar11 & 0xffff0000 | uVar13 & ~(1 << (uVar9 - uVar10 & 0xff));
      }
    }
    if ((*(char *)(param_4 + 8) == '\0') && ((uVar11 & 0xffff) != 0)) {
      *(short *)(param_4 + 4) = (short)uVar11;
      *(char *)(param_4 + 6) = (char)(uVar11 >> 0x10);
      *(char *)(param_4 + 7) = (char)(uVar11 >> 0x18);
      *(undefined1 *)(param_4 + 8) = uVar2;
    }
    pcVar8 = local_38;
    if (local_34 < local_38) {
      do {
        pcVar8 = pcVar8 + 1;
      } while (pcVar8 != local_34);
    }
    fn_001008c4(local_38,(int)local_30 - (int)local_38);
  }
  fn_00782bb8(param_1,param_4);
  if (*(char *)(param_4 + 8) == '\0') {
    iVar12 = (int)*(char *)(param_4 + 6);
    uVar2 = *(undefined1 *)(param_4 + 8);
    uVar11 = *(uint *)(param_4 + 4);
    if (iVar12 < *(char *)(param_4 + 7)) {
      do {
        if (((uVar11 & 0xffff & 1 << (iVar12 - ((int)(uVar11 << 8) >> 0x18) & 0xffU)) != 0) &&
           ((iVar6 = fn_006f14ec(param_1,iVar12), iVar6 == 0 ||
            (iVar6 = fn_006f3220(), iVar6 != 0)))) {
          uVar11 = uVar11 & 0xffff0000 |
                   uVar11 & 0xffff & ~(1 << (iVar12 - ((int)(uVar11 << 8) >> 0x18) & 0xffU));
        }
        iVar12 = (int)(char)((char)iVar12 + '\x01');
      } while (iVar12 < (int)uVar11 >> 0x18);
    }
    if ((*(char *)(param_4 + 8) == '\0') && ((uVar11 & 0xffff) != 0)) {
      *(short *)(param_4 + 4) = (short)uVar11;
      *(char *)(param_4 + 6) = (char)(uVar11 >> 0x10);
      *(char *)(param_4 + 7) = (char)(uVar11 >> 0x18);
      *(undefined1 *)(param_4 + 8) = uVar2;
    }
  }
  return;
}



void fn_0064f714(int param_1,int param_2,ushort *param_3,int param_4)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int in_r12;
  
  iVar3 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar3 == 0) {
    cVar2 = '\x14';
  }
  else {
    cVar2 = '\x10';
  }
  iVar3 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar3 == 0) {
    uVar4 = 0x18;
  }
  else {
    uVar4 = 0x14;
  }
  uVar6 = (uint)cVar2;
  *(char *)(param_4 + 6) = cVar2;
  if (uVar6 < uVar4) {
    in_r12 = 1;
  }
  *(char *)(param_4 + 7) = (char)uVar4;
  uVar7 = uVar6;
  if (uVar6 < uVar4) {
    do {
      uVar8 = uVar7 - uVar6;
      uVar7 = (uint)(char)((char)uVar7 + '\x01');
      *(ushort *)(param_4 + 4) = *(ushort *)(param_4 + 4) | (ushort)(in_r12 << (uVar8 & 0xff));
    } while ((int)uVar7 < (int)uVar4);
  }
  *(undefined1 *)(param_4 + 8) = 0;
  fn_00781d04(param_1,param_4);
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
      uVar4 = *(uint *)(param_4 + 4);
      if (iVar3 < *(char *)(param_4 + 7)) {
        do {
          if (((uVar4 & 0xffff & 1 << (iVar3 - ((int)(uVar4 << 8) >> 0x18) & 0xffU)) != 0) &&
             ((iVar5 = fn_006f14ec(param_1,iVar3), iVar5 == 0 ||
              (iVar5 = fn_006f44fc(iVar5,0xea), iVar5 == 0)))) {
            uVar4 = uVar4 & 0xffff0000 |
                    uVar4 & 0xffff & ~(1 << (iVar3 - ((int)(uVar4 << 8) >> 0x18) & 0xffU));
          }
          iVar3 = (int)(char)((char)iVar3 + '\x01');
        } while (iVar3 < (int)uVar4 >> 0x18);
      }
      if ((*(char *)(param_4 + 8) == '\0') && ((uVar4 & 0xffff) != 0)) {
        *(short *)(param_4 + 4) = (short)uVar4;
        *(char *)(param_4 + 6) = (char)(uVar4 >> 0x10);
        *(char *)(param_4 + 7) = (char)(uVar4 >> 0x18);
        *(undefined1 *)(param_4 + 8) = uVar1;
      }
    }
  }
  return;
}


