#include "00219d1c_0021a84c.h"



void fn_0021a84c(int param_1,float *param_2,undefined4 param_3)

{
  int iVar1;
  float local_10;
  float fStack_c;
  float local_8;
  
  iVar1 = *(int *)(param_1 + 0x68);
  local_8 = *(float *)(iVar1 + 0x24) + 0.0;
  fStack_c = -(param_2[2] * *(float *)(param_1 + 0x188)) + *(float *)(iVar1 + 0x20);
  local_10 = *param_2 * *(float *)(param_1 + 0x188) + *(float *)(iVar1 + 0x1c);
  fn_00219474(param_1,&local_10,param_3,0);
  return;
}



void fn_0021a5a0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float in_s0;
  undefined4 uVar3;
  float fVar4;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  switch(*(undefined4 *)(param_1 + 0x138)) {
  case 0:
  case 1:
  case 5:
  case 6:
  case 7:
    if (*(int *)(param_1 + 0x60) != 0) {
      uVar3 = 0;
      if (*(int *)(param_1 + 0x68) != 0) {
        local_48 = (float)VectorSignedToFloat((int)-(*param_2 * *(float *)(param_1 + 0x188)),
                                              (byte)(in_fpscr >> 0x16) & 3);
        local_44 = (float)VectorSignedToFloat((int)(param_2[2] * *(float *)(param_1 + 0x188)),
                                              (byte)(in_fpscr >> 0x16) & 3);
        local_40 = 0.0;
        iVar1 = fn_006f7a84(DAT_008977e0);
        if (*(int *)(param_1 + 0x138) == 4 || *(int *)(param_1 + 0x138) == 1) {
          *(float *)(param_1 + 0x160) =
               *(float *)(param_1 + 0x160) + (*(float *)(param_1 + 0x678) - local_48);
          *(float *)(param_1 + 0x164) =
               *(float *)(param_1 + 0x164) + (*(float *)(param_1 + 0x67c) - local_44);
          *(float *)(param_1 + 0x168) =
               *(float *)(param_1 + 0x168) + (*(float *)(param_1 + 0x680) - local_40);
          *(float *)(param_1 + 0x678) = local_48;
          *(float *)(param_1 + 0x67c) = local_44;
          *(float *)(param_1 + 0x680) = local_40;
          iVar1 = fn_0021c13c(param_1,0);
          if (iVar1 == 0) {
            *(undefined4 *)(param_1 + 0x138) = 0;
          }
        }
        else {
          fn_0054ca94(*(undefined4 *)(param_1 + 0x68),&local_48);
          iVar2 = fn_006f733c(DAT_008977e0);
          if (iVar2 != 0) {
            local_3c = uVar3;
            local_38 = uVar3;
            local_34 = uVar3;
            fn_0054ca94(*(undefined4 *)(param_1 + 0x104),&local_3c);
          }
          if (*(char *)(param_1 + 0x68c) != '\0') goto LAB_0021a7e8;
          local_3c = VectorSignedToFloat((int)((*(float *)(iVar1 + 0x20) - *param_2) *
                                              *(float *)(param_1 + 0x188)),
                                         (byte)(in_fpscr >> 0x16) & 3);
          local_38 = VectorSignedToFloat((int)((param_2[2] - *(float *)(iVar1 + 0x28)) *
                                              *(float *)(param_1 + 0x188)),
                                         (byte)(in_fpscr >> 0x16) & 3);
          local_34 = uVar3;
          fn_0054ca94(*(undefined4 *)(param_1 + 0x60),&local_3c);
        }
      }
      if (*(char *)(param_1 + 0x68c) == '\0') {
        iVar1 = fn_006f733c(DAT_008977e0);
        fVar4 = 180.0;
        if (iVar1 == 0) {
          fn_00163890();
          iVar1 = *(int *)(param_1 + 0x60);
          *(undefined4 *)(iVar1 + 0x28) = uVar3;
          *(undefined4 *)(iVar1 + 0x2c) = uVar3;
          *(float *)(iVar1 + 0x30) = in_s0 - fVar4;
          *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
        }
        else {
          fn_00163890();
          iVar1 = *(int *)(param_1 + 0x104);
          *(undefined4 *)(iVar1 + 0x28) = uVar3;
          *(undefined4 *)(iVar1 + 0x2c) = uVar3;
          *(float *)(iVar1 + 0x30) = in_s0 - fVar4;
          *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
        }
      }
    }
LAB_0021a7e8:
    iVar1 = fn_00154ac8(0x98);
    if ((iVar1 != 0) && (*(char *)(param_1 + 0x68c) == '\0')) {
      fn_0021cbcc(param_1);
      return;
    }
    break;
  case 4:
    iVar1 = fn_0021c13c(param_1,0);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x138) = 3;
    }
  }
  return;
}



