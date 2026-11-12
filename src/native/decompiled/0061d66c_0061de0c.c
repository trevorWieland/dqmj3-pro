#include "0061d66c_0061de0c.h"



undefined4 * fn_0061de0c(undefined4 *param_1)

{
  *param_1 = &DAT_008595e8;
  return param_1;
}



void fn_0061ddd8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00654b60();
  *puVar1 = &DAT_00859508;
  return;
}



undefined4 fn_0061dd0c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  
  if (*(char *)(*(int *)(param_1 + 8) + *(char *)(param_1 + 4) * 8 + 0x4184) != '\0') {
    uVar1 = fn_006f162c(param_1);
    uVar2 = fn_006f181c(param_1);
    iVar3 = fn_006f18d4(param_1,uVar2,uVar1);
    if (0 < iVar3) {
      iVar6 = 0;
      iVar3 = fn_0065e3b4();
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          uVar1 = fn_0065e558(iVar5);
          local_20 = 0;
          local_1e = 0;
          local_1d = 0;
          local_1c = 0;
          iVar4 = fn_0063b53c(param_1,&local_20,uVar1);
          if (iVar4 == -0x80) {
            return 0;
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + iVar4;
        } while (iVar5 < iVar3);
        if (99 < iVar6) {
          return 1;
        }
      }
    }
  }
  return 0;
}



int fn_0061dcc4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x14;
  iVar1 = fn_006f4850(param_2 + 0xe8);
  if (iVar1 != 0) {
    iVar2 = 10;
  }
  return param_1 * iVar2 + 100;
}



undefined4 fn_0061dbbc(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  if (param_1 != 0xa5 && param_1 != 0xa6) {
    iVar1 = -0x281;
  }
  if ((param_1 != 0xa5 && param_1 != 0xa6) && param_1 + iVar1 != 0) {
    iVar1 = fn_001639e4(param_1);
    if ((iVar1 == 5) && (iVar1 = fn_00163cbc(param_1), iVar1 != 7)) {
      uVar2 = fn_00691af0(param_1,0);
      return uVar2;
    }
    iVar1 = fn_00163cbc(param_1);
    if ((iVar1 == 8) && (iVar1 = fn_00692448(param_1), iVar1 != 0)) {
      param_4 = param_4 + param_3 * 0x418;
      if (*(char *)(param_4 + -0x3ff7) < '\x01') {
        uVar2 = fn_001cab7c((int)*(char *)(param_4 + -0x4027));
        return uVar2;
      }
    }
    else if (param_2 - 0x10U < 8) {
      uVar2 = fn_006f09a0(param_4,param_2);
      uVar2 = fn_006f3278(param_4 + param_2 * 0x418 + -0x4080,param_1,uVar2,param_4);
      return uVar2;
    }
  }
  return 1;
}



void fn_0061daa0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar4 = 0x10;
  iVar6 = 0;
  do {
    if (0 < *(short *)(param_1 + iVar4 * 0x418 + -0x4080)) {
      iVar1 = fn_006f4044();
      iVar8 = iVar8 + iVar1;
      iVar6 = (int)(char)((char)iVar6 + '\x01');
    }
    iVar4 = (int)(char)((char)iVar4 + '\x01');
  } while (iVar4 < 0x14);
  iVar4 = fn_00300f74(iVar8,iVar6);
  iVar1 = 0;
  iVar6 = 0x14;
  iVar8 = 0;
  do {
    if (0 < *(short *)(param_1 + iVar6 * 0x418 + -0x4080)) {
      iVar2 = fn_006f4044();
      iVar1 = iVar1 + iVar2;
      iVar8 = (int)(char)((char)iVar8 + '\x01');
    }
    iVar6 = (int)(char)((char)iVar6 + '\x01');
  } while (iVar6 < 0x18);
  iVar6 = fn_00300f74(iVar1,iVar8);
  uVar7 = 0;
  uVar5 = 1;
  uVar3 = 0;
  do {
    if ((int)(&DAT_007f0944)[uVar3 * 3] <= iVar4 - iVar6) {
      uVar5 = (&DAT_007f094c)[uVar3 * 3];
      uVar7 = (&DAT_007f0948)[uVar3 * 3];
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 6);
  param_2[1] = uVar5;
  *param_2 = uVar7;
  return;
}



undefined4 * fn_0061da9c(undefined4 *param_1)

{
  *param_1 = &DAT_008595e8;
  return param_1;
}



void fn_0061da50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00654b60(param_1,param_2,param_4,param_5,param_6,param_7,0);
  *puVar1 = &DAT_008594d8;
  puVar1[0xb] = param_3;
  return;
}



void fn_0061d71c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 8))(param_1);
  fn_0061d798(param_1);
  for (iVar2 = *(int *)param_1[0xb]; *(int *)(param_1[0xb] + 4) != iVar2; iVar2 = iVar2 + 0x34) {
    iVar1 = param_1[2] + *(char *)(iVar2 + 5) * 0x418;
    if (*(short *)(iVar1 + -0x3e00) != 0) {
      fn_0063b410(param_1,iVar2,(int)*(char *)(iVar2 + 5),iVar1 + -0x4080);
    }
  }
  return;
}



