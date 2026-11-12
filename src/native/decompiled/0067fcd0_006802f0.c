#include "0067fcd0_006802f0.h"



void fn_006802f0(int param_1)

{
  fn_00681204(*(undefined4 *)(param_1 + 0x14),fn_0067fb14);
  fn_00681204(*(undefined4 *)(param_1 + 0x14),&LAB_0067fb5c);
  return;
}



void fn_0067ffdc(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_cc [3];
  undefined4 *local_c0 [4];
  undefined4 *local_b0 [4];
  undefined4 *local_a0 [4];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 *local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar1 = *(int *)(param_1 + 0x14);
  puVar2 = (undefined4 *)(iVar1 + 0x1c);
  uVar8 = 0;
  do {
    do {
      uVar3 = *(uint *)(iVar1 + 0x3c);
      if (uVar3 <= uVar8) {
        return;
      }
      uVar7 = uVar8 + 1;
      bVar11 = uVar7 == uVar3;
    } while (uVar3 <= uVar7 && !bVar11);
    do {
      if (bVar11) {
LAB_00680020:
        uVar8 = uVar7;
        break;
      }
      iVar4 = uVar8 - uVar7;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (1 < iVar4) {
        iVar4 = *(int *)(param_1 + 0x14);
        local_40 = *(undefined4 *)(iVar4 + 0x1c);
        local_3c = *(undefined4 *)(iVar4 + 0x20);
        local_38 = *(undefined4 *)(iVar4 + 0x24);
        local_34 = *(undefined4 *)(iVar4 + 0x28);
        fn_007852d4(local_50,&local_40,uVar8);
        uVar9 = *local_50[0];
        local_40 = *(undefined4 *)(iVar4 + 0x1c);
        local_3c = *(undefined4 *)(iVar4 + 0x20);
        local_38 = *(undefined4 *)(iVar4 + 0x24);
        local_34 = *(undefined4 *)(iVar4 + 0x28);
        fn_007852d4(local_50,&local_40,uVar7);
        uVar10 = *local_50[0];
        puVar5 = (undefined4 *)fn_006f608c(uVar9);
        uVar12 = *puVar5;
        iVar4 = fn_006f608c(uVar9);
        uVar14 = *(undefined4 *)(iVar4 + 8);
        puVar5 = (undefined4 *)fn_006f608c(uVar10);
        uVar13 = *puVar5;
        iVar4 = fn_006f608c(uVar10);
        local_54 = *(undefined4 *)(iVar4 + 8);
        local_60 = uVar12;
        local_5c = uVar14;
        local_58 = uVar13;
        do {
          while (iVar4 = fn_006f5f68(uVar9,&local_60,local_cc), iVar4 == 0) {
            uVar9 = fn_006f60a4(uVar9,local_cc[0],0);
            uVar9 = fn_0067d3d8(*(undefined4 *)(param_1 + 0x10),uVar9);
          }
        } while (iVar4 != 1 && iVar4 != 2);
        iVar4 = fn_006f60ec(uVar9,uVar10);
        if (iVar4 == 0) {
          local_90 = *puVar2;
          local_8c = *(undefined4 *)(iVar1 + 0x20);
          local_88 = *(undefined4 *)(iVar1 + 0x24);
          local_84 = *(undefined4 *)(iVar1 + 0x28);
          fn_007852d4(local_a0,&local_90,uVar8);
          puVar5 = (undefined4 *)fn_006f608c(*local_a0[0]);
          puVar6 = *(undefined4 **)(param_2 + 4);
          if (puVar6 == *(undefined4 **)(param_2 + 8)) {
            fn_00794e34(param_2,puVar6,puVar5);
          }
          else {
            *(undefined4 **)(param_2 + 4) = puVar6 + 3;
            if (puVar6 != (undefined4 *)0x0) {
              uVar9 = puVar5[1];
              uVar10 = puVar5[2];
              *puVar6 = *puVar5;
              puVar6[1] = uVar9;
              puVar6[2] = uVar10;
            }
          }
          goto LAB_00680020;
        }
      }
      uVar3 = *(uint *)(iVar1 + 0x3c);
      if (uVar7 == uVar3 - 1) {
        local_80 = *puVar2;
        local_7c = *(undefined4 *)(iVar1 + 0x20);
        local_78 = *(undefined4 *)(iVar1 + 0x24);
        local_74 = *(undefined4 *)(iVar1 + 0x28);
        fn_007852d4(local_b0,&local_80,uVar8);
        puVar5 = (undefined4 *)fn_006f608c(*local_b0[0]);
        puVar6 = *(undefined4 **)(param_2 + 4);
        if (puVar6 == *(undefined4 **)(param_2 + 8)) {
          fn_00794e34(param_2);
        }
        else {
          *(undefined4 **)(param_2 + 4) = puVar6 + 3;
          if (puVar6 != (undefined4 *)0x0) {
            uVar9 = puVar5[1];
            uVar10 = puVar5[2];
            *puVar6 = *puVar5;
            puVar6[1] = uVar9;
            puVar6[2] = uVar10;
          }
        }
        local_70 = *puVar2;
        local_6c = *(undefined4 *)(iVar1 + 0x20);
        local_68 = *(undefined4 *)(iVar1 + 0x24);
        local_64 = *(undefined4 *)(iVar1 + 0x28);
        fn_007852d4(local_c0,&local_70,uVar7);
        puVar2 = (undefined4 *)fn_006f608c(*local_c0[0]);
        puVar5 = *(undefined4 **)(param_2 + 4);
        if (puVar5 == *(undefined4 **)(param_2 + 8)) {
          fn_00794e34(param_2);
          return;
        }
        *(undefined4 **)(param_2 + 4) = puVar5 + 3;
        if (puVar5 == (undefined4 *)0x0) {
          return;
        }
        uVar9 = puVar2[1];
        uVar10 = puVar2[2];
        *puVar5 = *puVar2;
        puVar5[1] = uVar9;
        puVar5[2] = uVar10;
        return;
      }
      uVar7 = uVar7 + 1;
      bVar11 = uVar7 == uVar3;
    } while (uVar7 <= uVar3);
  } while( true );
}



