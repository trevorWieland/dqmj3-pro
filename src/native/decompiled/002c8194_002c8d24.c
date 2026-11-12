#include "002c8194_002c8d24.h"



void fn_002c8d24(int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  fn_0036c648(*(undefined4 *)(param_1 + 0x5c),param_4);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 10) = 1;
  fn_0036c140(*(undefined4 *)(param_1 + 0x5c),param_2);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 8) = param_3;
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_002c8cdc(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xcc) + 0x14))();
  if (*(int **)(param_1 + 0xcc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xcc) + 4))();
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  fn_002c4100(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x002c8b04) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffe4 : 0x002c8b08 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_002c8aa4(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_20;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &PTR_LAB_0081f674;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  piVar4 = puVar1 + 0x1d;
  *piVar4 = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  local_20 = 2;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar4 = (int)puVar2;
  for (; local_20 != 0; local_20 = local_20 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  puVar1[0x1f] = *piVar4 + 0x80;
  puVar1[0x1e] = *piVar4 + 8;
  puVar1[0x20] = 0;
  uVar3 = *(undefined4 *)(param_2 + 8);
  puVar1[0x22] = 0xffffffff;
  puVar1[0x21] = uVar3;
  puVar1[0x23] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x24) = 0;
  puVar1[0x25] = 0;
  *(undefined1 *)(puVar1 + 0x26) = 0;
  return puVar1;
}



void fn_002c8a38(int param_1,int param_2)

{
  float in_s0;
  float in_s1;
  float local_18;
  float local_14;
  
  fn_0031b3c4(*(undefined4 *)(*(int *)(param_1 + 0x74) + param_2 * 4),2);
  fn_001c9db4(*(undefined4 *)(param_1 + 0x70),param_2);
  fn_00688ff8();
  local_18 = in_s0 - *(float *)(param_1 + 100) * 0.5;
  local_14 = in_s1 + *(float *)(param_1 + 0x68) * 0.5;
  fn_0025e7cc(*(undefined4 *)(param_1 + 0x6c),&local_18);
  return;
}



