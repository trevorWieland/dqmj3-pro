#include "001c04c4_001c132cabb.h"



int fn_001c08ec(int param_1,int param_2)

{
  int iVar1;
  undefined1 local_48 [4];
  undefined2 local_44;
  char local_10 [4];
  
  local_10[0] = '\0';
  iVar1 = fn_004bcad0(param_2 != 0,param_2,0,fn_001c08ec,param_1,local_10);
  if (iVar1 == 0) {
    fn_004bac20(local_48,10,param_2);
    local_44 = 2;
    do {
      if (*(char *)(param_1 + 0x22) == '\x05') goto LAB_001c0998;
      iVar1 = fn_004bab94(local_48,
                           L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Job.cpp"
                           ,0xd0);
    } while (iVar1 != 0);
    if (*(char *)(param_1 + 0x22) == '\x05') {
LAB_001c0998:
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = (int)local_10[0];
  }
  return iVar1;
}



void fn_001c0830(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = fn_00145b00(0x1ac,&DAT_00812c8c);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)fn_00211c48(iVar1,0x29);
    *puVar2 = &DAT_007bee04;
    puVar2[0x67] = param_1;
    *(undefined1 *)(puVar2 + 0x68) = 0;
    puVar2[0x69] = 0xffffffff;
    puVar2[0x6a] = 0;
  }
  return;
}


