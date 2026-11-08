from map_proof062s import Model



class EraseModel(Model):

    def __init__(self,*args):

        super().__init__(*args);self.free=[];self.active=set()

    def node(self,key):

        if self.free:

            at=self.free.pop(0);self.ptr(self.map+self.p,self.base+self.free[0]if self.free else 0);self.nodes[at]=dict(key=key,value=0,left=None,right=None,parent=None,black=0)

        else:at=super().node(key)

        self.active.add(at);return at

    def render(self):
        super().render()
        if self.root is None:
            self.ptr(self.head+self.l[3],self.base+self.head);self.ptr(self.head+self.l[4],self.base+self.head)
    def order(self):

        result=[]

        def visit(at):

            if at is not None:visit(self.nodes[at]['left']);result.append(at);visit(self.nodes[at]['right'])

        visit(self.root);return result

    def replace(self,old,replacement):

        parent=self.nodes[old]['parent']

        if parent is None:self.root=replacement

        else:self.nodes[parent]['left'if self.nodes[parent]['left']==old else'right']=replacement

    def erase(self,z):

        if z is None:return None

        order=self.order();index=order.index(z);successor=order[index+1]if index+1<len(order)else None;n=self.nodes[z];left,right=n['left'],n['right']

        if left is not None and right is not None:

            y=right

            while self.nodes[y]['left']is not None:y=self.nodes[y]['left']

            child=self.nodes[y]['right'];self.nodes[left]['parent']=y;self.nodes[y]['left']=left

            if right!=y:

                parent=self.nodes[y]['parent']

                if child is not None:self.nodes[child]['parent']=parent

                self.nodes[parent]['left']=child;self.nodes[y]['right']=right;self.nodes[right]['parent']=y

            elif child is not None:self.nodes[child]['parent']=y

            self.replace(z,y);self.nodes[y]['parent']=n['parent'];n['black'],self.nodes[y]['black']=self.nodes[y]['black'],n['black'];cursor=child if child is not None else y

        else:

            child=left if left is not None else right;parent=n['parent']

            if child is not None:self.nodes[child]['parent']=parent

            self.replace(z,child);cursor=child if child is not None else parent

        if self.root is None:self.low=None;self.high=None

        else:

            self.low=self.root

            while self.nodes[self.low]['left']is not None:self.low=self.nodes[self.low]['left']

            self.high=self.root

            while self.nodes[self.high]['right']is not None:self.high=self.nodes[self.high]['right']

        if cursor is not None and n['black']:

            self.rebalance(cursor)

        n['right']=self.free[0]if self.free else None;self.free.insert(0,z);self.ptr(self.map+self.p,self.base+z);self.count-=1;self.active.remove(z)

        return successor

    def rebalance(self,x):

        def black(at):return at is None or self.nodes[at]['black']==1

        while x!=self.root and self.nodes[x]['black']==1:

            parent=self.nodes[x]['parent'];left=self.nodes[parent]['left']==x;near='left'if left else'right';far='right'if left else'left';sibling=self.nodes[parent][far]

            if sibling is None:self.nodes[x]['black']=0;x=parent;continue

            if self.nodes[sibling]['black']==0:

                self.nodes[sibling]['black']=1;self.nodes[parent]['black']=0;self.rotate(parent,left);sibling=self.nodes[parent][far]

                if sibling is None:self.nodes[x]['black']=0;x=parent;continue

            a,b=self.nodes[sibling][near],self.nodes[sibling][far]

            if black(a)and black(b):self.nodes[sibling]['black']=0;x=parent;continue

            if black(b):

                if a is not None:self.nodes[a]['black']=1

                self.nodes[sibling]['black']=0;self.rotate(sibling,not left);sibling=self.nodes[parent][far]

                if sibling is None:break

            self.nodes[sibling]['black']=self.nodes[parent]['black'];self.nodes[parent]['black']=1;far_child=self.nodes[sibling][far]

            if far_child is not None:self.nodes[far_child]['black']=1

            self.rotate(parent,left);break

        self.nodes[x]['black']=1

