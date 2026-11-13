#include "001e8ef0_0021b84c.h"



void fn_0021b84c(int param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int extraout_r1;
  undefined4 unaff_r4;
  uint uVar4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int *piVar5;
  undefined4 unaff_r7;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  bool bVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  
  uVar7 = 0;
  uVar6 = 0;
  piVar5 = *(int **)(param_1 + 0x218);
  if (*(int *)(param_1 + 0x698) != *(int *)(param_1 + 0x69c)) {
    if (*(int *)(param_1 + 0x69c) == *(int *)(param_1 + 0x698)) {
      fn_002ff628(9,&DAT_008c7623,&DAT_008c7623,0,0);
    }
    if (**(byte **)(param_1 + 0x698) < 2) {
      uVar7 = 1;
    }
  }
  for (; *(int **)(param_1 + 0x21c) != piVar5; piVar5 = piVar5 + 0x1d) {
    uVar4 = 0;
    if ((*(byte *)(*piVar5 + 0x44) & 1) == 0) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    do {
      if ((piVar5[uVar4 * 2 + 9] != -1) &&
         (uVar1 = fn_00154ac8(), (uVar1 ^ 1) != (int)(char)piVar5[uVar4 * 2 + 10]))
      goto LAB_0021b9e0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 2);
    uVar4 = 0;
    do {
      if ((piVar5[uVar4 * 2 + 0xd] != -1) &&
         (iVar2 = fn_00163d44(), iVar2 < piVar5[uVar4 * 2 + 0xe])) goto LAB_0021b9e0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 2);
    iVar2 = piVar5[0x11];
    bVar8 = iVar2 == -1;
    if (bVar8) {
      iVar2 = piVar5[0x12];
    }
    if (bVar8 && iVar2 == -1) {
LAB_0021b9b0:
      if ((char)piVar5[0x1b] != '\0') {
        fn_006f7a84(DAT_008977e0);
        iVar2 = fn_006aa6e0();
        if (iVar2 != 0) goto LAB_0021b9e0;
      }
      bVar3 = 1;
    }
    else {
      iVar2 = fn_006f7770(DAT_008977e0);
      fVar10 = *(float *)(iVar2 + 4);
      if ((*(byte *)(*(int *)(param_1 + 0x110) + 0x44) & 1) != 0) {
        fVar10 = *(float *)(param_1 + 0x1a4);
      }
      if (bVar9) {
        fVar11 = (float)VectorSignedToFloat(piVar5[0x11],(byte)(in_fpscr >> 0x16) & 3);
      }
      else {
        fVar11 = (float)VectorSignedToFloat(piVar5[0x12],(byte)(in_fpscr >> 0x16) & 3);
      }
      in_fpscr = in_fpscr & 0xfffffff;
      if (fVar11 <= fVar10) goto LAB_0021b9b0;
LAB_0021b9e0:
      bVar3 = 0;
    }
    *(byte *)(*piVar5 + 0x44) = *(byte *)(*piVar5 + 0x44) & 0xfe | bVar3;
    iVar2 = piVar5[0x1c];
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x44) = bVar3 ^ 1 | *(byte *)(iVar2 + 0x44) & 0xfe;
    }
    iVar2 = piVar5[0x11];
    bVar9 = iVar2 == -1;
    if (bVar9) {
      iVar2 = piVar5[0x12];
    }
    if (((!bVar9 || iVar2 != -1) & bVar3) != 0) {
      if (*(int *)(param_1 + 0x698) != *(int *)(param_1 + 0x69c)) {
        uVar7 = *(int *)(param_1 + 0x69c) - *(int *)(param_1 + 0x698);
        if (uVar7 <= uVar6) {
          fn_002ff628(9,&DAT_008c7623,&DAT_008c7623,uVar6,uVar7);
        }
        uVar7 = (uint)*(byte *)(*(int *)(param_1 + 0x698) + uVar6);
      }
    }
    uVar6 = uVar6 + 1;
  }
  if (*(int *)(param_1 + 0x698) == *(int *)(param_1 + 0x69c)) {
    return;
  }
  iVar2 = 0;
  piVar5 = (int *)**(int **)(param_1 + 0x20c);
  do {
    if (piVar5 == *(int **)(param_1 + 0x20c)) {
LAB_0021dde0:
      uVar6 = 1;
      *(byte *)(*(int *)(iVar2 + 0xc) + 0x44) =
           uVar7 == 0 | *(byte *)(*(int *)(iVar2 + 0xc) + 0x44) & 0xfe;
      do {
        iVar2 = *(int *)(param_1 + 0x6a8);
        uVar1 = uVar6 - 1;
        uVar4 = iVar2 - *(int *)(param_1 + 0x6a4) >> 2;
        if (uVar4 <= uVar1) {
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar1,uVar4,unaff_r4,unaff_r5,unaff_r6,unaff_r7
                       ,in_lr);
          iVar2 = extraout_r1;
        }
        bVar3 = (byte)iVar2;
        if (uVar7 == uVar6) {
          bVar3 = 1;
        }
        if (uVar7 != uVar6) {
          bVar3 = 0;
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0x6a4) + uVar1 * 4);
        uVar6 = uVar6 + 1;
        *(byte *)(iVar2 + 0x44) = bVar3 | *(byte *)(iVar2 + 0x44) & 0xfe;
      } while ((int)uVar6 < 3);
      return;
    }
    if (piVar5[3] == 2) {
      iVar2 = (int)(piVar5 + 2);
      goto LAB_0021dde0;
    }
    piVar5 = (int *)*piVar5;
  } while( true );
}



