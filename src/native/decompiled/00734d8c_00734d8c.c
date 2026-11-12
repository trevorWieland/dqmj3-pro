#include "00734d8c_00734d8c.h"



void fn_00734d8c(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  code *in_r12;
  
  iVar5 = 0;
  if (0 < param_1) {
    do {
      uVar3 = *(uint *)(param_2 + iVar5 * 4);
      if (uVar3 != 0) {
        puVar1 = (uint *)0x0;
        for (puVar2 = (uint *)(&DAT_008e310c)[uVar3 & 0x1f]; puVar2 != (uint *)0x0;
            puVar2 = (uint *)puVar2[6]) {
          uVar4 = *puVar2;
          if (uVar3 <= uVar4) {
            if ((puVar2 != (uint *)0x0) && (uVar4 == uVar3)) {
              if (puVar2[1] != 0) {
                in_r12 = DAT_0089a524;
              }
              if (puVar2[1] != 0 && in_r12 != (code *)0x0) {
                (*in_r12)(puVar2[5],0x104,uVar4);
              }
              uVar3 = *(uint *)(param_2 + iVar5 * 4);
              if (uVar3 < DAT_0089a52c) {
                DAT_0089a52c = uVar3;
              }
              if (puVar1 == (uint *)0x0) {
                (&DAT_008e310c)[uVar3 & 0x1f] =
                     *(undefined4 *)((&DAT_008e310c)[uVar3 & 0x1f] + 0x18);
              }
              else {
                puVar1[6] = puVar2[6];
              }
              if (DAT_008e3190 == puVar2) {
                DAT_008e3190 = (uint *)0x0;
              }
              if (DAT_008e3194 == puVar2) {
                DAT_008e3194 = (uint *)0x0;
              }
              if (DAT_008e3198 == puVar2) {
                DAT_008e3198 = (uint *)0x0;
              }
              in_r12 = DAT_0089a524;
              if (DAT_0089a524 != (code *)0x0) {
                (*DAT_0089a524)(0x10000,0x100,0,puVar2);
              }
            }
            break;
          }
          puVar1 = puVar2;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1);
  }
  return;
}


