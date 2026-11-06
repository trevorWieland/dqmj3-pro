#include "sqpcheader.h"
#include "sqvm.h"
extern "C" {
SQInteger sq_wrong_top(SQVM *v){return v->_top-v->_stackbase+1;}
SQObjectPtr *sq_wrong_at(SQVM *v,SQInteger n){return &v->_stack[n+1];}
void sq_wrong_push(SQVM *v,const SQObjectPtr *){v->Push(SQObjectPtr(SQInteger(17)));}
SQObjectPtr *sq_wrong_assign(SQObjectPtr *d,const SQObjectPtr *){*d=SQInteger(17);return d;}
#ifndef NO_GARBAGE_COLLECTOR
void sq_wrong_chain(SQCollectable **h,SQCollectable *c){c->_prev=c;if(*h)(*h)->_prev=c;c->_next=*h;*h=c;}
#endif
}
