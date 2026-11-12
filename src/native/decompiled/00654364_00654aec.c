#include "00654364_00654aec.h"



undefined4 fn_00654aec(int *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *param_1;
  bVar1 = *(byte *)((int)param_1 + 5);
  sVar2 = *(short *)((int)param_1 + 6);
  iVar3 = fn_0064fed4(iVar5,1,(int)(char)param_1[1],param_3);
  if (((iVar3 == 0) ||
      (iVar3 = fn_00182944((uint)bVar1), *(char *)(param_2 + (uint)bVar1 + 0x5b) <= iVar3)) ||
     (iVar3 = fn_006f1838(iVar5,(int)sVar2,*(undefined4 *)(iVar5 + 0xc),param_2), iVar3 != 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



undefined4 fn_00654a80(int *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *param_1;
  bVar1 = *(byte *)((int)param_1 + 5);
  sVar2 = *(short *)((int)param_1 + 6);
  iVar3 = fn_0064fed4(iVar5,1,param_3,(int)(char)param_1[1]);
  if (((iVar3 == 0) ||
      (iVar3 = fn_00182944((uint)bVar1), *(char *)(param_2 + (uint)bVar1 + 0x5b) <= iVar3)) ||
     (iVar3 = fn_006f1838(iVar5,(int)sVar2,*(undefined4 *)(iVar5 + 0xc),param_2), iVar3 != 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



undefined4 fn_00654900(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  cVar1 = '\0';
  iVar2 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar2 == 0) {
    uVar7 = 0x10;
  }
  else {
    uVar7 = 0x14;
  }
  iVar2 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar2 == 0) {
    uVar3 = 0x14;
  }
  else {
    uVar3 = 0x18;
  }
  if (uVar7 < uVar3) {
    do {
      iVar2 = fn_006f14a4(param_1,uVar7);
      if ((iVar2 != 0) && (iVar4 = fn_0064fed4(param_1,1), iVar4 != 0)) {
        cVar1 = cVar1 + '\x01';
        iVar4 = fn_00182944(param_4);
        if (iVar4 < *(char *)(iVar2 + param_4 + 0x5b)) {
          uVar5 = *(undefined4 *)(param_1 + 0xc);
          iVar4 = fn_00691d78(param_5);
          iVar6 = fn_001639e4(param_5);
          if (iVar6 == 0x18) {
            iVar4 = fn_00691af0(param_5,0);
          }
          if (0x2ba < iVar4 - 1U) {
            iVar4 = param_5;
          }
          iVar6 = fn_006f2e14(param_1,iVar4,uVar5,iVar2);
          if ((iVar6 == 0) && (uVar3 = fn_006f1710(param_1,iVar4,uVar5,iVar2), uVar3 < 5)) {
            return 0;
          }
        }
      }
      uVar7 = (uint)(char)((char)uVar7 + '\x01');
      iVar2 = fn_0061be08((int)*(char *)(param_1 + 4));
      if (iVar2 == 0) {
        iVar2 = 0x14;
      }
      else {
        iVar2 = 0x18;
      }
    } while ((int)uVar7 < iVar2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



undefined4
fn_00654794(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
            int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int local_3c;
  
  if (param_4 < param_5) {
    unaff_r11 = 2;
    unaff_r10 = 0;
  }
  local_3c = 0;
  do {
    if (param_5 <= param_4) {
      return 0;
    }
    iVar2 = fn_006f14a4(param_1,param_4);
    if ((iVar2 != 0) && (iVar1 = param_2, *(char *)(iVar2 + 0x9d) < '\x01')) {
      for (; iVar1 < param_3; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
        iVar2 = fn_006f14a4(param_1,iVar1);
        if (iVar2 != 0) {
          iVar4 = 0;
          if (*(char *)(iVar2 + 0x120) != '\0') {
            do {
              iVar5 = (int)*(short *)((byte *)(iVar2 + 0x120) + iVar4 * 2 + 4);
              uVar3 = fn_00163a00(iVar5);
              if ((uVar3 == (param_6 & 0xff)) &&
                 (iVar5 = fn_006f1a78(param_1,iVar5,iVar1,(int)(char)param_4,unaff_r10,unaff_r11),
                 iVar5 != 0)) {
                local_3c = (int)(char)((char)local_3c + '\x01');
                if (param_7 <= local_3c) {
                  return 1;
                }
                goto LAB_006548d8;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)(uint)*(byte *)(iVar2 + 0x120));
          }
        }
      }
    }
LAB_006548d8:
    param_4 = (int)(char)((char)param_4 + '\x01');
  } while( true );
}



undefined4 fn_00654740(undefined4 *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)((int)param_1 + 5);
  iVar2 = fn_0064fed4(*param_1,1,(int)*(char *)(param_1 + 1),param_3);
  if ((iVar2 == 0) ||
     (iVar2 = fn_00182924((uint)bVar1), iVar2 <= *(char *)(param_2 + (uint)bVar1 + 0x5b))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



void fn_00654498(int param_1,short param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  bool bVar3;
  uint3 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint unaff_r7;
  int iVar11;
  uint uVar12;
  char *local_38;
  char *local_34;
  char *local_30;
  char local_2c [4];
  uint local_28;
  
  fn_00651494();
  if (*(char *)(param_4 + 8) == '\0') {
    puVar2 = (uint *)(param_4 + 4);
    uVar9 = (uint)*(ushort *)puVar2;
    local_2c[0] = *(char *)(param_4 + 6);
    uVar4 = *(uint3 *)puVar2;
    uVar10 = *puVar2;
    local_28 = unaff_r7 & 0xffff0000 | (uint)*(byte *)(param_4 + 8);
    bVar3 = true;
    iVar11 = 0;
    local_38 = (char *)0x0;
    local_34 = (char *)0x0;
    local_30 = (char *)0x0;
    iVar1 = (int)uVar10 >> 0x18;
    uVar12 = uVar9;
    if (local_2c[0] < *(char *)(param_4 + 7)) {
      do {
        if (((uVar9 & 1 << ((int)local_2c[0] - ((int)((uint)uVar4 << 8) >> 0x18) & 0xffU)) != 0) &&
           (iVar5 = fn_006f14ec(param_1), iVar5 != 0)) {
          iVar6 = fn_006f1be0(param_1,(int)param_2,(int)*(char *)(param_1 + 4),(int)local_2c[0],1,0
                              );
          iVar6 = *(short *)(iVar5 + 0x1e) - iVar6;
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          if ((bVar3) || (iVar6 < iVar11)) {
            bVar3 = false;
            if (local_38 != local_34) {
              pcVar7 = local_38;
              if (local_34 < local_38) {
                do {
                  pcVar7 = pcVar7 + 1;
                } while (pcVar7 != local_34);
              }
              local_34 = local_38;
            }
            iVar11 = iVar6;
            pcVar7 = local_34;
            if (local_34 != local_30) goto joined_r0x0065460c;
LAB_0065464c:
            fn_0079aa0c(&local_38,local_34,local_2c);
          }
          else if (iVar6 == iVar11) {
            pcVar7 = local_34;
            if (local_34 == local_30) goto LAB_0065464c;
joined_r0x0065460c:
            local_34 = pcVar7 + 1;
            if (pcVar7 != (char *)0x0) {
              *pcVar7 = local_2c[0];
            }
          }
        }
        local_2c[0] = local_2c[0] + '\x01';
      } while (local_2c[0] < iVar1);
    }
    uVar9 = (int)((uint)uVar4 << 8) >> 0x18;
    for (uVar8 = uVar9; (int)uVar8 < iVar1; uVar8 = (uint)(char)((char)uVar8 + '\x01')) {
      pcVar7 = local_38;
      while( true ) {
        if (pcVar7 != local_34) {
          uVar12 = (uint)*pcVar7;
        }
        if (pcVar7 == local_34 || uVar12 == uVar8) break;
        pcVar7 = pcVar7 + 1;
      }
      if (pcVar7 == local_34) {
        uVar12 = uVar10 & 0xffff;
        uVar10 = uVar10 & 0xffff0000 | uVar12 & ~(1 << (uVar8 - uVar9 & 0xff));
      }
    }
    if ((*(char *)(param_4 + 8) == '\0') && ((uVar10 & 0xffff) != 0)) {
      *(short *)(param_4 + 4) = (short)uVar10;
      *(char *)(param_4 + 6) = (char)(uVar10 >> 0x10);
      *(char *)(param_4 + 7) = (char)(uVar10 >> 0x18);
      *(char *)(param_4 + 8) = (char)local_28;
    }
    pcVar7 = local_38;
    if (local_34 < local_38) {
      do {
        pcVar7 = pcVar7 + 1;
      } while (pcVar7 != local_34);
    }
    fn_001008c4(local_38,(int)local_30 - (int)local_38,0);
  }
  return;
}



undefined4 fn_00654448(undefined4 *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)((int)param_1 + 5);
  iVar2 = fn_0064fed4(*param_1,1,param_3,(int)*(char *)(param_1 + 1));
  if ((iVar2 == 0) ||
     (iVar2 = fn_00182924((uint)bVar1), iVar2 <= *(char *)(param_2 + (uint)bVar1 + 0x5b))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



undefined4 fn_00654364(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  cVar1 = '\0';
  iVar2 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar2 == 0) {
    uVar5 = 0x14;
  }
  else {
    uVar5 = 0x10;
  }
  iVar2 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar2 == 0) {
    uVar3 = 0x18;
  }
  else {
    uVar3 = 0x14;
  }
  if (uVar5 < uVar3) {
    do {
      iVar2 = fn_006f14a4(param_1,uVar5);
      if ((iVar2 != 0) && (iVar4 = fn_0064fed4(param_1,1), iVar4 != 0)) {
        cVar1 = cVar1 + '\x01';
        iVar4 = fn_00182924(param_4);
        if (*(char *)(iVar2 + param_4 + 0x5b) < iVar4) {
          return 0;
        }
      }
      uVar5 = (uint)(char)((char)uVar5 + '\x01');
      iVar2 = fn_0061be08((int)*(char *)(param_1 + 4));
      if (iVar2 == 0) {
        iVar2 = 0x18;
      }
      else {
        iVar2 = 0x14;
      }
    } while ((int)uVar5 < iVar2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


