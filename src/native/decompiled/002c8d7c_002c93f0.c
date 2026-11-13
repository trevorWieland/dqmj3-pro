#include "002c8d7c_002c93f0.h"



void fn_002c93f0(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_2 == 0) {
    bVar1 = *(char *)((int)param_1 + 0xdd) == '\0';
    *(bool *)((int)param_1 + 0xdd) = bVar1;
    param_1[0x34] = (uint)bVar1;
  }
  fn_0022e4a8(param_1[0x2d],*(undefined1 *)((int)param_1 + 0xdd));
  (**(code **)(*param_1 + 0x15c))(param_1);
  (**(code **)(*param_1 + 0x164))(param_1);
  if (param_3 == 0) {
    fn_0068ab44(param_1,0x1000950);
    return;
  }
  return;
}



void fn_002c9348(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  sVar1 = (**(code **)(*param_1 + 0x17c))(param_1);
  iVar2 = fn_00660ed8((int)sVar1);
  if (param_2 == 0) {
    iVar2 = *(int *)(param_1[0x33] + 0x3c) * iVar2;
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (0 < iVar2) {
    fn_00101a50(&local_28,0xc,&DAT_002c93e8);
  }
  fn_0031b78c(param_1,param_1[0x35] % 8,4,&local_28);
  return;
}



void fn_002c92b0(int *param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  sVar1 = fn_006ba284();
  fn_002b1390(param_1[0x2d],(int)(short)((short)param_2 + sVar1 * 8));
  iVar2 = fn_00660ef0();
  if (iVar2 == 0) {
    *(undefined4 *)(param_1[0x17] + 0x38) = 0x100094d;
    uVar3 = fn_0022f584((char *)&DAT_002c9328,0);
                    /* WARNING: Could not recover jumptable at 0x002c9320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x13c))(param_1,uVar3,0,3);
    return;
  }
  fn_003e5958(param_1,param_2);
  return;
}



void fn_002c9280(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xe0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_002c946c(iVar1,param_1);
  return;
}



void fn_002c91cc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_002b1390(*(undefined4 *)(param_1 + 0xb4),(int)*(short *)(param_1 + 0xd4));
  fn_002297bc(*(undefined4 *)(DAT_00897804 + 0x14),uVar1,
               (int)*(short *)(*(int *)(param_1 + 0xcc) + 0x3c),1);
  iVar2 = fn_00660ed8(uVar1);
  *(int *)(param_1 + 0xc4) = iVar2 * *(int *)(*(int *)(param_1 + 0xcc) + 0x3c);
  iVar2 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  if (9999999 < *(int *)(param_1 + 0xc4) + iVar2) {
    *(int *)(param_1 + 0xc4) = 9999999 - iVar2;
  }
  return;
}



void fn_002c8ff0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *local_28;
  undefined4 local_24 [2];
  
  puVar6 = (undefined4 *)0x0;
  do {
    iVar7 = (int)(short)(*(int *)(*(int *)(param_1 + 0xb4) + 8) -
                         *(int *)(*(int *)(param_1 + 0xb4) + 4) >> 1);
    iVar2 = fn_006ba284(param_1);
    if ((int)(puVar6 + iVar2 * 2) < iVar7) {
      uVar3 = fn_002b1390(*(undefined4 *)(param_1 + 0xb4),(int)(short)(puVar6 + iVar2 * 2));
      fn_0023097c(&local_28,uVar3,0);
      fn_0031b78c(param_1,puVar6,0,local_28);
      uVar4 = fn_00660ed8(uVar3);
      fn_002c3df8(param_1,puVar6,4,uVar4);
      iVar2 = fn_00660ef0(uVar3);
      if (iVar2 == 0) {
        local_24[0] = DAT_0089507c;
        fn_002c37e0(param_1,puVar6,local_24);
      }
      else {
        local_24[0] = DAT_00895074;
        fn_002c37e0(param_1,puVar6,local_24);
      }
      if (local_28 != &DAT_008f9cf4) {
        piVar5 = local_28 + -3;
        iVar2 = *piVar5;
        if ((iVar2 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar2 + -1, iVar2 == 0)))) {
          fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
        }
      }
    }
    else if (7 < iVar7) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2);
      if (puVar1 <= puVar6) {
        local_28 = puVar1;
        fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,puVar6);
      }
      fn_0031b3c4(*(undefined4 *)(*(int *)(param_1 + 0x78) + (int)puVar6 * 4),0xffffffff);
    }
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  } while ((int)puVar6 < 8);
  return;
}



undefined4 fn_002c8fc8(undefined4 param_1)

{
  fn_0034d2b0();
  fn_00689efc(param_1,0x90,0);
  return 1;
}



void fn_002c8f94(int param_1)

{
  fn_002b0d18(*(undefined4 *)(param_1 + 0xb4),0,1);
  *(int *)(param_1 + 0xbc) =
       (int)(short)(*(int *)(*(int *)(param_1 + 0xb4) + 8) - *(int *)(*(int *)(param_1 + 0xb4) + 4)
                   >> 1);
  return;
}



void fn_002c8f54(undefined4 *param_1)

{
  *param_1 = &DAT_0081f78c;
  if ((int *)param_1[0x2d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2d] + 4))();
  }
  param_1[0x2d] = 0;
  fn_002c471c(param_1);
  return;
}



void fn_002c8f50(undefined4 *param_1)

{
  *param_1 = &DAT_0081f78c;
  if ((int *)param_1[0x2d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2d] + 4))();
  }
  param_1[0x2d] = 0;
  fn_002c471c(param_1);
  return;
}



undefined4 * fn_002c8eb4(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_0081f78c;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  iVar2 = fn_00145b00(0x14,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_002ddb0c();
  }
  puVar1[0x2d] = uVar3;
  fn_002b0d18(uVar3,0,1);
  return puVar1;
}



void fn_002c8eb0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*(int *)param_1[0x27] + 0x90))();
  if (iVar1 < 0) {
    iVar1 = (**(code **)(*(int *)param_1[0x27] + 0xa8))();
    if (iVar1 < 0) {
      iVar1 = (**(code **)(*(int *)param_1[0x27] + 0xb0))();
      if (iVar1 < 0) {
        iVar1 = (**(code **)(*(int *)param_1[0x27] + 0xb8))();
        if (iVar1 < 0) {
          iVar1 = (**(code **)(*(int *)param_1[0x27] + 0xc0))();
          if (-1 < iVar1) {
            (**(code **)(*param_1 + 0x11c))(param_1,iVar1);
          }
        }
        else {
          (**(code **)(*param_1 + 0x118))(param_1,iVar1);
        }
      }
      else {
        (**(code **)(*param_1 + 0x114))(param_1,iVar1);
      }
    }
    else {
      (**(code **)(*param_1 + 0x110))(param_1);
    }
  }
  else {
    (**(code **)(*param_1 + 0x10c))(param_1,iVar1);
  }
  iVar1 = (**(code **)(*(int *)param_1[0x27] + 0x6c))();
  if (-1 < iVar1) {
    if (param_1[0x2b] ==
        (param_1[0x1f] - param_1[0x1e] >> 2) * *(int *)(param_1[0x27] + 0xcc) + iVar1) {
      fn_002b20a4(param_1[0x25],0);
    }
    else {
      fn_0031b3c4(*(undefined4 *)(param_1[0x1e] + iVar1 * 4),1);
    }
  }
  iVar1 = (**(code **)(*(int *)param_1[0x27] + 100))();
  if (-1 < iVar1) {
    (**(code **)(*param_1 + 0x120))(param_1,iVar1);
  }
  iVar1 = (**(code **)(*(int *)param_1[0x27] + 0x34))();
  if ((iVar1 != 0) || (iVar1 = (**(code **)(*(int *)param_1[0x27] + 0x38))(), iVar1 != 0)) {
    (**(code **)(*param_1 + 0x124))(param_1);
    if (param_1[0x24] != 0) {
      if (*(int *)(param_1[0x24] + 0x34) < 2) {
        fn_0068ab44(param_1,0x100094e);
      }
      else {
        fn_0068ab44(param_1,0x100094f);
        *(undefined4 *)(param_1[0x24] + 0x3c) = *(undefined4 *)(param_1[0x27] + 0xcc);
      }
    }
  }
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 0x14))();
  }
  iVar1 = param_1[0x1e];
  uVar2 = 0;
  if (param_1[0x1f] - iVar1 >> 2 != 0) {
    do {
      (**(code **)(**(int **)(iVar1 + uVar2 * 4) + 0x14))();
      iVar1 = param_1[0x1e];
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(param_1[0x1f] - iVar1 >> 2));
  }
  if ((int *)param_1[0x24] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x24] + 0x14))();
  }
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 0x14))();
  }
  if ((int *)param_1[0x28] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x28] + 0x14))();
  }
  if ((int *)param_1[0x29] == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002c45c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[0x29] + 0x14))();
  return;
}



void fn_002c8ea8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002c3dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))();
  return;
}



undefined4 fn_002c8d7c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x8b);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894f2c) goto LAB_002c8dc4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002c8dc4:
  *(undefined4 **)(param_1 + 0xb0) = puVar1;
  return 1;
}


