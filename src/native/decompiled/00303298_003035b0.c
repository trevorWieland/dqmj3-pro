#include "00303298_003035b0.h"



uint fn_003035b0(uint *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint *puVar8;
  uint *puVar9;
  byte *pbVar10;
  uint *puVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  
  if ((((uint)param_1 ^ (uint)param_2) & 3) != 0) {
    do {
      pbVar10 = (byte *)((int)param_1 + 1);
      uVar13 = (uint)(byte)*param_1;
      pbVar12 = (byte *)((int)param_2 + 1);
      uVar14 = (uint)(byte)*param_2;
      bVar16 = uVar13 == 1;
      if (uVar13 != 0) {
        bVar16 = uVar13 == uVar14;
      }
      if (!bVar16) break;
      param_1 = (uint *)((int)param_1 + 2);
      uVar13 = (uint)*pbVar10;
      param_2 = (uint *)((int)param_2 + 2);
      uVar14 = (uint)*pbVar12;
      bVar16 = uVar13 == 1;
      if (uVar13 != 0) {
        bVar16 = uVar13 == uVar14;
      }
    } while (bVar16);
LAB_00303698:
    return uVar13 - uVar14;
  }
  puVar8 = param_1;
  puVar11 = param_2;
  if (((uint)param_1 & 3) != 0) {
    puVar8 = (uint *)((int)param_1 + 1);
    uVar13 = (uint)(byte)*param_1;
    uVar14 = (uint)(byte)*param_2;
    bVar16 = uVar13 == 1;
    if (uVar13 != 0) {
      bVar16 = uVar13 == uVar14;
    }
    if (!bVar16) goto LAB_00303698;
    puVar11 = (uint *)((int)param_2 + 1);
    if (((uint)puVar8 & 3) != 0) {
      puVar9 = (uint *)((int)param_1 + 2);
      uVar13 = (uint)*(byte *)puVar8;
      uVar14 = (uint)*(byte *)((int)param_2 + 1);
      bVar16 = uVar13 == 1;
      if (uVar13 != 0) {
        bVar16 = uVar13 == uVar14;
      }
      if (!bVar16) goto LAB_00303698;
      puVar8 = puVar9;
      puVar11 = (uint *)((int)param_2 + 2);
      if (((uint)puVar9 & 3) != 0) {
        puVar8 = (uint *)((int)param_1 + 3);
        uVar13 = (uint)*(byte *)puVar9;
        puVar11 = (uint *)((int)param_2 + 3);
        uVar14 = (uint)*(byte *)((int)param_2 + 2);
        bVar16 = uVar13 == 1;
        if (uVar13 != 0) {
          bVar16 = uVar13 == uVar14;
        }
        if (!bVar16) goto LAB_00303698;
      }
    }
  }
  do {
    uVar14 = *puVar8;
    uVar15 = *puVar11;
    bVar4 = UnsignedSaturate('\x01' - (char)uVar14,0x10);
    uVar5 = UnsignedSaturate('\x01' - (char)(uVar14 >> 8),0x10);
    uVar6 = UnsignedSaturate('\x01' - (char)(uVar14 >> 0x10),0x10);
    uVar7 = UnsignedSaturate('\x01' - (char)(uVar14 >> 0x18),0x10);
    uVar13 = (uint)uVar7 << 0x18 | (uint)uVar6 << 0x10 | (uint)uVar5 << 8 | (uint)bVar4;
    if (uVar14 != uVar15 || uVar13 != 0) break;
    uVar14 = puVar8[1];
    uVar15 = puVar11[1];
    bVar4 = UnsignedSaturate('\x01' - (char)uVar14,0x10);
    uVar5 = UnsignedSaturate('\x01' - (char)(uVar14 >> 8),0x10);
    uVar6 = UnsignedSaturate('\x01' - (char)(uVar14 >> 0x10),0x10);
    uVar7 = UnsignedSaturate('\x01' - (char)(uVar14 >> 0x18),0x10);
    uVar13 = (uint)uVar7 << 0x18 | (uint)uVar6 << 0x10 | (uint)uVar5 << 8 | (uint)bVar4;
    puVar8 = puVar8 + 2;
    puVar11 = puVar11 + 2;
  } while (uVar14 == uVar15 && uVar13 == 0);
  uVar14 = uVar14 ^ 0x80808080;
  uVar15 = uVar15 ^ 0x80808080;
  bVar4 = SignedSaturate((char)uVar14 - (char)uVar15,8);
  bVar1 = SignedSaturate((char)(uVar14 >> 8) - (char)(uVar15 >> 8),8);
  bVar2 = SignedSaturate((char)(uVar14 >> 0x10) - (char)(uVar15 >> 0x10),8);
  bVar3 = SignedSaturate((char)(uVar14 >> 0x18) - (char)(uVar15 >> 0x18),8);
  uVar14 = (uint)bVar3 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar1 << 8 | (uint)bVar4;
  uVar13 = uVar13 | uVar14;
  if ((uVar13 & 0xffff) != 0) {
    uVar14 = uVar14 << 0x10;
    uVar13 = uVar13 << 0x10;
  }
  if ((uVar13 & 0xff0000) != 0) {
    uVar14 = uVar14 << 8;
  }
  return uVar14;
}



undefined4 fn_003035a0(int *param_1,int *param_2)

