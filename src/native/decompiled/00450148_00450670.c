#include "00450148_00450670.h"



undefined1 * fn_00450670(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    puVar1 = &DAT_c8810bea;
  }
  else if (param_2 == 0) {
    puVar1 = (undefined1 *)(**(code **)(*param_1 + 0x30))(param_1,param_3,0x20,iVar2,3,0x14);
    if (-1 < (int)puVar1) {
      puVar1 = (undefined1 *)fn_00450148(param_1,param_1 + 0x7f,param_1 + 0x87,param_1[0xea],0);
      *(undefined1 *)((int)param_1 + 10) = 0;
      return puVar1;
    }
  }
  else {
    puVar1 = (undefined1 *)(**(code **)(*param_1 + 0x30))(param_1,param_3,0x20,iVar2,4,0x14);
    if (-1 < (int)puVar1) {
      puVar1 = (undefined1 *)fn_00450148(param_1,param_1 + 0xeb,param_1 + 0xf3,param_1[0x156],1);
      *(undefined1 *)((int)param_1 + 0xb) = 0;
    }
  }
  return puVar1;
}



undefined1 *
fn_00450620(undefined4 param_1,int param_2,short *param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  short *psVar5;
  undefined4 unaff_r6;
  uint uVar6;
  undefined4 unaff_r7;
  int iVar7;
  int iVar8;
  
  puVar2 = (undefined1 *)fn_00450568(param_1,param_3,param_4,param_5);
  if ((int)puVar2 < 0) {
    return puVar2;
  }
  fn_0045388c();
  *(undefined1 *)(param_2 + 0x131) = 1;
  if (((param_3 != (short *)0x0) && (0x6f < param_4)) && (param_4 < 0x19001)) {
    if (*param_3 != 0x6060) {
      return &DAT_e0e10bfd;
    }
    if (*(uint *)(param_3 + 2) <= param_4) {
      iVar7 = *(int *)(param_3 + 6);
      iVar8 = *(int *)(param_3 + 4);
      if (*(uint *)(param_3 + 2) < iVar7 + iVar8 + 0x20U) {
        return (undefined1 *)0xc8810bef;
      }
      fn_0017821c(param_2,param_3,0x70,0,unaff_r4,unaff_r5,unaff_r6,unaff_r7);
      uVar6 = iVar8 - 0x70;
      if (uVar6 != 0) {
        psVar5 = param_3 + 0x38;
        while( true ) {
          if (uVar6 < 0xc) {
            return &DAT_e0e10bfd;
          }
          iVar4 = *(int *)(psVar5 + 2);
          fn_004538f0(param_2,*(undefined4 *)psVar5,iVar4,psVar5 + 4);
          uVar3 = (iVar4 + 3U & 0xfffffffc) + 8;
          if (uVar6 <= uVar3) break;
          uVar6 = uVar6 - uVar3;
          psVar5 = (short *)((int)psVar5 + uVar3);
        }
      }
      *(int *)(param_2 + 0x13c) = (int)param_3 + iVar8 + iVar7;
      *(undefined4 *)(param_2 + 0x140) = 0x20;
      if (iVar7 == 0) {
        *(undefined4 *)(param_2 + 0x134) = 0;
        *(undefined4 *)(param_2 + 0x138) = 0;
      }
      else {
        *(int *)(param_2 + 0x138) = (int)param_3 + iVar8;
        *(int *)(param_2 + 0x134) = iVar7;
      }
      iVar8 = 0x70;
      iVar7 = (int)*(char *)(param_2 + 0x130);
      if (iVar7 != 0) {
        iVar4 = 0;
        do {
          iVar1 = iVar4 * 0xc;
          iVar7 = iVar7 + -1;
          iVar4 = iVar4 + 1;
          iVar8 = (*(int *)(param_2 + iVar1 + 0x74) + 3U & 0xfffffffc) + iVar8 + 8;
        } while (iVar7 != 0);
      }
      *(int *)(param_2 + 4) = *(int *)(param_2 + 0x134) + iVar8 + 0x20;
      *(int *)(param_2 + 8) = iVar8;
      return (undefined1 *)0x0;
    }
  }
  return &DAT_c8e10be9;
}



