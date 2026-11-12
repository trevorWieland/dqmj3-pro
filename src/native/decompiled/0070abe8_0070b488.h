#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00890a04; extern undefined4 DAT_00890a08; extern undefined4 DAT_00890a0c; extern undefined4 DAT_00893278;
extern undefined4 DAT_008933ec; extern undefined4 DAT_008933f0; extern undefined4 DAT_008933f1; extern undefined4 DAT_008933f2;
extern undefined4 DAT_008933f3; extern undefined4 DAT_008933f4; extern undefined4 DAT_008933f5; extern undefined4 DAT_008933f6;
extern undefined4 DAT_008933f7; extern undefined4 DAT_008933f8; extern undefined4 DAT_008933f9; extern undefined4 DAT_008933fa;
extern undefined4 DAT_008933fb; extern undefined4 DAT_008933fc; extern undefined4 DAT_008933fd; extern undefined4 DAT_008933fe;
extern undefined4 DAT_008933ff; extern undefined4 DAT_00893400; extern undefined4 DAT_00893401; extern undefined4 DAT_00893402;
extern undefined4 DAT_00893403; extern undefined4 DAT_00893404; extern undefined4 DAT_00893405; extern undefined4 DAT_00893406;
extern undefined4 DAT_00893407; extern undefined4 DAT_00893408; extern undefined4 DAT_00893409; extern undefined4 DAT_0089340a;
extern undefined4 DAT_0089340b; extern undefined4 DAT_0089340c; extern undefined4 DAT_0089340d; extern undefined4 DAT_0089340e;
extern undefined4 DAT_0089340f; extern undefined4 DAT_00893410; extern undefined4 DAT_00893411; extern undefined4 DAT_00893412;
extern undefined4 DAT_00893413; extern undefined4 DAT_00893414; extern undefined4 DAT_00893418; extern undefined4 DAT_008934d0;
extern undefined4 DAT_008934d4; extern undefined4 DAT_008934d5; extern undefined4 DAT_008934d6; extern undefined4 DAT_008934d7;
extern undefined4 DAT_008934d8; extern undefined4 DAT_008934d9; extern undefined4 DAT_008934da; extern undefined4 DAT_008934db;
extern undefined4 DAT_008934dc; extern undefined4 DAT_008934dd; extern undefined4 DAT_008934de; extern undefined4 DAT_008934df;
extern undefined4 DAT_008934e0; extern undefined4 DAT_008934e1; extern undefined4 DAT_008934e2; extern undefined4 DAT_008934e3;
extern undefined4 DAT_008934e4; extern undefined4 DAT_008934e5; extern undefined4 DAT_008934e6; extern undefined4 DAT_008934e7;
extern undefined4 DAT_008934e8; extern undefined4 DAT_008934e9; extern undefined4 DAT_008934ea; extern undefined4 DAT_008934eb;
extern undefined4 DAT_008934ec; extern undefined4 DAT_008934ed; extern undefined4 DAT_008934ee; extern undefined4 DAT_008934ef;
extern undefined4 DAT_008934f0; extern undefined4 DAT_008934f1; extern undefined4 DAT_008934f2; extern undefined4 DAT_008934f3;
extern undefined4 DAT_008934f4; extern undefined4 DAT_008934f5; extern undefined4 DAT_008934f6; extern undefined4 DAT_008934f7;
extern undefined4 DAT_008934f8; extern undefined4 DAT_008934fc; extern undefined4 DAT_00893518; extern undefined4 DAT_0089351c;
extern undefined4 DAT_00893520; extern undefined4 DAT_00893814; extern undefined4 DAT_00893818; extern undefined4 DAT_0089381c;
extern undefined4 DAT_00893888; extern undefined4 DAT_0089388c; extern undefined4 DAT_00893890; extern undefined4 DAT_008938a4;
extern undefined4 DAT_008938a8; extern undefined4 DAT_008938a9; extern undefined4 DAT_008938aa; extern undefined4 DAT_008938ab;
extern undefined4 DAT_008938ac; extern undefined4 DAT_008938ad; extern undefined4 DAT_008938ae; extern undefined4 DAT_008938af;
extern undefined4 DAT_008938b0; extern undefined4 DAT_008938b1; extern undefined4 DAT_008938b2; extern undefined4 DAT_008938b3;
extern undefined4 DAT_008938b4; extern undefined4 DAT_008938b5; extern undefined4 DAT_008938b6; extern undefined4 DAT_008938b7;
extern undefined4 DAT_008938b8; extern undefined4 DAT_008938b9; extern undefined4 DAT_008938ba; extern undefined4 DAT_008938bb;
extern undefined4 DAT_008938bc; extern undefined4 DAT_008938bd; extern undefined4 DAT_008938be; extern undefined4 DAT_008938bf;
extern undefined4 DAT_008938c0; extern undefined4 DAT_008938c1; extern undefined4 DAT_008938c2; extern undefined4 DAT_008938c3;
extern undefined4 DAT_008938c4; extern undefined4 DAT_008938c5; extern undefined4 DAT_008938c6; extern undefined4 DAT_008938c7;
extern undefined4 DAT_008938c8; extern undefined4 DAT_008938c9; extern undefined4 DAT_008938ca; extern undefined4 DAT_008938cb;
extern undefined4 DAT_008938cc; extern undefined4 DAT_008938d0; extern undefined4 DAT_008938d4; extern undefined4 DAT_00893b64;
extern undefined4 DAT_008942dc; extern undefined4 DAT_008942e0; extern undefined4 DAT_008942e4; extern undefined4 DAT_0089438c;
extern undefined4 DAT_00894390; extern undefined4 DAT_00894394; extern undefined4 DAT_008943f0; extern undefined4 DAT_008943f4;
extern undefined4 DAT_008943f8; extern undefined4 DAT_00894448; extern undefined4 DAT_0089444c; extern undefined4 DAT_00894450;
extern undefined4 DAT_0089466c; extern undefined4 DAT_00894678; extern undefined4 DAT_008946d4; extern undefined4 DAT_008946d8;
extern undefined4 DAT_008946dc; extern undefined4 DAT_00894f2c; extern undefined4 DAT_00894f30; extern undefined4 DAT_00894f34;
extern undefined4 DAT_00895b68; extern undefined4 DAT_00895b74; extern undefined4 DAT_00895b78; extern undefined4 DAT_00896544;
extern undefined4 DAT_008c7fb4; extern undefined4 DAT_008c7fb8; extern undefined4 DAT_008c7fbc; extern undefined4 DAT_008c7fc0;
extern undefined4 DAT_008c7fc4; extern undefined4 DAT_008c7fc8; extern undefined4 DAT_008ca660; extern undefined4 DAT_008ca664;
extern undefined4 DAT_008ca668; extern undefined4 DAT_008ca66c; extern undefined4 DAT_008ca670; extern undefined4 DAT_008ca674;
extern undefined4 DAT_008ca6d8; extern undefined4 DAT_008ca6dc; extern undefined4 DAT_008ca6e0; extern undefined4 DAT_008ca6e4;
extern undefined4 DAT_008ca6e8; extern undefined4 DAT_008ca6ec; extern undefined4 DAT_008ca720; extern undefined4 DAT_008ca724;
extern undefined4 DAT_008ca728; extern undefined4 DAT_008ca72c; extern undefined4 DAT_008ca730; extern undefined4 DAT_008ca734;
extern undefined4 DAT_008ca8d0; extern undefined4 DAT_008ca8d4; extern undefined4 DAT_008ca8d8; extern undefined4 DAT_008ca8dc;
extern undefined4 DAT_008ca8e0; extern undefined4 DAT_008ca8e4; extern undefined4 DAT_008ca8e8; extern undefined4 DAT_008ca8ec;
extern undefined4 DAT_008ca8f0; extern undefined4 DAT_008ca8f4; extern undefined4 DAT_008ca8f8; extern undefined4 DAT_008ca8fc;
extern undefined4 DAT_008ca900; extern undefined4 DAT_008ca904; extern undefined4 DAT_008ca908; extern undefined4 DAT_008ca90c;
extern undefined4 DAT_008ca910; extern undefined4 DAT_008ca914; extern undefined4 DAT_008cb120; extern undefined4 DAT_008cb124;
extern undefined4 DAT_008cb128; extern undefined4 DAT_008cb12c; extern undefined4 DAT_008cb130; extern undefined4 DAT_008cb134;
extern undefined4 DAT_008cb210; extern undefined4 DAT_008cb214; extern undefined4 DAT_008cb218; extern undefined4 DAT_008cb21c;
extern undefined4 DAT_008cb220; extern undefined4 DAT_008cb224; extern undefined4 DAT_008cb270; extern undefined4 DAT_008cb274;
extern undefined4 DAT_008cb278; extern undefined4 DAT_008cb27c; extern undefined4 DAT_008cb280; extern undefined4 DAT_008cb284;
extern undefined4 DAT_008cb2d0; extern undefined4 DAT_008cb2d4; extern undefined4 DAT_008cb2d8; extern undefined4 DAT_008cb2dc;
extern undefined4 DAT_008cb2e0; extern undefined4 DAT_008cb2e4; extern undefined4 DAT_008cb5a0; extern undefined4 DAT_008cb5a4;
extern undefined4 DAT_008cb5a8; extern undefined4 DAT_008cb5ac; extern undefined4 DAT_008cb5b0; extern undefined4 DAT_008cb5b4;
extern undefined4 DAT_008cb9e4; extern undefined4 DAT_008cb9e8; extern undefined4 DAT_008cb9ec; extern undefined4 DAT_008cb9f0;
extern undefined4 DAT_008cb9f4; extern undefined4 DAT_008cb9f8; extern undefined4 DAT_008cc2d8; extern undefined4 DAT_008cc2dc;
extern undefined4 DAT_008cc2e0; extern undefined4 DAT_008cc2e4; extern undefined4 DAT_008cc2e8; extern undefined4 DAT_008cc2ec;
