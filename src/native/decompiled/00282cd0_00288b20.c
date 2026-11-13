#include "00282cd0_00288b20.h"



void fn_00288b20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = fn_0017fde4(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xe4));
  iVar2 = fn_00183654();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = fn_005ea5ec(uVar1,iVar4);
      if (iVar3 != 0) {
        fn_005ea69c(uVar1,iVar4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x00288b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x10) + 0xd8))();
  return;
}



void fn_00288af0(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00154ac8(0x49);
  if (iVar1 == 0) {
    return;
  }
  fn_002a5144(*(undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 0x10) + 0x20);
  return;
}



void fn_00288ab8(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x18) != -1) {
    uVar1 = fn_006f72b4(DAT_008977e0);
    fn_0021f144(uVar1,*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
  return;
}



void fn_00288a28(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    iVar1 = *(int *)(param_1 + 0x10);
    uVar2 = fn_006f72b4(DAT_008977e0);
    uVar2 = fn_0021ed50(uVar2,0,iVar1 + 0x20);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  return;
}



void fn_002889cc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    fn_002340e8(param_2);
  }
  else if (param_1 == 1) {
    fn_002340e8(param_2);
  }
  iVar1 = *(int *)(*(int *)(DAT_008977e0 + 8) + 0x50);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(iVar1 + 0x68);
  fn_00117984();
  fn_0010fa20();
  uVar2 = fn_006eb278();
  fn_005e19d4(uVar2,*(undefined4 *)(iVar1 + 4));
  return;
}



undefined4 fn_00286ec4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157fb0(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00286f40,(char *)&DAT_00286f2c,(char *)&DAT_007c2a5d
                         ,0x90e);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_006f751c(DAT_008977e0);
  fn_003410f8(uVar2,local_10);
  return 0;
}



undefined4 fn_00286d80(undefined4 param_1)

{
  fn_001580cc(param_1,0xb);
  return 1;
}



undefined4 fn_00286384(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f00(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002863fc,(char *)&DAT_002863e8,(char *)&DAT_007c2166,
                         0x1a3);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  if (DAT_008918f0 != 0) {
    fn_005674ec();
  }
  return 0;
}



undefined4 fn_00285674(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006f751c(DAT_008977e0);
  uVar2 = 1;
  if (*(int *)(iVar1 + 0x3c) != 0) {
    uVar2 = fn_00341bf0(*(int *)(iVar1 + 0x3c),1);
  }
  fn_00158004(param_1,uVar2);
  return 1;
}



undefined4 fn_00284b90(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  int local_c;
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00284c68,(char *)&DAT_00284c54,(char *)&DAT_007c2a2e,
                         0x8f2);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157eb4(param_1,0xffffffff,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00284c84,(char *)&DAT_00284c54,(char *)&DAT_007c2a2e,0x8f5)
    ;
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_006f751c(DAT_008977e0);
  fn_003410ec(uVar2,local_10);
  return 0;
}



undefined4 fn_002849fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f00(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00284a74,(char *)&DAT_00284a60,(char *)&DAT_007c214e,0x191
                        );
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  if (DAT_008918f0 != 0) {
    fn_005674b8();
  }
  return 0;
}



undefined4 fn_00284670(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00284774,(char *)&DAT_00284760,(char *)&DAT_007c29ea,
                         0x862);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_006f751c(DAT_008977e0);
  if (iVar1 == 0) {
    if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
      DAT_008f9e2c = 0;
      DAT_008f9e30 = 0;
      DAT_008f9e34 = 0;
    }
    fn_00148a34(param_1,&DAT_008f9e2c);
  }
  else {
    puVar3 = (undefined4 *)fn_006c1bdc(iVar1,local_18,0);
    local_14 = *puVar3;
    uStack_10 = puVar3[1];
    uStack_c = puVar3[2];
    fn_00148a34(param_1,&local_14);
  }
  return 1;
}



undefined4 fn_00283d3c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  puVar1 = (undefined4 *)fn_0034134c();
  local_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  fn_00148a34(param_1,&local_18);
  return 1;
}



undefined4 fn_00283cf4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006f751c(DAT_008977e0);
  fn_001580cc(param_1,*(undefined4 *)(iVar1 + 0x2c));
  return 1;
}



undefined4 fn_00282cd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157eb4(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00282d5c,(char *)&DAT_00282d48,(char *)&DAT_007c2a19,0x8d9);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_006f751c(DAT_008977e0);
  if (*(int *)(iVar1 + 0x3c) != 0) {
    fn_00341c04(*(int *)(iVar1 + 0x3c),local_10 != 0);
  }
  return 0;
}