void fn_0067fcd0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *local_d0 [4];
  undefined4 *local_c0 [4];
  undefined4 *local_b0 [6];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 *local_58 [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar1 = *(int *)(param_1 + 0x14);
  puVar2 = (undefined4 *)(iVar1 + 0x1c);
  uVar8 = 0;
LAB_0067fcf4:
  do {
    do {
      if (*(uint *)(iVar1 + 0x3c) <= uVar8) {
        return;
      }
      uVar7 = uVar8 + 1;
    } while (*(uint *)(iVar1 + 0x3c) <= uVar7);
    do {
      iVar3 = uVar8 - uVar7;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (1 < iVar3) {
        iVar3 = *(int *)(param_1 + 0x14);
        puVar4 = (undefined4 *)(iVar3 + 0x1c);
        local_48 = *puVar4;
        local_44 = *(undefined4 *)(iVar3 + 0x20);
        local_40 = *(undefined4 *)(iVar3 + 0x24);
        local_3c = *(undefined4 *)(iVar3 + 0x28);
        fn_007852d4(local_58,&local_48,uVar8);
        uVar11 = *local_58[0];
        local_48 = *puVar4;
        local_44 = *(undefined4 *)(iVar3 + 0x20);
        local_40 = *(undefined4 *)(iVar3 + 0x24);
        local_3c = *(undefined4 *)(iVar3 + 0x28);
        fn_007852d4(local_58,&local_48,uVar7);
        uVar9 = *local_58[0];
        puVar5 = (undefined4 *)fn_006f608c(uVar11);
        uVar12 = *puVar5;
        iVar6 = fn_006f608c(uVar11);
        uVar13 = *(undefined4 *)(iVar6 + 8);
        puVar5 = (undefined4 *)fn_006f608c(uVar9);
        uVar11 = *puVar5;
        iVar6 = fn_006f608c(uVar9);
        local_5c = *(undefined4 *)(iVar6 + 8);
        local_60 = uVar11;
        local_68 = uVar12;
        uStack_64 = uVar13;
        for (uVar10 = uVar8; (int)uVar10 <= (int)uVar7; uVar10 = uVar10 + 1) {
          local_48 = *puVar4;
          local_44 = *(undefined4 *)(iVar3 + 0x20);
          local_40 = *(undefined4 *)(iVar3 + 0x24);
          local_3c = *(undefined4 *)(iVar3 + 0x28);
          fn_007852d4(local_58,&local_48,uVar10);
          iVar6 = fn_006f5f58(*local_58[0],&local_68);
          if (((iVar6 != 0) && (iVar6 == 1 || iVar6 == 2)) && (uVar10 != uVar7)) {
            local_98 = *puVar2;
            local_94 = *(undefined4 *)(iVar1 + 0x20);
            local_90 = *(undefined4 *)(iVar1 + 0x24);
            local_8c = *(undefined4 *)(iVar1 + 0x28);
            fn_007852d4(local_b0,&local_98,uVar8);
            puVar4 = (undefined4 *)fn_006f608c(*local_b0[0]);
            puVar5 = *(undefined4 **)(param_2 + 4);
            if (puVar5 == *(undefined4 **)(param_2 + 8)) {
              fn_00794e34(param_2);
            }
            else {
              *(undefined4 **)(param_2 + 4) = puVar5 + 3;
              if (puVar5 != (undefined4 *)0x0) {
                uVar9 = puVar4[1];
                uVar11 = puVar4[2];
                *puVar5 = *puVar4;
                puVar5[1] = uVar9;
                puVar5[2] = uVar11;
              }
            }
            uVar8 = uVar7 - 1;
            goto LAB_0067fcf4;
          }
        }
      }
      if (uVar7 == *(uint *)(iVar1 + 0x3c) - 1) {
        local_88 = *puVar2;
        local_84 = *(undefined4 *)(iVar1 + 0x20);
        local_80 = *(undefined4 *)(iVar1 + 0x24);
        local_7c = *(undefined4 *)(iVar1 + 0x28);
        fn_007852d4(local_c0,&local_88,uVar8);
        puVar4 = (undefined4 *)fn_006f608c(*local_c0[0]);
        puVar5 = *(undefined4 **)(param_2 + 4);
        if (puVar5 == *(undefined4 **)(param_2 + 8)) {
          fn_00794e34(param_2);
        }
        else {
          *(undefined4 **)(param_2 + 4) = puVar5 + 3;
          if (puVar5 != (undefined4 *)0x0) {
            uVar9 = puVar4[1];
            uVar11 = puVar4[2];
            *puVar5 = *puVar4;
            puVar5[1] = uVar9;
            puVar5[2] = uVar11;
          }
        }
        local_78 = *puVar2;
        local_74 = *(undefined4 *)(iVar1 + 0x20);
        local_70 = *(undefined4 *)(iVar1 + 0x24);
        local_6c = *(undefined4 *)(iVar1 + 0x28);
        fn_007852d4(local_d0,&local_78,uVar7);
        puVar2 = (undefined4 *)fn_006f608c(*local_d0[0]);
        puVar4 = *(undefined4 **)(param_2 + 4);
        if (puVar4 == *(undefined4 **)(param_2 + 8)) {
          fn_00794e34(param_2);
          return;
        }
        *(undefined4 **)(param_2 + 4) = puVar4 + 3;
        if (puVar4 == (undefined4 *)0x0) {
          return;
        }
        uVar9 = puVar2[1];
        uVar11 = puVar2[2];
        *puVar4 = *puVar2;
        puVar4[1] = uVar9;
        puVar4[2] = uVar11;
        return;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(iVar1 + 0x3c));
  } while( true );
}


