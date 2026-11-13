#include "001af938_001b00ccb.h"



undefined4 fn_001b00cc(byte *param_1)

{
  short sVar1;
  byte *pbVar2;
  bool bVar3;
  
  if ((param_1 != (byte *)0x0) && (*(short *)param_1 == 0)) {
    sVar1 = *(short *)(param_1 + 2);
    bVar3 = sVar1 == 0;
    if (bVar3) {
      sVar1 = *(short *)(param_1 + 4);
    }
    if (bVar3 && sVar1 == 0) {
      pbVar2 = param_1;
      if (*(short *)(param_1 + 6) == 0) {
        pbVar2 = (byte *)(uint)*(ushort *)(param_1 + 8);
      }
      if (*(short *)(param_1 + 6) == 0 && pbVar2 == (byte *)0x0) {
        return 0;
      }
    }
  }
  if ((*param_1 & 0x20) == 0) {
    return 1;
  }
  return 0;
}



undefined4 fn_001affc4(byte *param_1,byte *param_2)

{
  short sVar1;
  byte *pbVar2;
  bool bVar3;
  bool bVar4;
  
  if ((param_1 != (byte *)0x0) && (*(short *)param_1 == 0)) {
    sVar1 = *(short *)(param_1 + 2);
    bVar3 = sVar1 == 0;
    if (bVar3) {
      sVar1 = *(short *)(param_1 + 4);
    }
    if (bVar3 && sVar1 == 0) {
      pbVar2 = param_1;
      if (*(short *)(param_1 + 6) == 0) {
        pbVar2 = (byte *)(uint)*(ushort *)(param_1 + 8);
      }
      if (*(short *)(param_1 + 6) == 0 && pbVar2 == (byte *)0x0) {
        return 0;
      }
    }
  }
  if ((*param_1 & 0x20) == 0) {
    if (param_2 != (byte *)0x0) {
      sVar1 = *(short *)param_2;
      bVar3 = sVar1 == 0;
      if (bVar3) {
        sVar1 = *(short *)(param_2 + 2);
      }
      if (bVar3 && sVar1 == 0) {
        sVar1 = *(short *)(param_2 + 4);
        bVar3 = sVar1 == 0;
        if (bVar3) {
          sVar1 = *(short *)(param_2 + 6);
        }
        bVar4 = bVar3 && sVar1 == 0;
        if (bVar3 && sVar1 == 0) {
          bVar4 = *(short *)(param_2 + 8) == 0;
        }
        if (bVar4) {
          return 0;
        }
      }
    }
    if (((((*param_2 & 0x20) == 0) && (*(short *)param_1 == *(short *)param_2)) &&
        (*(short *)(param_1 + 2) == *(short *)(param_2 + 2))) &&
       (((*(short *)(param_1 + 4) == *(short *)(param_2 + 4) &&
         (*(short *)(param_1 + 6) == *(short *)(param_2 + 6))) &&
        (*(short *)(param_1 + 8) == *(short *)(param_2 + 8))))) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_001aff7c(short *param_1)

{
  short sVar1;
  bool bVar2;
  
  if (param_1 != (short *)0x0) {
    sVar1 = *param_1;
    bVar2 = sVar1 == 0;
    if (bVar2) {
      sVar1 = param_1[1];
    }
    if (bVar2 && sVar1 == 0) {
      sVar1 = param_1[2];
      bVar2 = sVar1 == 0;
      if (bVar2) {
        sVar1 = param_1[3];
      }
      if ((bVar2 && sVar1 == 0) && (param_1[4] == 0)) {
        return 1;
      }
    }
  }
  return 0;
}



undefined4 fn_001aff40(short *param_1)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  
  if (param_1 != (short *)0x0) {
    sVar2 = *param_1;
    bVar3 = sVar2 == 0;
    if (bVar3) {
      sVar2 = param_1[1];
    }
    if (bVar3 && sVar2 == 0) {
      psVar1 = param_1 + 2;
      if (*psVar1 == 0) {
        param_1 = (short *)(uint)(ushort)param_1[3];
      }
      if (*psVar1 == 0 && param_1 == (short *)0x0) {
        return 1;
      }
    }
  }
  return 0;
}



undefined1 fn_001aff20(void)

{
  return DAT_008bf50f;
}



undefined4 fn_001aff00(byte *param_1)

{
  undefined4 uVar1;
  
  if (((*param_1 & 0x10) == 0) && ((*param_1 & 0x40) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_001afea8(short *param_1)

{
  short *psVar1;
  undefined4 uVar2;
  
  psVar1 = (short *)fn_001b5248();
  if ((((*param_1 == *psVar1) && (param_1[1] == psVar1[1])) && (param_1[2] == psVar1[2])) &&
     (param_1[3] == psVar1[3])) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


