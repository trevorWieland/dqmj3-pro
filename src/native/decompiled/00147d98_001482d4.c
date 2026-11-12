#include "00147d98_001482d4.h"

static void svc_0x22(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x22 }
#endif
}


undefined4 fn_001482d4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r4;
  
  fn_0016a43c(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x84));
  iVar1 = *(int *)(param_1 + 0x7c);
  if (*(int *)(param_1 + 0x80) == -1) {
    return 0;
  }
  iVar2 = fn_00167500(iVar1,*(undefined4 *)(iVar1 + 8),iVar1 + 8,*(int *)(param_1 + 0x80),unaff_r4)
  ;
  *(undefined4 *)(iVar2 + 0x28) = 1;
  fn_0017d90c(iVar1 + 4,iVar2 + 0x2c);
  fn_0017d948(iVar1 + 0x10,iVar1 + 0x14,iVar2 + 0x2c);
  return 1;
}



undefined4
fn_001480d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 local_2c;
  undefined1 local_2b;
  
  uVar4 = CONCAT44(param_6,param_7);
  iVar1 = fn_00145b00(0x3c,&DAT_00812c8c);
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)fn_00172cfc();
  }
  iVar1 = fn_00167500(param_1,*(undefined4 *)(param_1 + 8),param_1 + 8,param_2);
  local_2c = 1;
  local_2b = 0;
  iVar1 = fn_00172be0(piVar3,param_3,*(undefined4 *)(iVar1 + 0xc),0,*(undefined4 *)(param_1 + 0x74)
                       ,&local_2c);
  if (iVar1 != 0) {
    uVar2 = fn_0016a318(param_1,piVar3,param_4,param_5,(int)((ulonglong)uVar4 >> 0x20),(int)uVar4,1
                        );
    return uVar2;
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return 0xffffffff;
}



void fn_00147ff0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x14))();
    (**(code **)(**(int **)(param_1 + 0x14) + 0xc))
              (*(int **)(param_1 + 0x14),*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x14))();
    (**(code **)(**(int **)(param_1 + 0x14) + 0xc))
              (*(int **)(param_1 + 0x14),*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x14))();
    (**(code **)(**(int **)(param_1 + 0x14) + 0xc))
              (*(int **)(param_1 + 0x14),*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x14))();
    (**(code **)(**(int **)(param_1 + 0x14) + 0xc))
              (*(int **)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}



void fn_00147fb4(void)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_0015cb20(*(undefined4 *)(iVar1 + 0x48));
  return;
}



void fn_00147f90(void)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_0015ccac(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x10));
  return;
}



void fn_00147f6c(void)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_0015cca0(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x10));
  return;
}



undefined4 fn_00147f60(undefined4 param_1)

{
  fn_00301b24();
  return param_1;
}



void fn_00147f5c(void)

{
  return;
}



uint fn_00147e6c(uint *param_1,uint *param_2,uint param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    while (3 < param_3) {
      uVar10 = *param_1;
      uVar11 = *param_2;
      param_3 = param_3 - 4;
      cVar1 = UnsignedSaturate('\x01' - (char)uVar10,0x10);
      uVar2 = UnsignedSaturate('\x01' - (char)(uVar10 >> 8),0x10);
      uVar3 = UnsignedSaturate('\x01' - (char)(uVar10 >> 0x10),0x10);
      uVar4 = UnsignedSaturate('\x01' - (char)(uVar10 >> 0x18),0x10);
      if ((((uVar4 & 0xff) != 0 || uVar3 != 0) || uVar2 != 0) || cVar1 != '\0') {
        uVar7 = (uVar10 & 0xff) - (uVar11 & 0xff);
        if (uVar7 != 0 || cVar1 != '\0') {
          return uVar7;
        }
        uVar7 = (uVar10 & 0xffff) - (uVar11 & 0xffff);
        if (uVar7 != 0 || ((uVar2 & 0xff) != 0 || cVar1 != '\0')) {
          return uVar7;
        }
        uVar7 = (uVar10 & 0xffffff) - (uVar11 & 0xffffff);
        bVar5 = uVar7 == 0;
        bVar6 = (uVar3 & 0xff) == 0;
        if (bVar5 && ((bVar6 && uVar2 == 0) && cVar1 == '\0')) {
          uVar7 = uVar10 >> 0x18;
        }
        if (bVar5 && ((bVar6 && uVar2 == 0) && cVar1 == '\0')) {
          uVar7 = uVar7 - (uVar11 >> 0x18);
        }
        return uVar7;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (uVar10 != uVar11) {
        if ((uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
            uVar11 >> 0x18) <
            (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
            uVar10 >> 0x18)) {
          uVar10 = 1;
        }
        else {
          uVar10 = 0xffffffff;
        }
        return uVar10;
      }
    }
  }
  if (param_3 == 0) {
    return 0;
  }
  while( true ) {
    pbVar8 = (byte *)((int)param_1 + 1);
    uVar10 = (uint)(byte)*param_1;
    pbVar9 = (byte *)((int)param_2 + 1);
    uVar11 = (uint)(byte)*param_2;
    if (((uVar10 == 0) || (uVar10 != uVar11)) || (param_3 == 1)) break;
    param_1 = (uint *)((int)param_1 + 2);
    uVar10 = (uint)*pbVar8;
    param_2 = (uint *)((int)param_2 + 2);
    uVar11 = (uint)*pbVar9;
    if (((uVar10 == 0) || (uVar10 != uVar11)) || (param_3 = param_3 - 2, param_3 == 0)) break;
  }
  return uVar10 - uVar11;
}



