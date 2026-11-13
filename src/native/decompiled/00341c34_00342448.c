#include "00341c34_00342448.h"



void fn_00342448(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = fn_002dd084(*(undefined4 *)(param_1 + 0xf4),(int)*(short *)(param_1 + 0xf8),param_3,
                       param_4,param_4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  iVar3 = 0;
  uVar4 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar1 = fn_006b83e4(uVar4);
  if (0 < iVar1) {
    do {
      uVar2 = fn_0028b0a0(uVar4,iVar3);
      fn_002dd494(*(undefined4 *)(param_1 + 0xf4),uVar2,(int)*(short *)(param_1 + 0xf8),0,1);
      iVar3 = iVar3 + 1;
      iVar1 = fn_006b83e4(uVar4);
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  iVar1 = fn_006b84b0(uVar4);
  if (0 < iVar1) {
    do {
      uVar2 = fn_0028b348(uVar4,iVar3);
      fn_002dd494(*(undefined4 *)(param_1 + 0xf4),uVar2,(int)*(short *)(param_1 + 0xf8),0,1);
      iVar3 = iVar3 + 1;
      iVar1 = fn_006b84b0(uVar4);
    } while (iVar3 < iVar1);
  }
  fn_002297bc(*(undefined4 *)(DAT_00897804 + 0x14),(int)*(short *)(param_1 + 0xf8),1);
  fn_0036302c(param_1);
  fn_0036308c(param_1,0);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



undefined4 * fn_003423ac(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    iVar2 = 0;
    do {
      if (piVar1[iVar2 * 2 + 7] != -1) {
        fn_00159f34(*piVar1);
        piVar1[iVar2 * 2 + 7] = -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 10);
    if (piVar1[2] != -1) {
      fn_0016a43c(*piVar1);
      piVar1[2] = -1;
    }
    if (piVar1[1] != -1) {
                    /* WARNING: Subroutine does not return */
      fn_001482f4(*piVar1);
    }
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 4))();
    }
    fn_002feef8(piVar1);
  }
  return param_1;
}



int * fn_003420d8(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  puVar1 = (undefined4 *)fn_00145b00(0x6c,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    iVar2 = fn_00145b00(0x80,&DAT_00812c8c);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = fn_00110518();
    }
    *puVar1 = uVar3;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    fn_0011050c(*puVar1,*(undefined4 *)(DAT_008977e0 + 0x10),*(undefined4 *)(DAT_008977e0 + 0x14));
    local_60 = 1;
    uVar3 = fn_001481c8(*puVar1,DAT_008920d8,&DAT_008c6083,1);
    puVar1[1] = uVar3;
    local_58 = 9;
    local_5c = 1;
    local_60 = 0;
    uVar3 = fn_001480d0(*puVar1,uVar3,DAT_008920dc,&DAT_008c6085);
    puVar1[2] = uVar3;
    iVar4 = 10;
    iVar2 = 0;
    do {
      iVar4 = iVar4 + -1;
      puVar1[iVar2 * 2 + 7] = 0xffffffff;
      *(undefined1 *)(puVar1 + iVar2 * 2 + 8) = 0xff;
      *(undefined1 *)((int)puVar1 + iVar2 * 8 + 0x21) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar4 != 0);
    iVar2 = fn_00178f9c(*puVar1,puVar1[2]);
    piVar5 = *(int **)(iVar2 + 0x10);
    iVar2 = (**(code **)(*piVar5 + 0x2c))(piVar5,s_win_tention_bg3_008c6086,1);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
    }
    uVar3 = fn_0068897c(piVar5,s_tb_orb_value_00_008c6096);
    iVar2 = 0;
    puVar1[3] = uVar3;
    do {
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      fn_00102908(&local_60,0x10,(char *)&DAT_0085ae64,iVar2);
      iVar4 = (**(code **)(*piVar5 + 0x2c))(piVar5,&local_60,1);
      puVar1[iVar2 + 4] = iVar4;
      iVar2 = iVar2 + 1;
      *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
    } while (iVar2 < 3);
    iVar2 = (**(code **)(*piVar5 + 0x2c))(piVar5,s_Null_orb_008c60a6,1);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
    iVar2 = (**(code **)(*piVar5 + 0x2c))(piVar5,s_Null_crystal_efe_008c60af,1);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
    *(undefined1 *)(puVar1 + 10) = 0xff;
    if (puVar1[9] != -1) {
      fn_00159f34(*puVar1);
      puVar1[9] = 0xffffffff;
    }
    fn_001028d4(&local_60,(char *)&DAT_0085ae76,s_fever_stop_008c6078);
    uVar3 = fn_0010887c(*puVar1,puVar1[1],&local_60,puVar1[2]);
    puVar1[9] = uVar3;
    *(undefined1 *)(puVar1 + 10) = 0;
    *(undefined1 *)((int)puVar1 + 0x29) = 0;
    if (puVar1[0xb] != -1) {
      fn_00159f34(*puVar1);
      puVar1[0xb] = 0xffffffff;
    }
    fn_001028d4(&local_60,(char *)&DAT_0085ae76,s_gauge_008c60c0);
    uVar3 = fn_0010887c(*puVar1,puVar1[1],&local_60,puVar1[2]);
    puVar1[0xb] = uVar3;
    *(undefined1 *)(puVar1 + 0xc) = 0;
    iVar2 = fn_001088e0(*puVar1,uVar3);
    *(undefined4 *)(iVar2 + 0x10) = 0;
    fn_00688c04(puVar1[3],0,5);
  }
  *param_1 = (int)puVar1;
  return param_1;
}



