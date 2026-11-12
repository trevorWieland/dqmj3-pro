#include "002d4de0_002d54e4.h"



void fn_002d54e4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 local_28;
  float local_24;
  undefined4 uStack_20;
  
  uVar1 = fn_00174864(DAT_008977e4);
  fVar5 = 0.5;
  local_28 = *(undefined4 *)(param_1 + 0x1c);
  local_24 = *(float *)(param_1 + 0x20);
  uStack_20 = *(undefined4 *)(param_1 + 0x24);
  fVar4 = (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x2c)) * 0.5;
  fVar3 = *(float *)(param_1 + 0xc) * 40.743664;
  fn_00525abc();
  local_24 = fVar3 * fVar4 * fVar5 + fVar4 * fVar5 + *(float *)(param_1 + 0x2c);
  fn_002041b0(uVar1,&local_28);
  fn_00174858(DAT_008977e4);
  iVar2 = fn_002d4040();
  fVar3 = 3.1415927;
  if (iVar2 == 0) {
    uVar1 = fn_006a7b6c(DAT_008977e4);
    fVar4 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = *(float *)(param_1 + 0xc) + DAT_0089028c * fVar3 * fVar4;
    *(float *)(param_1 + 0xc) = fVar3;
    if ((int)fVar3 < 0x40c90fdc) {
      return;
    }
    *(float *)(param_1 + 0xc) = fVar3 - 6.2831855;
    return;
  }
  fVar3 = *(float *)(param_1 + 0xc);
  if ((int)fVar3 < 0x4096cbe4) {
    if ((int)fVar3 < 0x3fc90fdb) {
      fVar3 = fVar3 + (1.5707964 - fVar3) * 2.0;
      *(float *)(param_1 + 0xc) = fVar3;
    }
    fVar3 = fVar3 + DAT_0089028c * 2.0 * 3.1415927;
    *(float *)(param_1 + 0xc) = fVar3;
    if ((int)fVar3 < 0x4096cbe5) goto LAB_002d55d0;
  }
  else {
    if ((int)fVar3 < 0x4096cbe5) {
      return;
    }
    fVar3 = fVar3 - DAT_0089028c * 2.0 * 3.1415927;
    *(float *)(param_1 + 0xc) = fVar3;
    if (0x4096cbe4 < (int)fVar3) goto LAB_002d55d0;
  }
  fVar3 = 4.712389;
LAB_002d55d0:
  *(float *)(param_1 + 0xc) = fVar3;
  return;
}



undefined4 fn_002d51fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float in_s1;
  float local_30;
  undefined4 local_2c;
  float local_28;
  float local_24 [2];
  
  pfVar4 = &local_30;
  pfVar5 = &local_30;
  iVar1 = fn_00174858(DAT_008977e4);
  if (*(char *)(iVar1 + 0x99) == '\0') {
    fn_00129014(2);
    iVar1 = fn_00174828(DAT_008977e4);
    uVar2 = fn_006a7b78(DAT_008977e4);
    iVar3 = fn_00174834(DAT_008977e4);
    fn_00158f6c(uVar2,0x7a);
    fn_0017821c(iVar1,iVar3 + 0x180388,0x5b34);
    iVar3 = fn_00174858(DAT_008977e4);
    fn_00353e04(*(undefined4 *)(iVar3 + 0x54),1);
    iVar3 = fn_00174858(DAT_008977e4);
    fn_00353b08(*(undefined4 *)(iVar3 + 0x54),1);
    iVar3 = fn_00174858(DAT_008977e4);
    fn_0015cb20(*(undefined4 *)(iVar3 + 0x48));
    iVar3 = fn_00182988(DAT_008977e4);
    if (*(char *)(iVar3 + 0x39d) != '\0') {
      iVar3 = fn_00182988(DAT_008977e4);
      iVar3 = fn_002d30f0(iVar3 + 0x244,iVar1);
      if (iVar3 != 0) {
        fn_001c3550();
      }
    }
    fn_002d5c68(param_1);
    if (*(char *)(param_1 + 8) != '\0') {
      local_2c = 0;
      local_30 = -1.7014118e+38;
      fn_0068869c(DAT_0089780c,&local_30,&local_2c,0xf);
    }
    if (*(char *)(param_1 + 9) != '\0') {
      local_2c = 0;
      local_30 = -1.7014118e+38;
      fn_0068869c(DAT_00897808,&local_30,&local_2c,0xf);
    }
    fn_00174858(DAT_008977e4);
    fn_002d4b24();
    iVar3 = 0x14;
    *(undefined1 *)(param_1 + 0x30) = 0;
    do {
      iVar6 = iVar1 + iVar3 * 0x418;
      if ((0 < *(short *)(iVar6 + -0x4080)) && ('\x02' < *(char *)(iVar6 + -0x4027))) {
        *(undefined1 *)(param_1 + 0x30) = 1;
        local_2c = CONCAT31(((unsigned int)(local_2c) >> 8) & 0xffffff,(char)iVar3);
        uVar2 = fn_0017484c(DAT_008977e4);
        iVar1 = fn_00182e2c(uVar2,&local_2c);
        fn_0069ed78(*(undefined4 *)(iVar1 + 4),(char *)&DAT_002d54c0);
        local_24[0] = DAT_00890294;
        local_30 = in_s1 + DAT_00890294;
        *(float *)(param_1 + 0x28) = local_30;
        if (*(char *)(iVar6 + -0x4027) == '\x03') {
          local_24[0] = local_24[0] + 150.0;
          local_28 = 60.0;
          if (60.0 <= local_24[0]) {
            if (local_30 < 60.0) {
              pfVar4 = &local_28;
            }
            if (local_24[0] < *pfVar4) {
              pfVar4 = local_24;
            }
            *(float *)(param_1 + 0x28) = *pfVar4;
            *(undefined4 *)(param_1 + 0x2c) = 0x41f00000;
            break;
          }
        }
        else {
          local_24[0] = local_24[0] + 200.0;
          local_28 = 110.0;
          if (110.0 <= local_24[0]) {
            if (local_30 < 110.0) {
              pfVar5 = &local_28;
            }
            if (local_24[0] < *pfVar5) {
              pfVar5 = local_24;
            }
            *(float *)(param_1 + 0x28) = *pfVar5;
            *(undefined4 *)(param_1 + 0x2c) = 0x42a00000;
            break;
          }
        }
                    /* WARNING: Subroutine does not return */
        fn_00146590();
      }
      iVar3 = (int)(char)((char)iVar3 + '\x01');
    } while (iVar3 < 0x18);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 * fn_002d517c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[3] = 0;
  *param_1 = &DAT_00820164;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar2 = *(undefined4 *)(param_2 + 8);
  fn_003138f0(uVar2,1,param_3,param_4,param_4);
  uVar2 = fn_0018963c(uVar2,1,0,1,3);
  iVar1 = fn_00178f9c(*(undefined4 *)(param_2 + 8),uVar2);
  param_1[1] = iVar1;
  param_1[2] = *(undefined4 *)(iVar1 + 0x10);
  return param_1;
}



