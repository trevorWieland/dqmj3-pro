#include "single_003045c0_r.h"


extern undefined4 u_rom__data_G3dModel_RenderTexture_008c55be;
extern undefined4 u_rom__data_G3dModel_OffScreenRend_008c5608;

void fn_003045c0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined1 auStack_24 [12];
  
  piVar9 = (int *)*param_1;
  uVar3 = fn_001287b4();
  iVar4 = fn_0011c184(u_rom__data_G3dModel_RenderTexture_008c55be,uVar3,0x80,5);
  piVar9[4] = iVar4;
  uVar3 = fn_001287b4();
  iVar4 = fn_0011c184(u_rom__data_G3dModel_OffScreenRend_008c5608,uVar3,0x80,5);
  piVar9[5] = iVar4;
  iVar4 = fn_00145ac0(piVar9[4]);
  puVar8 = (undefined1 *)0x0;
  if ((iVar4 != 0) && (iVar4 = fn_00145ac0(piVar9[5]), puVar8 = (undefined1 *)0x0, iVar4 != 0)) {
    uVar3 = fn_00145ac0(piVar9[4]);
    fn_00173a34(piVar9 + 6,uVar3);
    fn_00185320(piVar9 + 6);
    uVar3 = fn_00145ac0(piVar9[5]);
    fn_00173a34(piVar9 + 0x13,uVar3);
    fn_00185320(piVar9 + 0x13);
    fn_00117984();
    fn_0010fa20();
    piVar5 = (int *)fn_00117668();
    piVar5 = (int *)(**(code **)(*piVar5 + 4))();
    uVar1 = 0x80000000 >> (LZCOUNT(*piVar5 + -1) - 1U & 0xff);
    uVar2 = 0x80000000 >> (LZCOUNT(piVar5[1] + -1) - 1U & 0xff);
    uVar3 = fn_00118290();
    piVar5 = (int *)fn_005e783c(uVar1,uVar2,0,piVar5[3],0,0,uVar3);
    piVar6 = (int *)piVar9[0x21];
    if (piVar6 != piVar5) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))();
      }
      piVar9[0x21] = (int)piVar5;
    }
    uVar3 = fn_00118290();
    fn_001a0b50(auStack_24,piVar9 + 6,0);
    piVar5 = (int *)fn_005e6ee4(auStack_24,uVar3);
    piVar6 = (int *)piVar9[1];
    if (piVar6 != piVar5) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))();
      }
      piVar9[1] = (int)piVar5;
    }
    uVar3 = fn_00118290(auStack_24);
    piVar5 = (int *)fn_005e783c(uVar1,uVar2,1,0,0x30000,0,uVar3);
    piVar6 = (int *)piVar9[0x22];
    if (piVar6 != piVar5) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))();
      }
      piVar9[0x22] = (int)piVar5;
    }
    uVar3 = fn_006eb61c(piVar9[0x22]);
    uVar7 = fn_00118290();
    piVar5 = (int *)fn_005e5770(uVar7,uVar3);
    piVar6 = (int *)piVar9[0x20];
    if (piVar6 != piVar5) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0x10))();
      }
      piVar9[0x20] = (int)piVar5;
    }
    uVar3 = fn_00118290();
    fn_001a0b50(auStack_24,piVar9 + 0x13,0);
    piVar5 = (int *)fn_005e6ee4(auStack_24,uVar3);
    piVar6 = (int *)piVar9[2];
    if (piVar6 != piVar5) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))();
      }
      piVar9[2] = (int)piVar5;
    }
    puVar8 = auStack_24;
  }
  fn_00118290(puVar8);
  piVar5 = (int *)fn_005e762c();
  piVar6 = (int *)*piVar9;
  if (piVar6 != piVar5) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
    *piVar9 = (int)piVar5;
  }
  return;
}


