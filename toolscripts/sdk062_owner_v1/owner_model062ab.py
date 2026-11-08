from model062aa import TimerModel

class OwnerMapModel(TimerModel):
    def __init__(self, existing, owner_layout):
        self.__dict__ = existing.__dict__.copy()
        self.l = list(existing.l)
        self.l[1] = owner_layout[2]
        self.l[5] = 4 * self.p
        self.map = existing.owner + owner_layout[5]
        self.head = self.pointer(self.map + 4 * self.p) - self.base
        self.blocks = self.pointer(self.map) - self.base
        self.pool_capacity = 32
        self.remaining = list(range(self.pointer(self.map + 2*self.p)-self.base,
            self.pointer(self.map + 3*self.p)-self.base, self.l[1]))
        self.nodes = {}
        self.payloads = {}
        self.active = set()
        self.free = []
        self.root = self.low = self.high = None
        self.count = 0
    def pointer(self, at):
        return int.from_bytes(self.image[at:at+self.p], 'little')
    def pair_key(self, first, second):
        return self.endpoint_key(first) + self.endpoint_key(second)
    def insertion_parent(self, key):
        parent = None
        current = self.root
        while current is not None:
            parent = current
            current = self.nodes[current]['left' if key < self.nodes[current]['key'] else 'right']
        return self.base + (self.head if parent is None else parent)
    def render(self):
        self.word(self.map+self.l[11], self.count)
        for field,node in [(self.l[2],self.root),(self.l[3],self.low),(self.l[4],self.high)]:
            self.ptr(self.head+field, self.base+node if node is not None else (0 if field==self.l[2] else self.base+self.head))
        for at, node in self.nodes.items():
            self.image[at] = node['black']
            for field,key in [(self.l[2],'parent'),(self.l[3],'left'),(self.l[4],'right')]:
                value = node[key]
                self.ptr(at+field, self.base+(self.head if key=='parent' and value is None else value) if value is not None or key=='parent' else 0)
            value = self.payloads[at]
            self.endpoint(at+4*self.p, value['first'])
            self.endpoint(at+4*self.p+self.t[4], value['second'])
            for index,word in enumerate(value['stamp']):
                self.word(at+4*self.p+2*self.t[4]+4*index, word)