void fn_002c89dc(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + iVar1 * 4) + 0x14))();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
                    /* WARNING: Could not recover jumptable at 0x002c8a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x80) + 0x14))();
  return;
}



void fn_002c89b0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x70) + 0x14))();
                    /* WARNING: Could not recover jumptable at 0x002c89d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x70) + 0x20))();
  return;
}



void fn_002c8930(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x90) == '\0') {
    uVar1 = fn_006f6a5c(param_1);
    uVar2 = fn_006f6ab4(param_1);
    if ((uVar1 & 0x20000) == 0) {
      if ((uVar2 & 0x100000) == 0 || (uVar2 & 0x200000) == 0) {
        if ((uVar1 & 0x100000) == 0) {
          if ((uVar1 & 0x200000) != 0) {
            *(undefined1 *)(*(int *)(param_1 + 0xa8) + 0x18) = 2;
          }
        }
        else {
          *(undefined1 *)(*(int *)(param_1 + 0xa8) + 0x18) = 1;
        }
      }
    }
    else {
      fn_002dde40(param_1);
    }
  }
  (**(code **)(**(int **)(param_1 + 0x70) + 0x14))();
                    /* WARNING: Could not recover jumptable at 0x002c89d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x70) + 0x20))();
  return;
}



void fn_002c85a0(int param_1,int param_2,undefined4 param_3)

{
  fn_0031b6ec(*(undefined4 *)(*(int *)(param_1 + 0x74) + param_2 * 4),0,1);
  fn_0031b7c4(*(undefined4 *)(*(int *)(param_1 + 0x74) + param_2 * 4),0,param_3);
  return;
}



undefined4 fn_002c8194(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float local_28;
  float local_24;
  undefined4 local_20;
  
  if (param_1[0x22] == -1) {
    local_28 = 1.4013e-45;
    iVar1 = fn_001481c8(param_1[0x21],L"rom:/data/Layout/menu/saveload.arc",&DAT_002c854c,1);
    param_1[0x22] = iVar1;
  }
  iVar1 = param_1[0x23];
  if (iVar1 == -1) {
    local_28 = 1.4013e-45;
    local_20 = 0;
    local_24 = 1.4013e-45;
    iVar1 = fn_001480d0(param_1[0x21],param_1[0x22],(char *)&DAT_002c8558,&DAT_002c8554);
    param_1[0x23] = iVar1;
  }
  iVar1 = fn_00178f9c(param_1[0x21],iVar1);
  uVar2 = fn_00172c98(iVar1,(char *)&DAT_002c8568);
  iVar3 = fn_00145b00(0x88,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    local_28 = (float)param_1[0x12];
    piVar4 = (int *)fn_0031fee0(iVar3,param_1[1],uVar2,1);
  }
  piVar6 = (int *)param_1[0x20];
  if (piVar6 != piVar4) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    param_1[0x20] = (int)piVar4;
  }
  (**(code **)(*(int *)param_1[0x20] + 0x10))();
  uVar2 = (**(code **)(*param_1 + 0x108))(param_1);
  fVar7 = 0.0;
  fVar8 = fVar7;
  fn_0031fe38(param_1[0x20],uVar2);
  fn_002c85dc(param_1,iVar1);
  iVar3 = 0;
  do {
    uVar2 = fn_00172c98(iVar1,(&DAT_00893bb4)[iVar3]);
    iVar5 = fn_00145b00(0x98,&DAT_00812c8c);
    piVar4 = (int *)0x0;
    if (iVar5 != 0) {
      local_28 = (float)param_1[0x12];
      local_24 = 1.4013e-45;
      piVar4 = (int *)fn_0031bb74(iVar5,param_1[1],uVar2,1);
    }
    (**(code **)(*piVar4 + 0x10))(piVar4);
    *(int **)(param_1[0x1d] + iVar3 * 4) = piVar4;
    if (iVar3 < 2) {
      uVar2 = (**(code **)(*param_1 + 0x10c))(param_1,iVar3);
      fn_0031b6ec(*(undefined4 *)(param_1[0x1d] + iVar3 * 4),0,1);
      fn_0031b7c4(*(undefined4 *)(param_1[0x1d] + iVar3 * 4),0,uVar2);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  iVar3 = *(int *)(*(int *)(*(int *)param_1[0x1d] + 0x14) + 0x40);
  param_1[0x19] = *(int *)(*(int *)(*(int *)param_1[0x1d] + 0x14) + 0x3c);
  param_1[0x1a] = iVar3;
  iVar3 = fn_00145b00(0x5c,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)fn_0025e920(iVar3,param_1[1],*(undefined4 *)(iVar1 + 0x10));
  }
  piVar6 = (int *)param_1[0x1b];
  if (piVar6 != piVar4) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    param_1[0x1b] = (int)piVar4;
  }
  (**(code **)(*(int *)param_1[0x1b] + 0x10))((int *)param_1[0x1b],param_1[0x12]);
  fn_0025e378(param_1[0x1b],param_1 + 0x19);
  iVar1 = fn_00145b00(0xe4,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar1 != 0) {
    piVar4 = (int *)fn_001caa80(iVar1,param_1[1],0);
  }
  piVar6 = (int *)param_1[0x1c];
  if (piVar6 != piVar4) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    param_1[0x1c] = (int)piVar4;
  }
  *(int **)(param_1[0x1c] + 8) = param_1;
  (**(code **)(*(int *)param_1[0x1c] + 0x24))((int *)param_1[0x1c],1,2);
  *(undefined1 *)(param_1[0x1c] + 0x45) = 1;
  iVar1 = 0;
  *(undefined1 *)(param_1[0x1c] + 0x44) = 0;
  do {
    fn_001c9d44(param_1[0x1c],iVar1,*(undefined4 *)(*(int *)(param_1[0x1d] + iVar1 * 4) + 0x14),0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  (**(code **)(*(int *)param_1[0x1c] + 0x2c))((int *)param_1[0x1c],0,0);
  *(undefined4 *)(param_1[0x1c] + 0x10) = 0x100094e;
  *(undefined4 *)(param_1[0x1c] + 0x18) = 0x100094c;
  fn_0031b3c4(*(undefined4 *)param_1[0x1d],2);
  fn_001c9db4(param_1[0x1c],0);
  fn_00688ff8();
  local_28 = fVar7 - (float)param_1[0x19] * 0.5;
  local_24 = fVar8 + (float)param_1[0x1a] * 0.5;
  fn_0025e7cc(param_1[0x1b],&local_28);
  return 1;
}



void fn_002c85dc(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  byte bVar7;
  uint local_f0;
  undefined1 auStack_ec [26];
  undefined1 auStack_d2 [136];
  char local_4a [22];
  byte local_34 [4];
  short local_30;
  byte local_2e;
  undefined4 local_28;
  undefined4 local_24;
  
  fn_00301f50(&local_f0,200);
  iVar2 = fn_00250e58(0);
  if (iVar2 == 0) {
    iVar2 = fn_001827b0(param_2,(char *)&DAT_002c88c8);
    iVar3 = 0;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    do {
      iVar2 = fn_001827b0(param_2,(&DAT_00893bc4)[iVar3]);
      iVar3 = iVar3 + 1;
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    } while (iVar3 < 4);
    iVar2 = fn_001827b0(param_2,(char *)&DAT_002c88d4);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    iVar2 = fn_001827b0(param_2,(char *)&DAT_002c88e0);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    iVar2 = fn_001827b0(param_2,(char *)&DAT_002c88e8);
    bVar7 = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
  }
  else {
    fn_00250f30(DAT_00897814,&local_f0);
    iVar2 = fn_001827b0(param_2,(char *)&DAT_002c88c8);
    fn_00190d50(iVar2,auStack_ec);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
    iVar2 = 0;
    do {
      iVar3 = fn_001827b0(param_2,(&DAT_00893bc4)[iVar2]);
      if (iVar2 < (int)(uint)local_2e) {
        *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
        fn_00190d50(iVar3,auStack_d2 + iVar2 * 0x22);
        uVar4 = fn_001827b0(param_2,(&PTR_s_tb_mon_lv_value_00_00893bd4)[iVar2]);
        puVar5 = auStack_ec + iVar2 + -4;
        cVar1 = local_4a[iVar2];
        if (cVar1 != 'x') {
          if (cVar1 == 'd') {
            puVar5 = (undefined1 *)(uint)local_34[iVar2];
          }
          if (cVar1 != 'd' || puVar5 != (undefined1 *)0x0) {
            fn_00688c04(uVar4,cVar1,0);
            goto LAB_002c879c;
          }
        }
        local_28 = 0;
        local_24 = 0;
        fn_002309d8(&local_28,4,cVar1,1);
        fn_00190d50(uVar4,&local_28);
      }
      else {
        *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
      }
LAB_002c879c:
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar2 = fn_001827b0(param_2,(char *)&DAT_002c88d4);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
    uVar4 = fn_001827b0(param_2,(char *)&DAT_002c88f4);
    uVar6 = fn_006af5dc(*(undefined4 *)(DAT_008977e0 + 0x1c),(int)local_30);
    fn_00190d50(uVar4,uVar6);
    iVar2 = fn_001827b0(param_2,(char *)&DAT_002c88e0);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
    uVar4 = fn_001827b0(param_2,(char *)&DAT_002c8908);
    fn_00688c04(uVar4,local_f0 / 0xe10,3);
    uVar4 = fn_001827b0(param_2,(char *)&DAT_002c8918);
    fn_00688c04(uVar4,(local_f0 % 0xe10) / 0x3c,2);
    uVar4 = fn_001827b0(param_2,(char *)&DAT_002c8924);
    fn_00688c04(uVar4,local_f0 % 0x3c,2);
    iVar2 = fn_001827b0(param_2,(char *)&DAT_002c88e8);
    bVar7 = *(byte *)(iVar2 + 0x44) & 0xfe;
  }
  *(byte *)(iVar2 + 0x44) = bVar7;
  return;
}


