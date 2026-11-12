#include "0031ae84_0031b6d0.h"



undefined4 fn_0031b6d0(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(param_1 + 0x78) + param_2 * 4) + 0x24) + param_3 * 4);
}



void fn_0031b5b0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_s0;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  
  *(undefined4 *)(param_1 + 0x94) = in_s0;
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  iVar7 = iVar1 >> 0x1f;
  if (iVar1 / 0x18 + iVar7 == iVar7) {
    return;
  }
  do {
    piVar2 = (int *)(*(int *)(param_1 + 0x18) + uVar3 * 0x18);
    fVar5 = (float)piVar2[3];
    fVar6 = (float)piVar2[1];
    iVar8 = piVar2[2];
    iVar7 = piVar2[4];
    iVar1 = piVar2[5];
    if (*(char *)(param_1 + 0x90) != '\0') {
      fVar6 = *(float *)(param_1 + 0x94);
      fVar5 = fVar6 * 0.5 - (float)piVar2[1] * 0.5;
    }
    iVar4 = *piVar2;
    *(float *)(iVar4 + 0x3c) = fVar6;
    *(int *)(iVar4 + 0x40) = iVar8;
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
    iVar4 = *piVar2;
    *(float *)(iVar4 + 0x1c) = fVar5;
    *(int *)(iVar4 + 0x20) = iVar7;
    *(int *)(iVar4 + 0x24) = iVar1;
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
    if (uVar3 == 0) {
      iVar4 = *(int *)(param_1 + 0x14);
      *(float *)(iVar4 + 0x3c) = fVar6;
      *(int *)(iVar4 + 0x40) = iVar8;
      *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
      iVar8 = *(int *)(param_1 + 0x14);
      *(float *)(iVar8 + 0x1c) = fVar5;
      *(int *)(iVar8 + 0x20) = iVar7;
      *(int *)(iVar8 + 0x24) = iVar1;
      *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xef | 0x10;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < (uint)((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x18));
  return;
}



void fn_0031b590(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 local_8 [2];
  
  local_8[0] = *param_3;
  fn_00688d44(*(undefined4 *)(*(int *)(param_1 + 0x24) + param_2 * 4),local_8);
  return;
}



void fn_0031b554(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_10;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x8c) = *param_2;
  do {
    local_10 = *(undefined4 *)(param_1 + 0x8c);
    fn_00688d44(*(undefined4 *)(*(int *)(param_1 + 0x24) + iVar1 * 4),&local_10);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}



void fn_0031b474(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_18 [12];
  
  piVar1 = *(int **)(param_1 + 0x40);
  if (param_2 == 0) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))();
      if (*(int **)(param_1 + 0x40) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x40) + 4))();
        *(undefined4 *)(param_1 + 0x40) = 0;
        return;
      }
    }
  }
  else if (piVar1 == (int *)0x0) {
    iVar2 = fn_00145b00(0x38,&DAT_00812c8c);
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = (int *)fn_0028fec0(iVar2,*(undefined4 *)(param_1 + 4),
                                   *(undefined4 *)(param_1 + 0x34));
    }
    piVar3 = *(int **)(param_1 + 0x40);
    if (piVar3 != piVar1) {
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      *(int **)(param_1 + 0x40) = piVar1;
    }
    (**(code **)(**(int **)(param_1 + 0x40) + 0x10))
              (*(int **)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x10));
    fn_00688ff8(*(undefined4 *)(param_1 + 0x30));
    fn_0028fe14(*(undefined4 *)(param_1 + 0x40),local_18);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0031b424) */
/* WARNING: Removing unreachable block (ram,0x0031b3fc) */
/* WARNING: Removing unreachable block (ram,0x0031b444) */
/* WARNING: Removing unreachable block (ram,0x0031b464) */

