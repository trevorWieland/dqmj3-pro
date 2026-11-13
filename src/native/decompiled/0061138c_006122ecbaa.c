#include "0061138c_006122ecbaa.h"



void fn_00611444(int param_1,int param_2,byte param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
  piVar2 = *(int **)(iVar1 + 0x10);
  if (param_2 == 0) {
    iVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2,s_rank_S_00_008c6a07,1);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_3;
    iVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2,s_rank_S_01_008c6a11,1);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_3;
    return;
  }
  if (param_2 == 1) {
    iVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2,s_rank_A_00_008c6a1b,1);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_3;
    iVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2,s_rank_A_01_008c6a25,1);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_3;
    return;
  }
  if (param_2 == 2) {
    iVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2,s_rank_B_00_008c6a2f,1);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_3;
    iVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2,s_rank_B_01_008c6a39,1);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_3;
    return;
  }
  if (param_2 == 3) {
    iVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2,s_rank_C_00_008c6a43,1);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_3;
    iVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2,s_rank_C_01_008c6a4d,1);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_3;
  }
  return;
}


