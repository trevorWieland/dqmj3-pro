#include "006002e0_00600830.h"



undefined4 fn_00600830(short *param_1,short *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 == 0) {
    if (*param_2 == 0) {
      return 0;
    }
    return 0;
  }
  if (*param_2 == 0) {
    return 1;
  }
  uVar1 = fn_006b7d14(*(undefined4 *)(DAT_00897804 + 0x24));
  uVar2 = fn_006b7d14(*(undefined4 *)(DAT_00897804 + 0x24),(int)*param_2);
  if ((uVar1 & uVar2) == 0) {
    if ((uVar1 != 0 || uVar2 != 0) && (uVar2 == 0)) {
      return 1;
    }
  }
  else {
    iVar3 = fn_00660ccc((int)*param_1);
    iVar4 = fn_00660ccc((int)*param_2);
    if (iVar3 < iVar4) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006006b8(short *param_1,ushort *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (uint)(short)*param_2;
  if (*param_1 != 0) {
    if (uVar1 == 0) {
      return 1;
    }
    iVar2 = fn_0020cda0((int)*param_1);
    if ((iVar2 != 0) && (iVar2 = fn_0020cda0((int)(short)*param_2), iVar2 == 0)) {
      return 1;
    }
    iVar2 = fn_0020cda0((int)*param_1);
    if ((iVar2 == 0) && (iVar2 = fn_0020cda0((int)(short)*param_2), iVar2 != 0)) {
      return 0;
    }
    iVar2 = fn_0020cda0((int)*param_1);
    if ((iVar2 != 0) && (iVar2 = fn_0020cda0((int)(short)*param_2), iVar2 != 0)) {
      iVar2 = fn_00660c64((int)*param_1);
      iVar3 = fn_00660c64((int)(short)*param_2);
      if (iVar2 != iVar3) {
        iVar2 = fn_00660c64();
        iVar3 = fn_00660c64((int)(short)*param_2);
        if (iVar2 < iVar3) {
          return 1;
        }
        return 0;
      }
      if (*param_1 != 0) {
        if (*param_2 != 0) {
          iVar2 = fn_00660ccc();
          iVar3 = fn_00660ccc((int)(short)*param_2);
          if (iVar3 <= iVar2) {
            return 0;
          }
        }
        return 1;
      }
      if (*param_2 == 0) {
        return 0;
      }
      return 0;
    }
    if (*param_1 != 0) {
      if (*param_2 == 0) {
        return 1;
      }
      iVar2 = fn_00660ccc();
      iVar3 = fn_00660ccc((int)(short)*param_2);
      if (iVar2 < iVar3) {
        return 1;
      }
      return 0;
    }
    uVar1 = (uint)*param_2;
  }
  if (uVar1 == 0) {
    return 0;
  }
  return 0;
}



undefined4 fn_00600634(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(DAT_00897804 + 0x28);
  uVar1 = fn_006b2a74(uVar4,*param_1);
  uVar4 = fn_006b2a74(uVar4,*param_2);
  iVar2 = fn_00344e64(uVar1);
  iVar3 = fn_00344e64(uVar4);
  if (iVar2 == iVar3) {
    if (*param_1 < *param_2) {
      return 1;
    }
  }
  else if (iVar3 < iVar2) {
    return 1;
  }
  return 0;
}



undefined4 fn_006005e0(short *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = *param_2;
  if (*param_1 == 0 || sVar1 == 0) {
    if (*param_1 == 0 && sVar1 == 0) {
      return 0;
    }
    if (sVar1 != 0) {
      return 0;
    }
  }
  else {
    iVar2 = fn_00692568();
    iVar3 = fn_00692568((int)*param_2);
    if (iVar3 <= iVar2) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_0060058c(short *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = *param_2;
  if (*param_1 == 0 || sVar1 == 0) {
    if (*param_1 == 0 && sVar1 == 0) {
      return 0;
    }
    if (sVar1 != 0) {
      return 0;
    }
  }
  else {
    iVar2 = fn_006925b8();
    iVar3 = fn_006925b8((int)*param_2);
    if (iVar3 <= iVar2) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_00600538(short *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = *param_2;
  if (*param_1 == 0 || sVar1 == 0) {
    if (*param_1 == 0 && sVar1 == 0) {
      return 0;
    }
    if (sVar1 != 0) {
      return 0;
    }
  }
  else {
    iVar2 = fn_0028be30();
    iVar3 = fn_0028be30((int)*param_2);
    if (iVar3 <= iVar2) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_006004e4(short *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = *param_2;
  if (*param_1 == 0 || sVar1 == 0) {
    if (*param_1 == 0 && sVar1 == 0) {
      return 0;
    }
    if (sVar1 != 0) {
      return 0;
    }
  }
  else {
    iVar2 = fn_0028be14();
    iVar3 = fn_0028be14((int)*param_2);
    if (iVar3 <= iVar2) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_0060049c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 4) == 0) {
    return 0;
  }
  if (*(short *)(param_2 + 4) != 0) {
    iVar1 = fn_00661058();
    iVar2 = fn_00661058((int)*(short *)(param_2 + 4));
    if (iVar2 <= iVar1) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_00600400(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(DAT_00897804 + 0x28);
  uVar1 = fn_006b2a74(uVar4,*param_1);
  uVar4 = fn_006b2a74(uVar4,*param_2);
  iVar2 = fn_00344e64(uVar1);
  iVar3 = fn_00344e64(uVar4);
  if (iVar2 == iVar3) {
    if (*param_1 < *param_2) {
      return 1;
    }
  }
  else if (iVar2 < iVar3) {
    return 1;
  }
  return 0;
}



undefined4 fn_006003b8(short *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    return 0;
  }
  if (*param_2 != 0) {
    iVar1 = fn_00661058();
    iVar2 = fn_00661058((int)*param_2);
    if (iVar2 <= iVar1) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_00600370(short *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    return 0;
  }
  if (*param_2 != 0) {
    iVar1 = fn_00660ff8();
    iVar2 = fn_00660ff8((int)*param_2);
    if (iVar2 <= iVar1) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_00600328(short *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    return 0;
  }
  if (*param_2 != 0) {
    iVar1 = fn_00661058();
    iVar2 = fn_00661058((int)*param_2);
    if (iVar2 <= iVar1) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_006002e0(short *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    return 0;
  }
  if (*param_2 != 0) {
    iVar1 = fn_00660ccc();
    iVar2 = fn_00660ccc((int)*param_2);
    if (iVar2 <= iVar1) {
      return 0;
    }
  }
  return 1;
}


