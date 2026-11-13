#include "00653bd4_0065429c.h"



undefined4 fn_0065429c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar4 = 0x14;
  }
  else {
    uVar4 = 0x10;
  }
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar3 = 0x18;
  }
  else {
    uVar3 = 0x14;
  }
  if (uVar4 < uVar3) {
    do {
      iVar1 = fn_006f14a4(param_1,uVar4);
      if (((iVar1 != 0) && (*(char *)(iVar1 + 0x9d) < '\x01')) &&
         (iVar2 = fn_00182924(param_2 & 0xff), *(char *)(iVar1 + (param_2 & 0xff) + 0x5b) < iVar2))
      {
        return 0;
      }
      uVar4 = (uint)(char)((char)uVar4 + '\x01');
    } while ((int)uVar4 < (int)uVar3);
  }
  return 1;
}



void fn_0065427c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_00651494();
  fn_00784dd8(param_1,param_4);
  return;
}



void fn_00654008(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  undefined1 uVar3;
  ushort uVar4;
  bool bVar5;
  uint3 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char *local_38;
  char *local_34;
  char *local_30;
  char local_2c [4];
  undefined4 local_28;
  
  fn_00651494();
  if (*(char *)(param_4 + 8) == '\0') {
    puVar2 = (uint *)(param_4 + 4);
    uVar4 = *(ushort *)puVar2;
    local_2c[0] = *(char *)(param_4 + 6);
    uVar6 = *(uint3 *)puVar2;
    uVar3 = *(undefined1 *)(param_4 + 8);
    uVar12 = *puVar2;
    bVar5 = true;
    uVar13 = 0;
    local_38 = (char *)0x0;
    local_34 = (char *)0x0;
    local_30 = (char *)0x0;
    iVar1 = (int)uVar12 >> 0x18;
    local_28 = param_1;
    if (local_2c[0] < *(char *)(param_4 + 7)) {
      do {
        if ((((uint)uVar4 & 1 << ((int)local_2c[0] - ((int)((uint)uVar6 << 8) >> 0x18) & 0xffU)) !=
             0) && (iVar7 = fn_006f14ec(local_28), iVar7 != 0)) {
          iVar8 = fn_006f4044();
          iVar7 = fn_006f4520(iVar7);
          uVar9 = iVar8 + iVar7 * 2;
          if ((bVar5) || ((int)uVar13 < (int)uVar9)) {
            bVar5 = false;
            if (local_38 != local_34) {
              pcVar10 = local_38;
              if (local_34 < local_38) {
                do {
                  pcVar10 = pcVar10 + 1;
                } while (pcVar10 != local_34);
              }
              local_34 = local_38;
            }
            uVar13 = uVar9;
            pcVar10 = local_34;
            if (local_34 != local_30) goto joined_r0x0065414c;
LAB_0065418c:
            fn_0079aa0c(&local_38,local_34,local_2c);
          }
          else if (uVar9 == uVar13) {
            pcVar10 = local_34;
            if (local_34 == local_30) goto LAB_0065418c;
joined_r0x0065414c:
            local_34 = pcVar10 + 1;
            if (pcVar10 != (char *)0x0) {
              *pcVar10 = local_2c[0];
            }
          }
        }
        local_2c[0] = local_2c[0] + '\x01';
      } while (local_2c[0] < iVar1);
    }
    uVar9 = (int)((uint)uVar6 << 8) >> 0x18;
    for (uVar11 = uVar9; (int)uVar11 < iVar1; uVar11 = (uint)(char)((char)uVar11 + '\x01')) {
      pcVar10 = local_38;
      while( true ) {
        if (pcVar10 != local_34) {
          uVar13 = (uint)*pcVar10;
        }
        if (pcVar10 == local_34 || uVar13 == uVar11) break;
        pcVar10 = pcVar10 + 1;
      }
      if (pcVar10 == local_34) {
        uVar13 = uVar12 & 0xffff;
        uVar12 = uVar12 & 0xffff0000 | uVar13 & ~(1 << (uVar11 - uVar9 & 0xff));
      }
    }
    if ((*(char *)(param_4 + 8) == '\0') && ((uVar12 & 0xffff) != 0)) {
      *(short *)(param_4 + 4) = (short)uVar12;
      *(char *)(param_4 + 6) = (char)(uVar12 >> 0x10);
      *(char *)(param_4 + 7) = (char)(uVar12 >> 0x18);
      *(undefined1 *)(param_4 + 8) = uVar3;
    }
    pcVar10 = local_38;
    if (local_34 < local_38) {
      do {
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 != local_34);
    }
    fn_001008c4(local_38,(int)local_30 - (int)local_38,0);
  }
  return;
}