undefined1 * fn_0061d798(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_84 [20];
  undefined *local_70;
  int local_60 [2];
  undefined1 auStack_58 [4];
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined4 local_50;
  uint local_4c [2];
  undefined1 local_42;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = (int)*(char *)(param_1 + 4);
  bVar9 = iVar2 - 0x10U < 4;
  iVar6 = *(int *)(param_1 + 0x14);
  if (!bVar9) {
    param_3 = iVar2 - 0x18;
  }
  if ((bVar9 || param_3 < 4) || (iVar2 == 0x20 || iVar2 == 0x22)) {
    cVar1 = *(char *)(iVar6 + 0x34);
    bVar9 = cVar1 == '\0';
    if (bVar9) {
      cVar1 = *(char *)(iVar6 + 0x36);
    }
    if (!bVar9 || cVar1 != '\0') {
      fn_006565b8(auStack_84);
      local_4c[0] = local_4c[0] & 0xffffff00;
      local_50 = CONCAT13(*(undefined1 *)(param_1 + 4),7);
      fn_006564f4(auStack_84,&local_50,0,1,0);
      iVar2 = *(int *)(param_1 + 0x2c);
      iVar6 = *(int *)(iVar2 + 4);
      if (iVar6 == *(int *)(iVar2 + 8)) {
        fn_00796e28(iVar2,iVar6,auStack_84);
      }
      else {
        *(int *)(iVar2 + 4) = iVar6 + 0x34;
        if (iVar6 != 0) {
          fn_00656538(iVar6);
        }
      }
      return auStack_84;
    }
  }
  puVar3 = (undefined1 *)fn_0062031c(iVar2,*(undefined4 *)(param_1 + 8));
  iVar8 = 0;
  if ((int)puVar3 < 1) {
    return puVar3;
  }
  local_70 = &DAT_00859628;
  do {
    fn_006565b8(auStack_58);
    local_60[1] = 0;
    bVar9 = true;
    local_60[0] = (uint)*(byte *)(param_1 + 4) << 0x18;
    if (*(char *)(*(int *)(param_1 + 0x10) + (int)*(char *)(param_1 + 4) + -0xc) == '\0') {
      uVar4 = fn_006f0a4c(param_1);
      if (iVar8 == 0) {
        fn_0019bc50(local_60,iVar6 + iVar2 * 6 + -0x60);
        bVar9 = 0x2ba < (int)(short)local_60[0] - 1U;
        if (bVar9) {
          fn_0064dfdc(param_1,local_60,0,(int)(char)puVar3,uVar4);
        }
        iVar5 = fn_00691994((int)(short)local_60[0]);
        if (iVar5 != 0) {
          puVar3 = &DAT_00000001;
        }
        bVar9 = iVar5 == 0 && bVar9;
      }
      else {
        fn_0064dfdc(param_1,local_60,(int)(char)iVar8,(int)(char)puVar3,uVar4);
      }
    }
    else {
      fn_0064e18c(param_1,local_60);
    }
    fn_006564f4(auStack_58,local_60,(int)(char)iVar8,(int)(char)puVar3,bVar9);
    iVar5 = *(int *)(param_1 + 0x2c);
    puVar7 = *(undefined4 **)(iVar5 + 4);
    if (puVar7 == *(undefined4 **)(iVar5 + 8)) {
      fn_00796e28(iVar5,puVar7,auStack_58);
    }
    else {
      *(undefined4 **)(iVar5 + 4) = puVar7 + 0xd;
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = local_70;
        *(undefined1 *)(puVar7 + 1) = local_54;
        *(undefined1 *)((int)puVar7 + 5) = local_53;
        *(undefined1 *)((int)puVar7 + 6) = local_52;
        puVar7[2] = local_50;
        fn_006f94f4(puVar7 + 3,local_4c);
        puVar7[3] = local_4c[0];
        *(undefined2 *)(puVar7 + 3) = (undefined2)local_4c[0];
        *(undefined2 *)(puVar7 + 3) = (undefined2)local_4c[0];
        *(undefined2 *)(puVar7 + 3) = (undefined2)local_4c[0];
        *(undefined1 *)((int)puVar7 + 0x16) = local_42;
        puVar7[6] = local_40;
        puVar7[7] = uStack_3c;
        puVar7[8] = uStack_38;
        puVar7[9] = uStack_34;
        puVar7[10] = uStack_30;
        puVar7[0xb] = uStack_2c;
        puVar7[0xc] = uStack_28;
      }
    }
    *(int *)(param_1 + 0x28) = *(int *)(*(int *)(param_1 + 0x2c) + 4) + -0x34;
    iVar8 = iVar8 + 1;
  } while (iVar8 < (int)puVar3);
  return auStack_58;
}



int fn_0061d66c(int param_1,ushort *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r9;
  int local_28;
  uint local_24;
  undefined4 local_20;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_20 = *(undefined4 *)(param_1 + 0x2c);
  local_24 = (uint)*param_2 | unaff_r9 & 0xffff0000;
  local_28 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_006535c8(&local_28,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}


