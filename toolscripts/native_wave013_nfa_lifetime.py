class LifetimeObserver:
    def __init__(self, base, capacity=0xa40, stride=16):
        self.base = base
        self.capacity, self.stride = capacity, stride
        self.occupied = None
        self.quarantined = set()
        self.retired_slots = set()
        self.violations = []
        self.reinitialized_bytes = 0
        self.retired_bytes = 0

    def initialize(self, memory):
        self.occupied = bytearray(memory[0x1000:0x1000 + self.capacity])

    def write(self, address, size, value, pc):
        offset = address - self.base
        for index in range(size):
            current = offset + index
            if 0x1000 <= current < 0x1000 + self.capacity:
                slot = current - 0x1000
                new = value >> (8 * index) & 255
                if self.occupied[slot] and not new:
                    self.retired_slots.add(slot)
                    for at in range(0x8000 + slot*self.stride, 0x8000 + (slot+1)*self.stride):
                        self.quarantined.add(at)
                        self.retired_bytes += 1
                self.occupied[slot] = new
            elif current in self.quarantined and self.occupied[(current-0x8000)//self.stride]:
                self.quarantined.remove(current)
                self.reinitialized_bytes += 1

    def read(self, address, size, pc):
        offset = address - self.base
        invalid = []
        for index in range(size):
            current = offset + index
            slot = (current-0x8000)//self.stride
            read_while_free = slot in self.retired_slots and not self.occupied[slot]
            if current in self.quarantined or read_while_free:
                invalid.append(current)
        if invalid:
            self.violations.append({'pc': pc, 'address': address, 'bytes': size,
                                    'retiredOffsets': invalid})

    def summary(self):
        return {'retiredByteEvents': self.retired_bytes, 'reinitializedByteEvents': self.reinitialized_bytes,
                'stillQuarantinedBytes': len(self.quarantined), 'readBeforeReinitialization': self.violations,
                'noRetiredReadBeforeReinitialization': not self.violations}
