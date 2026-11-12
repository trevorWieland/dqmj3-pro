#include "0012e714_004ad878a.h"



void fn_001466ac(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_1) {
    do {
      puVar2 = (uint *)0x0;
      if (DAT_0089a520 != (code *)0x0) {
        puVar2 = (uint *)(*DAT_0089a520)(0x10000,0x100,0,0x1c);
      }
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      while( true ) {
        puVar3 = (uint *)(&DAT_008e310c)[DAT_0089a52c & 0x1f];
        if (puVar3 == (uint *)0x0) break;
        if (*puVar3 != DAT_0089a52c) {
          if (DAT_0089a52c < *puVar3) {
            *(uint *)(param_2 + iVar4 * 4) = DAT_0089a52c;
            *puVar2 = DAT_0089a52c;
            puVar2[6] = (&DAT_008e310c)[DAT_0089a52c & 0x1f];
            goto LAB_0014674c;
          }
          puVar1 = (uint *)puVar3[6];
          while( true ) {
            if (puVar1 == (uint *)0x0) {
              puVar3[6] = (uint)puVar2;
              *puVar2 = DAT_0089a52c;
              puVar2[6] = 0;
              *(uint *)(param_2 + iVar4 * 4) = DAT_0089a52c;
              goto LAB_001467bc;
            }
            if (*puVar1 == DAT_0089a52c) break;
            if (DAT_0089a52c < *puVar1) {
              *(uint *)(param_2 + iVar4 * 4) = DAT_0089a52c;
              *puVar2 = DAT_0089a52c;
              puVar3[6] = (uint)puVar2;
              puVar2[6] = (uint)puVar1;
              goto LAB_001467bc;
            }
            puVar3 = puVar1;
            puVar1 = (uint *)puVar1[6];
          }
        }
        DAT_0089a52c = DAT_0089a52c + 1;
      }
      *(uint *)(param_2 + iVar4 * 4) = DAT_0089a52c;
      *puVar2 = DAT_0089a52c;
      puVar2[6] = 0;
LAB_0014674c:
      (&DAT_008e310c)[DAT_0089a52c & 0x1f] = puVar2;
LAB_001467bc:
      DAT_0089a52c = DAT_0089a52c + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1);
  }
  return;
}



void fn_00146050(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  code *in_r12;
  bool bVar8;
  
  iVar4 = DAT_008bfab0;
  if (DAT_008bfad8 == (int *)0x0) {
    return;
  }
  iVar7 = 0;
  do {
    piVar6 = (int *)DAT_008bfad8[iVar7 + 4];
    while (piVar1 = piVar6, piVar1 != (int *)0x0) {
      iVar3 = *piVar1;
      piVar6 = (int *)piVar1[3];
      if (iVar3 != 0) {
        iVar2 = piVar1[1];
        if (iVar2 == 0) {
          fn_00156f48(iVar3 + 0x34);
          fn_00158318(*(undefined4 *)(iVar3 + 0x2c),iVar3 + 0x34);
joined_r0x001460f4:
          if (DAT_0089a524 != (code *)0x0) {
            (*DAT_0089a524)(0x10000,0x100,0,iVar3);
          }
        }
        else {
          if (iVar2 == 1) {
            iVar2 = 0;
            do {
              iVar5 = iVar3 + iVar2 * 0x44;
              fn_00156f48(iVar5 + 0x34);
              fn_00158318(*(undefined4 *)(iVar3 + 0x2c),iVar5 + 0x34);
              iVar2 = iVar2 + 1;
            } while (iVar2 < 6);
            goto joined_r0x001460f4;
          }
          if (iVar2 == 2) goto joined_r0x001460f4;
          if (iVar2 != 3) goto LAB_00146250;
          if ((*(int *)(iVar3 + 0x804) != 0) && (in_r12 = DAT_0089a524, DAT_0089a524 != (code *)0x0)
             ) {
            (*DAT_0089a524)(0x10000,0x100,0);
          }
          bVar8 = *(int *)(iVar3 + 0x808) != 0;
          if (bVar8) {
            in_r12 = DAT_0089a524;
          }
          if (bVar8 && in_r12 != (code *)0x0) {
            (*in_r12)(0x10000,0x100,0);
          }
          bVar8 = *(int *)(iVar3 + 0x80c) != 0;
          if (bVar8) {
            in_r12 = DAT_0089a524;
          }
          if (bVar8 && in_r12 != (code *)0x0) {
            (*in_r12)(0x10000,0x100,0);
          }
          bVar8 = *(int *)(iVar3 + 0x810) != 0;
          if (bVar8) {
            in_r12 = DAT_0089a524;
          }
          if (bVar8 && in_r12 != (code *)0x0) {
            (*in_r12)(0x10000,0x100,0);
          }
          bVar8 = *(int *)(iVar3 + 0x814) != 0;
          if (bVar8) {
            in_r12 = DAT_0089a524;
          }
          if (bVar8 && in_r12 != (code *)0x0) {
            (*in_r12)(0x10000,0x100,0);
          }
          if (*(int *)(iVar3 + 0x818) == 0) goto joined_r0x001460f4;
          if (DAT_0089a524 != (code *)0x0) {
            (*DAT_0089a524)(0x10000,0x100,0);
            goto joined_r0x001460f4;
          }
        }
        *piVar1 = 0;
      }
LAB_00146250:
      in_r12 = DAT_0089a524;
      if (DAT_0089a524 != (code *)0x0) {
        (*DAT_0089a524)(0x10000,0x100,0,piVar1);
      }
    }
    iVar7 = iVar7 + 1;
    if (0x1ff < iVar7) {
      *(undefined4 *)(iVar4 + 0x5c) = 0;
      *(undefined4 *)(iVar4 + 0x68) = 0;
      *(undefined4 *)(iVar4 + 0x60) = 0;
      *(undefined4 *)(iVar4 + 0x6c) = 0;
      *(undefined4 *)(iVar4 + 100) = 0;
      *(undefined4 *)(iVar4 + 0x70) = 0;
      fn_00301f50(iVar4 + 0x74,0x80);
      *(undefined4 *)(iVar4 + 0xf4) = 0;
      iVar4 = *DAT_008bfad8;
      fn_00156f48(iVar4 + 0x34);
      fn_00158318(*(undefined4 *)(iVar4 + 0x2c),iVar4 + 0x34);
      if (DAT_0089a524 != (code *)0x0) {
        (*DAT_0089a524)(0x10000,0x100,0,iVar4);
      }
      iVar4 = 0;
      iVar7 = DAT_008bfad8[1];
      do {
        iVar3 = iVar7 + iVar4 * 0x44;
        fn_00156f48(iVar3 + 0x34);
        fn_00158318(*(undefined4 *)(iVar7 + 0x2c),iVar3 + 0x34);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 6);
      if (DAT_0089a524 != (code *)0x0) {
        (*DAT_0089a524)(0x10000,0x100,0,iVar7);
      }
      if (DAT_0089a524 != (code *)0x0) {
        (*DAT_0089a524)(0x10000,0x100,0,DAT_008bfad8[2]);
      }
      DAT_008bfad8 = (int *)0x0;
      return;
    }
  } while( true );
}



undefined4 fn_0012e714(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_001581d0(param_1,&DAT_00148920);
    return uVar2;
  }
  (**(code **)(*DAT_00898898 + 0x24))(DAT_00898898,local_10);
  return 0;
}