void fn_0031b364(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xac) ==
      (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2) *
      *(int *)(*(int *)(param_1 + 0x9c) + 0xcc) + param_2) {
    fn_002b20a4(*(undefined4 *)(param_1 + 0x94),param_3);
    return;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x78) + param_2 * 4);
  if (param_3 == 0) {
    (**(code **)(*piVar1 + 0x20))(piVar1,1);
    *(byte *)(*(int *)piVar1[6] + 0x44) = *(byte *)(*(int *)piVar1[6] + 0x44) & 0xfe;
    iVar2 = *(int *)(piVar1[6] + 0x18);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
    iVar2 = *(int *)(piVar1[6] + 0x30);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    *(undefined1 *)(piVar1 + 0x11) = 1;
    return;
  }
  fn_0031b3c4(piVar1,2);
  return;
}



void fn_0031b3c4(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == -1) {
                    /* WARNING: Could not recover jumptable at 0x0031b470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1,0);
    return;
  }
  (**(code **)(*param_1 + 0x20))(param_1,1);
  *(byte *)(*(int *)param_1[6] + 0x44) = param_2 == 0 | *(byte *)(*(int *)param_1[6] + 0x44) & 0xfe;
  iVar1 = *(int *)(param_1[6] + 0x18);
  *(byte *)(iVar1 + 0x44) = param_2 == 1 | *(byte *)(iVar1 + 0x44) & 0xfe;
  iVar1 = *(int *)(param_1[6] + 0x30);
  *(byte *)(iVar1 + 0x44) = param_2 == 2 | *(byte *)(iVar1 + 0x44) & 0xfe;
  *(char *)(param_1 + 0x11) = (char)param_2;
  return;
}



void fn_0031afdc(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int local_28;
  
  local_28 = param_4;
  iVar3 = (**(code **)(*(int *)param_1[2] + 0x2c))((int *)param_1[2],DAT_0089331c,1);
  param_1[5] = iVar3;
  iVar3 = 0;
  do {
    iVar4 = (**(code **)(*(int *)param_1[2] + 0x2c))((int *)param_1[2],(&DAT_0089335c)[iVar3],1);
    iVar8 = iVar3 + 1;
    *(int *)(param_1[6] + iVar3 * 0x18) = iVar4;
    uVar9 = *(undefined4 *)(iVar4 + 0x40);
    iVar5 = param_1[6] + iVar3 * 0x18;
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar4 + 0x3c);
    *(undefined4 *)(iVar5 + 8) = uVar9;
    piVar6 = (int *)(param_1[6] + iVar3 * 0x18);
    iVar3 = *piVar6;
    iVar4 = *(int *)(iVar3 + 0x20);
    iVar5 = *(int *)(iVar3 + 0x24);
    piVar6[3] = *(int *)(iVar3 + 0x1c);
    piVar6[4] = iVar4;
    piVar6[5] = iVar5;
    iVar3 = iVar8;
  } while (iVar8 < 3);
  iVar3 = 0;
  do {
    piVar6 = (int *)(**(code **)(*(int *)param_1[2] + 0x2c))
                              ((int *)param_1[2],(&DAT_00893368)[iVar3],1);
    if (piVar6 != (int *)0x0) {
      puVar7 = (undefined4 *)(**(code **)(*piVar6 + 8))(piVar6);
      do {
        if (puVar7 == &DAT_0089a930) goto LAB_0031b0c8;
        puVar7 = (undefined4 *)*puVar7;
      } while (puVar7 != (undefined4 *)0x0);
    }
    piVar6 = (int *)0x0;
LAB_0031b0c8:
    *(int **)(param_1[9] + iVar3 * 4) = piVar6;
    iVar3 = iVar3 + 1;
    if (0xf < iVar3) {
      iVar3 = (**(code **)(*(int *)param_1[2] + 0x2c))((int *)param_1[2],DAT_00893320,1);
      param_1[0xc] = iVar3;
      iVar3 = (**(code **)(*(int *)param_1[2] + 0x2c))((int *)param_1[2],DAT_00893324,1);
      param_1[0xe] = iVar3;
      iVar3 = (**(code **)(*(int *)param_1[2] + 0x2c))((int *)param_1[2],DAT_00893328,1);
      param_1[0xf] = iVar3;
      fn_0069e710(param_1);
      cVar2 = (char)param_1[0x11];
      if (cVar2 == -1) {
        (**(code **)(*param_1 + 0x20))(param_1,0);
      }
      else {
        (**(code **)(*param_1 + 0x20))(param_1,1);
        *(byte *)(*(int *)param_1[6] + 0x44) =
             cVar2 == '\0' | *(byte *)(*(int *)param_1[6] + 0x44) & 0xfe;
        iVar3 = *(int *)(param_1[6] + 0x18);
        *(byte *)(iVar3 + 0x44) = cVar2 == '\x01' | *(byte *)(iVar3 + 0x44) & 0xfe;
        iVar3 = *(int *)(param_1[6] + 0x30);
        *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | cVar2 == '\x02';
        *(char *)(param_1 + 0x11) = cVar2;
      }
      uVar10 = param_1[0x12];
      iVar3 = 0;
      do {
        puVar1 = &DAT_007c68f8 + iVar3;
        iVar4 = *(int *)(param_1[9] + iVar3 * 4);
        iVar3 = iVar3 + 1;
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | (*puVar1 & uVar10) != 0;
      } while (iVar3 < 0x10);
      fn_00190d50(*(undefined4 *)param_1[9],param_1[0x13]);
      fn_00190d50(*(undefined4 *)(param_1[9] + 4),param_1[0x14]);
      fn_00190d50(*(undefined4 *)(param_1[9] + 8),param_1[0x15]);
      fn_00190d50(*(undefined4 *)(param_1[9] + 0xc),param_1[0x16]);
      fn_00190d50(*(undefined4 *)(param_1[9] + 0x10),param_1[0x17]);
      fn_00190d50(*(undefined4 *)(param_1[9] + 0x14),param_1[0x18]);
      fn_00190d50(*(undefined4 *)(param_1[9] + 0x18),param_1[0x19]);
      fn_00190d50(*(undefined4 *)(param_1[9] + 0x1c),param_1[0x1a]);
      fn_00190d50(*(undefined4 *)(param_1[9] + 0x20),param_1[0x1b]);
      fn_00190d50(*(undefined4 *)(param_1[9] + 0x24),param_1[0x1c]);
      fn_00190d50(*(undefined4 *)(param_1[9] + 0x28),param_1[0x1d]);
      fn_00190d50(*(undefined4 *)(param_1[9] + 0x2c),param_1[0x1e]);
      fn_00190d50(*(undefined4 *)(param_1[9] + 0x30),param_1[0x1f]);
      fn_00190d50(*(undefined4 *)(param_1[9] + 0x34),param_1[0x20]);
      fn_00190d50(*(undefined4 *)(param_1[9] + 0x38),param_1[0x21]);
      fn_00190d50(*(undefined4 *)(param_1[9] + 0x3c),param_1[0x22]);
      iVar3 = 0;
      do {
        local_28 = param_1[0x23];
        fn_00688d44(*(undefined4 *)(param_1[9] + iVar3 * 4),&local_28);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x10);
      fn_0031ba5c(param_1,(int)(char)param_1[0x24]);
      return;
    }
  } while( true );
}



void fn_0031af70(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00822fb8;
  fn_0031abf8(param_1);
  uVar1 = param_1[8];
  uVar2 = uVar1;
  if ((uint)param_1[9] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[9]);
  }
  fn_001008c4(uVar1,(int)(param_1[10] - uVar1) >> 2,0);
  fn_002feef8(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0031aefc) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffe4 : 0x0031af00 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_0031ae84(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_20;
  
  puVar1 = (undefined4 *)fn_00688858();
  *puVar1 = &DAT_00822fb8;
  *(undefined2 *)((int)puVar1 + 0xe) = 0;
  *(undefined2 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x12) = 0;
  *(undefined1 *)((int)puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined1 *)((int)puVar1 + 0x15) = 1;
  puVar1[6] = 0;
  piVar3 = puVar1 + 8;
  puVar1[7] = 0;
  *piVar3 = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  local_20 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar3 = (int)puVar2;
  for (; local_20 != 0; local_20 = local_20 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  puVar1[10] = *piVar3 + 0x80;
  puVar1[0xb] = 0xffffffff;
  puVar1[9] = *piVar3 + 0x10;
  puVar1[0xc] = 0xffffffff;
  puVar1[0xd] = 0;
  return puVar1;
}


