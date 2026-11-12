#include "0075dfc8_0075efa8.h"



void fn_0075edd0(int param_1,float *param_2,float *param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  float in_s0;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_88 [72];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  uVar3 = 0;
  uVar1 = *(uint *)(param_1 + 0x40) & 0x333;
  if (uVar1 != 0x300 && uVar1 != 0) {
    local_40 = 0.0;
    local_3c = 0.0;
    local_38 = 0.0;
    local_34 = 0.0;
    if (param_4 != 0) {
      fn_0017821c(auStack_88,param_1,0x48);
      fn_0075f490(auStack_88,&local_40,param_4,param_5);
    }
    uVar3 = CONCAT44(local_3c + local_34,local_40 + local_38);
    in_s0 = local_40;
  }
  fVar4 = 0.5;
  uVar1 = *(uint *)(param_1 + 0x40) & 0x30;
  if (uVar1 == 0x10) {
    in_s0 = (float)uVar3 * 0.5;
    fn_006f9f20();
    in_s0 = *param_2 - in_s0;
LAB_0075eea0:
    *param_2 = in_s0;
  }
  else if (uVar1 == 0x20) {
    in_s0 = *param_2 - (float)uVar3;
    goto LAB_0075eea0;
  }
  uVar1 = *(uint *)(param_1 + 0x40) & 0x300;
  fVar2 = (float)((ulonglong)uVar3 >> 0x20);
  if (uVar1 == 0x100) {
    fVar2 = fVar2 * fVar4;
    fn_006f9f20();
    in_s0 = *param_3 - fVar2;
  }
  else {
    if (uVar1 != 0x200) goto LAB_0075eedc;
    in_s0 = *param_3 - fVar2;
  }
  *param_3 = in_s0;
LAB_0075eedc:
  fVar2 = (float)uVar3;
  uVar1 = *(uint *)(param_1 + 0x40) & 3;
  if (uVar1 == 1) {
    fn_0075efa8(param_1,param_4,param_5);
    fVar2 = fVar2 * fVar4;
    in_s0 = in_s0 * fVar4;
    fn_006f9f20();
    fn_006f9f20();
    in_s0 = *param_2 + (fVar2 - in_s0);
    *(float *)(param_1 + 0x10) = in_s0;
  }
  else if (uVar1 == 2) {
    fn_0075efa8(param_1,param_4,param_5);
    in_s0 = *param_2 + (fVar2 - in_s0);
    *(float *)(param_1 + 0x10) = in_s0;
  }
  else {
    *(float *)(param_1 + 0x10) = *param_2;
  }
  if ((~*(uint *)(param_1 + 0x40) & 0x300) == 0) {
    *(float *)(param_1 + 0x14) = *param_3;
  }
  else {
    fn_006e60c4(param_1);
    *(float *)(param_1 + 0x14) = in_s0 + *param_3;
  }
  return;
}



undefined1 * fn_0075efa8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 auStack_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar1 = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  uStack_14 = param_1;
  uStack_10 = param_2;
  uStack_c = param_3;
  fn_0017821c(auStack_68,param_1,0x48);
  local_58 = uVar1;
  local_54 = uVar1;
  fn_0075f024(auStack_68,&local_78,&uStack_10,param_3);
  return auStack_68;
}



void fn_0075ed6c(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(param_1 + 0x24);
  if (piVar2 != (int *)(param_1 + 0x24)) {
    do {
      piVar3 = (int *)*piVar2;
      iVar1 = fn_0055defc(piVar2 + -0x20);
      if (iVar1 == 0) {
        fn_0055df18(piVar2 + -0x20);
        fn_0017d90c(param_1 + 0x20,piVar2);
        fn_0017d948(param_1 + 0x14,param_1 + 0x18,piVar2);
      }
      piVar2 = piVar3;
    } while (piVar3 != (int *)(param_1 + 0x24));
  }
  return;
}



void fn_0075ed08(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(param_1 + 0x24);
  if (piVar2 != (int *)(param_1 + 0x24)) {
    do {
      piVar3 = (int *)*piVar2;
      iVar1 = fn_0055afb4(piVar2 + -0x11);
      if (iVar1 == 0) {
        fn_0055afd0(piVar2 + -0x11);
        fn_0017d90c(param_1 + 0x20,piVar2);
        fn_0017d948(param_1 + 0x14,param_1 + 0x18,piVar2);
      }
      piVar2 = piVar3;
    } while (piVar3 != (int *)(param_1 + 0x24));
  }
  return;
}



