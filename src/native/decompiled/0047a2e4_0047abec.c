#include "0047a2e4_0047abec.h"

static void svc_0xc(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0xc }
#endif
}


undefined4 * fn_0047abec(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &DAT_00853c34;
  param_1[1] = 0;
  iVar1 = fn_004745d8(param_1 + 4,0x20000000);
  iVar1 = fn_00466dcc(iVar1 + 0x28,L"Compression",0,&DAT_007db524);
  iVar1 = fn_00466dcc(iVar1 + 0x70,L"Decompression",0,&DAT_007db524);
  *(undefined4 *)(iVar1 + -0xa0) = 0;
  *(undefined4 *)(iVar1 + -0x9c) = 0;
  if (param_2 == -1) {
    param_2 = 0xf;
  }
  *(undefined4 *)(iVar1 + -0xa8) = &DAT_008535c4;
  if (param_3 == -1) {
    param_3 = 8;
  }
  iVar2 = fn_0015ece0(0x70);
  if (iVar2 != 0) {
    fn_00301f50(iVar2,0x70);
  }
  *(int *)(iVar1 + 0x70) = iVar2;
  *(undefined1 **)(iVar2 + 0x20) = &LAB_001b24d4;
  *(undefined1 **)(*(int *)(iVar1 + 0x70) + 0x24) = &LAB_001b252c;
  *(undefined4 *)(*(int *)(iVar1 + 0x70) + 0x28) = 0;
  fn_00739b20(*(undefined4 *)(iVar1 + 0x70),(char *)&DAT_007dd0dc,0x38);
  *(undefined1 **)(*(int *)(iVar1 + 0x70) + 0x58) = &LAB_001b24d4;
  *(undefined1 **)(*(int *)(iVar1 + 0x70) + 0x5c) = &LAB_001b252c;
  *(undefined4 *)(*(int *)(iVar1 + 0x70) + 0x60) = 0;
  fn_00737d6c(*(int *)(iVar1 + 0x70) + 0x38,0xffffffff,8,param_2,param_3,0,(char *)&DAT_007dd0dc,0x38);
  return (undefined4 *)(iVar1 + -0xa8);
}



undefined4 fn_0047a8e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  float fVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  
  fn_00737ff8(*(int *)(param_1 + 0x118) + 0x38);
  if ((uint)(*(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x18)) < *(int *)(param_2 + 0x10) + 1U) {
    fn_0015f0f4(param_3,*(int *)(param_2 + 0x10) + 1 + *(int *)(param_3 + 0x18));
  }
  *(int *)(*(int *)(param_1 + 0x118) + 0x48) = *(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x18);
  *(int *)(*(int *)(param_1 + 0x118) + 0x44) = *(int *)(param_3 + 0xc) + *(int *)(param_3 + 0x18);
  *(undefined4 *)(*(int *)(param_1 + 0x118) + 0x3c) = *(undefined4 *)(param_2 + 0x10);
  *(int *)(*(int *)(param_1 + 0x118) + 0x38) = *(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18);
  *(int *)(*(int *)(param_1 + 0x118) + 0x44) = *(int *)(*(int *)(param_1 + 0x118) + 0x44) + 1;
  *(int *)(*(int *)(param_1 + 0x118) + 0x48) = *(int *)(*(int *)(param_1 + 0x118) + 0x48) + -1;
  iVar1 = fn_00736c0c(*(int *)(param_1 + 0x118) + 0x38,4);
  if (iVar1 == 1) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x118) + 0x4c);
    if (uVar2 < *(uint *)(param_2 + 0x10)) {
      fVar6 = (float)VectorUnsignedToFloat(*(uint *)(param_2 + 0x10),(byte)(in_fpscr >> 0x16) & 3);
      fVar7 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      fVar7 = fVar6 / fVar7 + 1.0;
      fVar6 = fVar7;
      if ((int)fVar7 < 0x437f0001) {
        fVar6 = (float)VectorFloatToUnsigned(fVar7,3);
      }
      fVar5 = fVar7;
      if (0x437f0000 < (int)fVar7) {
        fVar5 = 3.57331e-43;
      }
      *(uint *)(param_3 + 0x10) = uVar2 + 1;
      uVar4 = SUB41(fVar5,0);
      if ((int)fVar7 < 0x437f0001) {
        uVar4 = SUB41(fVar6,0);
      }
      *(undefined1 *)(*(int *)(param_3 + 0xc) + *(int *)(param_3 + 0x18)) = uVar4;
      return 0;
    }
  }
  *(int *)(param_3 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  puVar3 = (undefined1 *)(*(int *)(param_3 + 0xc) + *(int *)(param_3 + 0x18));
  *puVar3 = 0;
  fn_00301a9c(puVar3 + 1,*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18),
               *(undefined4 *)(param_2 + 0x10));
  return 0;
}