void fn_00147e54(void)

{
  svc_0x22();
  return;
}



void fn_00147d98(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (param_1 < param_2) {
    if (0 < (int)param_2 - (int)param_1) {
      uVar1 = ((int)param_2 - (int)param_1) / 0x34;
      puVar2 = param_1;
      if ((uVar1 & 1) != 0) {
        uVar4 = param_3[1];
        uVar5 = param_3[2];
        uVar6 = param_3[3];
        uVar7 = param_3[4];
        uVar8 = param_3[5];
        uVar9 = param_3[6];
        uVar10 = param_3[7];
        *param_1 = *param_3;
        param_1[1] = uVar4;
        param_1[2] = uVar5;
        param_1[3] = uVar6;
        param_1[4] = uVar7;
        param_1[5] = uVar8;
        param_1[6] = uVar9;
        param_1[7] = uVar10;
        puVar2 = param_1 + 0xd;
        uVar4 = param_3[9];
        uVar5 = param_3[10];
        uVar6 = param_3[0xb];
        uVar7 = param_3[0xc];
        param_1[8] = param_3[8];
        param_1[9] = uVar4;
        param_1[10] = uVar5;
        param_1[0xb] = uVar6;
        param_1[0xc] = uVar7;
      }
      iVar3 = (int)uVar1 >> 1;
      if (iVar3 != 0) {
        do {
          uVar4 = param_3[1];
          uVar5 = param_3[2];
          uVar6 = param_3[3];
          uVar7 = param_3[4];
          uVar8 = param_3[5];
          uVar9 = param_3[6];
          uVar10 = param_3[7];
          iVar3 = iVar3 + -1;
          *puVar2 = *param_3;
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          puVar2[4] = uVar7;
          puVar2[5] = uVar8;
          puVar2[6] = uVar9;
          puVar2[7] = uVar10;
          uVar4 = param_3[9];
          uVar5 = param_3[10];
          uVar6 = param_3[0xb];
          uVar7 = param_3[0xc];
          puVar2[8] = param_3[8];
          puVar2[9] = uVar4;
          puVar2[10] = uVar5;
          puVar2[0xb] = uVar6;
          puVar2[0xc] = uVar7;
          uVar4 = param_3[1];
          uVar5 = param_3[2];
          uVar6 = param_3[3];
          uVar7 = param_3[4];
          uVar8 = param_3[5];
          uVar9 = param_3[6];
          uVar10 = param_3[7];
          puVar2[0xd] = *param_3;
          puVar2[0xe] = uVar4;
          puVar2[0xf] = uVar5;
          puVar2[0x10] = uVar6;
          puVar2[0x11] = uVar7;
          puVar2[0x12] = uVar8;
          puVar2[0x13] = uVar9;
          puVar2[0x14] = uVar10;
          uVar4 = param_3[9];
          uVar5 = param_3[10];
          uVar6 = param_3[0xb];
          uVar7 = param_3[0xc];
          puVar2[0x15] = param_3[8];
          puVar2[0x16] = uVar4;
          puVar2[0x17] = uVar5;
          puVar2[0x18] = uVar6;
          puVar2[0x19] = uVar7;
          puVar2 = puVar2 + 0x1a;
        } while (iVar3 != 0);
        return;
      }
    }
  }
  else {
    for (; param_1 != param_2; param_1 = param_1 + 0xd) {
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      uVar7 = param_3[4];
      uVar8 = param_3[5];
      uVar9 = param_3[6];
      uVar10 = param_3[7];
      *param_1 = *param_3;
      param_1[1] = uVar4;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
      param_1[4] = uVar7;
      param_1[5] = uVar8;
      param_1[6] = uVar9;
      param_1[7] = uVar10;
      uVar4 = param_3[9];
      uVar5 = param_3[10];
      uVar6 = param_3[0xb];
      uVar7 = param_3[0xc];
      param_1[8] = param_3[8];
      param_1[9] = uVar4;
      param_1[10] = uVar5;
      param_1[0xb] = uVar6;
      param_1[0xc] = uVar7;
    }
  }
  return;
}