undefined4 fn_00653e24(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short *psVar9;
  char cVar10;
  uint uVar11;
  
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar6 = 0x14;
  }
  else {
    uVar6 = 0x10;
  }
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar11 = 0x18;
  }
  else {
    uVar11 = 0x14;
  }
  uVar8 = 0;
  iVar1 = 0;
  if (uVar6 < uVar11) {
    do {
      iVar2 = fn_006f14a4(param_1,uVar6);
      if (iVar2 != 0) {
        if (iVar1 != 0) {
          iVar3 = fn_006f2fa8(iVar1);
          iVar4 = fn_006f2fa8(iVar2);
          if (iVar3 <= iVar4) goto LAB_00653eb8;
        }
        uVar8 = uVar6;
        iVar1 = iVar2;
      }
LAB_00653eb8:
      uVar6 = (uint)(char)((char)uVar6 + '\x01');
    } while ((int)uVar6 < (int)uVar11);
  }
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar6 = 0x10;
  }
  else {
    uVar6 = 0x14;
  }
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar11 = 0x14;
  }
  else {
    uVar11 = 0x18;
  }
  cVar10 = '\0';
  if (uVar6 < uVar11) {
    do {
      iVar1 = fn_006f14a4(param_1,uVar6);
      if ((iVar1 != 0) && (uVar7 = 0, *(char *)(iVar1 + 0x120) != '\0')) {
        do {
          psVar9 = (short *)(iVar1 + uVar7 * 2 + 0x124);
          iVar2 = fn_001639e4((int)*psVar9);
          if ((iVar2 == 0x2a) && (uVar5 = fn_00691af0((int)*psVar9,0), uVar5 == param_2)) {
            if ((*psVar9 != 0) &&
               (iVar2 = fn_0064fed4(param_1,(int)*psVar9,uVar6,uVar8), iVar2 != 0)) {
              iVar2 = fn_00182944(param_2 & 0xff);
              if (*(char *)(iVar1 + (param_2 & 0xff) + 0x5b) <= iVar2) {
                return 0;
              }
              cVar10 = cVar10 + '\x01';
            }
            break;
          }
          uVar7 = uVar7 + 1 & 0xff;
        } while (uVar7 < *(byte *)(iVar1 + 0x120));
      }
      uVar6 = (uint)(char)((char)uVar6 + '\x01');
    } while ((int)uVar6 < (int)uVar11);
    if ('\0' < cVar10) {
      return 1;
    }
  }
  return 0;
}



void fn_00653e04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_00651494();
  fn_00783f14(param_1,param_4);
  return;
}



void fn_00653ddc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_00651494();
  fn_00783a18(param_1,param_4,1);
  return;
}



void fn_00653db8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_00651494();
  fn_00783cb0(param_1,param_4);
  return;
}



undefined4 fn_00653bd4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short *psVar9;
  char cVar10;
  uint uVar11;
  
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar6 = 0x10;
  }
  else {
    uVar6 = 0x14;
  }
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar11 = 0x14;
  }
  else {
    uVar11 = 0x18;
  }
  uVar8 = 0;
  iVar1 = 0;
  if (uVar6 < uVar11) {
    do {
      iVar2 = fn_006f14a4(param_1,uVar6);
      if (iVar2 != 0) {
        if (iVar1 != 0) {
          iVar3 = fn_006f2fa8(iVar1);
          iVar4 = fn_006f2fa8(iVar2);
          if (iVar3 <= iVar4) goto LAB_00653c68;
        }
        uVar8 = uVar6;
        iVar1 = iVar2;
      }
LAB_00653c68:
      uVar6 = (uint)(char)((char)uVar6 + '\x01');
    } while ((int)uVar6 < (int)uVar11);
  }
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar6 = 0x14;
  }
  else {
    uVar6 = 0x10;
  }
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar11 = 0x18;
  }
  else {
    uVar11 = 0x14;
  }
  cVar10 = '\0';
  if (uVar6 < uVar11) {
    do {
      iVar1 = fn_006f14a4(param_1,uVar6);
      if ((iVar1 != 0) && (uVar7 = 0, *(char *)(iVar1 + 0x120) != '\0')) {
        do {
          psVar9 = (short *)(iVar1 + uVar7 * 2 + 0x124);
          iVar2 = fn_001639e4((int)*psVar9);
          if ((iVar2 == 0x2a) && (uVar5 = fn_00691af0((int)*psVar9,0), uVar5 == param_2)) {
            if ((*psVar9 != 0) &&
               (iVar2 = fn_0064fed4(param_1,(int)*psVar9,uVar6,uVar8), iVar2 != 0)) {
              iVar2 = fn_00182924(param_2 & 0xff);
              if (iVar2 <= *(char *)(iVar1 + (param_2 & 0xff) + 0x5b)) {
                return 0;
              }
              cVar10 = cVar10 + '\x01';
            }
            break;
          }
          uVar7 = uVar7 + 1 & 0xff;
        } while (uVar7 < *(byte *)(iVar1 + 0x120));
      }
      uVar6 = (uint)(char)((char)uVar6 + '\x01');
    } while ((int)uVar6 < (int)uVar11);
    if ('\0' < cVar10) {
      return 1;
    }
  }
  return 0;
}