int * fn_0047a798(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = param_1 + 1;
  (**(code **)(*piVar1 + 8))();
  uVar4 = extraout_r1;
  while (iVar6 = *param_1, *(int *)(iVar6 + 0x18) != 0) {
    piVar2 = *(int **)(*(int *)(iVar6 + 4) + *(int *)(iVar6 + 0x14) * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    iVar7 = *param_1;
    iVar6 = *(int *)(iVar7 + 0x14) + 1;
    *(int *)(iVar7 + 0x14) = iVar6;
    fn_00169f1c(iVar6,*(undefined4 *)(iVar7 + 0x1c));
    *(uint *)(iVar7 + 0x14) = extraout_r1_00;
    *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + -1;
    uVar4 = extraout_r1_00;
  }
  if (iVar6 != 0) {
    uVar3 = *(uint *)(iVar6 + 4);
    uVar5 = *(uint *)(iVar6 + 8);
    if (uVar3 < uVar5) {
      uVar4 = uVar5 - uVar3;
    }
    if (uVar3 < uVar5) {
      uVar4 = uVar4 << 0x1d;
    }
    if (uVar3 < uVar5) {
      uVar4 = uVar4 >> 0x1f;
    }
    else {
      uVar4 = 0;
    }
    iVar7 = uVar4 + 1;
    if (iVar7 < ((int)(uVar5 - uVar3) >> 2) + 1) {
      do {
        iVar7 = iVar7 + 2;
      } while (iVar7 < ((int)(uVar5 - uVar3) >> 2) + 1);
    }
    if (uVar3 != 0) {
      if (*(code **)(uVar3 - 8) == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (**(code **)(uVar3 - 8))();
      }
    }
    if (iVar6 != 0) {
      if (*(code **)(iVar6 + -8) == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (**(code **)(iVar6 + -8))();
      }
    }
  }
  *param_1 = 0;
  (**(code **)(*piVar1 + 0xc))(piVar1);
  param_1[1] = (int)&PTR_LAB_008533fc;
  param_1[2] = (int)&DAT_0085319c;
  return param_1;
}



int * fn_0047a65c(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 extraout_r1;
  int *piVar7;
  uint uVar8;
  uint local_28 [2];
  
  puVar1 = (undefined4 *)fn_004745d8(param_1 + 4,0x200000);
  piVar7 = puVar1 + -1;
  *puVar1 = &PTR_LAB_00854110;
  puVar1[10] = 0;
  iVar2 = fn_0015ece0(0x20);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    puVar3 = local_28 + 1;
    if (0x1f < param_2) {
      puVar3 = local_28;
    }
    local_28[0] = param_2;
    local_28[1] = 0x20;
    uVar8 = *puVar3;
    puVar1 = (undefined4 *)fn_0015ece0(uVar8 << 2);
    *(int *)(iVar2 + 4) = (int)puVar1;
    for (uVar6 = local_28[0]; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
    }
    iVar4 = *(int *)(iVar2 + 4);
    *(uint *)(iVar2 + 0xc) = iVar4 + uVar8 * 4;
    *(uint *)(iVar2 + 8) = iVar4 + local_28[0] * 4;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(uint *)(iVar2 + 0x1c) = param_2;
  }
  uVar6 = 0;
  *piVar7 = iVar2;
  if (param_2 != 0) {
    do {
      iVar2 = fn_0015ece0(0x20);
      uVar5 = 0;
      if (iVar2 != 0) {
        uVar5 = fn_004b5488(iVar2,param_3);
      }
      iVar2 = *piVar7;
      *(undefined4 *)(*(int *)(iVar2 + 4) + *(int *)(iVar2 + 0x10) * 4) = uVar5;
      fn_00169f1c(*(int *)(iVar2 + 0x10) + 1,*(undefined4 *)(iVar2 + 0x1c));
      *(undefined4 *)(iVar2 + 0x10) = extraout_r1;
      uVar6 = uVar6 + 1;
      *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + 1;
    } while (uVar6 < param_2);
  }
  return piVar7;
}



