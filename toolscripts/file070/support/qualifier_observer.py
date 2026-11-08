import service_observer


class Machine(service_observer.Machine):
    def code(self, cpu, address, size, user):
        super().code(cpu, address, size, user)
        if self.active and address in [0x10c514, 0x10c538]:
            ar = service_observer.pool_observer.device_destructor_reference.destructor_reference.ar
            pointer = cpu.reg_read(ar.UC_ARM_REG_R0)
            records = [row for row in self.allocations() if row['pointer'] == pointer]
            if len(records) != 1 or not records[0]['record'][5]:
                raise ValueError('Actual teardown release lacks its live target allocation record')
            self.teardown_services[-1]['logicalBytes'] = records[0]['record'][0]
