#include "001a2d50_001a36d4.h"



undefined4 fn_001a36d4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (0 < param_2) {
    iVar1 = *(int *)(param_1 + 0xb0);
    if (iVar1 < param_2) {
      param_2 = param_2 + (param_2 >> 1);
      uVar2 = fn_0018388c(*(undefined4 *)(param_1 + 0xac),iVar1,param_2);
      *(undefined4 *)(param_1 + 0xac) = uVar2;
      *(int *)(param_1 + 0xb0) = param_2;
    }
    else if (param_2 * 0x20 <= iVar1) {
      uVar2 = fn_0018388c(*(undefined4 *)(param_1 + 0xac),iVar1,iVar1 >> 1);
      *(undefined4 *)(param_1 + 0xac) = uVar2;
      *(int *)(param_1 + 0xb0) = iVar1 >> 1;
    }
  }
  return *(undefined4 *)(param_1 + 0xac);
}



void fn_001a3530(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  int local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  int local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  fn_001a2b54();
  while( true ) {
    while( true ) {
      while (iVar2 = *param_1, iVar2 == 0x10e) {
        iVar2 = fn_001a9704(param_1[1]);
        iVar3 = fn_001a72b0(param_1[1],0xffffffff);
        uVar1 = (undefined1)iVar3;
        local_34 = 0x2b;
        local_32 = (undefined1)iVar2;
        local_38 = 0;
        local_31 = 0;
        local_33 = uVar1;
        fn_001a759c(param_1[1],&local_38);
        iVar4 = *(int *)(param_1[1] + 100) + -1;
        if (iVar3 != iVar2) {
          local_2c = 10;
          local_2a = 0;
          local_29 = 0;
          local_30 = iVar2;
          local_2b = uVar1;
          fn_001a759c(param_1[1],&local_30);
        }
        iVar2 = fn_001a9c90(param_1 + 4);
        *param_1 = iVar2;
        fn_001a3530(param_1);
        *(undefined1 *)(param_1[1] + 0xd8) = 0;
        iVar2 = fn_001a9704(param_1[1]);
        if (iVar3 != iVar2) {
          local_24 = 10;
          local_22 = 0;
          local_21 = 0;
          local_28 = iVar2;
          local_23 = uVar1;
          fn_001a759c(param_1[1],&local_28);
        }
        *(undefined1 *)(param_1[1] + 0xd8) = 0;
        fn_001a7908(param_1[1],iVar4,1,(*(int *)(param_1[1] + 100) - iVar4) + -1);
      }
      if (iVar2 != 0x118) break;
      local_38 = 0;
      fn_001a6fac(param_1,0x29,fn_001a2b54,0);
    }
    if (iVar2 != 0x137) break;
    local_38 = 0;
    fn_001a6fac(param_1,0x2a,fn_001a2b54,0);
  }
  return;
}



