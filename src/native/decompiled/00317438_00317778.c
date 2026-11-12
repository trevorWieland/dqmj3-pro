#include "00317438_00317778.h"



void fn_00317778(void)

{
  fn_0039208c(*(undefined4 *)(DAT_00897804 + 0x68));
  return;
}



int fn_00317438(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  short sVar1;
  undefined1 uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  uint local_68 [2];
  uint local_60 [6];
  undefined1 auStack_48 [12];
  uint local_3c [2];
  int local_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  iVar9 = 0;
  sVar10 = 9999;
  iVar12 = 4;
  local_34 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  do {
    bVar13 = param_2 == iVar9;
    iVar6 = param_2 - iVar9;
    if (param_2 > iVar9) {
      bVar13 = iVar12 == 0;
      iVar6 = iVar12;
    }
    if (bVar13 || iVar6 < 0 != (param_2 <= iVar9 && SBORROW4(param_2,iVar9))) {
      return iVar9;
    }
    uVar5 = fn_0033ca90(param_4);
    sVar3 = fn_002ea7a8(uVar5,iVar9);
    iVar11 = (int)sVar3;
    iVar6 = fn_0013add0(iVar11);
    if (iVar6 == 0) {
      return iVar9;
    }
    iVar6 = local_34 + iVar9 * 0xf0;
    fn_0020bbc4(auStack_48,iVar6);
    local_60[1] = fn_002ea524(iVar11);
    local_60[3] = fn_002e9ce8(iVar11);
    local_60[3] = local_60[3] & 0xff;
    uVar2 = fn_002e9be0(iVar11);
    fn_0020b310(auStack_48,local_60[1],local_60[3],uVar2,0xffffffff,1);
    uVar4 = fn_002e9d44(iVar11);
    *(undefined2 *)(iVar6 + 0x1e) = uVar4;
    uVar4 = fn_002e9d9c(iVar11);
    *(undefined2 *)(iVar6 + 0x20) = uVar4;
    *(undefined2 *)(iVar6 + 0x24) = uVar4;
    *(undefined2 *)(iVar6 + 0x22) = *(undefined2 *)(iVar6 + 0x1e);
    uVar4 = fn_002ea074(iVar11);
    *(undefined2 *)(iVar6 + 0x26) = uVar4;
    uVar4 = fn_002ea124(iVar11);
    *(undefined2 *)(iVar6 + 0x28) = uVar4;
    uVar4 = fn_002e9df4(iVar11);
    *(undefined2 *)(iVar6 + 0x2a) = uVar4;
    uVar4 = fn_002e9b88(iVar11);
    *(undefined2 *)(iVar6 + 0x2c) = uVar4;
    sVar3 = *(short *)(iVar6 + 0x26);
    local_68[0] = fn_0033cbfc(param_4);
    if ((sVar3 < 10000) &&
       (uVar7 = fn_00300f74(9999 - sVar3,local_68[0]), (int)param_3 <= (int)uVar7)) {
      local_60[2] = uVar7;
      local_60[0] = param_3;
      local_3c[0] = 0;
      if ((int)uVar7 < 0) {
code_r0x003176b8:
                    /* WARNING: Subroutine does not return */
        fn_00146590();
      }
      if ((int)param_3 < 0) {
        puVar8 = local_3c;
      }
      else {
        puVar8 = local_60;
      }
      if ((int)uVar7 < (int)*puVar8) {
        puVar8 = local_60 + 2;
      }
      sVar3 = (short)local_68[0] * (short)*puVar8 + sVar3;
    }
    else {
      sVar3 = sVar10;
    }
    *(short *)(iVar6 + 0x26) = sVar3;
    sVar1 = *(short *)(iVar6 + 0x28);
    local_68[0] = fn_0033cc24(param_4);
    sVar3 = sVar10;
    if ((sVar1 < 10000) &&
       (uVar7 = fn_00300f74(9999 - sVar1,local_68[0]), (int)param_3 <= (int)uVar7)) {
      local_60[0] = 0;
      local_60[2] = uVar7;
      local_60[3] = param_3;
      if ((int)uVar7 < 0) goto code_r0x003176b8;
      if ((int)param_3 < 0) {
        puVar8 = local_60;
      }
      else {
        puVar8 = local_60 + 3;
      }
      if ((int)uVar7 < (int)*puVar8) {
        puVar8 = local_60 + 2;
      }
      sVar3 = (short)local_68[0] * (short)*puVar8 + sVar1;
    }
    *(short *)(iVar6 + 0x28) = sVar3;
    sVar1 = *(short *)(iVar6 + 0x2a);
    local_60[0] = fn_0033cbd4(param_4);
    sVar3 = sVar10;
    if ((sVar1 < 10000) &&
       (uVar7 = fn_00300f74(9999 - sVar1,local_60[0]), (int)param_3 <= (int)uVar7)) {
      local_60[3] = uVar7;
      local_68[0] = 0;
      local_60[2] = param_3;
      if ((int)uVar7 < 0) goto code_r0x003176b8;
      if ((int)param_3 < 0) {
        puVar8 = local_68;
      }
      else {
        puVar8 = local_60 + 2;
      }
      if ((int)uVar7 < (int)*puVar8) {
        puVar8 = local_60 + 3;
      }
      sVar3 = (short)local_60[0] * (short)*puVar8 + sVar1;
    }
    *(short *)(iVar6 + 0x2a) = sVar3;
    sVar1 = *(short *)(iVar6 + 0x2c);
    local_68[0] = fn_0033cbac(param_4);
    sVar3 = sVar10;
    if ((sVar1 < 10000) && (iVar11 = fn_00300f74(9999 - sVar1,local_68[0]), (int)param_3 <= iVar11)
       ) {
      local_60[4] = iVar11;
      local_60[0] = 0;
      local_60[2] = param_3;
      if (iVar11 < 0) goto code_r0x003176b8;
      if ((int)param_3 < 0) {
        puVar8 = local_60;
      }
      else {
        puVar8 = local_60 + 2;
      }
      if (iVar11 < (int)*puVar8) {
        puVar8 = local_60 + 4;
      }
      sVar3 = (short)local_68[0] * (short)*puVar8 + sVar1;
    }
    *(short *)(iVar6 + 0x2c) = sVar3;
    fn_0060f670(iVar6);
    fn_0066173c(local_60[1]);
    iVar6 = fn_001cab7c();
    iVar12 = iVar12 - iVar6;
    iVar9 = iVar9 + 1;
  } while( true );
}


