#include "007954e8_00795c94.h"



void fn_00795c94(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  if (uVar3 != uVar4) {
    uVar1 = uVar3;
    if (uVar4 <= uVar3) {
      do {
        uVar1 = uVar1 + 0x1c;
      } while (uVar1 != uVar4);
    }
    iVar2 = (int)((longlong)(int)(uVar4 - uVar3) * -0x6db6db6d +
                  ((ulonglong)(uVar4 - uVar3) << 0x20) >> 0x20);
    param_1[1] = uVar4 + ((iVar2 >> 4) - (iVar2 >> 0x1f)) * -0x1c;
  }
  return;
}



uint * fn_007959b4(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_28;
  uint local_24;
  
  if (param_2 == param_1) {
    return param_1;
  }
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar2 = *param_1;
  uVar6 = uVar4 - uVar3;
  local_28 = (int)uVar6 >> 3;
  if ((uint)((int)(param_1[2] - uVar2) >> 3) < local_28) {
    uVar3 = (int)(param_1[1] - uVar2) >> 3;
    local_24 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
    if (local_24 < uVar3 + 0x20) {
      local_24 = uVar3 + 0x20;
    }
    puVar1 = &local_24;
    if (local_24 <= local_28) {
      puVar1 = &local_28;
    }
    uVar6 = *puVar1;
    uVar4 = fn_00100fc6(uVar6 << 3,0);
    uVar7 = param_2[1];
    uVar2 = uVar4;
    for (uVar3 = *param_2; uVar3 != uVar7; uVar3 = uVar3 + 8) {
      if (uVar2 != 0) {
        fn_00166824(uVar2,uVar3);
      }
      uVar2 = uVar2 + 8;
    }
    uVar2 = *param_1;
    uVar3 = uVar2;
    if (param_1[1] < uVar2) {
      do {
        uVar3 = uVar3 + 8;
      } while (uVar3 != param_1[1]);
    }
    fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 3,0);
    *param_1 = uVar4;
    param_1[1] = uVar4 + ((int)(param_2[1] - *param_2) >> 3) * 8;
    param_1[2] = uVar4 + uVar6 * 8;
  }
  else {
    uVar7 = (int)(param_1[1] - uVar2) >> 3;
    if (uVar7 < local_28) {
      uVar4 = uVar3 + uVar7 * 8;
      if (uVar3 < uVar4) {
        iVar5 = uVar4 - uVar3;
        if (0 < iVar5) {
          uVar4 = uVar2 - 8;
          uVar6 = uVar3 - 8;
          if (iVar5 * 0x10000000 < 0) {
            fn_00166824(uVar2,uVar3);
            uVar4 = uVar2;
            uVar6 = uVar3;
          }
          for (iVar5 = iVar5 >> 4; iVar5 != 0; iVar5 = iVar5 + -1) {
            fn_00166824(uVar4 + 8,uVar6 + 8);
            uVar4 = uVar4 + 0x10;
            uVar6 = uVar6 + 0x10;
            fn_00166824();
          }
        }
      }
      else {
        for (; uVar3 != uVar4; uVar3 = uVar3 + 8) {
          fn_00166824(uVar2,uVar3);
          uVar2 = uVar2 + 8;
        }
      }
      param_1[1] = *param_1 + ((int)(param_2[1] - *param_2) >> 3) * 8;
      uVar2 = param_2[1];
      iVar5 = *param_1 + uVar7 * 8;
      for (uVar3 = *param_2 + uVar7 * 8; uVar3 != uVar2; uVar3 = uVar3 + 8) {
        if (iVar5 != 0) {
          fn_00166824(iVar5,uVar3);
        }
        iVar5 = iVar5 + 8;
      }
    }
    else {
      if (uVar3 < uVar4) {
        if (0 < (int)uVar6) {
          uVar4 = uVar2 - 8;
          uVar7 = uVar3 - 8;
          if ((int)(uVar6 * 0x10000000) < 0) {
            fn_00166824(uVar2,uVar3);
            uVar4 = uVar2;
            uVar7 = uVar3;
          }
          for (iVar5 = (int)uVar6 >> 4; iVar5 != 0; iVar5 = iVar5 + -1) {
            fn_00166824(uVar4 + 8,uVar7 + 8);
            uVar4 = uVar4 + 0x10;
            uVar7 = uVar7 + 0x10;
            fn_00166824();
          }
          uVar2 = uVar2 + (uVar6 & 0xfffffff8);
        }
      }
      else {
        for (; uVar3 != uVar4; uVar3 = uVar3 + 8) {
          fn_00166824(uVar2,uVar3);
          uVar2 = uVar2 + 8;
        }
      }
      if (param_1[1] < uVar2) {
        do {
          uVar2 = uVar2 + 8;
        } while (uVar2 != param_1[1]);
      }
      uVar3 = *param_1 + ((int)(param_2[1] - *param_2) >> 3) * 8;
      param_1[1] = uVar3;
      param_1[2] = uVar3;
    }
  }
  return param_1;
}