void fn_0021a4cc(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = fn_00154ac8(0x4e);
  if (iVar1 != 0) {
    piVar2 = (int *)fn_006f72e0(DAT_008977e0);
    iVar3 = (**(code **)(*piVar2 + 0x68))();
    if ((iVar3 == 0) && (**(int **)(DAT_008977e0 + 0x40) == 0)) {
      *(byte *)(*(int *)(param_1 + 0x108) + 0x44) =
           (byte)iVar1 ^ 1 | *(byte *)(*(int *)(param_1 + 0x108) + 0x44) & 0xfe;
      *(byte *)(*(int *)(param_1 + 0x10c) + 0x44) =
           *(byte *)(*(int *)(param_1 + 0x10c) + 0x44) & 0xfe | (byte)iVar1;
      if (*(int *)(param_1 + 0x24) != -1) {
        if (*(int *)(param_1 + 0x138) != 7) {
          return;
        }
        fn_00159f34(*(undefined4 *)(param_1 + 4));
        *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
      }
      fn_0021b654(param_1,3,(char *)&DAT_0021a590,0);
      *(undefined4 *)(param_1 + 0x138) = 5;
    }
  }
  return;
}



undefined4 fn_00219d1c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int local_4c [10];
  
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  if (iVar1 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)fn_00110518();
  }
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != piVar5) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int **)(param_1 + 4) = piVar5;
  }
  fn_0011050c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(DAT_008977e0 + 0x10),
               *(undefined4 *)(DAT_008977e0 + 0x14));
  uVar3 = fn_001481c8(*(undefined4 *)(param_1 + 4),DAT_00891740,&DAT_0021a0cc,1,1);
  *(undefined4 *)(param_1 + 8) = uVar3;
  local_4c[1] = 0xf;
  local_4c[0] = 1;
  uVar3 = fn_001480d0(*(undefined4 *)(param_1 + 4),uVar3,DAT_00891744,DAT_00891748,1);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  fn_0021b654(param_1,0,(char *)&DAT_0021a0d4,1);
  fn_0021b104(param_1,(char *)&DAT_0021a0e4);
  fn_0021b654(param_1,2,(char *)&DAT_0021a0f0,1);
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  piVar5 = *(int **)(iVar1 + 0x10);
  iVar1 = (**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0021a104,1);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  iVar1 = (**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0021a114,1);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  iVar1 = (**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0021a124,1);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  iVar1 = (**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0021a134,1);
  *(int *)(param_1 + 0x60) = iVar1;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  uVar3 = (**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0021a140,1);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  iVar1 = (**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0021a150,1);
  *(int *)(param_1 + 0x74) = iVar1;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  iVar1 = (**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0021a160,1);
  *(int *)(param_1 + 0x80) = iVar1;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  iVar1 = (**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0021a174,1);
  *(int *)(param_1 + 0x84) = iVar1;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  iVar1 = (**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0021a180,1);
  *(int *)(param_1 + 0x104) = iVar1;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  iVar1 = (**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0021a190,1);
  *(int *)(param_1 + 0x108) = iVar1;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  iVar1 = (**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0021a19c,1);
  *(int *)(param_1 + 0x10c) = iVar1;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  iVar1 = (**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0021a1a4,1);
  *(int *)(param_1 + 0x110) = iVar1;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  iVar1 = (**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0021a1b8,1);
  *(int *)(param_1 + 0x114) = iVar1;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  iVar1 = (**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0021a1c8,1);
  *(int *)(param_1 + 0x124) = iVar1;
  iVar6 = 0;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  while( true ) {
    local_4c[1] = 0;
    local_4c[2] = 0;
    local_4c[3] = 0;
    local_4c[4] = 0;
    local_4c[5] = 0;
    local_4c[6] = 0;
    local_4c[7] = 0;
    local_4c[8] = 0;
    fn_0017d96c(local_4c + 1,0x20,0x1f,(char *)&DAT_0021a1d8,iVar6);
    local_4c[0] = (**(code **)(*piVar5 + 0x2c))(piVar5,local_4c + 1,1);
    if (local_4c[0] == 0) break;
    piVar2 = *(int **)(param_1 + 0x11c);
    if (piVar2 == *(int **)(param_1 + 0x120)) {
      fn_00798eb0(param_1 + 0x118,piVar2,local_4c);
    }
    else {
      *(int **)(param_1 + 0x11c) = piVar2 + 1;
      if (piVar2 != (int *)0x0) {
        *piVar2 = local_4c[0];
      }
    }
    iVar6 = iVar6 + 1;
  }
  iVar1 = 0;
  local_4c[0] = 0;
  do {
    piVar2 = (int *)(**(code **)(*piVar5 + 0x2c))(piVar5,(&DAT_007be578)[iVar1],1);
    if (piVar2 != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
      do {
        if (puVar4 == &DAT_0089a92c) goto LAB_0021a254;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    piVar2 = (int *)0x0;
LAB_0021a254:
    iVar6 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    *(int **)(param_1 + iVar6 + 0xa4) = piVar2;
    *(byte *)(piVar2 + 0x11) = *(byte *)(piVar2 + 0x11) & 0xfe;
  } while (iVar1 < 0xf);
  piVar2 = (int *)(**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0021a468,1);
  if (piVar2 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar4 == &DAT_0089a92c) goto LAB_0021a2bc;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_0021a2bc:
  *(int **)(param_1 + 0xe0) = piVar2;
  *(byte *)(piVar2 + 0x11) = *(byte *)(piVar2 + 0x11) & 0xfe;
  iVar1 = 0;
  do {
    local_4c[1] = 0;
    local_4c[2] = 0;
    local_4c[3] = 0;
    local_4c[4] = 0;
    fn_0017d96c(local_4c + 1,0x10,0xf,(char *)&DAT_0021a480,iVar1);
    uVar3 = (**(code **)(*piVar5 + 0x2c))(piVar5,local_4c + 1,1);
    iVar6 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    *(undefined4 *)(param_1 + iVar6 + 0x88) = uVar3;
  } while (iVar1 < 6);
  piVar2 = (int *)(**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0021a494,1);
  if (piVar2 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar4 == &DAT_0089a930) goto LAB_0021a374;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_0021a374:
  *(int **)(param_1 + 0xe4) = piVar2;
  piVar2 = (int *)(**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0021a4a8,1);
  if (piVar2 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar4 == &DAT_0089a930) goto LAB_0021a3c0;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_0021a3c0:
  *(int **)(param_1 + 0xe8) = piVar2;
  piVar5 = (int *)(**(code **)(*piVar5 + 0x2c))(piVar5,(char *)&DAT_0021a4b8,1);
  if (piVar5 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5);
    do {
      if (puVar4 == &DAT_0089a934) goto LAB_0021a418;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar5 = (int *)0x0;
LAB_0021a418:
  *(int **)(param_1 + 0xec) = piVar5;
  *(int *)(param_1 + 0xf0) = piVar5[0xf];
  *(byte *)(*(int *)(param_1 + 0x70) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0x70) + 0x44) & 0xfe | *(byte *)(param_1 + 0x134);
  *(byte *)(*(int *)(param_1 + 0x74) + 0x44) =
       *(byte *)(param_1 + 0x135) | *(byte *)(*(int *)(param_1 + 0x74) + 0x44) & 0xfe;
  return 1;
}


