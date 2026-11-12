#include "0064f7d4_0064fec4.h"



undefined4 fn_0064fec4(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  cVar1 = *(char *)((int)param_1 + 5);
  cVar2 = *(char *)(param_1 + 1);
  uVar3 = *param_1;
  uVar4 = fn_006f14a4(uVar3,(int)cVar1);
  iVar5 = fn_006f1be0(uVar3,param_2,(int)cVar2,(int)cVar1,1,0);
  if ((iVar5 < 1) || (iVar6 = fn_00176dc0(uVar4), iVar5 <= (iVar6 * 10) / 100)) {
    return 0;
  }
  return 1;
}



bool fn_0064fea0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_006f1838(*param_1,(int)*(short *)(param_1 + 1),param_1[2],param_2);
  return iVar1 != 0;
}



int fn_0064fbac(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00176e70(param_2);
  iVar2 = fn_006f2fa8(param_2);
  return iVar1 - iVar2;
}



int fn_0064fb88(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00176dc0(param_2);
  iVar2 = fn_006f2fa8(param_2);
  return iVar1 - iVar2;
}



int fn_0064fb64(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006f4044(param_2);
  iVar2 = fn_006f4520(param_2);
  return iVar1 + iVar2 * 2;
}



undefined4 fn_0064fb18(undefined4 *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 1);
  iVar2 = fn_00182944((uint)bVar1);
  if ((*(char *)(param_2 + (uint)bVar1 + 0x5b) <= iVar2) ||
     (iVar2 = fn_006f1838(*param_1,(int)*(short *)(param_1 + 3),param_1[2],param_2), uVar3 = 0,
     iVar2 != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}



undefined4 fn_0064facc(undefined4 *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 1);
  iVar2 = fn_00182924((uint)bVar1);
  if ((iVar2 <= *(char *)(param_2 + (uint)bVar1 + 0x5b)) ||
     (iVar2 = fn_006f1838(*param_1,(int)*(short *)(param_1 + 3),param_1[2],param_2), uVar3 = 0,
     iVar2 != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}



undefined4 fn_0064fa84(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = fn_0063b21c(param_1,param_3);
  if ((param_2 < iVar1) || ((param_4 != 0 && (*(char *)(param_1 + 4) == param_3)))) {
    return 1;
  }
  return 0;
}



void fn_0064f7d4(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  undefined1 uVar3;
  ushort uVar4;
  bool bVar5;
  uint3 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  uint extraout_r1;
  uint uVar11;
  uint uVar12;
  char *local_48;
  char *local_44;
  char *local_40;
  char local_3c [8];
  undefined4 uStack_34;
  uint local_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  uStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  fn_0064fbd4(param_1,param_2);
  if (*(char *)(param_4 + 8) == '\0') {
    puVar2 = (uint *)(param_4 + 4);
    uVar4 = *(ushort *)puVar2;
    local_3c[0] = *(char *)(param_4 + 6);
    uVar6 = *(uint3 *)puVar2;
    uVar3 = *(undefined1 *)(param_4 + 8);
    uVar11 = *puVar2;
    bVar5 = true;
    uVar12 = 0;
    local_48 = (char *)0x0;
    local_44 = (char *)0x0;
    local_40 = (char *)0x0;
    iVar1 = (int)uVar11 >> 0x18;
    if (local_3c[0] < *(char *)(param_4 + 7)) {
      do {
        if ((((uint)uVar4 & 1 << ((int)local_3c[0] - ((int)((uint)uVar6 << 8) >> 0x18) & 0xffU)) !=
             0) && (iVar7 = fn_006f14ec(param_1), iVar7 != 0)) {
          uVar9 = (uint)*(byte *)(iVar7 + 0x3fe);
          if ((uint)*(byte *)(iVar7 + 0x3ff) <= (uint)*(byte *)(iVar7 + 0x3fe)) {
            uVar9 = (uint)*(byte *)(iVar7 + 0x3ff);
          }
          if ((bVar5) || (uVar9 < uVar12)) {
            bVar5 = false;
            if (local_48 != local_44) {
              pcVar10 = local_48;
              if (local_44 <= local_48) {
                for (; pcVar10 != local_44; pcVar10 = pcVar10 + 1) {
                }
              }
              local_44 = local_48;
            }
            uVar12 = uVar9;
            pcVar10 = local_44;
            if (local_44 != local_40) goto joined_r0x0064f91c;
LAB_0064f958:
            fn_0079aa0c(&local_48,local_44,local_3c);
          }
          else if (uVar9 == uVar12) {
            pcVar10 = local_44;
            if (local_44 == local_40) goto LAB_0064f958;
joined_r0x0064f91c:
            local_44 = pcVar10 + 1;
            if (pcVar10 != (char *)0x0) {
              *pcVar10 = local_3c[0];
            }
          }
        }
        local_3c[0] = local_3c[0] + '\x01';
      } while (local_3c[0] < iVar1);
    }
    uVar9 = (int)((uint)uVar6 << 8) >> 0x18;
    for (uVar8 = uVar9; (int)uVar8 < iVar1; uVar8 = (uint)(char)((char)uVar8 + '\x01')) {
      pcVar10 = local_48;
      while( true ) {
        if (pcVar10 != local_44) {
          uVar12 = (uint)*pcVar10;
        }
        if (pcVar10 == local_44 || uVar12 == uVar8) break;
        pcVar10 = pcVar10 + 1;
      }
      if (pcVar10 == local_44) {
        uVar11 = uVar11 & 0xffff0000 | uVar11 & 0xffff & ~(1 << (uVar8 - uVar9 & 0xff));
      }
    }
    if ((*(char *)(param_4 + 8) == '\0') && ((uVar11 & 0xffff) != 0)) {
      *(short *)(param_4 + 4) = (short)uVar11;
      *(char *)(param_4 + 6) = (char)(uVar11 >> 0x10);
      *(char *)(param_4 + 7) = (char)(uVar11 >> 0x18);
      bVar5 = true;
      *(undefined1 *)(param_4 + 8) = uVar3;
    }
    else {
      bVar5 = false;
    }
    pcVar10 = local_48;
    if (local_44 < local_48) {
      do {
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 != local_44);
    }
    fn_001008c4(local_48,(int)local_40 - (int)local_48,0);
    if (bVar5) {
      fn_00784690(param_1,param_4,param_1,extraout_r1 & 0xffff0000 | local_30 & 0xffff);
    }
  }
  return;
}



void fn_0064fbd4(int param_1,int param_2,ushort *param_3,int param_4)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  iVar8 = param_1;
  iVar6 = param_2;
  iVar10 = param_4;
  iVar3 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar3 == 0) {
    cVar2 = '\x10';
  }
  else {
    cVar2 = '\x14';
  }
  iVar3 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar3 == 0) {
    uVar7 = 0x14;
  }
  else {
    uVar7 = 0x18;
  }
  uVar4 = (uint)cVar2;
  *(char *)(param_4 + 6) = cVar2;
  *(char *)(param_4 + 7) = (char)uVar7;
  uVar5 = uVar4;
  if (uVar4 < uVar7) {
    do {
      uVar9 = uVar5 - uVar4;
      uVar5 = (uint)(char)((char)uVar5 + '\x01');
      *(ushort *)(param_4 + 4) = *(ushort *)(param_4 + 4) | (ushort)(1 << (uVar9 & 0xff));
    } while ((int)uVar5 < (int)uVar7);
  }
  *(undefined1 *)(param_4 + 8) = 0;
  fn_00781d04(param_1,param_4,uVar4,param_4,iVar8,iVar6,param_3,iVar10);
  if (*(char *)(param_4 + 8) == '\0') {
    iVar8 = (int)*(char *)(param_4 + 6);
    uVar7 = *(uint *)(param_4 + 4);
    if (iVar8 < *(char *)(param_4 + 7)) {
      do {
        if (((uVar7 & 0xffff & 1 << (iVar8 - ((int)(uVar7 << 8) >> 0x18) & 0xffU)) != 0) &&
           ((iVar6 = fn_006f14ec(param_1,iVar8), iVar6 == 0 || (*(char *)(iVar6 + 0x71) < '\x01')))
           ) {
          uVar7 = uVar7 & 0xffff0000 |
                  uVar7 & 0xffff & ~(1 << (iVar8 - ((int)(uVar7 << 8) >> 0x18) & 0xffU));
        }
        iVar8 = (int)(char)((char)iVar8 + '\x01');
      } while (iVar8 < (int)uVar7 >> 0x18);
    }
    if ((*(char *)(param_4 + 8) == '\0') && ((uVar7 & 0xffff) != 0)) {
      *(short *)(param_4 + 4) = (short)uVar7;
      *(char *)(param_4 + 6) = (char)(uVar7 >> 0x10);
      *(char *)(param_4 + 7) = (char)(uVar7 >> 0x18);
      *(undefined1 *)(param_4 + 8) = 1;
    }
  }
  if (*(char *)(param_4 + 8) == '\0') {
    iVar8 = (int)*(char *)(param_4 + 6);
    uVar1 = *(undefined1 *)(param_4 + 8);
    uVar7 = *(uint *)(param_4 + 4);
    if (iVar8 < *(char *)(param_4 + 7)) {
      do {
        if (((uVar7 & 0xffff & 1 << (iVar8 - ((int)(uVar7 << 8) >> 0x18) & 0xffU)) != 0) &&
           ((iVar6 = fn_006f14ec(param_1,iVar8), iVar6 == 0 || ('\0' < *(char *)(iVar6 + 0x72)))))
        {
          uVar7 = uVar7 & 0xffff0000 |
                  uVar7 & 0xffff & ~(1 << (iVar8 - ((int)(uVar7 << 8) >> 0x18) & 0xffU));
        }
        iVar8 = (int)(char)((char)iVar8 + '\x01');
      } while (iVar8 < (int)uVar7 >> 0x18);
    }
    if ((*(char *)(param_4 + 8) == '\0') && ((uVar7 & 0xffff) != 0)) {
      *(short *)(param_4 + 4) = (short)uVar7;
      *(char *)(param_4 + 6) = (char)(uVar7 >> 0x10);
      *(char *)(param_4 + 7) = (char)(uVar7 >> 0x18);
      *(undefined1 *)(param_4 + 8) = uVar1;
    }
  }
  fn_007822f0(param_1,param_4,param_1,(uint)*param_3 | param_2 << 0x10);
  iVar8 = fn_0061ec28(param_2,*(undefined4 *)(param_1 + 8));
  if (iVar8 != 0) {
    if ((*(short *)(param_1 + 0x1a) == *(short *)(param_1 + 0x1c)) ||
       (iVar8 = fn_00655488(), iVar8 == 0)) {
      cVar2 = *(char *)(param_1 + 0x18);
    }
    else {
      cVar2 = *(char *)(param_1 + 0x18) + '\x01';
    }
    if (cVar2 != '\x03') {
      if ((*(short *)(param_1 + 0x1a) == *(short *)(param_1 + 0x1c)) ||
         (iVar8 = fn_00655488(), iVar8 == 0)) {
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
      iVar8 = (int)*(char *)(param_4 + 6);
      uVar1 = *(undefined1 *)(param_4 + 8);
      uVar7 = *(uint *)(param_4 + 4);
      if (iVar8 < *(char *)(param_4 + 7)) {
        do {
          if (((uVar7 & 0xffff & 1 << (iVar8 - ((int)(uVar7 << 8) >> 0x18) & 0xffU)) != 0) &&
             ((iVar6 = fn_006f14ec(param_1,iVar8), iVar6 == 0 ||
              (iVar6 = fn_006f44fc(iVar6,0xea), iVar6 == 0)))) {
            uVar7 = uVar7 & 0xffff0000 |
                    uVar7 & 0xffff & ~(1 << (iVar8 - ((int)(uVar7 << 8) >> 0x18) & 0xffU));
          }
          iVar8 = (int)(char)((char)iVar8 + '\x01');
        } while (iVar8 < (int)uVar7 >> 0x18);
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