undefined1 * fn_00450568(int *param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int local_18 [2];
  
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    return &DAT_c8810bea;
  }
  if ((param_2 == 0) || (param_3 < 0x70)) {
    return &DAT_e0e10bfd;
  }
  local_18[0] = 0;
  if (param_4 == 1) {
    puVar1 = (undefined1 *)
             (**(code **)(*param_1 + 0x14))(param_1,iVar2,1,param_5,8,local_18,param_2,param_3);
    if ((int)puVar1 < 0) {
      return puVar1;
    }
  }
  else {
    puVar1 = (undefined1 *)
             (**(code **)(*param_1 + 0x14))(param_1,iVar2,0,param_5,8,local_18,param_2,param_3);
    if ((int)puVar1 < 0) {
      return puVar1;
    }
  }
  if (local_18[0] == 0) {
    puVar1 = (undefined1 *)0xc8810bef;
  }
  else {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined1 * fn_00450148(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int local_b4;
  uint local_b0;
  uint *local_ac;
  ushort local_a8 [8];
  int local_98;
  int *piStack_34;
  int iStack_30;
  int local_2c;
  undefined4 uStack_28;
  
  piStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  fn_00170704(&DAT_008e323c);
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    puVar3 = &DAT_c8810bea;
  }
  else {
    local_b0 = 0;
    local_b4 = 0;
    if (param_5 == 0) {
      (**(code **)(*param_1 + 8))(param_1,iVar2,3,2,&local_b4);
    }
    else {
      (**(code **)(*param_1 + 8))(param_1,iVar2,4,2,&local_b4);
    }
    if (local_b4 != 0) {
      iVar2 = -0x379ef40d;
      local_ac = (uint *)(param_1 + 0x156);
      if (param_5 == 0) {
        if (DAT_0089a61b != '\0') {
          *(undefined4 *)(param_2 + 0x14) = 0;
          fn_00170704(&DAT_008e3248);
          if (DAT_0089a61b != '\0') {
            fn_004539f4(param_1[0xea]);
            DAT_0089a61b = '\0';
          }
          fn_001707b4(&DAT_008e3248);
        }
        iVar1 = local_b4;
        fn_00170704(&DAT_008e3248);
        if (DAT_0089a61b != '\0') {
          fn_004539f4(param_1[0xea]);
          DAT_0089a61b = '\0';
        }
        iVar1 = fn_00453ac8(iVar1,4);
        param_1[0xea] = iVar1;
        if (iVar1 == 0) {
          DAT_0089a61b = '\0';
          fn_001707b4(&DAT_008e3248);
        }
        else {
          DAT_0089a61b = '\x01';
          iVar2 = 0;
          fn_001707b4(&DAT_008e3248);
        }
        if (iVar2 < 0) goto LAB_00450384;
        iVar2 = (**(code **)(*param_1 + 0x34))
                          (param_1,param_1[0xea],local_b4,&local_b0,param_1[1],3,0x12);
        uVar5 = param_1[0xea];
      }
      else {
        if ((param_5 == 1) && (DAT_0089a61c != '\0')) {
          *(undefined4 *)(param_2 + 0x14) = 0;
          fn_00170704(&DAT_008e3248);
          if (DAT_0089a61c != '\0') {
            fn_004539f4(param_1[0x156]);
            DAT_0089a61c = '\0';
          }
          fn_001707b4(&DAT_008e3248);
        }
        iVar1 = local_b4;
        fn_00170704(&DAT_008e3248);
        if (DAT_0089a61c != '\0') {
          fn_004539f4(param_1[0x156]);
          DAT_0089a61c = '\0';
        }
        iVar1 = fn_00453ac8(iVar1,4);
        param_1[0x156] = iVar1;
        if (iVar1 == 0) {
          DAT_0089a61c = '\0';
          fn_001707b4(&DAT_008e3248);
        }
        else {
          DAT_0089a61c = '\x01';
          iVar2 = 0;
          fn_001707b4(&DAT_008e3248);
        }
        if (iVar2 < 0) {
LAB_00450384:
          *(undefined4 *)(param_2 + 0x14) = 0;
          fn_001707b4(&DAT_008e323c);
          return (undefined1 *)0xc8610bf3;
        }
        iVar2 = (**(code **)(*param_1 + 0x34))
                          (param_1,param_1[0x156],local_b4,&local_b0,param_1[1],4,0x12);
        uVar5 = *local_ac;
      }
      if ((iVar2 < 0) || (local_b0 == 0)) {
        *(undefined4 *)(param_2 + 0x14) = 0;
        if (param_5 == 0) {
          fn_00170704(&DAT_008e3248);
          if (DAT_0089a61b != '\0') {
            fn_004539f4(param_1[0xea]);
            DAT_0089a61b = '\0';
          }
        }
        else {
          fn_00170704(&DAT_008e3248);
          if (DAT_0089a61c != '\0') {
            fn_004539f4(param_1[0x156]);
            DAT_0089a61c = '\0';
          }
        }
        fn_001707b4(&DAT_008e3248);
      }
      else {
        if (((local_b0 < 0x20) ||
            (fn_00301a9c(param_2,uVar5,0x20), *(uint *)(param_2 + 4) != local_b0)) ||
           (iVar2 = *(int *)(param_2 + 0x14), local_b0 < iVar2 * 0x70 + 0x20U)) {
LAB_00450498:
          fn_001707b4(&DAT_008e323c);
          return (undefined1 *)0xc8e1086a;
        }
        iVar1 = uVar5 + 0x20;
        if (iVar2 != 0) {
          uVar5 = 0x6060;
        }
        uVar4 = 0;
        if (iVar2 != 0) {
          do {
            fn_00301a9c(local_a8,iVar1,0x70);
            if ((local_a8[0] != uVar5) || (local_98 != param_1[1])) goto LAB_00450498;
            *(int *)(local_2c + uVar4 * 4) = iVar1;
            uVar4 = uVar4 + 1;
            iVar1 = iVar1 + 0x70;
          } while (uVar4 < *(uint *)(param_2 + 0x14));
        }
        if (local_b4 != 0) {
          puVar3 = (undefined1 *)0x0;
          goto LAB_004501f4;
        }
      }
    }
    puVar3 = (undefined1 *)0xc8810bef;
  }
LAB_004501f4:
  fn_001707b4(&DAT_008e323c);
  return puVar3;
}


