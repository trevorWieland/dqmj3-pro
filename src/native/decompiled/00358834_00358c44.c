#include "00358834_00358c44.h"



void fn_00358c44(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  iVar2 = fn_00174834(DAT_008977e4);
  if (*(char *)(param_1 + 10) != '\0') {
LAB_00358cf4:
    puVar4 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar4 + 1) = 1;
      *puVar4 = &DAT_0082deb8;
      *(undefined1 *)((int)puVar4 + 5) = 0;
    }
    fn_005df93c(DAT_008977e4,puVar4);
    return;
  }
  uVar3 = iVar2 + 0x185e00;
  cVar1 = *(char *)(iVar2 + 0x185eed);
  bVar5 = cVar1 == '\0';
  if (bVar5) {
    cVar1 = *(char *)(iVar2 + 0x185eef);
  }
  if (bVar5 && cVar1 == '\0') {
    bVar5 = *(char *)(iVar2 + 0x185ef1) == '\0';
    if (bVar5) {
      uVar3 = (uint)*(byte *)(iVar2 + 0x185ef3);
    }
    if (!bVar5 || uVar3 != 0) goto LAB_00358cf4;
  }
  local_14[0] = 0;
  local_18 = 0xff000000;
  fn_0068869c(DAT_0089780c,&local_18,local_14,0xf);
  puVar4 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &DAT_0082ad40;
  }
  fn_005df93c(DAT_008977e4,puVar4);
  return;
}



undefined4 fn_00358c20(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_00661518();
  iVar2 = fn_001a46f4();
  if (iVar2 != 0) {
    param_1 = uVar1;
  }
  return param_1;
}



undefined1 * fn_00358b34(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_858 [1048];
  undefined1 auStack_440 [1048];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  
  uVar4 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar1 = fn_0028aad0(uVar4,param_1);
  puVar3 = (undefined1 *)0x0;
  if ((iVar1 != 0) && (iVar2 = fn_0028aad0(uVar4,param_2), puVar3 = (undefined1 *)0x0, iVar2 != 0))
  {
    puVar3 = auStack_28;
    fn_0020bbc4(puVar3,iVar1);
    fn_0020bbc4(auStack_20,iVar2);
    fn_00301f50(auStack_858,0x418);
    fn_003585b4(puVar3,auStack_858,1);
    fn_00301f50(auStack_440,0x418);
    fn_003585b4(auStack_20,auStack_440,1);
    fn_0061a8fc(auStack_858,auStack_440,param_3);
    fn_0061a1a4(param_3);
    fn_00619fc4(param_3);
  }
  return puVar3;
}