void fn_007957d0(uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  
  puVar5 = param_1 + 1;
  uVar1 = *puVar5;
  uVar6 = (int)(uVar1 - *param_1) >> 3;
  if ((uint)((int)(param_1[2] - *param_1) >> 3) <= uVar6) {
    uVar1 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
    if (uVar1 < uVar6 + 0x20) {
      uVar1 = uVar6 + 0x20;
    }
    uVar2 = fn_00100fc6(uVar1 << 3,0);
    uVar3 = uVar2;
    for (uVar6 = *param_1; uVar6 != param_2; uVar6 = uVar6 + 8) {
      if (uVar3 != 0) {
        fn_00166824(uVar3,uVar6);
      }
      uVar3 = uVar3 + 8;
    }
    iVar7 = (param_2 - *param_1 & 0xfffffff8) + uVar2;
    if (iVar7 != 0) {
      fn_00166824(iVar7,param_3);
    }
    uVar6 = *puVar5;
    iVar7 = (param_2 - *param_1 & 0xfffffff8) + uVar2;
    for (; param_2 != uVar6; param_2 = param_2 + 8) {
      iVar7 = iVar7 + 8;
      if (iVar7 != 0) {
        fn_00166824(iVar7,param_2);
      }
    }
    uVar3 = *param_1;
    uVar4 = *puVar5;
    uVar6 = uVar3;
    if (uVar4 < uVar3) {
      do {
        uVar6 = uVar6 + 8;
      } while (uVar6 != uVar4);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 3,0);
    param_1[2] = uVar2 + uVar1 * 8;
    *puVar5 = uVar2 + ((int)(uVar4 - uVar3) >> 3) * 8 + 8;
    *param_1 = uVar2;
    return;
  }
  *puVar5 = uVar1 + 8;
  if (uVar1 != 0) {
    fn_00166824(uVar1,uVar1 - 8);
  }
  uVar6 = uVar1 - 8;
  if (param_2 < uVar6) {
    iVar7 = uVar6 - param_2;
    if (0 < iVar7) {
      uVar3 = uVar6;
      if (iVar7 * 0x10000000 < 0) {
        uVar3 = uVar1 - 0x10;
        fn_00166824(uVar6,uVar3);
        uVar1 = uVar6;
      }
      for (iVar7 = iVar7 >> 4; iVar7 != 0; iVar7 = iVar7 + -1) {
        fn_00166824(uVar1 - 8,uVar3 - 8);
        uVar1 = uVar1 - 0x10;
        uVar3 = uVar3 - 0x10;
        fn_00166824();
      }
    }
  }
  else {
    while (param_2 != uVar6) {
      uVar6 = uVar6 - 8;
      uVar1 = uVar1 - 8;
      fn_00166824(uVar1,uVar6);
    }
  }
  fn_00166824(param_2,param_3);
  return;
}



