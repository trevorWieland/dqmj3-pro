#include "0012bb50_001fab94aa.h"



void fn_0012bb50(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_1) {
    do {
      if (DAT_0089a520 == (code *)0x0) {
        puVar3 = (uint *)0x0;
      }
      else {
        puVar3 = (uint *)(*DAT_0089a520)(0x10000,0x100,0,0x44);
      }
      fn_00301f50(puVar3,0x44);
      puVar3[0xb] = 0x300;
      while( true ) {
        puVar2 = (uint *)(&DAT_008e3084)[DAT_0089a528 & 0x1f];
        if (puVar2 == (uint *)0x0) break;
        if (*puVar2 != DAT_0089a528) {
          if (DAT_0089a528 < *puVar2) {
            *(uint *)(param_2 + iVar4 * 4) = DAT_0089a528;
            *puVar3 = DAT_0089a528;
            puVar3[0x10] = (&DAT_008e3084)[DAT_0089a528 & 0x1f];
            goto LAB_0012bbec;
          }
          puVar1 = (uint *)puVar2[0x10];
          while( true ) {
            if (puVar1 == (uint *)0x0) {
              puVar2[0x10] = (uint)puVar3;
              *puVar3 = DAT_0089a528;
              puVar3[0x10] = 0;
              *(uint *)(param_2 + iVar4 * 4) = DAT_0089a528;
              goto LAB_0012bc5c;
            }
            if (*puVar1 == DAT_0089a528) break;
            if (DAT_0089a528 < *puVar1) {
              *(uint *)(param_2 + iVar4 * 4) = DAT_0089a528;
              *puVar3 = DAT_0089a528;
              puVar2[0x10] = (uint)puVar3;
              puVar3[0x10] = (uint)puVar1;
              goto LAB_0012bc5c;
            }
            puVar2 = puVar1;
            puVar1 = (uint *)puVar1[0x10];
          }
        }
        DAT_0089a528 = DAT_0089a528 + 1;
      }
      *(uint *)(param_2 + iVar4 * 4) = DAT_0089a528;
      *puVar3 = DAT_0089a528;
      puVar3[0x10] = 0;
LAB_0012bbec:
      (&DAT_008e3084)[DAT_0089a528 & 0x1f] = puVar3;
LAB_0012bc5c:
      DAT_0089a528 = DAT_0089a528 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1);
  }
  return;
}