void fn_001e8ef0(int *param_1,int param_2,int param_3)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint local_44;
  int local_40 [7];
  
  local_40[0] = (**(code **)(*param_1 + 0xf0))(param_1);
  if (param_3 != 0) {
LAB_001e8fcc:
    iVar4 = fn_006f7a5c(DAT_008977e0);
    if (*(char *)(iVar4 + 0xd) != '\a') {
      fn_006f7a5c(DAT_008977e0);
      fn_001d69d0();
    }
    if ((local_40[0] != 0) &&
       (((param_2 == -1 || param_2 == 4 ||
         (iVar4 = fn_0025988c(param_1[param_2 + 0x7e]), iVar4 != 3 && iVar4 != 4)) &&
        (iVar4 = fn_00154ac8(0x44), iVar4 == 0)))) {
      param_1[0x8a] = 6;
    }
    *(undefined1 *)((int)param_1 + 0x2fd) = 0;
    fn_001e25e4(param_1,param_2,param_3);
    *(char *)(param_1 + 0x6c) = (char)param_1[0x82];
    *(char *)(param_1 + 0x82) = (char)param_2;
    param_1[0x6d] = param_1[0x3e];
    if (((char)param_1[0x6c] != -1) && (param_1[(char)param_1[0x6c] + 0x5f] != 0)) {
      if (param_3 != 0) {
        fn_001e21b0(param_1);
      }
      fn_001e2804(param_1,0,(int)(char)param_1[0x6c]);
    }
    if (param_3 == 0) {
      fn_001e3bc4(param_1);
    }
    piVar6 = (int *)fn_00171634();
    iVar4 = piVar6[1];
    iVar8 = piVar6[2];
    param_1[0xd1] = *piVar6;
    param_1[0xd2] = iVar4;
    param_1[0xd3] = iVar8;
    piVar6 = (int *)fn_00171634();
    iVar4 = piVar6[1];
    iVar8 = piVar6[2];
    param_1[0xda] = *piVar6;
    param_1[0xdb] = iVar4;
    param_1[0xdc] = iVar8;
    *(undefined1 *)(param_1 + 0xdd) = 0;
    fn_0025b368(*(undefined4 *)(DAT_00897804 + 8));
    if (param_3 != 0) {
      if (param_1[param_2 + 0x5f] != 0) {
        if (*(char *)((int)param_1 + param_2 + 0x3bc) == '\0') {
          uVar7 = fn_0017fde4();
          fn_00547174(param_1[0x65],uVar7);
          *(undefined1 *)((int)param_1 + param_2 + 0x3bc) = 1;
        }
        fn_001e2804(param_1,1,param_2);
      }
      iVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_1[(char)param_1[0x82] + 0x7e]);
      iVar8 = param_1[(char)param_1[0x82] + 0x5f];
      uVar7 = fn_00242bd4((int)*(short *)(iVar4 + 0x1c));
      iVar4 = param_1[(char)param_1[0x82] * 3 + 0x8d];
      param_1[0x39] = iVar8;
      fn_001fa164(param_1[0xe2]);
      fn_001fa18c(param_1[0xe2],uVar7);
      fn_001e8380(param_1,iVar4,0);
      fn_001e1598(param_1,param_3);
    }
    if (0 < (short)param_1[0x104]) {
      fn_001e4914(param_1);
    }
    if (param_1[0x103] == -1) {
      return;
    }
    fn_0023e640(*(undefined4 *)(DAT_008977e0 + 0x2c),param_1[0x103],1);
    param_1[0x103] = -1;
    return;
  }
  uVar3 = fn_006aa6ec(param_1,param_2);
  local_44 = fn_00154ac8(0x1b2);
  local_44 = local_44 ^ 1;
  if (uVar3 != 0) {
    if ((param_2 == -1 || param_2 == 4) ||
       (iVar4 = fn_0025988c(param_1[param_2 + 0x7e]), iVar4 != 3 && iVar4 != 4)) {
      uVar5 = fn_006ab190(param_1,param_2,0,0,0);
      uVar3 = ~(uVar5 >> 4) & 1 & uVar3;
    }
    else {
      uVar5 = fn_006ab190(param_1,0xffffffff,0,0,0);
      uVar9 = ~(uVar5 >> 4) & 1;
      uVar5 = (uint)(uVar9 == 0);
      if (uVar9 != 0) {
        do {
          if ((uVar5 != 0xffffffff && uVar5 != 4) && (param_1[uVar5 + 0x7e] != 0)) {
            iVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
            sVar1 = 0;
            if (iVar4 != 0) {
              sVar1 = *(short *)(iVar4 + 0x1c);
            }
            if (iVar4 != 0 && sVar1 != 0) {
              uVar9 = fn_006ab190(param_1,uVar5,0,0,0);
              uVar9 = ~(uVar9 >> 4) & 1;
              if (uVar9 == 0) break;
            }
          }
          uVar5 = (uint)(char)((char)uVar5 + '\x01');
        } while ((int)uVar5 < 3);
      }
      uVar3 = uVar9 & uVar3 & local_44;
    }
    if (uVar3 != 0) {
      if (param_1[0x7c] != -1) {
        (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
        param_1[0x7c] = -1;
      }
      param_1[0x7d] = 0;
      goto LAB_001e8fcc;
    }
  }
  bVar2 = false;
  if (*(char *)((int)param_1 + 0x1b1) != '\0') goto LAB_001e93d8;
  if (((param_2 == -1 || param_2 == 4) ||
      (iVar4 = fn_0025988c(param_1[param_2 + 0x7e]), iVar4 != 3 && iVar4 != 4)) ||
     ((iVar4 = fn_00211f5c(*(undefined4 *)(DAT_008977e0 + 0x1c),
                            *(undefined4 *)(DAT_008977e0 + 0xa8)), iVar4 != 0 &&
      (iVar4 = fn_002fb61c(), iVar4 == 0)))) {
    if (local_44 == 0) {
      iVar4 = fn_006f75ac(DAT_008977e0);
      iVar8 = fn_001759d0(*(undefined4 *)(iVar4 + 8));
      if (iVar8 == 0) {
        uVar7 = fn_006945fc(DAT_008977e0,(char *)&DAT_001e953c);
        fn_0038fee8(iVar4,uVar7);
        goto LAB_001e9318;
      }
    }
  }
  else {
    iVar4 = fn_006f75ac(DAT_008977e0);
    iVar8 = fn_001759d0(*(undefined4 *)(iVar4 + 8));
    if ((iVar8 == 0) && (iVar8 = fn_006aa538(param_1,param_2), iVar8 != 0)) {
      uVar7 = *(undefined4 *)(DAT_008977e0 + 0xa8);
      if (param_1[param_2 + 0x7e] == 0) {
        local_44 = 0;
      }
      else {
        local_44 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
      }
      local_40[0] = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      local_40[3] = 0;
      local_40[4] = 0;
      local_40[5] = 0;
      fn_006bfdb4(&local_44,local_40,0xc);
      fn_0015b0dc(local_40);
      iVar8 = fn_002123ec(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar7);
      if (iVar8 == 0) {
        uVar7 = fn_006945fc(DAT_008977e0,(char *)&DAT_001e952c);
        fn_0038fee8(iVar4,uVar7);
      }
      else {
        uVar7 = fn_006945fc(DAT_008977e0,(char *)&DAT_001e951c);
        fn_0038fee8(iVar4,uVar7);
      }
LAB_001e9318:
      fn_0038ff40(iVar4,0,1,1,0);
      bVar2 = true;
    }
  }
  if ((param_1[param_2 + 0x7e] != 0) && (fn_001e3914(param_1), !bVar2)) {
    uVar7 = fn_006945fc(DAT_008977e0,(char *)&DAT_001e9554);
    fn_003b679c(*(undefined4 *)(DAT_008977e0 + 0x54),uVar7);
  }
LAB_001e93d8:
  iVar4 = fn_00154ac8(0x3d);
  if ((iVar4 != 0) &&
     (((param_2 == -1 || (param_1[param_2 + 0x7e] != 0)) &&
      (*(char *)((int)param_1 + 0x1b1) == '\0')))) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}