void fn_00358834(int param_1)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short local_20 [8];
  
  if (param_1 == 0) {
    return;
  }
  psVar9 = local_20;
  psVar7 = local_20;
  psVar8 = local_20;
  psVar5 = local_20;
  psVar6 = local_20;
  iVar4 = fn_006f44fc(param_1,0x96);
  if (iVar4 != 0) {
    sVar2 = *(short *)(param_1 + 0x20);
    local_20[2] = 1;
    local_20[4] = 9999;
    local_20[0] = sVar2 + 1000;
    if ((short)(sVar2 + 1000) < 1) {
      psVar5 = local_20 + 2;
    }
    if (9999 < *psVar5) {
      psVar5 = local_20 + 4;
    }
    local_20[4] = *psVar5;
    local_20[2] = 1;
    local_20[0] = (short)((sVar2 * 3) / 2);
    if (local_20[4] < 1) goto code_r0x00358b0c;
    if (local_20[0] < 1) {
      psVar9 = local_20 + 2;
    }
    if (local_20[4] < *psVar9) {
      psVar9 = local_20 + 4;
    }
    sVar1 = *psVar9;
    *(short *)(param_1 + 0x20) = sVar1;
    *(short *)(param_1 + 0x1c) = (sVar1 + *(short *)(param_1 + 0x1c)) - sVar2;
    *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) / 2;
    *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) / 2;
  }
  iVar4 = fn_006f44fc(param_1,0x97);
  if (iVar4 != 0) {
    sVar2 = *(short *)(param_1 + 0x22);
    local_20[2] = 1;
    local_20[4] = 9999;
    local_20[0] = sVar2 << 1;
    if (local_20[0] < 1) {
      psVar6 = local_20 + 2;
    }
    if (9999 < *psVar6) {
      psVar6 = local_20 + 4;
    }
    sVar1 = *psVar6;
    *(short *)(param_1 + 0x22) = sVar1;
    *(short *)(param_1 + 0x1e) = (sVar1 + *(short *)(param_1 + 0x1e)) - sVar2;
    *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) / 2;
    *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) / 2;
  }
  iVar4 = fn_006f44fc(param_1,0x98);
  if (iVar4 != 0) {
    sVar2 = *(short *)(param_1 + 0x20);
    iVar4 = fn_00615ab0((int)sVar2);
    sVar1 = (short)iVar4;
    *(short *)(param_1 + 0x20) = sVar1;
    if (sVar2 < iVar4) {
      sVar2 = (sVar1 + *(short *)(param_1 + 0x1c)) - sVar2;
    }
    else {
      local_20[2] = 0;
      local_20[0] = *(short *)(param_1 + 0x1c);
      local_20[4] = sVar1;
      if (iVar4 < 0) goto code_r0x00358b0c;
      if (*(short *)(param_1 + 0x1c) < 0) {
        psVar7 = local_20 + 2;
      }
      if (iVar4 < *psVar7) {
        psVar7 = local_20 + 4;
      }
      sVar2 = *psVar7;
    }
    *(short *)(param_1 + 0x1c) = sVar2;
  }
  iVar4 = fn_006f44fc(param_1,0x99);
  if (iVar4 != 0) {
    sVar2 = *(short *)(param_1 + 0x22);
    iVar4 = fn_00615ab0((int)sVar2);
    sVar1 = (short)iVar4;
    *(short *)(param_1 + 0x22) = sVar1;
    if (sVar2 < iVar4) {
      sVar2 = (sVar1 + *(short *)(param_1 + 0x1e)) - sVar2;
    }
    else {
      local_20[2] = 0;
      local_20[0] = *(short *)(param_1 + 0x1e);
      local_20[4] = sVar1;
      if (iVar4 < 0) {
code_r0x00358b0c:
                    /* WARNING: Subroutine does not return */
        fn_00146590();
      }
      if (*(short *)(param_1 + 0x1e) < 0) {
        psVar8 = local_20 + 2;
      }
      if (iVar4 < *psVar8) {
        psVar8 = local_20 + 4;
      }
      sVar2 = *psVar8;
    }
    *(short *)(param_1 + 0x1e) = sVar2;
  }
  iVar4 = fn_006f44fc(param_1,0x9a);
  if (iVar4 != 0) {
    uVar3 = fn_00615ab0((int)*(short *)(param_1 + 0x24));
    *(undefined2 *)(param_1 + 0x24) = uVar3;
  }
  iVar4 = fn_006f44fc(param_1,0x9b);
  if (iVar4 != 0) {
    uVar3 = fn_00615ab0((int)*(short *)(param_1 + 0x26));
    *(undefined2 *)(param_1 + 0x26) = uVar3;
  }
  iVar4 = fn_006f44fc(param_1,0x9c);
  if (iVar4 != 0) {
    uVar3 = fn_00615ab0((int)*(short *)(param_1 + 0x28));
    *(undefined2 *)(param_1 + 0x28) = uVar3;
  }
  iVar4 = fn_006f44fc(param_1,0x9d);
  if (iVar4 != 0) {
    uVar3 = fn_00615ab0((int)*(short *)(param_1 + 0x2a));
    *(undefined2 *)(param_1 + 0x2a) = uVar3;
  }
  fn_00619fc4(param_1);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x28);
  return;
}


