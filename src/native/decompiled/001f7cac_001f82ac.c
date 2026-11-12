#include "001f7cac_001f82ac.h"



undefined4 fn_001f82ac(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_50 [22];
  undefined1 auStack_3a [46];
  undefined1 auStack_c [4];
  
  iVar2 = *(int *)(DAT_00897804 + 8);
  uVar1 = 0;
  if (*(char *)(*(int *)(iVar2 + 4) + 0x60) != '\0') {
    fn_001f825c();
    fn_006619ec(auStack_50,*(int *)(iVar2 + 4) + 100);
    fn_0011ddb8();
    fn_00246e68(auStack_c);
    fn_00246e00(auStack_c);
    iVar2 = fn_006b5424(auStack_c,auStack_50);
    if (iVar2 == 0) {
      fn_00246e00(auStack_c);
      uVar1 = fn_006b5424(auStack_c,auStack_3a);
      fn_00246e74(auStack_c);
      return uVar1;
    }
    fn_00246e74(auStack_c);
    uVar1 = 1;
  }
  return uVar1;
}



int fn_001f828c(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_008987bc != 0) {
    iVar1 = *(int *)(DAT_008987bc + 0x24);
  }
  if (DAT_008987bc != 0 && iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}



void fn_001f825c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  int *local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  
  iVar1 = DAT_008987bc;
  DAT_008987c0 = DAT_008987c0 + 1;
  if ((DAT_008987c0 != 1) || (DAT_008987bc == 0)) {
    return;
  }
  uVar2 = fn_0011c184(L"rom:/data/Model/Mii_Material.bch",*(undefined4 *)(DAT_008987bc + 8),0x80,5)
  ;
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  iVar3 = fn_00145b00(0x34,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_001283fc();
  }
  *(undefined4 *)(iVar1 + 0x28) = uVar2;
  uVar2 = fn_00145ac0(*(undefined4 *)(iVar1 + 0x24));
  fn_00173a34(*(undefined4 *)(iVar1 + 0x28),uVar2);
  fn_00185320(*(undefined4 *)(iVar1 + 0x28));
  iVar3 = fn_00145b00(8,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_005efdbc();
  }
  *(undefined4 *)(iVar1 + 0x2c) = uVar2;
  fn_0069ee40(uVar2,*(undefined4 *)(iVar1 + 0x28),0);
  uVar2 = fn_0017fde4(*(undefined4 *)(iVar1 + 0x2c));
  fn_0020230c(*(undefined4 *)(iVar1 + 8),uVar2);
  puVar9 = (undefined4 *)(iVar1 + 0x10);
  piVar4 = (int *)fn_00118290();
  local_2c = 0;
  local_24 = 0x40000000;
  local_30 = piVar4;
  if ((int **)puVar9 != &local_30) {
    local_2c = *(int *)(iVar1 + 0x14);
    local_24 = *(undefined4 *)(iVar1 + 0x1c);
    local_30 = (int *)*puVar9;
    *puVar9 = piVar4;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0x40000000;
  }
  local_28 = local_2c;
  iVar3 = 0;
  if (local_30 != (int *)0x0) {
    iVar3 = local_2c;
  }
  if (local_30 != (int *)0x0 && iVar3 != 0) {
    (**(code **)(*local_30 + 0xc))(local_30,local_2c);
  }
  uVar11 = 0;
  do {
    piVar4 = (int *)(iVar1 + 0x10);
    uVar7 = *(uint *)(iVar1 + 0x1c);
    uVar5 = uVar7 & 0x3fffffff;
    if (*(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2 < (int)uVar5) {
LAB_00661c8c:
      if (*(undefined4 **)(iVar1 + 0x18) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar1 + 0x18) = 0;
      }
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 4;
    }
    else {
      if (uVar5 == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = uVar5 << 1;
      }
      if (uVar5 <= (uVar7 & 0x3fffffff)) goto LAB_00661c8c;
      if (((*piVar4 != 0) && ((uVar7 & 0xc0000000) == 0x40000000)) &&
         (puVar9 = (undefined4 *)(**(code **)(*(int *)*piVar4 + 8))((int *)*piVar4,uVar5 << 2,0x20),
         puVar9 != (undefined4 *)0x0)) {
        puVar6 = *(undefined4 **)(iVar1 + 0x14);
        puVar8 = *(undefined4 **)(iVar1 + 0x18);
        iVar3 = 0;
        puVar10 = puVar9;
        if (puVar6 != puVar8) {
          do {
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = *puVar6;
            }
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          } while (puVar6 != puVar8);
          iVar3 = *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x14) >> 2;
        }
        if (*(int *)(iVar1 + 0x14) != 0) {
          *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x14);
          (**(code **)(*(int *)*piVar4 + 0xc))();
        }
        *(undefined4 **)(iVar1 + 0x18) = puVar9 + iVar3;
        *(undefined4 **)(iVar1 + 0x14) = puVar9;
        *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xc0000000 | uVar5;
        goto LAB_00661c8c;
      }
    }
    uVar11 = uVar11 + 1;
    if (99 < uVar11) {
      return;
    }
  } while( true );
}



