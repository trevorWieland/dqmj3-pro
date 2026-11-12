#include "007a7a68_007a7a68.h"



/* WARNING: Removing unreachable block (ram,0x007a7b70) */
/* WARNING: Removing unreachable block (ram,0x007a7b7c) */
/* WARNING: Removing unreachable block (ram,0x007a7b88) */
/* WARNING: Removing unreachable block (ram,0x007a7b8c) */
/* WARNING: Removing unreachable block (ram,0x007a7b90) */
/* WARNING: Removing unreachable block (ram,0x007a7b94) */
/* WARNING: Removing unreachable block (ram,0x007a7bc8) */

void fn_007a7a68(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  if ((int)param_2 - (int)param_1 < 0x101) {
    return;
  }
  do {
    if (param_3 == 0) {
      iVar7 = (int)param_2 - (int)param_1;
      if (0x1f < iVar7) {
        iVar4 = ((iVar7 >> 4) + -2) / 2;
        while( true ) {
          puVar1 = param_1 + iVar4 * 4;
          fn_0079f738(param_1,iVar4,iVar7 >> 4,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
        }
      }
      while (0x10 < iVar7) {
        if (param_1 != param_2) {
          uVar10 = param_1[1];
          uVar11 = param_1[2];
          uVar12 = param_1[3];
          uVar5 = param_2[-4];
          uVar6 = param_2[-3];
          uVar8 = param_2[-2];
          uVar9 = param_2[-1];
          param_2[-4] = *param_1;
          param_2[-3] = uVar10;
          param_2[-2] = uVar11;
          param_2[-1] = uVar12;
          fn_0079f738(param_1,0,(int)(param_2 + -4) - (int)param_1 >> 4,uVar5,uVar6,uVar8,uVar9);
        }
        param_2 = param_2 + -4;
        iVar7 = (int)param_2 - (int)param_1;
      }
      return;
    }
    uVar5 = *param_1;
    puVar1 = param_2 + -4;
    puVar3 = param_1 + (((int)param_2 - (int)param_1 >> 4) - ((int)param_2 - (int)param_1 >> 0x1f)
                       >> 1) * 4;
    if (uVar5 == 0) goto LAB_007a7c4c;
    uVar6 = *puVar3;
    if (uVar6 == 0) {
LAB_007a7aec:
      if ((uVar5 == 0) || ((*puVar1 != 0 && (uVar5 == 0 || *puVar1 <= uVar5)))) {
LAB_007a7c44:
        puVar1 = param_1;
      }
    }
    else {
      if (uVar5 == 0) {
LAB_007a7c4c:
        uVar5 = *puVar3;
        if ((uVar5 != 0) && ((*puVar1 == 0 || (uVar5 != 0 && uVar5 < *puVar1)))) goto LAB_007a7c74;
      }
      else {
        if (uVar6 <= uVar5) {
          if ((*puVar1 == 0) || (uVar5 != 0 && uVar5 < *puVar1)) goto LAB_007a7c44;
          goto LAB_007a7c4c;
        }
        if ((*puVar1 != 0) && (uVar6 == 0 || *puVar1 <= uVar6)) goto LAB_007a7aec;
      }
      puVar1 = puVar3;
    }
LAB_007a7c74:
    uVar5 = *puVar1;
    puVar1 = param_2;
    puVar3 = param_1;
LAB_007a7c78:
    for (; (uVar6 = *puVar3, uVar6 != 0 && ((uVar5 == 0 || (uVar6 != 0 && uVar6 < uVar5))));
        puVar3 = puVar3 + 4) {
    }
    do {
      puVar2 = puVar1;
      puVar1 = puVar2 + -4;
      if (uVar5 == 0) break;
    } while ((*puVar1 == 0) || (uVar5 != 0 && uVar5 < *puVar1));
    if (puVar3 < puVar1) {
      uVar11 = puVar2[-3];
      uVar12 = puVar2[-2];
      uVar13 = puVar2[-1];
      uVar8 = puVar3[2];
      uVar10 = puVar3[1];
      uVar9 = puVar3[3];
      *puVar3 = *puVar1;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      puVar3 = puVar3 + 4;
      *puVar1 = uVar6;
      puVar2[-3] = uVar10;
      puVar2[-2] = uVar8;
      puVar2[-1] = uVar9;
      goto LAB_007a7c78;
    }
    param_3 = param_3 / 2;
    fn_007a7a68(puVar3,param_2,param_3);
    param_2 = puVar3;
    if ((int)puVar3 - (int)param_1 < 0x101) {
      return;
    }
  } while( true );
}