{
  if (*param_1 == *param_2) {
    return 1;
  }
  return 0;
}



undefined4 fn_00303590(int *param_1,int *param_2)

{
  if (*param_1 == *param_2) {
    return 1;
  }
  return 0;
}



int fn_00303588(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}



int fn_00303370(int *param_1,uint *param_2,int param_3,uint param_4,code *param_5)

{
  undefined *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_28;
  int *piStack_24;
  uint *local_20;
  int local_1c;
  uint uStack_18;
  
  if ((*(uint *)(*param_1 + 0x14) & param_4) == 0) {
    if ((*(uint *)(*param_1 + 0x10) & param_4) == 0) {
      iVar5 = DAT_008c3dac;
    }
    else {
      iVar5 = DAT_008c3db0;
    }
  }
  else {
    iVar5 = 0;
  }
  piStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  uStack_18 = param_4;
  if (iVar5 != 0) {
    uVar6 = *param_2;
    if (*(uint *)(iVar5 + 0xc) <= uVar6) {
      local_28 = 0;
      fn_00303478(iVar5 + 8,uVar6 + 1,&local_28);
    }
    iVar7 = *(int *)(*(int *)(iVar5 + 8) + uVar6 * 4);
    if (iVar7 != 0) goto LAB_0030345c;
  }
  if (local_1c == 0) {
    fn_002ff628(4);
  }
  if (iVar5 != 0) {
    uVar6 = *local_20;
    if (*(uint *)(iVar5 + 0xc) <= uVar6) {
      local_28 = 0;
      fn_00303478(iVar5 + 8,uVar6 + 1,&local_28);
    }
    iVar7 = *(int *)(*(int *)(iVar5 + 8) + uVar6 * 4);
    if (iVar7 != 0) goto LAB_0030345c;
  }
  piVar3 = (int *)*param_1;
  uVar4 = 0;
  puVar1 = &DAT_00303470;
  if ((piVar3[5] & param_4) == 0) {
    if ((piVar3[4] & param_4) != 0) {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 2;
    uVar2 = 0x10;
    uVar6 = 0;
    do {
      if ((param_4 & uVar2) != 0) {
        puVar1 = *(undefined **)(*piVar3 + uVar6 * 4);
        goto LAB_00303426;
      }
      uVar2 = uVar2 << 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 6);
    puVar1 = &DAT_008c75f6;
  }
LAB_00303426:
  iVar7 = (*param_5)(uVar4,puVar1,0);
  if ((iVar5 != 0) && (*param_1 != iVar5)) {
    fn_003034c0(&local_28,iVar5);
    fn_003034e4(&local_28,iVar7,local_20);
    local_28 = 0;
    *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + -1;
    fn_00303564(&local_28);
  }
LAB_0030345c:
  fn_003034e4(param_1,iVar7,local_20);
  return iVar7;
}



int * fn_00303564(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x1c) + -1;
    *(int *)(iVar1 + 0x1c) = iVar2;
    if ((iVar2 == 0) && (*param_1 != 0)) {
      fn_002ff770();
      fn_002feef8();
    }
  }
  return param_1;
}



void fn_00303478(int *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  puVar1 = (undefined4 *)fn_002fec38(param_2 << 2);
  uVar4 = param_1[1];
  if (param_2 <= (uint)param_1[1]) {
    uVar4 = param_2;
  }
  puVar3 = puVar1;
  for (puVar2 = (undefined4 *)*param_1; (undefined4 *)(*param_1 + uVar4 * 4) != puVar2;
      puVar2 = puVar2 + 1) {
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
  }
  for (; uVar4 < param_2; uVar4 = uVar4 + 1) {
    puVar1[uVar4] = *param_3;
  }
  fn_002feca8(*param_1);
  *param_1 = (int)puVar1;
  param_1[1] = param_2;
  return;
}



undefined * fn_00303328(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_008c3db4 == 0) {
    fn_002ff020();
  }
  if (((DAT_008c3da4 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c3da4), iVar1 != 0)) {
    uVar2 = fn_003034c0(&DAT_008c3da8,DAT_008c3dac);
    fn_00303b10(uVar2,0x303565,0x100000);
  }
  return &DAT_008c3da8;
}



int * fn_003034c0(int *param_1,int param_2)

{
  *param_1 = param_2;
  if (DAT_008c3db4 == 0) {
    fn_002ff020();
  }
  *(int *)(*param_1 + 0x1c) = *(int *)(*param_1 + 0x1c) + 1;
  return param_1;
}



int * fn_003032f2(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (*param_1 != iVar1) {
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
    iVar1 = *(int *)(*param_1 + 0x1c) + -1;
    *(int *)(*param_1 + 0x1c) = iVar1;
    if ((iVar1 == 0) && (*param_1 != 0)) {
      fn_002ff770();
      fn_002feef8();
    }
    *param_1 = *param_2;
  }
  return param_1;
}



undefined4 * fn_003032d8(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    fn_00303234(*param_1);
    fn_002feca8(param_1[1]);
  }
  return param_1;
}



undefined4 * fn_00303298(void)

{
  int iVar1;
  
  if (((DAT_008c7678 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c7678), iVar1 != 0)) {
    DAT_008c767c = 0;
    DAT_008c7680 = 0;
    fn_00303b10(&DAT_008c767c,&LAB_00104344_1,0x100000);
  }
  return &DAT_008c767c;
}