void fn_002d4de0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  (**(code **)(*param_2 + 0x2c))(param_2,0xd4,0);
  (**(code **)(*param_2 + 0x2c))(param_2,0xd5,0);
  (**(code **)(*param_2 + 0x2c))(param_2,0xd6,0);
  (**(code **)(*param_2 + 0x2c))(param_2,0xe0,0);
  piVar1 = (int *)fn_0028eac8(param_2,0xd5);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0xc))(piVar1);
    do {
      if (puVar2 == &DAT_0089093c) goto LAB_002d4ea0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_002d4ea0:
  *(int **)(param_1 + 0x10) = piVar1;
  piVar1 = (int *)fn_0028eac8(param_2,0xd4);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0xc))(piVar1);
    do {
      if (puVar2 == &DAT_00890844) goto LAB_002d4eec;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_002d4eec:
  *(int **)(param_1 + 0xc) = piVar1;
  fn_00376840(piVar1,*(undefined4 *)(param_1 + 4));
  fn_003efba0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 4));
  piVar1 = (int *)fn_0028eac8(param_2,0xd6);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0xc))(piVar1);
    do {
      if (puVar2 == &DAT_008907a0) goto LAB_002d4f4c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_002d4f4c:
  *(int **)(param_1 + 0x14) = piVar1;
  fn_005aa42c(piVar1,*(undefined4 *)(param_1 + 4));
  piVar1 = (int *)fn_0028eac8(param_2,0xe0);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0xc))(piVar1);
    do {
      if (puVar2 == &DAT_0089087c) goto LAB_002d4f98;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_002d4f98:
  *(int **)(param_1 + 0x18) = piVar1;
  fn_003d1f18(piVar1,*(undefined4 *)(param_1 + 4));
  iVar3 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar3 + 0x39e) == '\0') {
    iVar3 = fn_001828f0(*(undefined4 *)(param_1 + 4),(char *)&DAT_002d514c);
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
    return;
  }
  (**(code **)(*param_2 + 0x2c))(param_2,0xe1,0);
  piVar1 = (int *)fn_0028eac8(param_2,0xe1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0xc))(piVar1);
    do {
      if (puVar2 == &DAT_008907bc) goto LAB_002d5024;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_002d5024:
  *(int **)(param_1 + 0x1c) = piVar1;
  fn_003ef710(piVar1,*(undefined4 *)(param_1 + 4));
  (**(code **)(*param_2 + 0x2c))(param_2,0xe2,0);
  piVar1 = (int *)fn_0028eac8(param_2,0xe2);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0xc))(piVar1);
    do {
      if (puVar2 == &DAT_008908e8) goto LAB_002d5094;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_002d5094:
  *(int **)(param_1 + 0x20) = piVar1;
  fn_003396e8(piVar1,*(undefined4 *)(param_1 + 4));
  (**(code **)(*param_2 + 0x2c))(param_2,0xe3,0);
  piVar1 = (int *)fn_0028eac8(param_2,0xe3);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0xc))(piVar1);
    do {
      if (puVar2 == &DAT_008908c0) goto LAB_002d50fc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_002d50fc:
  *(int **)(param_1 + 0x24) = piVar1;
  fn_00376fe4(piVar1,*(undefined4 *)(param_1 + 4));
  return;
}