undefined4 * fn_001f8010(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0081c200;
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
    param_1[3] = 0;
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
    param_1[4] = 0;
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
    param_1[5] = 0;
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
    param_1[6] = 0;
  }
  if (param_1[2] != 0) {
    fn_0028c480();
    fn_002feef8();
    param_1[2] = 0;
  }
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 4))();
    param_1[0xb] = 0;
  }
  if ((int *)param_1[0xc] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xc] + 4))();
    param_1[0xc] = 0;
  }
  fn_0028c80c(param_1[0xd]);
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))();
    param_1[0xd] = 0;
  }
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 4))();
    param_1[0xe] = 0;
  }
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 4))();
    param_1[0xf] = 0;
  }
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 4))();
  }
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))();
  }
  if ((int *)param_1[0xc] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xc] + 4))();
  }
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 4))();
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if (param_1[2] != 0) {
    fn_0028c480();
    fn_002feef8();
  }
  return param_1;
}



undefined4 * fn_001f7e18(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_006896e0();
  *puVar1 = &PTR_FUN_0081c200;
  iVar2 = fn_00145b00(0x18,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0028c400();
  }
  puVar1[2] = uVar3;
  iVar2 = fn_00145b00(0x40,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0028ecd0(iVar2,param_2,puVar1[2],0);
  }
  puVar1[3] = uVar3;
  iVar2 = fn_00145b00(0x40,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0028ecd0(iVar2,param_2,puVar1[2],0);
  }
  puVar1[4] = uVar3;
  iVar2 = fn_00145b00(0x40,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0028ecd0(iVar2,param_2,puVar1[2],1);
  }
  puVar1[5] = uVar3;
  iVar2 = fn_00145b00(0x40,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0028ecd0(iVar2,param_2,puVar1[2],0);
  }
  puVar1[6] = uVar3;
  puVar1[7] = &DAT_00859230;
  *(undefined1 *)(puVar1 + 8) = 0;
  *(undefined1 *)((int)puVar1 + 0x21) = 0;
  *(undefined1 *)((int)puVar1 + 0x22) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  iVar2 = fn_00145b00(0x20,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_002b1b98(iVar2,param_2);
  }
  puVar1[0xb] = uVar3;
  iVar2 = fn_00145b00(0x20,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_003b8348(iVar2,param_2);
  }
  puVar1[0xc] = uVar3;
  iVar2 = fn_00145b00(0xc,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0028c838(iVar2,param_2);
  }
  puVar1[0xd] = uVar3;
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0069e9cc();
  }
  puVar1[0xe] = uVar3;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  *(undefined1 *)((int)puVar1 + 0x45) = 0;
  *(undefined4 **)(param_2 + 0x18) = puVar1;
  *(undefined4 *)(param_2 + 0x20) = puVar1[0xb];
  *(undefined4 *)(param_2 + 0x1c) = puVar1[0xc];
  *(undefined4 *)(param_2 + 0x24) = puVar1[0xd];
  *(undefined4 *)(param_2 + 0x28) = puVar1[0xe];
  fn_0028c6dc(puVar1[0xd]);
  return puVar1;
}



void fn_001f7e04(int param_1)

{
  fn_0028eac8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0x18));
  return;
}



void fn_001f7d54(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined1 auStack_20 [4];
  undefined4 local_1c [2];
  
  puVar1 = (undefined4 *)fn_001603f8(auStack_20,0xff);
  if ((param_3 != 0) && (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc))) {
    local_1c[0] = *puVar1;
    fn_00163988(DAT_00897808,local_1c,param_2);
  }
  if ((param_4 != 0) && (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
    local_1c[0] = *puVar1;
    fn_00163988(DAT_0089780c,local_1c,param_2);
  }
  return;
}



void fn_001f7cac(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_20 [4];
  undefined4 local_1c [2];
  
  puVar1 = (undefined4 *)fn_001603f8(auStack_20,0xff);
  if ((param_2 != 0) && (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc))) {
    local_1c[0] = *puVar1;
    fn_00163988(DAT_00897808,local_1c,10);
  }
  if ((param_3 != 0) && (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
    local_1c[0] = *puVar1;
    fn_00163988(DAT_0089780c,local_1c,10);
  }
  return;
}