void fn_0075ec20(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  if ((*(byte *)(param_2 + 0x11) & 1) != 0) {
    iVar1 = (**(code **)(*param_2 + 0x44))(param_2,*param_1);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = param_2[4];
    }
    if ((iVar1 != 0 && iVar2 != 0) &&
       (piVar4 = (int *)(param_2[5] + -4), (int *)(param_2[5] + -4) != (int *)0x0)) {
      do {
        if ((*(byte *)(piVar4 + 0x11) & 1) == 0) {
LAB_0075ecac:
          piVar3 = (int *)(piVar4[3] + 0x14);
          if (piVar4 != (int *)0x0) {
            piVar3 = piVar4 + 1;
          }
          piVar3 = (int *)*piVar3;
          bVar5 = piVar3 == (int *)(piVar4[3] + 0x14);
          if (!bVar5) {
            piVar3 = piVar3 + -1;
            bVar5 = piVar3 == (int *)0x0;
          }
          if (bVar5) {
            do {
              piVar4 = (int *)piVar4[3];
              if (piVar4 == param_2) {
                return;
              }
              piVar3 = (int *)(piVar4[3] + 0x14);
              if (piVar4 != (int *)0x0) {
                piVar3 = piVar4 + 1;
              }
              piVar3 = (int *)*piVar3;
              bVar5 = piVar3 == (int *)(piVar4[3] + 0x14);
              if (!bVar5) {
                piVar3 = piVar3 + -1;
                bVar5 = piVar3 == (int *)0x0;
              }
            } while (bVar5);
          }
        }
        else {
          iVar1 = (**(code **)(*piVar4 + 0x44))(piVar4,*param_1);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = piVar4[4];
          }
          if ((iVar1 == 0 || iVar2 == 0) || (piVar3 = (int *)(piVar4[5] + -4), piVar3 == (int *)0x0)
             ) goto LAB_0075ecac;
        }
        piVar4 = piVar3;
      } while( true );
    }
  }
  return;
}



void fn_0075eb28(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *unaff_r4;
  bool bVar4;
  
  if (((*(byte *)(param_2 + 0x11) & 1) != 0) &&
     (iVar1 = (**(code **)(*param_2 + 0x44))(param_2,*param_1), iVar1 != 0)) {
    bVar4 = param_2[4] == 0;
    if (!bVar4) {
      unaff_r4 = (int *)(param_2[5] + -4);
      bVar4 = unaff_r4 == (int *)0x0;
    }
    if (!bVar4) {
      do {
        if (((((*(byte *)(unaff_r4 + 0x11) & 1) == 0) ||
             (iVar1 = (**(code **)(*unaff_r4 + 0x44))(unaff_r4,*param_1), iVar1 == 0)) ||
            (unaff_r4[4] == 0)) || (piVar2 = (int *)(unaff_r4[5] + -4), piVar2 == (int *)0x0)) {
          piVar3 = (int *)(unaff_r4[3] + 0x14);
          if (unaff_r4 != (int *)0x0) {
            piVar3 = unaff_r4 + 1;
          }
          piVar2 = (int *)(unaff_r4[3] + 0x14);
          bVar4 = (int *)*piVar3 == piVar2;
          if (!bVar4) {
            piVar2 = (int *)*piVar3 + -1;
            bVar4 = piVar2 == (int *)0x0;
          }
          if (bVar4) {
            do {
              unaff_r4 = (int *)unaff_r4[3];
              if (unaff_r4 == param_2) {
                return;
              }
              piVar2 = (int *)(unaff_r4[3] + 0x14);
              if (unaff_r4 != (int *)0x0) {
                piVar2 = unaff_r4 + 1;
              }
              piVar2 = (int *)*piVar2;
              bVar4 = piVar2 == (int *)(unaff_r4[3] + 0x14);
              if (!bVar4) {
                piVar2 = piVar2 + -1;
                bVar4 = piVar2 == (int *)0x0;
              }
            } while (bVar4);
          }
        }
        unaff_r4 = piVar2;
      } while( true );
    }
  }
  return;
}



uint * fn_0075dfc8(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint in_fpscr;
  float in_s0;
  int iVar3;
  uint uVar4;
  float fVar5;
  
  puVar2 = *(uint **)(param_1 + 0x20);
  uVar4 = VectorFloatToUnsigned(in_s0 / *(float *)(param_1 + 0x18),3);
  if (uVar4 < (*puVar2 & 0xfff)) {
    return puVar2;
  }
  puVar1 = puVar2 + (uint)*(ushort *)(param_1 + 0xe) * 2 + -2;
  if (uVar4 < (*puVar1 & 0xfff)) {
    fVar5 = (float)VectorSignedToFloat(*(ushort *)(param_1 + 0xe) - 1,(byte)(in_fpscr >> 0x16) & 3);
    iVar3 = VectorFloatToUnsigned(*(float *)(param_1 + 0x1c) * fVar5 * in_s0,3);
    puVar1 = puVar2 + iVar3 * 2;
    if ((*puVar1 & 0xfff) <= uVar4) {
      do {
        puVar2 = puVar1;
        puVar1 = puVar2 + 2;
      } while ((*puVar1 & 0xfff) <= uVar4);
      return puVar2;
    }
    do {
      puVar1 = puVar1 + -2;
    } while (uVar4 < (*puVar1 & 0xfff));
  }
  return puVar1;
}