void fn_00342078(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_50 [68];
  
  param_1 = (undefined4 *)*param_1;
  if (param_1[7] != -1) {
    fn_00159f34(*param_1);
    param_1[7] = 0xffffffff;
  }
  fn_001028d4(auStack_50,(char *)&DAT_0085ae76,param_2);
  uVar1 = fn_0010887c(*param_1,param_1[1],auStack_50,param_1[2]);
  param_1[7] = uVar1;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



void fn_00342010(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(byte *)(*(int *)(iVar1 + 0x10) + 0x44) =
       0 < param_2 | *(byte *)(*(int *)(iVar1 + 0x10) + 0x44) & 0xfe;
  *(byte *)(*(int *)(iVar1 + 0x14) + 0x44) =
       *(byte *)(*(int *)(iVar1 + 0x14) + 0x44) & 0xfe | 1 < param_2;
  *(byte *)(*(int *)(iVar1 + 0x18) + 0x44) =
       2 < param_2 | *(byte *)(*(int *)(iVar1 + 0x18) + 0x44) & 0xfe;
  return;
}



void fn_00341dec(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  float in_s0;
  undefined8 uVar5;
  float fVar6;
  
  param_1 = (undefined4 *)*param_1;
  iVar1 = fn_003415b0();
  if (iVar1 != 0) {
    uVar5 = 0x3f80000000000000;
    if (*(char *)(param_1 + 8) == '\0') {
      fn_001088e0(*param_1,param_1[7]);
      in_s0 = (float)((ulonglong)uVar5 >> 0x20);
      iVar1 = fn_00154a6c();
      if ((iVar1 != 0) && (*(char *)((int)param_1 + 0x21) == '\0')) {
        *(undefined1 *)(param_1 + 8) = 0xff;
        if (param_1[7] != -1) {
          fn_00159f34(*param_1);
          param_1[7] = 0xffffffff;
        }
      }
    }
    if (*(char *)(param_1 + 10) == '\0') {
      fn_001088e0(*param_1,param_1[9]);
      in_s0 = (float)((ulonglong)uVar5 >> 0x20);
      iVar1 = fn_00154a6c();
      if ((iVar1 != 0) && (*(char *)((int)param_1 + 0x29) == '\0')) {
        *(undefined1 *)(param_1 + 10) = 0xff;
        if (param_1[9] != -1) {
          fn_00159f34(*param_1);
          param_1[9] = 0xffffffff;
        }
      }
    }
    if (*(char *)(param_1 + 0xe) == '\0') {
      fn_001088e0(*param_1,param_1[0xd]);
      in_s0 = (float)((ulonglong)uVar5 >> 0x20);
      iVar1 = fn_00154a6c();
      if ((iVar1 != 0) && (*(char *)((int)param_1 + 0x39) == '\0')) {
        *(undefined1 *)(param_1 + 0xe) = 0xff;
        if (param_1[0xd] != -1) {
          fn_00159f34(*param_1);
          param_1[0xd] = 0xffffffff;
        }
      }
    }
    iVar1 = 0;
    do {
      piVar4 = param_1 + iVar1 * 2 + 0xf;
      if (*(char *)(param_1 + iVar1 * 2 + 0x10) == '\0') {
        fn_001088e0(*param_1,*piVar4);
        in_s0 = (float)((ulonglong)uVar5 >> 0x20);
        iVar2 = fn_00154a6c();
        if ((iVar2 != 0) && (*(char *)((int)param_1 + iVar1 * 8 + 0x41) == '\0')) {
          *(undefined1 *)(param_1 + iVar1 * 2 + 0x10) = 0xff;
          if (*piVar4 != -1) {
            fn_00159f34(*param_1);
            *piVar4 = -1;
          }
        }
      }
      fVar6 = (float)((ulonglong)uVar5 >> 0x20);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
    fn_006f7a84(DAT_008977e0);
    iVar1 = fn_006aab48();
    if (iVar1 != 0) {
      iVar1 = fn_006f7a84(DAT_008977e0);
      uVar3 = fn_006f751c(DAT_008977e0);
      fn_006c1984(uVar3,iVar1 + 0x460);
      if (0x3f800000 < (int)in_s0) {
        in_s0 = fVar6;
      }
      if (in_s0 < 0.0) {
        in_s0 = 0.0;
      }
      iVar1 = fn_001088e0(*param_1,param_1[0xb]);
      *(float *)(iVar1 + 0x10) = in_s0 * 100.0;
    }
  }
  return;
}



void fn_00341d34(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_58 [68];
  
  param_1 = (undefined4 *)*param_1;
  piVar2 = param_1 + 9;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 10) = 0xff;
    if (*piVar2 != -1) {
      fn_00159f34(*param_1);
      *piVar2 = -1;
    }
    fn_001028d4(auStack_58,(char *)&DAT_0085ae76,s_fever_stop_008c6078);
    iVar1 = fn_0010887c(*param_1,param_1[1],auStack_58,param_1[2]);
    *piVar2 = iVar1;
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)((int)param_1 + 0x29) = 0;
    return;
  }
  if (*piVar2 == -1) {
    fn_001028d4(auStack_58,(char *)&DAT_0085ae76,s_fever_008c6072);
    iVar1 = fn_0010887c(*param_1,param_1[1],auStack_58,param_1[2]);
    *piVar2 = iVar1;
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)((int)param_1 + 0x29) = 1;
  }
  return;
}



void fn_00341c34(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [64];
  
  param_1 = (undefined4 *)*param_1;
  iVar1 = fn_00163868(6);
  fn_00102908(auStack_78,0x20,s_crystal_efe__d_008c6055,iVar1 + 1);
  piVar4 = param_1 + iVar1 * 2 + 0xf;
  if (*piVar4 != -1) {
    fn_00159f34(*param_1);
    *piVar4 = -1;
  }
  fn_001028d4(auStack_58,(char *)&DAT_0085ae76,auStack_78);
  iVar2 = fn_0010887c(*param_1,param_1[1],auStack_58,param_1[2]);
  *piVar4 = iVar2;
  *(undefined1 *)(param_1 + iVar1 * 2 + 0x10) = 0;
  if (param_1[0xd] != -1) {
    fn_00159f34(*param_1);
    param_1[0xd] = 0xffffffff;
  }
  fn_001028d4(auStack_58,(char *)&DAT_0085ae76,s_crystal_suuji_008c6064);
  uVar3 = fn_0010887c(*param_1,param_1[1],auStack_58,param_1[2]);
  param_1[0xd] = uVar3;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return;
}