void fn_0047a598(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (*(char *)(param_1 + 0x464) == '\0') {
    piVar2 = (int *)(param_1 + 0x43c);
    do {
      (**(code **)(*piVar2 + 8))(piVar2);
      if (*(int *)(param_1 + 0x38) != 0) {
        iVar1 = fn_004ba724(2);
        if (iVar1 == 0) {
          uVar3 = 0x10;
        }
        else {
          uVar3 = 0x18;
        }
        iVar1 = fn_004ba724(*(undefined4 *)(param_1 + 0x38));
        iVar1 = *(int *)(param_1 + iVar1 * 4 + 0x3c);
        *(undefined4 *)(iVar1 + 0x14) = uVar3;
        piVar4 = (int *)**(undefined4 **)(iVar1 + 0xc);
        fn_0044fbfc(uVar3);
        svc_0xc();
        if (*piVar4 < 0) {
          fn_0015e294();
        }
        fn_00735640(1000000,0);
      }
      (**(code **)(*piVar2 + 0xc))(piVar2);
    } while (*(char *)(param_1 + 0x464) == '\0');
  }
  return;
}



void fn_0047a554(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0085355c;
  if (param_1[7] != 0) {
    param_1[7] = 0;
  }
  iVar1 = fn_00170f54(param_1 + 3);
  *(undefined **)(iVar1 + -0xc) = &DAT_00853740;
  *(undefined4 *)(iVar1 + -8) = 0;
  return;
}



undefined4 * fn_0047a4a4(undefined4 *param_1,int param_2)

{
  param_1[1] = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &DAT_0085355c;
  param_1[3] = &DAT_00855a94;
  fn_0015e6f0(param_1 + 4,*(undefined4 *)(param_2 + 4));
  *(undefined2 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



ushort fn_0047a2ec(int *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined2 uVar3;
  
  (**(code **)(*param_1 + 0x1c))(param_1);
  uVar1 = *(ushort *)(param_1 + 5);
  if (uVar1 == 0x10) {
    iVar2 = (**(code **)(*param_1 + 0x2c))(param_1);
    if (iVar2 == 0) goto LAB_0047a494;
    uVar3 = 0x40;
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1,0x40);
  }
  else if (uVar1 < 0x10) {
    if ((uVar1 == 1 || uVar1 == 2) || uVar1 == 4) {
LAB_0047a384:
      (**(code **)(*param_1 + 0x14))(param_1,0x10);
      *(undefined2 *)(param_1 + 5) = 0x10;
      iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
      if (iVar2 == 0) goto LAB_0047a494;
      uVar3 = 0x40;
      iVar2 = (**(code **)(*param_1 + 0x30))(param_1,0x40);
    }
    else {
      if (uVar1 != 8) {
        return uVar1;
      }
      uVar3 = 0x20;
      iVar2 = (**(code **)(*param_1 + 0x30))(param_1,0x20);
    }
  }
  else {
    if (uVar1 != 0x20) {
      if (uVar1 == 0x40) {
        return 0x40;
      }
      if (uVar1 != 0x80 && uVar1 != 0x100) {
        return uVar1;
      }
      goto LAB_0047a384;
    }
    if (param_1[6] != 0) goto LAB_0047a494;
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1,0x10);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x14))(param_1,0x10);
      *(undefined2 *)(param_1 + 5) = 0x10;
    }
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar2 == 0) goto LAB_0047a494;
    uVar3 = 0x40;
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1,0x40);
  }
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x14))(param_1,uVar3);
    *(undefined2 *)(param_1 + 5) = uVar3;
  }
LAB_0047a494:
  return *(ushort *)(param_1 + 5);
}



void fn_0047a2e4(int param_1)

{
  fn_00170fa4(param_1 + 0xc);
  return;
}


