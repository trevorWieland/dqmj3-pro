#include "00123f88_00124664bb.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_00124664(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_00110000;
  svc_0x32();
  iVar1 = DAT_008c0784;
  if (-1 < DAT_008c0784) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



void fn_001244e8(int param_1,short *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint in_fpscr;
  float fVar4;
  float local_18;
  float local_14;
  float local_10;
  
  if (*(char *)(param_1 + 0x48) != '\0') {
    *param_2 = *param_2 - *(short *)(param_1 + 0xe);
    param_2[1] = param_2[1] - *(short *)(param_1 + 0x10);
    param_2[2] = param_2[2] - *(short *)(param_1 + 0x12);
  }
  if (*(char *)(param_1 + 0x49) != '\0') {
    if (*(int *)(param_1 + 0x18) == 0x3f800000) {
      fVar4 = *(float *)(param_1 + 0x1c);
      bVar3 = fVar4 == 0.0;
      uVar1 = in_fpscr & 0xfffffff;
      if (bVar3) {
        fVar4 = *(float *)(param_1 + 0x20);
      }
      in_fpscr = uVar1 | (uint)(bVar3 && fVar4 == 0.0) << 0x1e;
      bVar2 = false;
      if (bVar3) {
        bVar2 = SUB41(in_fpscr >> 0x1e,0);
      }
      if (bVar2) {
        fVar4 = *(float *)(param_1 + 0x24);
        bVar3 = fVar4 == 0.0;
        if (bVar3) {
          fVar4 = *(float *)(param_1 + 0x28);
        }
        in_fpscr = uVar1 | (uint)(bVar3 && fVar4 == 0.0) << 0x1e;
        bVar2 = false;
        if (bVar3) {
          bVar2 = SUB41(in_fpscr >> 0x1e,0);
        }
        if (bVar2) {
          bVar3 = false;
          if (*(int *)(param_1 + 0x2c) == 0x3f800000) {
            in_fpscr = uVar1 | (uint)(*(float *)(param_1 + 0x30) == 0.0) << 0x1e;
            bVar3 = SUB41(in_fpscr >> 0x1e,0);
          }
          if (bVar3) {
            fVar4 = *(float *)(param_1 + 0x34);
            bVar3 = fVar4 == 0.0;
            uVar1 = in_fpscr & 0xfffffff;
            if (bVar3) {
              fVar4 = *(float *)(param_1 + 0x38);
            }
            in_fpscr = uVar1 | (uint)(bVar3 && fVar4 == 0.0) << 0x1e;
            bVar2 = false;
            if (bVar3) {
              bVar2 = SUB41(in_fpscr >> 0x1e,0);
            }
            bVar3 = false;
            if (bVar2) {
              in_fpscr = uVar1 | (uint)(*(float *)(param_1 + 0x3c) == 0.0) << 0x1e;
              bVar3 = SUB41(in_fpscr >> 0x1e,0);
            }
            if (bVar3) {
              bVar3 = false;
              if (*(int *)(param_1 + 0x40) == 0x3f800000) {
                in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x44) == 0.0) << 0x1e;
                bVar3 = SUB41(in_fpscr >> 0x1e,0);
              }
              if (bVar3) {
                return;
              }
            }
          }
        }
      }
    }
    local_18 = (float)VectorSignedToFloat((int)*param_2,(byte)(in_fpscr >> 0x16) & 3);
    local_10 = (float)VectorSignedToFloat((int)param_2[2],(byte)(in_fpscr >> 0x16) & 3);
    local_14 = (float)VectorSignedToFloat((int)param_2[1],(byte)(in_fpscr >> 0x16) & 3);
    fn_0016947c(&local_18,param_1 + 0x18);
    *param_2 = (short)(int)local_18;
    param_2[1] = (short)(int)local_14;
    param_2[2] = (short)(int)local_10;
  }
  return;
}