uint * fn_007954e8(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_28;
  uint local_24;
  
  if (param_2 == param_1) {
    return param_1;
  }
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar2 = *param_1;
  uVar5 = uVar4 - uVar3;
  local_28 = (int)uVar5 >> 3;
  if ((uint)((int)(param_1[2] - uVar2) >> 3) < local_28) {
    uVar3 = (int)(param_1[1] - uVar2) >> 3;
    local_24 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
    if (local_24 < uVar3 + 0x20) {
      local_24 = uVar3 + 0x20;
    }
    puVar1 = &local_24;
    if (local_24 <= local_28) {
      puVar1 = &local_28;
    }
    uVar5 = *puVar1;
    uVar4 = fn_00100fc6(uVar5 << 3,0);
    uVar6 = param_2[1];
    uVar2 = uVar4;
    for (uVar3 = *param_2; uVar3 != uVar6; uVar3 = uVar3 + 8) {
      if (uVar2 != 0) {
        fn_00166824(uVar2,uVar3);
      }
      uVar2 = uVar2 + 8;
    }
    uVar2 = *param_1;
    uVar3 = uVar2;
    if (param_1[1] < uVar2) {
      do {
        uVar3 = uVar3 + 8;
      } while (uVar3 != param_1[1]);
    }
    fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 3,0);
    *param_1 = uVar4;
    param_1[1] = (param_2[1] - *param_2 & 0xfffffff8) + uVar4;
    param_1[2] = uVar4 + uVar5 * 8;
  }
  else {
    uVar6 = (int)(param_1[1] - uVar2) >> 3;
    if (uVar6 < local_28) {
      uVar4 = uVar3 + uVar6 * 8;
      if (uVar3 < uVar4) {
        iVar7 = uVar4 - uVar3;
        if (0 < iVar7) {
          uVar4 = uVar2 - 8;
          uVar5 = uVar3 - 8;
          if (iVar7 * 0x10000000 < 0) {
            fn_00166824(uVar2,uVar3);
            uVar4 = uVar2;
            uVar5 = uVar3;
          }
          for (iVar7 = iVar7 >> 4; iVar7 != 0; iVar7 = iVar7 + -1) {
            fn_00166824(uVar4 + 8,uVar5 + 8);
            uVar4 = uVar4 + 0x10;
            uVar5 = uVar5 + 0x10;
            fn_00166824();
          }
        }
      }
      else {
        for (; uVar3 != uVar4; uVar3 = uVar3 + 8) {
          fn_00166824(uVar2,uVar3);
          uVar2 = uVar2 + 8;
        }
      }
      param_1[1] = (param_2[1] - *param_2 & 0xfffffff8) + *param_1;
      uVar2 = param_2[1];
      iVar7 = *param_1 + uVar6 * 8;
      for (uVar3 = *param_2 + uVar6 * 8; uVar3 != uVar2; uVar3 = uVar3 + 8) {
        if (iVar7 != 0) {
          fn_00166824(iVar7,uVar3);
        }
        iVar7 = iVar7 + 8;
      }
    }
    else {
      if (uVar3 < uVar4) {
        if (0 < (int)uVar5) {
          uVar4 = uVar2 - 8;
          uVar6 = uVar3 - 8;
          if ((int)(uVar5 * 0x10000000) < 0) {
            fn_00166824(uVar2,uVar3);
            uVar4 = uVar2;
            uVar6 = uVar3;
          }
          for (iVar7 = (int)uVar5 >> 4; iVar7 != 0; iVar7 = iVar7 + -1) {
            fn_00166824(uVar4 + 8,uVar6 + 8);
            uVar4 = uVar4 + 0x10;
            uVar6 = uVar6 + 0x10;
            fn_00166824();
          }
          uVar2 = uVar2 + (uVar5 & 0xfffffff8);
        }
      }
      else {
        for (; uVar3 != uVar4; uVar3 = uVar3 + 8) {
          fn_00166824(uVar2,uVar3);
          uVar2 = uVar2 + 8;
        }
      }
      if (param_1[1] < uVar2) {
        do {
          uVar2 = uVar2 + 8;
        } while (uVar2 != param_1[1]);
      }
      uVar3 = (param_2[1] - *param_2 & 0xfffffff8) + *param_1;
      param_1[1] = uVar3;
      param_1[2] = uVar3;
    }
  }
  return param_1;
}