void fn_001a2d50(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  bool bVar10;
  char *local_68;
  undefined1 auStack_64 [4];
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar3 = fn_001a5c18();
  do {
    while (iVar4 = *param_1, iVar4 == 0x5b) {
      if (param_1[6] == 10) {
        local_68 = "cannot brake deref/or comma needed after [exp]=exp slot declaration";
        fn_00102cc8(&DAT_008f9d08,
                     "cannot brake deref/or comma needed after [exp]=exp slot declaration",
                     auStack_64);
        param_1[0x1c] = (int)&DAT_008f9d08;
                    /* WARNING: Subroutine does not return */
        fn_001a5350(param_1 + 0x1e,1);
      }
      iVar3 = fn_001a9c90(param_1 + 4);
      *param_1 = iVar3;
      fn_0019d970(&local_68,param_1,0);
      fn_001a8854(&local_68,param_1);
      iVar3 = *param_1;
      if (iVar3 != 0x12f) {
        if (iVar3 < 0x130) {
          if (iVar3 != 0x119) {
            if (iVar3 < 0x119) {
              if (iVar3 != 0x28 && iVar3 != 0x3d) {
LAB_001a312c:
                if ((*(char *)(param_1[0x19] + param_1[0x1a] * 8 + -8) == '\0' || iVar3 == 0x2e) ||
                    iVar3 == 0x5b) {
                  uVar1 = fn_001a9704(param_1[1]);
                  uVar5 = fn_001a9704(param_1[1]);
                  local_68 = (char *)param_1[1];
                  local_43 = fn_001a72b0(local_68,0xffffffff);
                  local_44 = 0xe;
                  local_41 = 0;
                  local_48 = uVar5;
                  local_42 = uVar1;
                  fn_001a759c(local_68,&local_48);
                }
              }
            }
            else if (iVar3 != 0x121 && iVar3 != 0x122) goto LAB_001a312c;
          }
        }
        else if ((iVar3 != 0x130 && iVar3 != 0x13d) && (iVar3 != 0x13e && iVar3 != 0x13f))
        goto LAB_001a312c;
      }
      *(undefined4 *)(param_1[0x19] + param_1[0x1a] * 8 + -4) = 0xfffffffe;
      iVar4 = param_1[0x1a] * 8 + -8 + param_1[0x19];
LAB_001a323c:
      iVar3 = -1;
      *(undefined1 *)(iVar4 + 2) = 0;
    }
    if (0x5a < iVar4) {
      if (iVar4 == 0x12f || iVar4 == 0x130) {
        iVar4 = *(int *)(param_1[0x1a] * 8 + param_1[0x19] + -4);
        bVar10 = iVar4 != -1;
        if (bVar10) {
          iVar4 = param_1[6];
        }
        if (((bVar10 && iVar4 != 10) && (iVar4 = *param_1, iVar4 != 0 && iVar4 != 0x7d)) &&
           (iVar4 != 0x3b)) {
          iVar6 = fn_001a9c90(param_1 + 4);
          *param_1 = iVar6;
          if (-1 < iVar3) {
            uVar5 = fn_001a9704(param_1[1]);
            iVar3 = param_1[1];
            local_5b = fn_001a72b0(iVar3,0xffffffff);
            local_5c = 0x27;
            if (iVar4 == 0x130) {
              local_59 = 0xff;
            }
            else {
              local_59 = 1;
            }
            local_5a = 0;
            local_60 = uVar5;
            fn_001a759c(iVar3,&local_60);
            return;
          }
          if (iVar4 == 0x130) {
            uVar1 = 0xff;
          }
          else {
            uVar1 = 1;
          }
          uVar2 = fn_001a9704(param_1[1]);
          uVar5 = fn_001a9704(param_1[1]);
          iVar3 = param_1[1];
          local_5b = fn_001a72b0(iVar3,0xffffffff);
          local_5c = 0x26;
          local_60 = uVar5;
          local_5a = uVar2;
          local_59 = uVar1;
          fn_001a759c(iVar3,&local_60);
        }
      }
      return;
    }
    if (iVar4 != 0x28) {
      if (iVar4 != 0x2e) {
        return;
      }
      iVar3 = fn_001a9c90(param_1 + 4);
      *param_1 = iVar3;
      if (iVar3 == 0x131) {
        iVar3 = fn_001a9c90(param_1 + 4);
        *param_1 = iVar3;
        if (iVar3 == 0x12f) {
LAB_001a2e0c:
          local_68 = (char *)&DAT_001a3150;
          fn_00102cc8(&DAT_008f9d08,(char *)&DAT_001a3150,auStack_64);
          param_1[0x1c] = (int)&DAT_008f9d08;
                    /* WARNING: Subroutine does not return */
          fn_001a5350(param_1 + 0x1e,1);
        }
        if (iVar3 < 0x130) {
          if (iVar3 == 0x119) goto LAB_001a2e0c;
          if (iVar3 < 0x11a) {
            if (iVar3 == 0x28 || iVar3 == 0x3d) goto LAB_001a2e0c;
          }
          else if (iVar3 == 0x121 || iVar3 == 0x122) goto LAB_001a2e0c;
        }
        else if ((iVar3 == 0x130 || iVar3 == 0x13d) || (iVar3 == 0x13e || iVar3 == 0x13f))
        goto LAB_001a2e0c;
        if ((*(char *)(param_1[0x19] + param_1[0x1a] * 8 + -8) != '\0' && iVar3 != 0x2e) &&
            iVar3 != 0x5b) goto LAB_001a2e0c;
        uVar5 = fn_001a9704(param_1[1]);
        pcVar9 = (char *)param_1[1];
        local_43 = fn_001a72b0(pcVar9,0xffffffff);
        local_44 = 0x21;
        local_42 = 0;
        puVar7 = &local_48;
        local_41 = 0;
        local_48 = uVar5;
LAB_001a308c:
        fn_001a759c(pcVar9,puVar7);
      }
      else {
        iVar3 = param_1[1];
        uVar1 = fn_001a72b0(iVar3,0xffffffff);
        fn_001a8854(&local_38,param_1);
        local_40 = local_38;
        local_3c = local_34;
        local_48 = fn_001a9170(param_1[1],&local_40);
        local_44 = 1;
        local_42 = 0;
        local_41 = 0;
        local_43 = uVar1;
        fn_001a759c(iVar3,&local_48);
        iVar3 = *param_1;
        if (iVar3 != 0x12f) {
          if (iVar3 < 0x12f) {
            if (iVar3 != 0x119) {
              if (iVar3 < 0x119) {
                if (iVar3 != 0x28 && iVar3 != 0x3d) {
LAB_001a2ff4:
                  if ((*(char *)(param_1[0x19] + param_1[0x1a] * 8 + -8) == '\0' || iVar3 == 0x2e)
                      || iVar3 == 0x5b) {
                    uVar1 = fn_001a9704(param_1[1]);
                    uVar5 = fn_001a9704(param_1[1]);
                    local_68 = (char *)param_1[1];
                    uVar2 = fn_001a72b0(local_68,0xffffffff);
                    puVar7 = &local_38;
                    local_34 = (uint)CONCAT12(uVar1,CONCAT11(uVar2,0xe));
                    pcVar9 = local_68;
                    local_38 = uVar5;
                    goto LAB_001a308c;
                  }
                }
              }
              else if (iVar3 != 0x121 && iVar3 != 0x122) goto LAB_001a2ff4;
            }
          }
          else if ((iVar3 != 0x130 && iVar3 != 0x13d) && (iVar3 != 0x13e && iVar3 != 0x13f))
          goto LAB_001a2ff4;
        }
      }
      *(undefined4 *)(param_1[0x1a] * 8 + param_1[0x19] + -4) = 0xfffffffe;
      iVar4 = param_1[0x19] + param_1[0x1a] * 8 + -8;
      goto LAB_001a323c;
    }
    if (*(int *)(param_1[0x19] + param_1[0x1a] * 8 + -4) == -1) {
      iVar4 = param_1[1];
      local_4b = fn_001a72b0(iVar4,0xffffffff);
      local_4c = 10;
      local_50 = 0;
      local_4a = 0;
      local_49 = 0;
      fn_001a759c(iVar4,&local_50);
    }
    else {
      if (iVar3 < 0) {
        uVar5 = fn_001a9704(param_1[1]);
        uVar1 = fn_001a9704(param_1[1]);
        uVar2 = fn_001a72b0(param_1[1],0xffffffff);
        local_41 = fn_001a72b0(param_1[1],0xffffffff);
        iVar4 = param_1[1];
        local_44 = 7;
        puVar7 = &local_48;
        local_48 = uVar5;
        local_43 = uVar2;
        local_42 = uVar1;
      }
      else {
        iVar4 = param_1[1];
        local_53 = fn_001a72b0(iVar4,0xffffffff);
        local_54 = 10;
        local_58 = 0;
        local_52 = 0;
        puVar7 = &local_58;
        local_51 = 0;
      }
      fn_001a759c(iVar4,puVar7);
    }
    *(undefined4 *)(param_1[0x19] + param_1[0x1a] * 8 + -4) = 0xffffffff;
    iVar6 = fn_001a9c90(param_1 + 4);
    iVar4 = 1;
    *param_1 = iVar6;
    while (iVar6 != 0x29) {
      while( true ) {
        fn_0019d970(&local_68,param_1,1);
        uVar5 = fn_001a9808(param_1[1]);
        iVar6 = fn_001a7968(param_1[1],uVar5);
        if (iVar6 != 0) {
          uVar5 = fn_001a9704(param_1[1]);
          iVar6 = param_1[1];
          local_43 = fn_001a72b0(iVar6,0xffffffff);
          local_44 = 10;
          local_42 = 0;
          local_41 = 0;
          local_48 = uVar5;
          fn_001a759c(iVar6,&local_48);
        }
        iVar6 = *param_1;
        iVar4 = iVar4 + 1;
        if (iVar6 != 0x2c) break;
        iVar6 = fn_001a9c90(param_1 + 4);
        *param_1 = iVar6;
        if (iVar6 == 0x29) {
          local_68 = "expression expected, found \')\'";
          fn_00102cc8(&DAT_008f9d08,"expression expected, found \')\'",auStack_64);
          param_1[0x1c] = (int)&DAT_008f9d08;
                    /* WARNING: Subroutine does not return */
          fn_001a5350(param_1 + 0x1e,1);
        }
      }
    }
    iVar6 = fn_001a9c90(param_1 + 4);
    iVar8 = 0;
    *param_1 = iVar6;
    if (0 < iVar4 + -1) {
      do {
        fn_001a9704(param_1[1]);
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar4 + -1);
    }
    uVar1 = fn_001a9704(param_1[1]);
    uVar5 = fn_001a9704(param_1[1]);
    local_68 = (char *)param_1[1];
    uVar2 = fn_001a72b0(local_68,0xffffffff);
    local_3c = CONCAT13((char)iVar4,CONCAT12(uVar1,CONCAT11(uVar2,6)));
    local_40 = uVar5;
    fn_001a759c(local_68,&local_40);
  } while( true );
}


